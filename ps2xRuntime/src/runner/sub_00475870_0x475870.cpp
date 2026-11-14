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

// Function: sub_00475870
// Address: 0x475870 - 0x476ae0
void sub_00475870_0x475870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00475870_0x475870");
#endif

    switch (ctx->pc) {
        case 0x475870u: goto label_475870;
        case 0x475874u: goto label_475874;
        case 0x475878u: goto label_475878;
        case 0x47587cu: goto label_47587c;
        case 0x475880u: goto label_475880;
        case 0x475884u: goto label_475884;
        case 0x475888u: goto label_475888;
        case 0x47588cu: goto label_47588c;
        case 0x475890u: goto label_475890;
        case 0x475894u: goto label_475894;
        case 0x475898u: goto label_475898;
        case 0x47589cu: goto label_47589c;
        case 0x4758a0u: goto label_4758a0;
        case 0x4758a4u: goto label_4758a4;
        case 0x4758a8u: goto label_4758a8;
        case 0x4758acu: goto label_4758ac;
        case 0x4758b0u: goto label_4758b0;
        case 0x4758b4u: goto label_4758b4;
        case 0x4758b8u: goto label_4758b8;
        case 0x4758bcu: goto label_4758bc;
        case 0x4758c0u: goto label_4758c0;
        case 0x4758c4u: goto label_4758c4;
        case 0x4758c8u: goto label_4758c8;
        case 0x4758ccu: goto label_4758cc;
        case 0x4758d0u: goto label_4758d0;
        case 0x4758d4u: goto label_4758d4;
        case 0x4758d8u: goto label_4758d8;
        case 0x4758dcu: goto label_4758dc;
        case 0x4758e0u: goto label_4758e0;
        case 0x4758e4u: goto label_4758e4;
        case 0x4758e8u: goto label_4758e8;
        case 0x4758ecu: goto label_4758ec;
        case 0x4758f0u: goto label_4758f0;
        case 0x4758f4u: goto label_4758f4;
        case 0x4758f8u: goto label_4758f8;
        case 0x4758fcu: goto label_4758fc;
        case 0x475900u: goto label_475900;
        case 0x475904u: goto label_475904;
        case 0x475908u: goto label_475908;
        case 0x47590cu: goto label_47590c;
        case 0x475910u: goto label_475910;
        case 0x475914u: goto label_475914;
        case 0x475918u: goto label_475918;
        case 0x47591cu: goto label_47591c;
        case 0x475920u: goto label_475920;
        case 0x475924u: goto label_475924;
        case 0x475928u: goto label_475928;
        case 0x47592cu: goto label_47592c;
        case 0x475930u: goto label_475930;
        case 0x475934u: goto label_475934;
        case 0x475938u: goto label_475938;
        case 0x47593cu: goto label_47593c;
        case 0x475940u: goto label_475940;
        case 0x475944u: goto label_475944;
        case 0x475948u: goto label_475948;
        case 0x47594cu: goto label_47594c;
        case 0x475950u: goto label_475950;
        case 0x475954u: goto label_475954;
        case 0x475958u: goto label_475958;
        case 0x47595cu: goto label_47595c;
        case 0x475960u: goto label_475960;
        case 0x475964u: goto label_475964;
        case 0x475968u: goto label_475968;
        case 0x47596cu: goto label_47596c;
        case 0x475970u: goto label_475970;
        case 0x475974u: goto label_475974;
        case 0x475978u: goto label_475978;
        case 0x47597cu: goto label_47597c;
        case 0x475980u: goto label_475980;
        case 0x475984u: goto label_475984;
        case 0x475988u: goto label_475988;
        case 0x47598cu: goto label_47598c;
        case 0x475990u: goto label_475990;
        case 0x475994u: goto label_475994;
        case 0x475998u: goto label_475998;
        case 0x47599cu: goto label_47599c;
        case 0x4759a0u: goto label_4759a0;
        case 0x4759a4u: goto label_4759a4;
        case 0x4759a8u: goto label_4759a8;
        case 0x4759acu: goto label_4759ac;
        case 0x4759b0u: goto label_4759b0;
        case 0x4759b4u: goto label_4759b4;
        case 0x4759b8u: goto label_4759b8;
        case 0x4759bcu: goto label_4759bc;
        case 0x4759c0u: goto label_4759c0;
        case 0x4759c4u: goto label_4759c4;
        case 0x4759c8u: goto label_4759c8;
        case 0x4759ccu: goto label_4759cc;
        case 0x4759d0u: goto label_4759d0;
        case 0x4759d4u: goto label_4759d4;
        case 0x4759d8u: goto label_4759d8;
        case 0x4759dcu: goto label_4759dc;
        case 0x4759e0u: goto label_4759e0;
        case 0x4759e4u: goto label_4759e4;
        case 0x4759e8u: goto label_4759e8;
        case 0x4759ecu: goto label_4759ec;
        case 0x4759f0u: goto label_4759f0;
        case 0x4759f4u: goto label_4759f4;
        case 0x4759f8u: goto label_4759f8;
        case 0x4759fcu: goto label_4759fc;
        case 0x475a00u: goto label_475a00;
        case 0x475a04u: goto label_475a04;
        case 0x475a08u: goto label_475a08;
        case 0x475a0cu: goto label_475a0c;
        case 0x475a10u: goto label_475a10;
        case 0x475a14u: goto label_475a14;
        case 0x475a18u: goto label_475a18;
        case 0x475a1cu: goto label_475a1c;
        case 0x475a20u: goto label_475a20;
        case 0x475a24u: goto label_475a24;
        case 0x475a28u: goto label_475a28;
        case 0x475a2cu: goto label_475a2c;
        case 0x475a30u: goto label_475a30;
        case 0x475a34u: goto label_475a34;
        case 0x475a38u: goto label_475a38;
        case 0x475a3cu: goto label_475a3c;
        case 0x475a40u: goto label_475a40;
        case 0x475a44u: goto label_475a44;
        case 0x475a48u: goto label_475a48;
        case 0x475a4cu: goto label_475a4c;
        case 0x475a50u: goto label_475a50;
        case 0x475a54u: goto label_475a54;
        case 0x475a58u: goto label_475a58;
        case 0x475a5cu: goto label_475a5c;
        case 0x475a60u: goto label_475a60;
        case 0x475a64u: goto label_475a64;
        case 0x475a68u: goto label_475a68;
        case 0x475a6cu: goto label_475a6c;
        case 0x475a70u: goto label_475a70;
        case 0x475a74u: goto label_475a74;
        case 0x475a78u: goto label_475a78;
        case 0x475a7cu: goto label_475a7c;
        case 0x475a80u: goto label_475a80;
        case 0x475a84u: goto label_475a84;
        case 0x475a88u: goto label_475a88;
        case 0x475a8cu: goto label_475a8c;
        case 0x475a90u: goto label_475a90;
        case 0x475a94u: goto label_475a94;
        case 0x475a98u: goto label_475a98;
        case 0x475a9cu: goto label_475a9c;
        case 0x475aa0u: goto label_475aa0;
        case 0x475aa4u: goto label_475aa4;
        case 0x475aa8u: goto label_475aa8;
        case 0x475aacu: goto label_475aac;
        case 0x475ab0u: goto label_475ab0;
        case 0x475ab4u: goto label_475ab4;
        case 0x475ab8u: goto label_475ab8;
        case 0x475abcu: goto label_475abc;
        case 0x475ac0u: goto label_475ac0;
        case 0x475ac4u: goto label_475ac4;
        case 0x475ac8u: goto label_475ac8;
        case 0x475accu: goto label_475acc;
        case 0x475ad0u: goto label_475ad0;
        case 0x475ad4u: goto label_475ad4;
        case 0x475ad8u: goto label_475ad8;
        case 0x475adcu: goto label_475adc;
        case 0x475ae0u: goto label_475ae0;
        case 0x475ae4u: goto label_475ae4;
        case 0x475ae8u: goto label_475ae8;
        case 0x475aecu: goto label_475aec;
        case 0x475af0u: goto label_475af0;
        case 0x475af4u: goto label_475af4;
        case 0x475af8u: goto label_475af8;
        case 0x475afcu: goto label_475afc;
        case 0x475b00u: goto label_475b00;
        case 0x475b04u: goto label_475b04;
        case 0x475b08u: goto label_475b08;
        case 0x475b0cu: goto label_475b0c;
        case 0x475b10u: goto label_475b10;
        case 0x475b14u: goto label_475b14;
        case 0x475b18u: goto label_475b18;
        case 0x475b1cu: goto label_475b1c;
        case 0x475b20u: goto label_475b20;
        case 0x475b24u: goto label_475b24;
        case 0x475b28u: goto label_475b28;
        case 0x475b2cu: goto label_475b2c;
        case 0x475b30u: goto label_475b30;
        case 0x475b34u: goto label_475b34;
        case 0x475b38u: goto label_475b38;
        case 0x475b3cu: goto label_475b3c;
        case 0x475b40u: goto label_475b40;
        case 0x475b44u: goto label_475b44;
        case 0x475b48u: goto label_475b48;
        case 0x475b4cu: goto label_475b4c;
        case 0x475b50u: goto label_475b50;
        case 0x475b54u: goto label_475b54;
        case 0x475b58u: goto label_475b58;
        case 0x475b5cu: goto label_475b5c;
        case 0x475b60u: goto label_475b60;
        case 0x475b64u: goto label_475b64;
        case 0x475b68u: goto label_475b68;
        case 0x475b6cu: goto label_475b6c;
        case 0x475b70u: goto label_475b70;
        case 0x475b74u: goto label_475b74;
        case 0x475b78u: goto label_475b78;
        case 0x475b7cu: goto label_475b7c;
        case 0x475b80u: goto label_475b80;
        case 0x475b84u: goto label_475b84;
        case 0x475b88u: goto label_475b88;
        case 0x475b8cu: goto label_475b8c;
        case 0x475b90u: goto label_475b90;
        case 0x475b94u: goto label_475b94;
        case 0x475b98u: goto label_475b98;
        case 0x475b9cu: goto label_475b9c;
        case 0x475ba0u: goto label_475ba0;
        case 0x475ba4u: goto label_475ba4;
        case 0x475ba8u: goto label_475ba8;
        case 0x475bacu: goto label_475bac;
        case 0x475bb0u: goto label_475bb0;
        case 0x475bb4u: goto label_475bb4;
        case 0x475bb8u: goto label_475bb8;
        case 0x475bbcu: goto label_475bbc;
        case 0x475bc0u: goto label_475bc0;
        case 0x475bc4u: goto label_475bc4;
        case 0x475bc8u: goto label_475bc8;
        case 0x475bccu: goto label_475bcc;
        case 0x475bd0u: goto label_475bd0;
        case 0x475bd4u: goto label_475bd4;
        case 0x475bd8u: goto label_475bd8;
        case 0x475bdcu: goto label_475bdc;
        case 0x475be0u: goto label_475be0;
        case 0x475be4u: goto label_475be4;
        case 0x475be8u: goto label_475be8;
        case 0x475becu: goto label_475bec;
        case 0x475bf0u: goto label_475bf0;
        case 0x475bf4u: goto label_475bf4;
        case 0x475bf8u: goto label_475bf8;
        case 0x475bfcu: goto label_475bfc;
        case 0x475c00u: goto label_475c00;
        case 0x475c04u: goto label_475c04;
        case 0x475c08u: goto label_475c08;
        case 0x475c0cu: goto label_475c0c;
        case 0x475c10u: goto label_475c10;
        case 0x475c14u: goto label_475c14;
        case 0x475c18u: goto label_475c18;
        case 0x475c1cu: goto label_475c1c;
        case 0x475c20u: goto label_475c20;
        case 0x475c24u: goto label_475c24;
        case 0x475c28u: goto label_475c28;
        case 0x475c2cu: goto label_475c2c;
        case 0x475c30u: goto label_475c30;
        case 0x475c34u: goto label_475c34;
        case 0x475c38u: goto label_475c38;
        case 0x475c3cu: goto label_475c3c;
        case 0x475c40u: goto label_475c40;
        case 0x475c44u: goto label_475c44;
        case 0x475c48u: goto label_475c48;
        case 0x475c4cu: goto label_475c4c;
        case 0x475c50u: goto label_475c50;
        case 0x475c54u: goto label_475c54;
        case 0x475c58u: goto label_475c58;
        case 0x475c5cu: goto label_475c5c;
        case 0x475c60u: goto label_475c60;
        case 0x475c64u: goto label_475c64;
        case 0x475c68u: goto label_475c68;
        case 0x475c6cu: goto label_475c6c;
        case 0x475c70u: goto label_475c70;
        case 0x475c74u: goto label_475c74;
        case 0x475c78u: goto label_475c78;
        case 0x475c7cu: goto label_475c7c;
        case 0x475c80u: goto label_475c80;
        case 0x475c84u: goto label_475c84;
        case 0x475c88u: goto label_475c88;
        case 0x475c8cu: goto label_475c8c;
        case 0x475c90u: goto label_475c90;
        case 0x475c94u: goto label_475c94;
        case 0x475c98u: goto label_475c98;
        case 0x475c9cu: goto label_475c9c;
        case 0x475ca0u: goto label_475ca0;
        case 0x475ca4u: goto label_475ca4;
        case 0x475ca8u: goto label_475ca8;
        case 0x475cacu: goto label_475cac;
        case 0x475cb0u: goto label_475cb0;
        case 0x475cb4u: goto label_475cb4;
        case 0x475cb8u: goto label_475cb8;
        case 0x475cbcu: goto label_475cbc;
        case 0x475cc0u: goto label_475cc0;
        case 0x475cc4u: goto label_475cc4;
        case 0x475cc8u: goto label_475cc8;
        case 0x475cccu: goto label_475ccc;
        case 0x475cd0u: goto label_475cd0;
        case 0x475cd4u: goto label_475cd4;
        case 0x475cd8u: goto label_475cd8;
        case 0x475cdcu: goto label_475cdc;
        case 0x475ce0u: goto label_475ce0;
        case 0x475ce4u: goto label_475ce4;
        case 0x475ce8u: goto label_475ce8;
        case 0x475cecu: goto label_475cec;
        case 0x475cf0u: goto label_475cf0;
        case 0x475cf4u: goto label_475cf4;
        case 0x475cf8u: goto label_475cf8;
        case 0x475cfcu: goto label_475cfc;
        case 0x475d00u: goto label_475d00;
        case 0x475d04u: goto label_475d04;
        case 0x475d08u: goto label_475d08;
        case 0x475d0cu: goto label_475d0c;
        case 0x475d10u: goto label_475d10;
        case 0x475d14u: goto label_475d14;
        case 0x475d18u: goto label_475d18;
        case 0x475d1cu: goto label_475d1c;
        case 0x475d20u: goto label_475d20;
        case 0x475d24u: goto label_475d24;
        case 0x475d28u: goto label_475d28;
        case 0x475d2cu: goto label_475d2c;
        case 0x475d30u: goto label_475d30;
        case 0x475d34u: goto label_475d34;
        case 0x475d38u: goto label_475d38;
        case 0x475d3cu: goto label_475d3c;
        case 0x475d40u: goto label_475d40;
        case 0x475d44u: goto label_475d44;
        case 0x475d48u: goto label_475d48;
        case 0x475d4cu: goto label_475d4c;
        case 0x475d50u: goto label_475d50;
        case 0x475d54u: goto label_475d54;
        case 0x475d58u: goto label_475d58;
        case 0x475d5cu: goto label_475d5c;
        case 0x475d60u: goto label_475d60;
        case 0x475d64u: goto label_475d64;
        case 0x475d68u: goto label_475d68;
        case 0x475d6cu: goto label_475d6c;
        case 0x475d70u: goto label_475d70;
        case 0x475d74u: goto label_475d74;
        case 0x475d78u: goto label_475d78;
        case 0x475d7cu: goto label_475d7c;
        case 0x475d80u: goto label_475d80;
        case 0x475d84u: goto label_475d84;
        case 0x475d88u: goto label_475d88;
        case 0x475d8cu: goto label_475d8c;
        case 0x475d90u: goto label_475d90;
        case 0x475d94u: goto label_475d94;
        case 0x475d98u: goto label_475d98;
        case 0x475d9cu: goto label_475d9c;
        case 0x475da0u: goto label_475da0;
        case 0x475da4u: goto label_475da4;
        case 0x475da8u: goto label_475da8;
        case 0x475dacu: goto label_475dac;
        case 0x475db0u: goto label_475db0;
        case 0x475db4u: goto label_475db4;
        case 0x475db8u: goto label_475db8;
        case 0x475dbcu: goto label_475dbc;
        case 0x475dc0u: goto label_475dc0;
        case 0x475dc4u: goto label_475dc4;
        case 0x475dc8u: goto label_475dc8;
        case 0x475dccu: goto label_475dcc;
        case 0x475dd0u: goto label_475dd0;
        case 0x475dd4u: goto label_475dd4;
        case 0x475dd8u: goto label_475dd8;
        case 0x475ddcu: goto label_475ddc;
        case 0x475de0u: goto label_475de0;
        case 0x475de4u: goto label_475de4;
        case 0x475de8u: goto label_475de8;
        case 0x475decu: goto label_475dec;
        case 0x475df0u: goto label_475df0;
        case 0x475df4u: goto label_475df4;
        case 0x475df8u: goto label_475df8;
        case 0x475dfcu: goto label_475dfc;
        case 0x475e00u: goto label_475e00;
        case 0x475e04u: goto label_475e04;
        case 0x475e08u: goto label_475e08;
        case 0x475e0cu: goto label_475e0c;
        case 0x475e10u: goto label_475e10;
        case 0x475e14u: goto label_475e14;
        case 0x475e18u: goto label_475e18;
        case 0x475e1cu: goto label_475e1c;
        case 0x475e20u: goto label_475e20;
        case 0x475e24u: goto label_475e24;
        case 0x475e28u: goto label_475e28;
        case 0x475e2cu: goto label_475e2c;
        case 0x475e30u: goto label_475e30;
        case 0x475e34u: goto label_475e34;
        case 0x475e38u: goto label_475e38;
        case 0x475e3cu: goto label_475e3c;
        case 0x475e40u: goto label_475e40;
        case 0x475e44u: goto label_475e44;
        case 0x475e48u: goto label_475e48;
        case 0x475e4cu: goto label_475e4c;
        case 0x475e50u: goto label_475e50;
        case 0x475e54u: goto label_475e54;
        case 0x475e58u: goto label_475e58;
        case 0x475e5cu: goto label_475e5c;
        case 0x475e60u: goto label_475e60;
        case 0x475e64u: goto label_475e64;
        case 0x475e68u: goto label_475e68;
        case 0x475e6cu: goto label_475e6c;
        case 0x475e70u: goto label_475e70;
        case 0x475e74u: goto label_475e74;
        case 0x475e78u: goto label_475e78;
        case 0x475e7cu: goto label_475e7c;
        case 0x475e80u: goto label_475e80;
        case 0x475e84u: goto label_475e84;
        case 0x475e88u: goto label_475e88;
        case 0x475e8cu: goto label_475e8c;
        case 0x475e90u: goto label_475e90;
        case 0x475e94u: goto label_475e94;
        case 0x475e98u: goto label_475e98;
        case 0x475e9cu: goto label_475e9c;
        case 0x475ea0u: goto label_475ea0;
        case 0x475ea4u: goto label_475ea4;
        case 0x475ea8u: goto label_475ea8;
        case 0x475eacu: goto label_475eac;
        case 0x475eb0u: goto label_475eb0;
        case 0x475eb4u: goto label_475eb4;
        case 0x475eb8u: goto label_475eb8;
        case 0x475ebcu: goto label_475ebc;
        case 0x475ec0u: goto label_475ec0;
        case 0x475ec4u: goto label_475ec4;
        case 0x475ec8u: goto label_475ec8;
        case 0x475eccu: goto label_475ecc;
        case 0x475ed0u: goto label_475ed0;
        case 0x475ed4u: goto label_475ed4;
        case 0x475ed8u: goto label_475ed8;
        case 0x475edcu: goto label_475edc;
        case 0x475ee0u: goto label_475ee0;
        case 0x475ee4u: goto label_475ee4;
        case 0x475ee8u: goto label_475ee8;
        case 0x475eecu: goto label_475eec;
        case 0x475ef0u: goto label_475ef0;
        case 0x475ef4u: goto label_475ef4;
        case 0x475ef8u: goto label_475ef8;
        case 0x475efcu: goto label_475efc;
        case 0x475f00u: goto label_475f00;
        case 0x475f04u: goto label_475f04;
        case 0x475f08u: goto label_475f08;
        case 0x475f0cu: goto label_475f0c;
        case 0x475f10u: goto label_475f10;
        case 0x475f14u: goto label_475f14;
        case 0x475f18u: goto label_475f18;
        case 0x475f1cu: goto label_475f1c;
        case 0x475f20u: goto label_475f20;
        case 0x475f24u: goto label_475f24;
        case 0x475f28u: goto label_475f28;
        case 0x475f2cu: goto label_475f2c;
        case 0x475f30u: goto label_475f30;
        case 0x475f34u: goto label_475f34;
        case 0x475f38u: goto label_475f38;
        case 0x475f3cu: goto label_475f3c;
        case 0x475f40u: goto label_475f40;
        case 0x475f44u: goto label_475f44;
        case 0x475f48u: goto label_475f48;
        case 0x475f4cu: goto label_475f4c;
        case 0x475f50u: goto label_475f50;
        case 0x475f54u: goto label_475f54;
        case 0x475f58u: goto label_475f58;
        case 0x475f5cu: goto label_475f5c;
        case 0x475f60u: goto label_475f60;
        case 0x475f64u: goto label_475f64;
        case 0x475f68u: goto label_475f68;
        case 0x475f6cu: goto label_475f6c;
        case 0x475f70u: goto label_475f70;
        case 0x475f74u: goto label_475f74;
        case 0x475f78u: goto label_475f78;
        case 0x475f7cu: goto label_475f7c;
        case 0x475f80u: goto label_475f80;
        case 0x475f84u: goto label_475f84;
        case 0x475f88u: goto label_475f88;
        case 0x475f8cu: goto label_475f8c;
        case 0x475f90u: goto label_475f90;
        case 0x475f94u: goto label_475f94;
        case 0x475f98u: goto label_475f98;
        case 0x475f9cu: goto label_475f9c;
        case 0x475fa0u: goto label_475fa0;
        case 0x475fa4u: goto label_475fa4;
        case 0x475fa8u: goto label_475fa8;
        case 0x475facu: goto label_475fac;
        case 0x475fb0u: goto label_475fb0;
        case 0x475fb4u: goto label_475fb4;
        case 0x475fb8u: goto label_475fb8;
        case 0x475fbcu: goto label_475fbc;
        case 0x475fc0u: goto label_475fc0;
        case 0x475fc4u: goto label_475fc4;
        case 0x475fc8u: goto label_475fc8;
        case 0x475fccu: goto label_475fcc;
        case 0x475fd0u: goto label_475fd0;
        case 0x475fd4u: goto label_475fd4;
        case 0x475fd8u: goto label_475fd8;
        case 0x475fdcu: goto label_475fdc;
        case 0x475fe0u: goto label_475fe0;
        case 0x475fe4u: goto label_475fe4;
        case 0x475fe8u: goto label_475fe8;
        case 0x475fecu: goto label_475fec;
        case 0x475ff0u: goto label_475ff0;
        case 0x475ff4u: goto label_475ff4;
        case 0x475ff8u: goto label_475ff8;
        case 0x475ffcu: goto label_475ffc;
        case 0x476000u: goto label_476000;
        case 0x476004u: goto label_476004;
        case 0x476008u: goto label_476008;
        case 0x47600cu: goto label_47600c;
        case 0x476010u: goto label_476010;
        case 0x476014u: goto label_476014;
        case 0x476018u: goto label_476018;
        case 0x47601cu: goto label_47601c;
        case 0x476020u: goto label_476020;
        case 0x476024u: goto label_476024;
        case 0x476028u: goto label_476028;
        case 0x47602cu: goto label_47602c;
        case 0x476030u: goto label_476030;
        case 0x476034u: goto label_476034;
        case 0x476038u: goto label_476038;
        case 0x47603cu: goto label_47603c;
        case 0x476040u: goto label_476040;
        case 0x476044u: goto label_476044;
        case 0x476048u: goto label_476048;
        case 0x47604cu: goto label_47604c;
        case 0x476050u: goto label_476050;
        case 0x476054u: goto label_476054;
        case 0x476058u: goto label_476058;
        case 0x47605cu: goto label_47605c;
        case 0x476060u: goto label_476060;
        case 0x476064u: goto label_476064;
        case 0x476068u: goto label_476068;
        case 0x47606cu: goto label_47606c;
        case 0x476070u: goto label_476070;
        case 0x476074u: goto label_476074;
        case 0x476078u: goto label_476078;
        case 0x47607cu: goto label_47607c;
        case 0x476080u: goto label_476080;
        case 0x476084u: goto label_476084;
        case 0x476088u: goto label_476088;
        case 0x47608cu: goto label_47608c;
        case 0x476090u: goto label_476090;
        case 0x476094u: goto label_476094;
        case 0x476098u: goto label_476098;
        case 0x47609cu: goto label_47609c;
        case 0x4760a0u: goto label_4760a0;
        case 0x4760a4u: goto label_4760a4;
        case 0x4760a8u: goto label_4760a8;
        case 0x4760acu: goto label_4760ac;
        case 0x4760b0u: goto label_4760b0;
        case 0x4760b4u: goto label_4760b4;
        case 0x4760b8u: goto label_4760b8;
        case 0x4760bcu: goto label_4760bc;
        case 0x4760c0u: goto label_4760c0;
        case 0x4760c4u: goto label_4760c4;
        case 0x4760c8u: goto label_4760c8;
        case 0x4760ccu: goto label_4760cc;
        case 0x4760d0u: goto label_4760d0;
        case 0x4760d4u: goto label_4760d4;
        case 0x4760d8u: goto label_4760d8;
        case 0x4760dcu: goto label_4760dc;
        case 0x4760e0u: goto label_4760e0;
        case 0x4760e4u: goto label_4760e4;
        case 0x4760e8u: goto label_4760e8;
        case 0x4760ecu: goto label_4760ec;
        case 0x4760f0u: goto label_4760f0;
        case 0x4760f4u: goto label_4760f4;
        case 0x4760f8u: goto label_4760f8;
        case 0x4760fcu: goto label_4760fc;
        case 0x476100u: goto label_476100;
        case 0x476104u: goto label_476104;
        case 0x476108u: goto label_476108;
        case 0x47610cu: goto label_47610c;
        case 0x476110u: goto label_476110;
        case 0x476114u: goto label_476114;
        case 0x476118u: goto label_476118;
        case 0x47611cu: goto label_47611c;
        case 0x476120u: goto label_476120;
        case 0x476124u: goto label_476124;
        case 0x476128u: goto label_476128;
        case 0x47612cu: goto label_47612c;
        case 0x476130u: goto label_476130;
        case 0x476134u: goto label_476134;
        case 0x476138u: goto label_476138;
        case 0x47613cu: goto label_47613c;
        case 0x476140u: goto label_476140;
        case 0x476144u: goto label_476144;
        case 0x476148u: goto label_476148;
        case 0x47614cu: goto label_47614c;
        case 0x476150u: goto label_476150;
        case 0x476154u: goto label_476154;
        case 0x476158u: goto label_476158;
        case 0x47615cu: goto label_47615c;
        case 0x476160u: goto label_476160;
        case 0x476164u: goto label_476164;
        case 0x476168u: goto label_476168;
        case 0x47616cu: goto label_47616c;
        case 0x476170u: goto label_476170;
        case 0x476174u: goto label_476174;
        case 0x476178u: goto label_476178;
        case 0x47617cu: goto label_47617c;
        case 0x476180u: goto label_476180;
        case 0x476184u: goto label_476184;
        case 0x476188u: goto label_476188;
        case 0x47618cu: goto label_47618c;
        case 0x476190u: goto label_476190;
        case 0x476194u: goto label_476194;
        case 0x476198u: goto label_476198;
        case 0x47619cu: goto label_47619c;
        case 0x4761a0u: goto label_4761a0;
        case 0x4761a4u: goto label_4761a4;
        case 0x4761a8u: goto label_4761a8;
        case 0x4761acu: goto label_4761ac;
        case 0x4761b0u: goto label_4761b0;
        case 0x4761b4u: goto label_4761b4;
        case 0x4761b8u: goto label_4761b8;
        case 0x4761bcu: goto label_4761bc;
        case 0x4761c0u: goto label_4761c0;
        case 0x4761c4u: goto label_4761c4;
        case 0x4761c8u: goto label_4761c8;
        case 0x4761ccu: goto label_4761cc;
        case 0x4761d0u: goto label_4761d0;
        case 0x4761d4u: goto label_4761d4;
        case 0x4761d8u: goto label_4761d8;
        case 0x4761dcu: goto label_4761dc;
        case 0x4761e0u: goto label_4761e0;
        case 0x4761e4u: goto label_4761e4;
        case 0x4761e8u: goto label_4761e8;
        case 0x4761ecu: goto label_4761ec;
        case 0x4761f0u: goto label_4761f0;
        case 0x4761f4u: goto label_4761f4;
        case 0x4761f8u: goto label_4761f8;
        case 0x4761fcu: goto label_4761fc;
        case 0x476200u: goto label_476200;
        case 0x476204u: goto label_476204;
        case 0x476208u: goto label_476208;
        case 0x47620cu: goto label_47620c;
        case 0x476210u: goto label_476210;
        case 0x476214u: goto label_476214;
        case 0x476218u: goto label_476218;
        case 0x47621cu: goto label_47621c;
        case 0x476220u: goto label_476220;
        case 0x476224u: goto label_476224;
        case 0x476228u: goto label_476228;
        case 0x47622cu: goto label_47622c;
        case 0x476230u: goto label_476230;
        case 0x476234u: goto label_476234;
        case 0x476238u: goto label_476238;
        case 0x47623cu: goto label_47623c;
        case 0x476240u: goto label_476240;
        case 0x476244u: goto label_476244;
        case 0x476248u: goto label_476248;
        case 0x47624cu: goto label_47624c;
        case 0x476250u: goto label_476250;
        case 0x476254u: goto label_476254;
        case 0x476258u: goto label_476258;
        case 0x47625cu: goto label_47625c;
        case 0x476260u: goto label_476260;
        case 0x476264u: goto label_476264;
        case 0x476268u: goto label_476268;
        case 0x47626cu: goto label_47626c;
        case 0x476270u: goto label_476270;
        case 0x476274u: goto label_476274;
        case 0x476278u: goto label_476278;
        case 0x47627cu: goto label_47627c;
        case 0x476280u: goto label_476280;
        case 0x476284u: goto label_476284;
        case 0x476288u: goto label_476288;
        case 0x47628cu: goto label_47628c;
        case 0x476290u: goto label_476290;
        case 0x476294u: goto label_476294;
        case 0x476298u: goto label_476298;
        case 0x47629cu: goto label_47629c;
        case 0x4762a0u: goto label_4762a0;
        case 0x4762a4u: goto label_4762a4;
        case 0x4762a8u: goto label_4762a8;
        case 0x4762acu: goto label_4762ac;
        case 0x4762b0u: goto label_4762b0;
        case 0x4762b4u: goto label_4762b4;
        case 0x4762b8u: goto label_4762b8;
        case 0x4762bcu: goto label_4762bc;
        case 0x4762c0u: goto label_4762c0;
        case 0x4762c4u: goto label_4762c4;
        case 0x4762c8u: goto label_4762c8;
        case 0x4762ccu: goto label_4762cc;
        case 0x4762d0u: goto label_4762d0;
        case 0x4762d4u: goto label_4762d4;
        case 0x4762d8u: goto label_4762d8;
        case 0x4762dcu: goto label_4762dc;
        case 0x4762e0u: goto label_4762e0;
        case 0x4762e4u: goto label_4762e4;
        case 0x4762e8u: goto label_4762e8;
        case 0x4762ecu: goto label_4762ec;
        case 0x4762f0u: goto label_4762f0;
        case 0x4762f4u: goto label_4762f4;
        case 0x4762f8u: goto label_4762f8;
        case 0x4762fcu: goto label_4762fc;
        case 0x476300u: goto label_476300;
        case 0x476304u: goto label_476304;
        case 0x476308u: goto label_476308;
        case 0x47630cu: goto label_47630c;
        case 0x476310u: goto label_476310;
        case 0x476314u: goto label_476314;
        case 0x476318u: goto label_476318;
        case 0x47631cu: goto label_47631c;
        case 0x476320u: goto label_476320;
        case 0x476324u: goto label_476324;
        case 0x476328u: goto label_476328;
        case 0x47632cu: goto label_47632c;
        case 0x476330u: goto label_476330;
        case 0x476334u: goto label_476334;
        case 0x476338u: goto label_476338;
        case 0x47633cu: goto label_47633c;
        case 0x476340u: goto label_476340;
        case 0x476344u: goto label_476344;
        case 0x476348u: goto label_476348;
        case 0x47634cu: goto label_47634c;
        case 0x476350u: goto label_476350;
        case 0x476354u: goto label_476354;
        case 0x476358u: goto label_476358;
        case 0x47635cu: goto label_47635c;
        case 0x476360u: goto label_476360;
        case 0x476364u: goto label_476364;
        case 0x476368u: goto label_476368;
        case 0x47636cu: goto label_47636c;
        case 0x476370u: goto label_476370;
        case 0x476374u: goto label_476374;
        case 0x476378u: goto label_476378;
        case 0x47637cu: goto label_47637c;
        case 0x476380u: goto label_476380;
        case 0x476384u: goto label_476384;
        case 0x476388u: goto label_476388;
        case 0x47638cu: goto label_47638c;
        case 0x476390u: goto label_476390;
        case 0x476394u: goto label_476394;
        case 0x476398u: goto label_476398;
        case 0x47639cu: goto label_47639c;
        case 0x4763a0u: goto label_4763a0;
        case 0x4763a4u: goto label_4763a4;
        case 0x4763a8u: goto label_4763a8;
        case 0x4763acu: goto label_4763ac;
        case 0x4763b0u: goto label_4763b0;
        case 0x4763b4u: goto label_4763b4;
        case 0x4763b8u: goto label_4763b8;
        case 0x4763bcu: goto label_4763bc;
        case 0x4763c0u: goto label_4763c0;
        case 0x4763c4u: goto label_4763c4;
        case 0x4763c8u: goto label_4763c8;
        case 0x4763ccu: goto label_4763cc;
        case 0x4763d0u: goto label_4763d0;
        case 0x4763d4u: goto label_4763d4;
        case 0x4763d8u: goto label_4763d8;
        case 0x4763dcu: goto label_4763dc;
        case 0x4763e0u: goto label_4763e0;
        case 0x4763e4u: goto label_4763e4;
        case 0x4763e8u: goto label_4763e8;
        case 0x4763ecu: goto label_4763ec;
        case 0x4763f0u: goto label_4763f0;
        case 0x4763f4u: goto label_4763f4;
        case 0x4763f8u: goto label_4763f8;
        case 0x4763fcu: goto label_4763fc;
        case 0x476400u: goto label_476400;
        case 0x476404u: goto label_476404;
        case 0x476408u: goto label_476408;
        case 0x47640cu: goto label_47640c;
        case 0x476410u: goto label_476410;
        case 0x476414u: goto label_476414;
        case 0x476418u: goto label_476418;
        case 0x47641cu: goto label_47641c;
        case 0x476420u: goto label_476420;
        case 0x476424u: goto label_476424;
        case 0x476428u: goto label_476428;
        case 0x47642cu: goto label_47642c;
        case 0x476430u: goto label_476430;
        case 0x476434u: goto label_476434;
        case 0x476438u: goto label_476438;
        case 0x47643cu: goto label_47643c;
        case 0x476440u: goto label_476440;
        case 0x476444u: goto label_476444;
        case 0x476448u: goto label_476448;
        case 0x47644cu: goto label_47644c;
        case 0x476450u: goto label_476450;
        case 0x476454u: goto label_476454;
        case 0x476458u: goto label_476458;
        case 0x47645cu: goto label_47645c;
        case 0x476460u: goto label_476460;
        case 0x476464u: goto label_476464;
        case 0x476468u: goto label_476468;
        case 0x47646cu: goto label_47646c;
        case 0x476470u: goto label_476470;
        case 0x476474u: goto label_476474;
        case 0x476478u: goto label_476478;
        case 0x47647cu: goto label_47647c;
        case 0x476480u: goto label_476480;
        case 0x476484u: goto label_476484;
        case 0x476488u: goto label_476488;
        case 0x47648cu: goto label_47648c;
        case 0x476490u: goto label_476490;
        case 0x476494u: goto label_476494;
        case 0x476498u: goto label_476498;
        case 0x47649cu: goto label_47649c;
        case 0x4764a0u: goto label_4764a0;
        case 0x4764a4u: goto label_4764a4;
        case 0x4764a8u: goto label_4764a8;
        case 0x4764acu: goto label_4764ac;
        case 0x4764b0u: goto label_4764b0;
        case 0x4764b4u: goto label_4764b4;
        case 0x4764b8u: goto label_4764b8;
        case 0x4764bcu: goto label_4764bc;
        case 0x4764c0u: goto label_4764c0;
        case 0x4764c4u: goto label_4764c4;
        case 0x4764c8u: goto label_4764c8;
        case 0x4764ccu: goto label_4764cc;
        case 0x4764d0u: goto label_4764d0;
        case 0x4764d4u: goto label_4764d4;
        case 0x4764d8u: goto label_4764d8;
        case 0x4764dcu: goto label_4764dc;
        case 0x4764e0u: goto label_4764e0;
        case 0x4764e4u: goto label_4764e4;
        case 0x4764e8u: goto label_4764e8;
        case 0x4764ecu: goto label_4764ec;
        case 0x4764f0u: goto label_4764f0;
        case 0x4764f4u: goto label_4764f4;
        case 0x4764f8u: goto label_4764f8;
        case 0x4764fcu: goto label_4764fc;
        case 0x476500u: goto label_476500;
        case 0x476504u: goto label_476504;
        case 0x476508u: goto label_476508;
        case 0x47650cu: goto label_47650c;
        case 0x476510u: goto label_476510;
        case 0x476514u: goto label_476514;
        case 0x476518u: goto label_476518;
        case 0x47651cu: goto label_47651c;
        case 0x476520u: goto label_476520;
        case 0x476524u: goto label_476524;
        case 0x476528u: goto label_476528;
        case 0x47652cu: goto label_47652c;
        case 0x476530u: goto label_476530;
        case 0x476534u: goto label_476534;
        case 0x476538u: goto label_476538;
        case 0x47653cu: goto label_47653c;
        case 0x476540u: goto label_476540;
        case 0x476544u: goto label_476544;
        case 0x476548u: goto label_476548;
        case 0x47654cu: goto label_47654c;
        case 0x476550u: goto label_476550;
        case 0x476554u: goto label_476554;
        case 0x476558u: goto label_476558;
        case 0x47655cu: goto label_47655c;
        case 0x476560u: goto label_476560;
        case 0x476564u: goto label_476564;
        case 0x476568u: goto label_476568;
        case 0x47656cu: goto label_47656c;
        case 0x476570u: goto label_476570;
        case 0x476574u: goto label_476574;
        case 0x476578u: goto label_476578;
        case 0x47657cu: goto label_47657c;
        case 0x476580u: goto label_476580;
        case 0x476584u: goto label_476584;
        case 0x476588u: goto label_476588;
        case 0x47658cu: goto label_47658c;
        case 0x476590u: goto label_476590;
        case 0x476594u: goto label_476594;
        case 0x476598u: goto label_476598;
        case 0x47659cu: goto label_47659c;
        case 0x4765a0u: goto label_4765a0;
        case 0x4765a4u: goto label_4765a4;
        case 0x4765a8u: goto label_4765a8;
        case 0x4765acu: goto label_4765ac;
        case 0x4765b0u: goto label_4765b0;
        case 0x4765b4u: goto label_4765b4;
        case 0x4765b8u: goto label_4765b8;
        case 0x4765bcu: goto label_4765bc;
        case 0x4765c0u: goto label_4765c0;
        case 0x4765c4u: goto label_4765c4;
        case 0x4765c8u: goto label_4765c8;
        case 0x4765ccu: goto label_4765cc;
        case 0x4765d0u: goto label_4765d0;
        case 0x4765d4u: goto label_4765d4;
        case 0x4765d8u: goto label_4765d8;
        case 0x4765dcu: goto label_4765dc;
        case 0x4765e0u: goto label_4765e0;
        case 0x4765e4u: goto label_4765e4;
        case 0x4765e8u: goto label_4765e8;
        case 0x4765ecu: goto label_4765ec;
        case 0x4765f0u: goto label_4765f0;
        case 0x4765f4u: goto label_4765f4;
        case 0x4765f8u: goto label_4765f8;
        case 0x4765fcu: goto label_4765fc;
        case 0x476600u: goto label_476600;
        case 0x476604u: goto label_476604;
        case 0x476608u: goto label_476608;
        case 0x47660cu: goto label_47660c;
        case 0x476610u: goto label_476610;
        case 0x476614u: goto label_476614;
        case 0x476618u: goto label_476618;
        case 0x47661cu: goto label_47661c;
        case 0x476620u: goto label_476620;
        case 0x476624u: goto label_476624;
        case 0x476628u: goto label_476628;
        case 0x47662cu: goto label_47662c;
        case 0x476630u: goto label_476630;
        case 0x476634u: goto label_476634;
        case 0x476638u: goto label_476638;
        case 0x47663cu: goto label_47663c;
        case 0x476640u: goto label_476640;
        case 0x476644u: goto label_476644;
        case 0x476648u: goto label_476648;
        case 0x47664cu: goto label_47664c;
        case 0x476650u: goto label_476650;
        case 0x476654u: goto label_476654;
        case 0x476658u: goto label_476658;
        case 0x47665cu: goto label_47665c;
        case 0x476660u: goto label_476660;
        case 0x476664u: goto label_476664;
        case 0x476668u: goto label_476668;
        case 0x47666cu: goto label_47666c;
        case 0x476670u: goto label_476670;
        case 0x476674u: goto label_476674;
        case 0x476678u: goto label_476678;
        case 0x47667cu: goto label_47667c;
        case 0x476680u: goto label_476680;
        case 0x476684u: goto label_476684;
        case 0x476688u: goto label_476688;
        case 0x47668cu: goto label_47668c;
        case 0x476690u: goto label_476690;
        case 0x476694u: goto label_476694;
        case 0x476698u: goto label_476698;
        case 0x47669cu: goto label_47669c;
        case 0x4766a0u: goto label_4766a0;
        case 0x4766a4u: goto label_4766a4;
        case 0x4766a8u: goto label_4766a8;
        case 0x4766acu: goto label_4766ac;
        case 0x4766b0u: goto label_4766b0;
        case 0x4766b4u: goto label_4766b4;
        case 0x4766b8u: goto label_4766b8;
        case 0x4766bcu: goto label_4766bc;
        case 0x4766c0u: goto label_4766c0;
        case 0x4766c4u: goto label_4766c4;
        case 0x4766c8u: goto label_4766c8;
        case 0x4766ccu: goto label_4766cc;
        case 0x4766d0u: goto label_4766d0;
        case 0x4766d4u: goto label_4766d4;
        case 0x4766d8u: goto label_4766d8;
        case 0x4766dcu: goto label_4766dc;
        case 0x4766e0u: goto label_4766e0;
        case 0x4766e4u: goto label_4766e4;
        case 0x4766e8u: goto label_4766e8;
        case 0x4766ecu: goto label_4766ec;
        case 0x4766f0u: goto label_4766f0;
        case 0x4766f4u: goto label_4766f4;
        case 0x4766f8u: goto label_4766f8;
        case 0x4766fcu: goto label_4766fc;
        case 0x476700u: goto label_476700;
        case 0x476704u: goto label_476704;
        case 0x476708u: goto label_476708;
        case 0x47670cu: goto label_47670c;
        case 0x476710u: goto label_476710;
        case 0x476714u: goto label_476714;
        case 0x476718u: goto label_476718;
        case 0x47671cu: goto label_47671c;
        case 0x476720u: goto label_476720;
        case 0x476724u: goto label_476724;
        case 0x476728u: goto label_476728;
        case 0x47672cu: goto label_47672c;
        case 0x476730u: goto label_476730;
        case 0x476734u: goto label_476734;
        case 0x476738u: goto label_476738;
        case 0x47673cu: goto label_47673c;
        case 0x476740u: goto label_476740;
        case 0x476744u: goto label_476744;
        case 0x476748u: goto label_476748;
        case 0x47674cu: goto label_47674c;
        case 0x476750u: goto label_476750;
        case 0x476754u: goto label_476754;
        case 0x476758u: goto label_476758;
        case 0x47675cu: goto label_47675c;
        case 0x476760u: goto label_476760;
        case 0x476764u: goto label_476764;
        case 0x476768u: goto label_476768;
        case 0x47676cu: goto label_47676c;
        case 0x476770u: goto label_476770;
        case 0x476774u: goto label_476774;
        case 0x476778u: goto label_476778;
        case 0x47677cu: goto label_47677c;
        case 0x476780u: goto label_476780;
        case 0x476784u: goto label_476784;
        case 0x476788u: goto label_476788;
        case 0x47678cu: goto label_47678c;
        case 0x476790u: goto label_476790;
        case 0x476794u: goto label_476794;
        case 0x476798u: goto label_476798;
        case 0x47679cu: goto label_47679c;
        case 0x4767a0u: goto label_4767a0;
        case 0x4767a4u: goto label_4767a4;
        case 0x4767a8u: goto label_4767a8;
        case 0x4767acu: goto label_4767ac;
        case 0x4767b0u: goto label_4767b0;
        case 0x4767b4u: goto label_4767b4;
        case 0x4767b8u: goto label_4767b8;
        case 0x4767bcu: goto label_4767bc;
        case 0x4767c0u: goto label_4767c0;
        case 0x4767c4u: goto label_4767c4;
        case 0x4767c8u: goto label_4767c8;
        case 0x4767ccu: goto label_4767cc;
        case 0x4767d0u: goto label_4767d0;
        case 0x4767d4u: goto label_4767d4;
        case 0x4767d8u: goto label_4767d8;
        case 0x4767dcu: goto label_4767dc;
        case 0x4767e0u: goto label_4767e0;
        case 0x4767e4u: goto label_4767e4;
        case 0x4767e8u: goto label_4767e8;
        case 0x4767ecu: goto label_4767ec;
        case 0x4767f0u: goto label_4767f0;
        case 0x4767f4u: goto label_4767f4;
        case 0x4767f8u: goto label_4767f8;
        case 0x4767fcu: goto label_4767fc;
        case 0x476800u: goto label_476800;
        case 0x476804u: goto label_476804;
        case 0x476808u: goto label_476808;
        case 0x47680cu: goto label_47680c;
        case 0x476810u: goto label_476810;
        case 0x476814u: goto label_476814;
        case 0x476818u: goto label_476818;
        case 0x47681cu: goto label_47681c;
        case 0x476820u: goto label_476820;
        case 0x476824u: goto label_476824;
        case 0x476828u: goto label_476828;
        case 0x47682cu: goto label_47682c;
        case 0x476830u: goto label_476830;
        case 0x476834u: goto label_476834;
        case 0x476838u: goto label_476838;
        case 0x47683cu: goto label_47683c;
        case 0x476840u: goto label_476840;
        case 0x476844u: goto label_476844;
        case 0x476848u: goto label_476848;
        case 0x47684cu: goto label_47684c;
        case 0x476850u: goto label_476850;
        case 0x476854u: goto label_476854;
        case 0x476858u: goto label_476858;
        case 0x47685cu: goto label_47685c;
        case 0x476860u: goto label_476860;
        case 0x476864u: goto label_476864;
        case 0x476868u: goto label_476868;
        case 0x47686cu: goto label_47686c;
        case 0x476870u: goto label_476870;
        case 0x476874u: goto label_476874;
        case 0x476878u: goto label_476878;
        case 0x47687cu: goto label_47687c;
        case 0x476880u: goto label_476880;
        case 0x476884u: goto label_476884;
        case 0x476888u: goto label_476888;
        case 0x47688cu: goto label_47688c;
        case 0x476890u: goto label_476890;
        case 0x476894u: goto label_476894;
        case 0x476898u: goto label_476898;
        case 0x47689cu: goto label_47689c;
        case 0x4768a0u: goto label_4768a0;
        case 0x4768a4u: goto label_4768a4;
        case 0x4768a8u: goto label_4768a8;
        case 0x4768acu: goto label_4768ac;
        case 0x4768b0u: goto label_4768b0;
        case 0x4768b4u: goto label_4768b4;
        case 0x4768b8u: goto label_4768b8;
        case 0x4768bcu: goto label_4768bc;
        case 0x4768c0u: goto label_4768c0;
        case 0x4768c4u: goto label_4768c4;
        case 0x4768c8u: goto label_4768c8;
        case 0x4768ccu: goto label_4768cc;
        case 0x4768d0u: goto label_4768d0;
        case 0x4768d4u: goto label_4768d4;
        case 0x4768d8u: goto label_4768d8;
        case 0x4768dcu: goto label_4768dc;
        case 0x4768e0u: goto label_4768e0;
        case 0x4768e4u: goto label_4768e4;
        case 0x4768e8u: goto label_4768e8;
        case 0x4768ecu: goto label_4768ec;
        case 0x4768f0u: goto label_4768f0;
        case 0x4768f4u: goto label_4768f4;
        case 0x4768f8u: goto label_4768f8;
        case 0x4768fcu: goto label_4768fc;
        case 0x476900u: goto label_476900;
        case 0x476904u: goto label_476904;
        case 0x476908u: goto label_476908;
        case 0x47690cu: goto label_47690c;
        case 0x476910u: goto label_476910;
        case 0x476914u: goto label_476914;
        case 0x476918u: goto label_476918;
        case 0x47691cu: goto label_47691c;
        case 0x476920u: goto label_476920;
        case 0x476924u: goto label_476924;
        case 0x476928u: goto label_476928;
        case 0x47692cu: goto label_47692c;
        case 0x476930u: goto label_476930;
        case 0x476934u: goto label_476934;
        case 0x476938u: goto label_476938;
        case 0x47693cu: goto label_47693c;
        case 0x476940u: goto label_476940;
        case 0x476944u: goto label_476944;
        case 0x476948u: goto label_476948;
        case 0x47694cu: goto label_47694c;
        case 0x476950u: goto label_476950;
        case 0x476954u: goto label_476954;
        case 0x476958u: goto label_476958;
        case 0x47695cu: goto label_47695c;
        case 0x476960u: goto label_476960;
        case 0x476964u: goto label_476964;
        case 0x476968u: goto label_476968;
        case 0x47696cu: goto label_47696c;
        case 0x476970u: goto label_476970;
        case 0x476974u: goto label_476974;
        case 0x476978u: goto label_476978;
        case 0x47697cu: goto label_47697c;
        case 0x476980u: goto label_476980;
        case 0x476984u: goto label_476984;
        case 0x476988u: goto label_476988;
        case 0x47698cu: goto label_47698c;
        case 0x476990u: goto label_476990;
        case 0x476994u: goto label_476994;
        case 0x476998u: goto label_476998;
        case 0x47699cu: goto label_47699c;
        case 0x4769a0u: goto label_4769a0;
        case 0x4769a4u: goto label_4769a4;
        case 0x4769a8u: goto label_4769a8;
        case 0x4769acu: goto label_4769ac;
        case 0x4769b0u: goto label_4769b0;
        case 0x4769b4u: goto label_4769b4;
        case 0x4769b8u: goto label_4769b8;
        case 0x4769bcu: goto label_4769bc;
        case 0x4769c0u: goto label_4769c0;
        case 0x4769c4u: goto label_4769c4;
        case 0x4769c8u: goto label_4769c8;
        case 0x4769ccu: goto label_4769cc;
        case 0x4769d0u: goto label_4769d0;
        case 0x4769d4u: goto label_4769d4;
        case 0x4769d8u: goto label_4769d8;
        case 0x4769dcu: goto label_4769dc;
        case 0x4769e0u: goto label_4769e0;
        case 0x4769e4u: goto label_4769e4;
        case 0x4769e8u: goto label_4769e8;
        case 0x4769ecu: goto label_4769ec;
        case 0x4769f0u: goto label_4769f0;
        case 0x4769f4u: goto label_4769f4;
        case 0x4769f8u: goto label_4769f8;
        case 0x4769fcu: goto label_4769fc;
        case 0x476a00u: goto label_476a00;
        case 0x476a04u: goto label_476a04;
        case 0x476a08u: goto label_476a08;
        case 0x476a0cu: goto label_476a0c;
        case 0x476a10u: goto label_476a10;
        case 0x476a14u: goto label_476a14;
        case 0x476a18u: goto label_476a18;
        case 0x476a1cu: goto label_476a1c;
        case 0x476a20u: goto label_476a20;
        case 0x476a24u: goto label_476a24;
        case 0x476a28u: goto label_476a28;
        case 0x476a2cu: goto label_476a2c;
        case 0x476a30u: goto label_476a30;
        case 0x476a34u: goto label_476a34;
        case 0x476a38u: goto label_476a38;
        case 0x476a3cu: goto label_476a3c;
        case 0x476a40u: goto label_476a40;
        case 0x476a44u: goto label_476a44;
        case 0x476a48u: goto label_476a48;
        case 0x476a4cu: goto label_476a4c;
        case 0x476a50u: goto label_476a50;
        case 0x476a54u: goto label_476a54;
        case 0x476a58u: goto label_476a58;
        case 0x476a5cu: goto label_476a5c;
        case 0x476a60u: goto label_476a60;
        case 0x476a64u: goto label_476a64;
        case 0x476a68u: goto label_476a68;
        case 0x476a6cu: goto label_476a6c;
        case 0x476a70u: goto label_476a70;
        case 0x476a74u: goto label_476a74;
        case 0x476a78u: goto label_476a78;
        case 0x476a7cu: goto label_476a7c;
        case 0x476a80u: goto label_476a80;
        case 0x476a84u: goto label_476a84;
        case 0x476a88u: goto label_476a88;
        case 0x476a8cu: goto label_476a8c;
        case 0x476a90u: goto label_476a90;
        case 0x476a94u: goto label_476a94;
        case 0x476a98u: goto label_476a98;
        case 0x476a9cu: goto label_476a9c;
        case 0x476aa0u: goto label_476aa0;
        case 0x476aa4u: goto label_476aa4;
        case 0x476aa8u: goto label_476aa8;
        case 0x476aacu: goto label_476aac;
        case 0x476ab0u: goto label_476ab0;
        case 0x476ab4u: goto label_476ab4;
        case 0x476ab8u: goto label_476ab8;
        case 0x476abcu: goto label_476abc;
        case 0x476ac0u: goto label_476ac0;
        case 0x476ac4u: goto label_476ac4;
        case 0x476ac8u: goto label_476ac8;
        case 0x476accu: goto label_476acc;
        case 0x476ad0u: goto label_476ad0;
        case 0x476ad4u: goto label_476ad4;
        case 0x476ad8u: goto label_476ad8;
        case 0x476adcu: goto label_476adc;
        default: break;
    }

    ctx->pc = 0x475870u;

label_475870:
    // 0x475870: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x475870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
label_475874:
    // 0x475874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x475874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_475878:
    // 0x475878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x475878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47587c:
    // 0x47587c: 0xafa40280  sw          $a0, 0x280($sp)
    ctx->pc = 0x47587cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 4));
label_475880:
    // 0x475880: 0xafa50290  sw          $a1, 0x290($sp)
    ctx->pc = 0x475880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 5));
label_475884:
    // 0x475884: 0xc11c1fc  jal         func_4707F0
label_475888:
    if (ctx->pc == 0x475888u) {
        ctx->pc = 0x47588Cu;
        goto label_47588c;
    }
    ctx->pc = 0x475884u;
    SET_GPR_U32(ctx, 31, 0x47588Cu);
    ctx->pc = 0x4707F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4707F0u, 0x475884u, 0x47588Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47588Cu;
label_47588c:
    // 0x47588c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_475890:
    if (ctx->pc == 0x475890u) {
        ctx->pc = 0x475894u;
        goto label_475894;
    }
    ctx->pc = 0x47588Cu;
    {
        const bool branch_taken_0x47588c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47588c) {
            ctx->pc = 0x47593Cu;
            goto label_47593c;
        }
    }
    ctx->pc = 0x475894u;
label_475894:
    // 0x475894: 0x8f82b45c  lw          $v0, -0x4BA4($gp)
    ctx->pc = 0x475894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947932)));
label_475898:
    // 0x475898: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_47589c:
    if (ctx->pc == 0x47589Cu) {
        ctx->pc = 0x4758A0u;
        goto label_4758a0;
    }
    ctx->pc = 0x475898u;
    {
        const bool branch_taken_0x475898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475898) {
            ctx->pc = 0x47593Cu;
            goto label_47593c;
        }
    }
    ctx->pc = 0x4758A0u;
label_4758a0:
    // 0x4758a0: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4758a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4758a4:
    // 0x4758a4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4758a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4758a8:
    // 0x4758a8: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x4758a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_4758ac:
    // 0x4758ac: 0xc115ee8  jal         func_457BA0
label_4758b0:
    if (ctx->pc == 0x4758B0u) {
        ctx->pc = 0x4758B4u;
        goto label_4758b4;
    }
    ctx->pc = 0x4758ACu;
    SET_GPR_U32(ctx, 31, 0x4758B4u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4758ACu, 0x4758B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4758B4u;
label_4758b4:
    // 0x4758b4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4758b8:
    if (ctx->pc == 0x4758B8u) {
        ctx->pc = 0x4758BCu;
        goto label_4758bc;
    }
    ctx->pc = 0x4758B4u;
    {
        const bool branch_taken_0x4758b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4758b4) {
            ctx->pc = 0x47593Cu;
            goto label_47593c;
        }
    }
    ctx->pc = 0x4758BCu;
label_4758bc:
    // 0x4758bc: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x4758bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_4758c0:
    // 0x4758c0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4758c4:
    if (ctx->pc == 0x4758C4u) {
        ctx->pc = 0x4758C8u;
        goto label_4758c8;
    }
    ctx->pc = 0x4758C0u;
    {
        const bool branch_taken_0x4758c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4758c0) {
            ctx->pc = 0x47593Cu;
            goto label_47593c;
        }
    }
    ctx->pc = 0x4758C8u;
label_4758c8:
    // 0x4758c8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x4758c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4758cc:
    // 0x4758cc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4758ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4758d0:
    // 0x4758d0: 0x8fa60274  lw          $a2, 0x274($sp)
    ctx->pc = 0x4758d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_4758d4:
    // 0x4758d4: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4758d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4758d8:
    // 0x4758d8: 0x24e70db0  addiu       $a3, $a3, 0xDB0
    ctx->pc = 0x4758d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3504));
label_4758dc:
    // 0x4758dc: 0x240800ba  addiu       $t0, $zero, 0xBA
    ctx->pc = 0x4758dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
label_4758e0:
    // 0x4758e0: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4758e0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4758e4:
    // 0x4758e4: 0x25290f10  addiu       $t1, $t1, 0xF10
    ctx->pc = 0x4758e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3856));
label_4758e8:
    // 0x4758e8: 0xc113940  jal         func_44E500
label_4758ec:
    if (ctx->pc == 0x4758ECu) {
        ctx->pc = 0x4758F0u;
        goto label_4758f0;
    }
    ctx->pc = 0x4758E8u;
    SET_GPR_U32(ctx, 31, 0x4758F0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4758E8u, 0x4758F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4758F0u;
label_4758f0:
    // 0x4758f0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x4758f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4758f4:
    // 0x4758f4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4758f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4758f8:
    // 0x4758f8: 0x24a50f30  addiu       $a1, $a1, 0xF30
    ctx->pc = 0x4758f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3888));
label_4758fc:
    // 0x4758fc: 0xc115c24  jal         func_457090
label_475900:
    if (ctx->pc == 0x475900u) {
        ctx->pc = 0x475904u;
        goto label_475904;
    }
    ctx->pc = 0x4758FCu;
    SET_GPR_U32(ctx, 31, 0x475904u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4758FCu, 0x475904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475904u;
label_475904:
    // 0x475904: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x475904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_475908:
    // 0x475908: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x475908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_47590c:
    // 0x47590c: 0x40f809  jalr        $v0
label_475910:
    if (ctx->pc == 0x475910u) {
        ctx->pc = 0x475914u;
        goto label_475914;
    }
    ctx->pc = 0x47590Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x475914u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47590Cu, 0x475914u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x475914u;
label_475914:
    // 0x475914: 0xaf82b45c  sw          $v0, -0x4BA4($gp)
    ctx->pc = 0x475914u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947932), GPR_U32(ctx, 2));
label_475918:
    // 0x475918: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x475918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_47591c:
    // 0x47591c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_475920:
    if (ctx->pc == 0x475920u) {
        ctx->pc = 0x475924u;
        goto label_475924;
    }
    ctx->pc = 0x47591Cu;
    {
        const bool branch_taken_0x47591c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47591c) {
            ctx->pc = 0x47592Cu;
            goto label_47592c;
        }
    }
    ctx->pc = 0x475924u;
label_475924:
    // 0x475924: 0xd  break       0
    ctx->pc = 0x475924u;
    runtime->handleBreak(rdram, ctx);
label_475928:
    // 0x475928: 0x0  nop
    ctx->pc = 0x475928u;
    // NOP
label_47592c:
    // 0x47592c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x47592cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_475930:
    // 0x475930: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x475930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_475934:
    // 0x475934: 0xc11392c  jal         func_44E4B0
label_475938:
    if (ctx->pc == 0x475938u) {
        ctx->pc = 0x47593Cu;
        goto label_47593c;
    }
    ctx->pc = 0x475934u;
    SET_GPR_U32(ctx, 31, 0x47593Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x475934u, 0x47593Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47593Cu;
label_47593c:
    // 0x47593c: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x47593cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_475940:
    // 0x475940: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x475940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_475944:
    // 0x475944: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x475944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_475948:
    // 0x475948: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x475948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_47594c:
    // 0x47594c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_475950:
    if (ctx->pc == 0x475950u) {
        ctx->pc = 0x475954u;
        goto label_475954;
    }
    ctx->pc = 0x47594Cu;
    {
        const bool branch_taken_0x47594c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47594c) {
            ctx->pc = 0x4759FCu;
            goto label_4759fc;
        }
    }
    ctx->pc = 0x475954u;
label_475954:
    // 0x475954: 0x8f82b460  lw          $v0, -0x4BA0($gp)
    ctx->pc = 0x475954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947936)));
label_475958:
    // 0x475958: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_47595c:
    if (ctx->pc == 0x47595Cu) {
        ctx->pc = 0x475960u;
        goto label_475960;
    }
    ctx->pc = 0x475958u;
    {
        const bool branch_taken_0x475958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475958) {
            ctx->pc = 0x4759FCu;
            goto label_4759fc;
        }
    }
    ctx->pc = 0x475960u;
label_475960:
    // 0x475960: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x475960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_475964:
    // 0x475964: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x475964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_475968:
    // 0x475968: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x475968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_47596c:
    // 0x47596c: 0xc115ee8  jal         func_457BA0
label_475970:
    if (ctx->pc == 0x475970u) {
        ctx->pc = 0x475974u;
        goto label_475974;
    }
    ctx->pc = 0x47596Cu;
    SET_GPR_U32(ctx, 31, 0x475974u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47596Cu, 0x475974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475974u;
label_475974:
    // 0x475974: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_475978:
    if (ctx->pc == 0x475978u) {
        ctx->pc = 0x47597Cu;
        goto label_47597c;
    }
    ctx->pc = 0x475974u;
    {
        const bool branch_taken_0x475974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475974) {
            ctx->pc = 0x4759FCu;
            goto label_4759fc;
        }
    }
    ctx->pc = 0x47597Cu;
label_47597c:
    // 0x47597c: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x47597cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_475980:
    // 0x475980: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_475984:
    if (ctx->pc == 0x475984u) {
        ctx->pc = 0x475988u;
        goto label_475988;
    }
    ctx->pc = 0x475980u;
    {
        const bool branch_taken_0x475980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475980) {
            ctx->pc = 0x4759FCu;
            goto label_4759fc;
        }
    }
    ctx->pc = 0x475988u;
label_475988:
    // 0x475988: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x475988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_47598c:
    // 0x47598c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47598cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_475990:
    // 0x475990: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x475990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_475994:
    // 0x475994: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x475994u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_475998:
    // 0x475998: 0x24e70db0  addiu       $a3, $a3, 0xDB0
    ctx->pc = 0x475998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3504));
label_47599c:
    // 0x47599c: 0x240800bb  addiu       $t0, $zero, 0xBB
    ctx->pc = 0x47599cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
label_4759a0:
    // 0x4759a0: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4759a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4759a4:
    // 0x4759a4: 0x25290e50  addiu       $t1, $t1, 0xE50
    ctx->pc = 0x4759a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3664));
label_4759a8:
    // 0x4759a8: 0xc113940  jal         func_44E500
label_4759ac:
    if (ctx->pc == 0x4759ACu) {
        ctx->pc = 0x4759B0u;
        goto label_4759b0;
    }
    ctx->pc = 0x4759A8u;
    SET_GPR_U32(ctx, 31, 0x4759B0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4759A8u, 0x4759B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4759B0u;
label_4759b0:
    // 0x4759b0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4759b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4759b4:
    // 0x4759b4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4759b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4759b8:
    // 0x4759b8: 0x24a50f90  addiu       $a1, $a1, 0xF90
    ctx->pc = 0x4759b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3984));
label_4759bc:
    // 0x4759bc: 0xc115c24  jal         func_457090
label_4759c0:
    if (ctx->pc == 0x4759C0u) {
        ctx->pc = 0x4759C4u;
        goto label_4759c4;
    }
    ctx->pc = 0x4759BCu;
    SET_GPR_U32(ctx, 31, 0x4759C4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4759BCu, 0x4759C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4759C4u;
label_4759c4:
    // 0x4759c4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4759c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4759c8:
    // 0x4759c8: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x4759c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_4759cc:
    // 0x4759cc: 0x40f809  jalr        $v0
label_4759d0:
    if (ctx->pc == 0x4759D0u) {
        ctx->pc = 0x4759D4u;
        goto label_4759d4;
    }
    ctx->pc = 0x4759CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4759D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4759CCu, 0x4759D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4759D4u;
label_4759d4:
    // 0x4759d4: 0xaf82b460  sw          $v0, -0x4BA0($gp)
    ctx->pc = 0x4759d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947936), GPR_U32(ctx, 2));
label_4759d8:
    // 0x4759d8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4759d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4759dc:
    // 0x4759dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4759e0:
    if (ctx->pc == 0x4759E0u) {
        ctx->pc = 0x4759E4u;
        goto label_4759e4;
    }
    ctx->pc = 0x4759DCu;
    {
        const bool branch_taken_0x4759dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4759dc) {
            ctx->pc = 0x4759ECu;
            goto label_4759ec;
        }
    }
    ctx->pc = 0x4759E4u;
label_4759e4:
    // 0x4759e4: 0xd  break       0
    ctx->pc = 0x4759e4u;
    runtime->handleBreak(rdram, ctx);
label_4759e8:
    // 0x4759e8: 0x0  nop
    ctx->pc = 0x4759e8u;
    // NOP
label_4759ec:
    // 0x4759ec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4759ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4759f0:
    // 0x4759f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4759f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4759f4:
    // 0x4759f4: 0xc11392c  jal         func_44E4B0
label_4759f8:
    if (ctx->pc == 0x4759F8u) {
        ctx->pc = 0x4759FCu;
        goto label_4759fc;
    }
    ctx->pc = 0x4759F4u;
    SET_GPR_U32(ctx, 31, 0x4759FCu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4759F4u, 0x4759FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4759FCu;
label_4759fc:
    // 0x4759fc: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x4759fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_475a00:
    // 0x475a00: 0xc04e240  jal         func_138900
label_475a04:
    if (ctx->pc == 0x475A04u) {
        ctx->pc = 0x475A08u;
        goto label_475a08;
    }
    ctx->pc = 0x475A00u;
    SET_GPR_U32(ctx, 31, 0x475A08u);
    ctx->pc = 0x138900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138900u, 0x475A00u, 0x475A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475A08u;
label_475a08:
    // 0x475a08: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x475a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_475a0c:
    // 0x475a0c: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x475a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_475a10:
    // 0x475a10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x475a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_475a14:
    // 0x475a14: 0xc0ecd7a  jal         func_3B35E8
label_475a18:
    if (ctx->pc == 0x475A18u) {
        ctx->pc = 0x475A1Cu;
        goto label_475a1c;
    }
    ctx->pc = 0x475A14u;
    SET_GPR_U32(ctx, 31, 0x475A1Cu);
    ctx->pc = 0x3B35E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B35E8u, 0x475A14u, 0x475A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475A1Cu;
label_475a1c:
    // 0x475a1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x475a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_475a20:
    // 0x475a20: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x475a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_475a24:
    // 0x475a24: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x475a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_475a28:
    // 0x475a28: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x475a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_475a2c:
    // 0x475a2c: 0x24650038  addiu       $a1, $v1, 0x38
    ctx->pc = 0x475a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
label_475a30:
    // 0x475a30: 0x2446003c  addiu       $a2, $v0, 0x3C
    ctx->pc = 0x475a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_475a34:
    // 0x475a34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x475a34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_475a38:
    // 0x475a38: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x475a38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_475a3c:
    // 0x475a3c: 0x320f809  jalr        $t9
label_475a40:
    if (ctx->pc == 0x475A40u) {
        ctx->pc = 0x475A44u;
        goto label_475a44;
    }
    ctx->pc = 0x475A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x475A44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x475A3Cu, 0x475A44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x475A44u;
label_475a44:
    // 0x475a44: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x475a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_475a48:
    // 0x475a48: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x475a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_475a4c:
    // 0x475a4c: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x475a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_475a50:
    // 0x475a50: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x475a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_475a54:
    // 0x475a54: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x475a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_475a58:
    // 0x475a58: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x475a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_475a5c:
    // 0x475a5c: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x475a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_475a60:
    // 0x475a60: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x475a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_475a64:
    // 0x475a64: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x475a64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_475a68:
    // 0x475a68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x475a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_475a6c:
    // 0x475a6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x475a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_475a70:
    // 0x475a70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x475a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_475a74:
    // 0x475a74: 0x27bd02a0  addiu       $sp, $sp, 0x2A0
    ctx->pc = 0x475a74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_475a78:
    // 0x475a78: 0x3e00008  jr          $ra
label_475a7c:
    if (ctx->pc == 0x475A7Cu) {
        ctx->pc = 0x475A80u;
        goto label_475a80;
    }
    ctx->pc = 0x475A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x475A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x475A80u;
label_475a80:
    // 0x475a80: 0x27bdf9b0  addiu       $sp, $sp, -0x650
    ctx->pc = 0x475a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965680));
label_475a84:
    // 0x475a84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x475a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_475a88:
    // 0x475a88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x475a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_475a8c:
    // 0x475a8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x475a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_475a90:
    // 0x475a90: 0xafa40620  sw          $a0, 0x620($sp)
    ctx->pc = 0x475a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1568), GPR_U32(ctx, 4));
label_475a94:
    // 0x475a94: 0xafa50630  sw          $a1, 0x630($sp)
    ctx->pc = 0x475a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1584), GPR_U32(ctx, 5));
label_475a98:
    // 0x475a98: 0xafa60640  sw          $a2, 0x640($sp)
    ctx->pc = 0x475a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1600), GPR_U32(ctx, 6));
label_475a9c:
    // 0x475a9c: 0xc11c1fc  jal         func_4707F0
label_475aa0:
    if (ctx->pc == 0x475AA0u) {
        ctx->pc = 0x475AA4u;
        goto label_475aa4;
    }
    ctx->pc = 0x475A9Cu;
    SET_GPR_U32(ctx, 31, 0x475AA4u);
    ctx->pc = 0x4707F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4707F0u, 0x475A9Cu, 0x475AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475AA4u;
label_475aa4:
    // 0x475aa4: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_475aa8:
    if (ctx->pc == 0x475AA8u) {
        ctx->pc = 0x475AACu;
        goto label_475aac;
    }
    ctx->pc = 0x475AA4u;
    {
        const bool branch_taken_0x475aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x475aa4) {
            ctx->pc = 0x475B54u;
            goto label_475b54;
        }
    }
    ctx->pc = 0x475AACu;
label_475aac:
    // 0x475aac: 0x8f82b464  lw          $v0, -0x4B9C($gp)
    ctx->pc = 0x475aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947940)));
label_475ab0:
    // 0x475ab0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_475ab4:
    if (ctx->pc == 0x475AB4u) {
        ctx->pc = 0x475AB8u;
        goto label_475ab8;
    }
    ctx->pc = 0x475AB0u;
    {
        const bool branch_taken_0x475ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475ab0) {
            ctx->pc = 0x475B54u;
            goto label_475b54;
        }
    }
    ctx->pc = 0x475AB8u;
label_475ab8:
    // 0x475ab8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x475ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_475abc:
    // 0x475abc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x475abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_475ac0:
    // 0x475ac0: 0x27a60610  addiu       $a2, $sp, 0x610
    ctx->pc = 0x475ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1552));
label_475ac4:
    // 0x475ac4: 0xc115ee8  jal         func_457BA0
label_475ac8:
    if (ctx->pc == 0x475AC8u) {
        ctx->pc = 0x475ACCu;
        goto label_475acc;
    }
    ctx->pc = 0x475AC4u;
    SET_GPR_U32(ctx, 31, 0x475ACCu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x475AC4u, 0x475ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475ACCu;
label_475acc:
    // 0x475acc: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_475ad0:
    if (ctx->pc == 0x475AD0u) {
        ctx->pc = 0x475AD4u;
        goto label_475ad4;
    }
    ctx->pc = 0x475ACCu;
    {
        const bool branch_taken_0x475acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475acc) {
            ctx->pc = 0x475B54u;
            goto label_475b54;
        }
    }
    ctx->pc = 0x475AD4u;
label_475ad4:
    // 0x475ad4: 0x8fa20618  lw          $v0, 0x618($sp)
    ctx->pc = 0x475ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1560)));
label_475ad8:
    // 0x475ad8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_475adc:
    if (ctx->pc == 0x475ADCu) {
        ctx->pc = 0x475AE0u;
        goto label_475ae0;
    }
    ctx->pc = 0x475AD8u;
    {
        const bool branch_taken_0x475ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475ad8) {
            ctx->pc = 0x475B54u;
            goto label_475b54;
        }
    }
    ctx->pc = 0x475AE0u;
label_475ae0:
    // 0x475ae0: 0x27a404b0  addiu       $a0, $sp, 0x4B0
    ctx->pc = 0x475ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_475ae4:
    // 0x475ae4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x475ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_475ae8:
    // 0x475ae8: 0x8fa60614  lw          $a2, 0x614($sp)
    ctx->pc = 0x475ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1556)));
label_475aec:
    // 0x475aec: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x475aecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_475af0:
    // 0x475af0: 0x24e70db0  addiu       $a3, $a3, 0xDB0
    ctx->pc = 0x475af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3504));
label_475af4:
    // 0x475af4: 0x240800f8  addiu       $t0, $zero, 0xF8
    ctx->pc = 0x475af4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
label_475af8:
    // 0x475af8: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x475af8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_475afc:
    // 0x475afc: 0x25290f10  addiu       $t1, $t1, 0xF10
    ctx->pc = 0x475afcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3856));
label_475b00:
    // 0x475b00: 0xc113940  jal         func_44E500
label_475b04:
    if (ctx->pc == 0x475B04u) {
        ctx->pc = 0x475B08u;
        goto label_475b08;
    }
    ctx->pc = 0x475B00u;
    SET_GPR_U32(ctx, 31, 0x475B08u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x475B00u, 0x475B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475B08u;
label_475b08:
    // 0x475b08: 0x27a404b0  addiu       $a0, $sp, 0x4B0
    ctx->pc = 0x475b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_475b0c:
    // 0x475b0c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x475b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_475b10:
    // 0x475b10: 0x24a50ff0  addiu       $a1, $a1, 0xFF0
    ctx->pc = 0x475b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4080));
label_475b14:
    // 0x475b14: 0xc115c24  jal         func_457090
label_475b18:
    if (ctx->pc == 0x475B18u) {
        ctx->pc = 0x475B1Cu;
        goto label_475b1c;
    }
    ctx->pc = 0x475B14u;
    SET_GPR_U32(ctx, 31, 0x475B1Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x475B14u, 0x475B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475B1Cu;
label_475b1c:
    // 0x475b1c: 0x27a404b0  addiu       $a0, $sp, 0x4B0
    ctx->pc = 0x475b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_475b20:
    // 0x475b20: 0x8fa20618  lw          $v0, 0x618($sp)
    ctx->pc = 0x475b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1560)));
label_475b24:
    // 0x475b24: 0x40f809  jalr        $v0
label_475b28:
    if (ctx->pc == 0x475B28u) {
        ctx->pc = 0x475B2Cu;
        goto label_475b2c;
    }
    ctx->pc = 0x475B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x475B2Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x475B24u, 0x475B2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x475B2Cu;
label_475b2c:
    // 0x475b2c: 0xaf82b464  sw          $v0, -0x4B9C($gp)
    ctx->pc = 0x475b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947940), GPR_U32(ctx, 2));
label_475b30:
    // 0x475b30: 0x8fa204b0  lw          $v0, 0x4B0($sp)
    ctx->pc = 0x475b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
label_475b34:
    // 0x475b34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_475b38:
    if (ctx->pc == 0x475B38u) {
        ctx->pc = 0x475B3Cu;
        goto label_475b3c;
    }
    ctx->pc = 0x475B34u;
    {
        const bool branch_taken_0x475b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475b34) {
            ctx->pc = 0x475B44u;
            goto label_475b44;
        }
    }
    ctx->pc = 0x475B3Cu;
label_475b3c:
    // 0x475b3c: 0xd  break       0
    ctx->pc = 0x475b3cu;
    runtime->handleBreak(rdram, ctx);
label_475b40:
    // 0x475b40: 0x0  nop
    ctx->pc = 0x475b40u;
    // NOP
label_475b44:
    // 0x475b44: 0x27a404b0  addiu       $a0, $sp, 0x4B0
    ctx->pc = 0x475b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_475b48:
    // 0x475b48: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x475b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_475b4c:
    // 0x475b4c: 0xc11392c  jal         func_44E4B0
label_475b50:
    if (ctx->pc == 0x475B50u) {
        ctx->pc = 0x475B54u;
        goto label_475b54;
    }
    ctx->pc = 0x475B4Cu;
    SET_GPR_U32(ctx, 31, 0x475B54u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x475B4Cu, 0x475B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475B54u;
label_475b54:
    // 0x475b54: 0x8fa20620  lw          $v0, 0x620($sp)
    ctx->pc = 0x475b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
label_475b58:
    // 0x475b58: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x475b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_475b5c:
    // 0x475b5c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x475b5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_475b60:
    // 0x475b60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x475b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_475b64:
    // 0x475b64: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_475b68:
    if (ctx->pc == 0x475B68u) {
        ctx->pc = 0x475B6Cu;
        goto label_475b6c;
    }
    ctx->pc = 0x475B64u;
    {
        const bool branch_taken_0x475b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x475b64) {
            ctx->pc = 0x475C14u;
            goto label_475c14;
        }
    }
    ctx->pc = 0x475B6Cu;
label_475b6c:
    // 0x475b6c: 0x8f82b468  lw          $v0, -0x4B98($gp)
    ctx->pc = 0x475b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947944)));
label_475b70:
    // 0x475b70: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_475b74:
    if (ctx->pc == 0x475B74u) {
        ctx->pc = 0x475B78u;
        goto label_475b78;
    }
    ctx->pc = 0x475B70u;
    {
        const bool branch_taken_0x475b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475b70) {
            ctx->pc = 0x475C14u;
            goto label_475c14;
        }
    }
    ctx->pc = 0x475B78u;
label_475b78:
    // 0x475b78: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x475b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_475b7c:
    // 0x475b7c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x475b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_475b80:
    // 0x475b80: 0x27a60600  addiu       $a2, $sp, 0x600
    ctx->pc = 0x475b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
label_475b84:
    // 0x475b84: 0xc115ee8  jal         func_457BA0
label_475b88:
    if (ctx->pc == 0x475B88u) {
        ctx->pc = 0x475B8Cu;
        goto label_475b8c;
    }
    ctx->pc = 0x475B84u;
    SET_GPR_U32(ctx, 31, 0x475B8Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x475B84u, 0x475B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475B8Cu;
label_475b8c:
    // 0x475b8c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_475b90:
    if (ctx->pc == 0x475B90u) {
        ctx->pc = 0x475B94u;
        goto label_475b94;
    }
    ctx->pc = 0x475B8Cu;
    {
        const bool branch_taken_0x475b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475b8c) {
            ctx->pc = 0x475C14u;
            goto label_475c14;
        }
    }
    ctx->pc = 0x475B94u;
label_475b94:
    // 0x475b94: 0x8fa20608  lw          $v0, 0x608($sp)
    ctx->pc = 0x475b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1544)));
label_475b98:
    // 0x475b98: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_475b9c:
    if (ctx->pc == 0x475B9Cu) {
        ctx->pc = 0x475BA0u;
        goto label_475ba0;
    }
    ctx->pc = 0x475B98u;
    {
        const bool branch_taken_0x475b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475b98) {
            ctx->pc = 0x475C14u;
            goto label_475c14;
        }
    }
    ctx->pc = 0x475BA0u;
label_475ba0:
    // 0x475ba0: 0x27a40390  addiu       $a0, $sp, 0x390
    ctx->pc = 0x475ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_475ba4:
    // 0x475ba4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x475ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_475ba8:
    // 0x475ba8: 0x8fa60604  lw          $a2, 0x604($sp)
    ctx->pc = 0x475ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1540)));
label_475bac:
    // 0x475bac: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x475bacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_475bb0:
    // 0x475bb0: 0x24e70db0  addiu       $a3, $a3, 0xDB0
    ctx->pc = 0x475bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3504));
label_475bb4:
    // 0x475bb4: 0x240800f9  addiu       $t0, $zero, 0xF9
    ctx->pc = 0x475bb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
label_475bb8:
    // 0x475bb8: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x475bb8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_475bbc:
    // 0x475bbc: 0x25290e50  addiu       $t1, $t1, 0xE50
    ctx->pc = 0x475bbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3664));
label_475bc0:
    // 0x475bc0: 0xc113940  jal         func_44E500
label_475bc4:
    if (ctx->pc == 0x475BC4u) {
        ctx->pc = 0x475BC8u;
        goto label_475bc8;
    }
    ctx->pc = 0x475BC0u;
    SET_GPR_U32(ctx, 31, 0x475BC8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x475BC0u, 0x475BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475BC8u;
label_475bc8:
    // 0x475bc8: 0x27a40390  addiu       $a0, $sp, 0x390
    ctx->pc = 0x475bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_475bcc:
    // 0x475bcc: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x475bccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_475bd0:
    // 0x475bd0: 0x24a51060  addiu       $a1, $a1, 0x1060
    ctx->pc = 0x475bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4192));
label_475bd4:
    // 0x475bd4: 0xc115c24  jal         func_457090
label_475bd8:
    if (ctx->pc == 0x475BD8u) {
        ctx->pc = 0x475BDCu;
        goto label_475bdc;
    }
    ctx->pc = 0x475BD4u;
    SET_GPR_U32(ctx, 31, 0x475BDCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x475BD4u, 0x475BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475BDCu;
label_475bdc:
    // 0x475bdc: 0x27a40390  addiu       $a0, $sp, 0x390
    ctx->pc = 0x475bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_475be0:
    // 0x475be0: 0x8fa20608  lw          $v0, 0x608($sp)
    ctx->pc = 0x475be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1544)));
label_475be4:
    // 0x475be4: 0x40f809  jalr        $v0
label_475be8:
    if (ctx->pc == 0x475BE8u) {
        ctx->pc = 0x475BECu;
        goto label_475bec;
    }
    ctx->pc = 0x475BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x475BECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x475BE4u, 0x475BECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x475BECu;
label_475bec:
    // 0x475bec: 0xaf82b468  sw          $v0, -0x4B98($gp)
    ctx->pc = 0x475becu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947944), GPR_U32(ctx, 2));
label_475bf0:
    // 0x475bf0: 0x8fa20390  lw          $v0, 0x390($sp)
    ctx->pc = 0x475bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 912)));
label_475bf4:
    // 0x475bf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_475bf8:
    if (ctx->pc == 0x475BF8u) {
        ctx->pc = 0x475BFCu;
        goto label_475bfc;
    }
    ctx->pc = 0x475BF4u;
    {
        const bool branch_taken_0x475bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475bf4) {
            ctx->pc = 0x475C04u;
            goto label_475c04;
        }
    }
    ctx->pc = 0x475BFCu;
label_475bfc:
    // 0x475bfc: 0xd  break       0
    ctx->pc = 0x475bfcu;
    runtime->handleBreak(rdram, ctx);
label_475c00:
    // 0x475c00: 0x0  nop
    ctx->pc = 0x475c00u;
    // NOP
label_475c04:
    // 0x475c04: 0x27a40390  addiu       $a0, $sp, 0x390
    ctx->pc = 0x475c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_475c08:
    // 0x475c08: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x475c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_475c0c:
    // 0x475c0c: 0xc11392c  jal         func_44E4B0
label_475c10:
    if (ctx->pc == 0x475C10u) {
        ctx->pc = 0x475C14u;
        goto label_475c14;
    }
    ctx->pc = 0x475C0Cu;
    SET_GPR_U32(ctx, 31, 0x475C14u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x475C0Cu, 0x475C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475C14u;
label_475c14:
    // 0x475c14: 0x8fa20620  lw          $v0, 0x620($sp)
    ctx->pc = 0x475c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
label_475c18:
    // 0x475c18: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x475c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_475c1c:
    // 0x475c1c: 0xc0ecfa0  jal         func_3B3E80
label_475c20:
    if (ctx->pc == 0x475C20u) {
        ctx->pc = 0x475C24u;
        goto label_475c24;
    }
    ctx->pc = 0x475C1Cu;
    SET_GPR_U32(ctx, 31, 0x475C24u);
    ctx->pc = 0x3B3E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3E80u, 0x475C1Cu, 0x475C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475C24u;
label_475c24:
    // 0x475c24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x475c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_475c28:
    // 0x475c28: 0xc0eb428  jal         func_3AD0A0
label_475c2c:
    if (ctx->pc == 0x475C2Cu) {
        ctx->pc = 0x475C30u;
        goto label_475c30;
    }
    ctx->pc = 0x475C28u;
    SET_GPR_U32(ctx, 31, 0x475C30u);
    ctx->pc = 0x3AD0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD0A0u, 0x475C28u, 0x475C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475C30u;
label_475c30:
    // 0x475c30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x475c30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_475c34:
    // 0x475c34: 0x8fa20620  lw          $v0, 0x620($sp)
    ctx->pc = 0x475c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
label_475c38:
    // 0x475c38: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x475c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_475c3c:
    // 0x475c3c: 0xc0ecf9e  jal         func_3B3E78
label_475c40:
    if (ctx->pc == 0x475C40u) {
        ctx->pc = 0x475C44u;
        goto label_475c44;
    }
    ctx->pc = 0x475C3Cu;
    SET_GPR_U32(ctx, 31, 0x475C44u);
    ctx->pc = 0x3B3E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3E78u, 0x475C3Cu, 0x475C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475C44u;
label_475c44:
    // 0x475c44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x475c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_475c48:
    // 0x475c48: 0x8fa30630  lw          $v1, 0x630($sp)
    ctx->pc = 0x475c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1584)));
label_475c4c:
    // 0x475c4c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_475c50:
    if (ctx->pc == 0x475C50u) {
        ctx->pc = 0x475C54u;
        goto label_475c54;
    }
    ctx->pc = 0x475C4Cu;
    {
        const bool branch_taken_0x475c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x475c4c) {
            ctx->pc = 0x475C60u;
            goto label_475c60;
        }
    }
    ctx->pc = 0x475C54u;
label_475c54:
    // 0x475c54: 0x8fa30640  lw          $v1, 0x640($sp)
    ctx->pc = 0x475c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_475c58:
    // 0x475c58: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
label_475c5c:
    if (ctx->pc == 0x475C5Cu) {
        ctx->pc = 0x475C60u;
        goto label_475c60;
    }
    ctx->pc = 0x475C58u;
    {
        const bool branch_taken_0x475c58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x475c58) {
            ctx->pc = 0x475D0Cu;
            goto label_475d0c;
        }
    }
    ctx->pc = 0x475C60u;
label_475c60:
    // 0x475c60: 0x8f83b46c  lw          $v1, -0x4B94($gp)
    ctx->pc = 0x475c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947948)));
label_475c64:
    // 0x475c64: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_475c68:
    if (ctx->pc == 0x475C68u) {
        ctx->pc = 0x475C6Cu;
        goto label_475c6c;
    }
    ctx->pc = 0x475C64u;
    {
        const bool branch_taken_0x475c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x475c64) {
            ctx->pc = 0x475D04u;
            goto label_475d04;
        }
    }
    ctx->pc = 0x475C6Cu;
label_475c6c:
    // 0x475c6c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x475c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_475c70:
    // 0x475c70: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x475c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_475c74:
    // 0x475c74: 0x27a605f0  addiu       $a2, $sp, 0x5F0
    ctx->pc = 0x475c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1520));
label_475c78:
    // 0x475c78: 0xc115ee8  jal         func_457BA0
label_475c7c:
    if (ctx->pc == 0x475C7Cu) {
        ctx->pc = 0x475C80u;
        goto label_475c80;
    }
    ctx->pc = 0x475C78u;
    SET_GPR_U32(ctx, 31, 0x475C80u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x475C78u, 0x475C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475C80u;
label_475c80:
    // 0x475c80: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_475c84:
    if (ctx->pc == 0x475C84u) {
        ctx->pc = 0x475C88u;
        goto label_475c88;
    }
    ctx->pc = 0x475C80u;
    {
        const bool branch_taken_0x475c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475c80) {
            ctx->pc = 0x475D04u;
            goto label_475d04;
        }
    }
    ctx->pc = 0x475C88u;
label_475c88:
    // 0x475c88: 0x8fa305f8  lw          $v1, 0x5F8($sp)
    ctx->pc = 0x475c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1528)));
label_475c8c:
    // 0x475c8c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_475c90:
    if (ctx->pc == 0x475C90u) {
        ctx->pc = 0x475C94u;
        goto label_475c94;
    }
    ctx->pc = 0x475C8Cu;
    {
        const bool branch_taken_0x475c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x475c8c) {
            ctx->pc = 0x475D04u;
            goto label_475d04;
        }
    }
    ctx->pc = 0x475C94u;
label_475c94:
    // 0x475c94: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x475c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_475c98:
    // 0x475c98: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x475c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_475c9c:
    // 0x475c9c: 0x8fa605f4  lw          $a2, 0x5F4($sp)
    ctx->pc = 0x475c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1524)));
label_475ca0:
    // 0x475ca0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x475ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_475ca4:
    // 0x475ca4: 0x24e70db0  addiu       $a3, $a3, 0xDB0
    ctx->pc = 0x475ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3504));
label_475ca8:
    // 0x475ca8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x475ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_475cac:
    // 0x475cac: 0x2789b458  addiu       $t1, $gp, -0x4BA8
    ctx->pc = 0x475cacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947928));
label_475cb0:
    // 0x475cb0: 0xc113940  jal         func_44E500
label_475cb4:
    if (ctx->pc == 0x475CB4u) {
        ctx->pc = 0x475CB8u;
        goto label_475cb8;
    }
    ctx->pc = 0x475CB0u;
    SET_GPR_U32(ctx, 31, 0x475CB8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x475CB0u, 0x475CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475CB8u;
label_475cb8:
    // 0x475cb8: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x475cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_475cbc:
    // 0x475cbc: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x475cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_475cc0:
    // 0x475cc0: 0x24a510c0  addiu       $a1, $a1, 0x10C0
    ctx->pc = 0x475cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4288));
label_475cc4:
    // 0x475cc4: 0xc115c24  jal         func_457090
label_475cc8:
    if (ctx->pc == 0x475CC8u) {
        ctx->pc = 0x475CCCu;
        goto label_475ccc;
    }
    ctx->pc = 0x475CC4u;
    SET_GPR_U32(ctx, 31, 0x475CCCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x475CC4u, 0x475CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475CCCu;
label_475ccc:
    // 0x475ccc: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x475cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_475cd0:
    // 0x475cd0: 0x8fa205f8  lw          $v0, 0x5F8($sp)
    ctx->pc = 0x475cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1528)));
label_475cd4:
    // 0x475cd4: 0x40f809  jalr        $v0
label_475cd8:
    if (ctx->pc == 0x475CD8u) {
        ctx->pc = 0x475CDCu;
        goto label_475cdc;
    }
    ctx->pc = 0x475CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x475CDCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x475CD4u, 0x475CDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x475CDCu;
label_475cdc:
    // 0x475cdc: 0xaf82b46c  sw          $v0, -0x4B94($gp)
    ctx->pc = 0x475cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947948), GPR_U32(ctx, 2));
label_475ce0:
    // 0x475ce0: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x475ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_475ce4:
    // 0x475ce4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_475ce8:
    if (ctx->pc == 0x475CE8u) {
        ctx->pc = 0x475CECu;
        goto label_475cec;
    }
    ctx->pc = 0x475CE4u;
    {
        const bool branch_taken_0x475ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475ce4) {
            ctx->pc = 0x475CF4u;
            goto label_475cf4;
        }
    }
    ctx->pc = 0x475CECu;
label_475cec:
    // 0x475cec: 0xd  break       0
    ctx->pc = 0x475cecu;
    runtime->handleBreak(rdram, ctx);
label_475cf0:
    // 0x475cf0: 0x0  nop
    ctx->pc = 0x475cf0u;
    // NOP
label_475cf4:
    // 0x475cf4: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x475cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_475cf8:
    // 0x475cf8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x475cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_475cfc:
    // 0x475cfc: 0xc11392c  jal         func_44E4B0
label_475d00:
    if (ctx->pc == 0x475D00u) {
        ctx->pc = 0x475D04u;
        goto label_475d04;
    }
    ctx->pc = 0x475CFCu;
    SET_GPR_U32(ctx, 31, 0x475D04u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x475CFCu, 0x475D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475D04u;
label_475d04:
    // 0x475d04: 0x10000067  b           . + 4 + (0x67 << 2)
label_475d08:
    if (ctx->pc == 0x475D08u) {
        ctx->pc = 0x475D0Cu;
        goto label_475d0c;
    }
    ctx->pc = 0x475D04u;
    {
        const bool branch_taken_0x475d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x475d04) {
            ctx->pc = 0x475EA4u;
            goto label_475ea4;
        }
    }
    ctx->pc = 0x475D0Cu;
label_475d0c:
    // 0x475d0c: 0x1620002c  bnez        $s1, . + 4 + (0x2C << 2)
label_475d10:
    if (ctx->pc == 0x475D10u) {
        ctx->pc = 0x475D14u;
        goto label_475d14;
    }
    ctx->pc = 0x475D0Cu;
    {
        const bool branch_taken_0x475d0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x475d0c) {
            ctx->pc = 0x475DC0u;
            goto label_475dc0;
        }
    }
    ctx->pc = 0x475D14u;
label_475d14:
    // 0x475d14: 0x8f83b470  lw          $v1, -0x4B90($gp)
    ctx->pc = 0x475d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947952)));
label_475d18:
    // 0x475d18: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_475d1c:
    if (ctx->pc == 0x475D1Cu) {
        ctx->pc = 0x475D20u;
        goto label_475d20;
    }
    ctx->pc = 0x475D18u;
    {
        const bool branch_taken_0x475d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x475d18) {
            ctx->pc = 0x475DB8u;
            goto label_475db8;
        }
    }
    ctx->pc = 0x475D20u;
label_475d20:
    // 0x475d20: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x475d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_475d24:
    // 0x475d24: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x475d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_475d28:
    // 0x475d28: 0x27a605e0  addiu       $a2, $sp, 0x5E0
    ctx->pc = 0x475d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
label_475d2c:
    // 0x475d2c: 0xc115ee8  jal         func_457BA0
label_475d30:
    if (ctx->pc == 0x475D30u) {
        ctx->pc = 0x475D34u;
        goto label_475d34;
    }
    ctx->pc = 0x475D2Cu;
    SET_GPR_U32(ctx, 31, 0x475D34u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x475D2Cu, 0x475D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475D34u;
label_475d34:
    // 0x475d34: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_475d38:
    if (ctx->pc == 0x475D38u) {
        ctx->pc = 0x475D3Cu;
        goto label_475d3c;
    }
    ctx->pc = 0x475D34u;
    {
        const bool branch_taken_0x475d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475d34) {
            ctx->pc = 0x475DB8u;
            goto label_475db8;
        }
    }
    ctx->pc = 0x475D3Cu;
label_475d3c:
    // 0x475d3c: 0x8fa305e8  lw          $v1, 0x5E8($sp)
    ctx->pc = 0x475d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1512)));
label_475d40:
    // 0x475d40: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_475d44:
    if (ctx->pc == 0x475D44u) {
        ctx->pc = 0x475D48u;
        goto label_475d48;
    }
    ctx->pc = 0x475D40u;
    {
        const bool branch_taken_0x475d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x475d40) {
            ctx->pc = 0x475DB8u;
            goto label_475db8;
        }
    }
    ctx->pc = 0x475D48u;
label_475d48:
    // 0x475d48: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x475d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_475d4c:
    // 0x475d4c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x475d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_475d50:
    // 0x475d50: 0x8fa605e4  lw          $a2, 0x5E4($sp)
    ctx->pc = 0x475d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1508)));
label_475d54:
    // 0x475d54: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x475d54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_475d58:
    // 0x475d58: 0x24e70db0  addiu       $a3, $a3, 0xDB0
    ctx->pc = 0x475d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3504));
label_475d5c:
    // 0x475d5c: 0x24080105  addiu       $t0, $zero, 0x105
    ctx->pc = 0x475d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
label_475d60:
    // 0x475d60: 0x2789b458  addiu       $t1, $gp, -0x4BA8
    ctx->pc = 0x475d60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947928));
label_475d64:
    // 0x475d64: 0xc113940  jal         func_44E500
label_475d68:
    if (ctx->pc == 0x475D68u) {
        ctx->pc = 0x475D6Cu;
        goto label_475d6c;
    }
    ctx->pc = 0x475D64u;
    SET_GPR_U32(ctx, 31, 0x475D6Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x475D64u, 0x475D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475D6Cu;
label_475d6c:
    // 0x475d6c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x475d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_475d70:
    // 0x475d70: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x475d70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_475d74:
    // 0x475d74: 0x24a51110  addiu       $a1, $a1, 0x1110
    ctx->pc = 0x475d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4368));
label_475d78:
    // 0x475d78: 0xc115c24  jal         func_457090
label_475d7c:
    if (ctx->pc == 0x475D7Cu) {
        ctx->pc = 0x475D80u;
        goto label_475d80;
    }
    ctx->pc = 0x475D78u;
    SET_GPR_U32(ctx, 31, 0x475D80u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x475D78u, 0x475D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475D80u;
label_475d80:
    // 0x475d80: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x475d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_475d84:
    // 0x475d84: 0x8fa205e8  lw          $v0, 0x5E8($sp)
    ctx->pc = 0x475d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1512)));
label_475d88:
    // 0x475d88: 0x40f809  jalr        $v0
label_475d8c:
    if (ctx->pc == 0x475D8Cu) {
        ctx->pc = 0x475D90u;
        goto label_475d90;
    }
    ctx->pc = 0x475D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x475D90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x475D88u, 0x475D90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x475D90u;
label_475d90:
    // 0x475d90: 0xaf82b470  sw          $v0, -0x4B90($gp)
    ctx->pc = 0x475d90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947952), GPR_U32(ctx, 2));
label_475d94:
    // 0x475d94: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x475d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_475d98:
    // 0x475d98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_475d9c:
    if (ctx->pc == 0x475D9Cu) {
        ctx->pc = 0x475DA0u;
        goto label_475da0;
    }
    ctx->pc = 0x475D98u;
    {
        const bool branch_taken_0x475d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475d98) {
            ctx->pc = 0x475DA8u;
            goto label_475da8;
        }
    }
    ctx->pc = 0x475DA0u;
label_475da0:
    // 0x475da0: 0xd  break       0
    ctx->pc = 0x475da0u;
    runtime->handleBreak(rdram, ctx);
label_475da4:
    // 0x475da4: 0x0  nop
    ctx->pc = 0x475da4u;
    // NOP
label_475da8:
    // 0x475da8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x475da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_475dac:
    // 0x475dac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x475dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_475db0:
    // 0x475db0: 0xc11392c  jal         func_44E4B0
label_475db4:
    if (ctx->pc == 0x475DB4u) {
        ctx->pc = 0x475DB8u;
        goto label_475db8;
    }
    ctx->pc = 0x475DB0u;
    SET_GPR_U32(ctx, 31, 0x475DB8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x475DB0u, 0x475DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475DB8u;
label_475db8:
    // 0x475db8: 0x1000003a  b           . + 4 + (0x3A << 2)
label_475dbc:
    if (ctx->pc == 0x475DBCu) {
        ctx->pc = 0x475DC0u;
        goto label_475dc0;
    }
    ctx->pc = 0x475DB8u;
    {
        const bool branch_taken_0x475db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x475db8) {
            ctx->pc = 0x475EA4u;
            goto label_475ea4;
        }
    }
    ctx->pc = 0x475DC0u;
label_475dc0:
    // 0x475dc0: 0x1600002c  bnez        $s0, . + 4 + (0x2C << 2)
label_475dc4:
    if (ctx->pc == 0x475DC4u) {
        ctx->pc = 0x475DC8u;
        goto label_475dc8;
    }
    ctx->pc = 0x475DC0u;
    {
        const bool branch_taken_0x475dc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x475dc0) {
            ctx->pc = 0x475E74u;
            goto label_475e74;
        }
    }
    ctx->pc = 0x475DC8u;
label_475dc8:
    // 0x475dc8: 0x8f83b474  lw          $v1, -0x4B8C($gp)
    ctx->pc = 0x475dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947956)));
label_475dcc:
    // 0x475dcc: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_475dd0:
    if (ctx->pc == 0x475DD0u) {
        ctx->pc = 0x475DD4u;
        goto label_475dd4;
    }
    ctx->pc = 0x475DCCu;
    {
        const bool branch_taken_0x475dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x475dcc) {
            ctx->pc = 0x475E6Cu;
            goto label_475e6c;
        }
    }
    ctx->pc = 0x475DD4u;
label_475dd4:
    // 0x475dd4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x475dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_475dd8:
    // 0x475dd8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x475dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_475ddc:
    // 0x475ddc: 0x27a605d0  addiu       $a2, $sp, 0x5D0
    ctx->pc = 0x475ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
label_475de0:
    // 0x475de0: 0xc115ee8  jal         func_457BA0
label_475de4:
    if (ctx->pc == 0x475DE4u) {
        ctx->pc = 0x475DE8u;
        goto label_475de8;
    }
    ctx->pc = 0x475DE0u;
    SET_GPR_U32(ctx, 31, 0x475DE8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x475DE0u, 0x475DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475DE8u;
label_475de8:
    // 0x475de8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_475dec:
    if (ctx->pc == 0x475DECu) {
        ctx->pc = 0x475DF0u;
        goto label_475df0;
    }
    ctx->pc = 0x475DE8u;
    {
        const bool branch_taken_0x475de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475de8) {
            ctx->pc = 0x475E6Cu;
            goto label_475e6c;
        }
    }
    ctx->pc = 0x475DF0u;
label_475df0:
    // 0x475df0: 0x8fa305d8  lw          $v1, 0x5D8($sp)
    ctx->pc = 0x475df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1496)));
label_475df4:
    // 0x475df4: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_475df8:
    if (ctx->pc == 0x475DF8u) {
        ctx->pc = 0x475DFCu;
        goto label_475dfc;
    }
    ctx->pc = 0x475DF4u;
    {
        const bool branch_taken_0x475df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x475df4) {
            ctx->pc = 0x475E6Cu;
            goto label_475e6c;
        }
    }
    ctx->pc = 0x475DFCu;
label_475dfc:
    // 0x475dfc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x475dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_475e00:
    // 0x475e00: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x475e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_475e04:
    // 0x475e04: 0x8fa605d4  lw          $a2, 0x5D4($sp)
    ctx->pc = 0x475e04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1492)));
label_475e08:
    // 0x475e08: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x475e08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_475e0c:
    // 0x475e0c: 0x24e70db0  addiu       $a3, $a3, 0xDB0
    ctx->pc = 0x475e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3504));
label_475e10:
    // 0x475e10: 0x2408010a  addiu       $t0, $zero, 0x10A
    ctx->pc = 0x475e10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
label_475e14:
    // 0x475e14: 0x2789b458  addiu       $t1, $gp, -0x4BA8
    ctx->pc = 0x475e14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947928));
label_475e18:
    // 0x475e18: 0xc113940  jal         func_44E500
label_475e1c:
    if (ctx->pc == 0x475E1Cu) {
        ctx->pc = 0x475E20u;
        goto label_475e20;
    }
    ctx->pc = 0x475E18u;
    SET_GPR_U32(ctx, 31, 0x475E20u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x475E18u, 0x475E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475E20u;
label_475e20:
    // 0x475e20: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x475e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_475e24:
    // 0x475e24: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x475e24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_475e28:
    // 0x475e28: 0x24a51160  addiu       $a1, $a1, 0x1160
    ctx->pc = 0x475e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4448));
label_475e2c:
    // 0x475e2c: 0xc115c24  jal         func_457090
label_475e30:
    if (ctx->pc == 0x475E30u) {
        ctx->pc = 0x475E34u;
        goto label_475e34;
    }
    ctx->pc = 0x475E2Cu;
    SET_GPR_U32(ctx, 31, 0x475E34u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x475E2Cu, 0x475E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475E34u;
label_475e34:
    // 0x475e34: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x475e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_475e38:
    // 0x475e38: 0x8fa205d8  lw          $v0, 0x5D8($sp)
    ctx->pc = 0x475e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1496)));
label_475e3c:
    // 0x475e3c: 0x40f809  jalr        $v0
label_475e40:
    if (ctx->pc == 0x475E40u) {
        ctx->pc = 0x475E44u;
        goto label_475e44;
    }
    ctx->pc = 0x475E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x475E44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x475E3Cu, 0x475E44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x475E44u;
label_475e44:
    // 0x475e44: 0xaf82b474  sw          $v0, -0x4B8C($gp)
    ctx->pc = 0x475e44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947956), GPR_U32(ctx, 2));
label_475e48:
    // 0x475e48: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x475e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_475e4c:
    // 0x475e4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_475e50:
    if (ctx->pc == 0x475E50u) {
        ctx->pc = 0x475E54u;
        goto label_475e54;
    }
    ctx->pc = 0x475E4Cu;
    {
        const bool branch_taken_0x475e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475e4c) {
            ctx->pc = 0x475E5Cu;
            goto label_475e5c;
        }
    }
    ctx->pc = 0x475E54u;
label_475e54:
    // 0x475e54: 0xd  break       0
    ctx->pc = 0x475e54u;
    runtime->handleBreak(rdram, ctx);
label_475e58:
    // 0x475e58: 0x0  nop
    ctx->pc = 0x475e58u;
    // NOP
label_475e5c:
    // 0x475e5c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x475e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_475e60:
    // 0x475e60: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x475e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_475e64:
    // 0x475e64: 0xc11392c  jal         func_44E4B0
label_475e68:
    if (ctx->pc == 0x475E68u) {
        ctx->pc = 0x475E6Cu;
        goto label_475e6c;
    }
    ctx->pc = 0x475E64u;
    SET_GPR_U32(ctx, 31, 0x475E6Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x475E64u, 0x475E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475E6Cu;
label_475e6c:
    // 0x475e6c: 0x1000000d  b           . + 4 + (0xD << 2)
label_475e70:
    if (ctx->pc == 0x475E70u) {
        ctx->pc = 0x475E74u;
        goto label_475e74;
    }
    ctx->pc = 0x475E6Cu;
    {
        const bool branch_taken_0x475e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x475e6c) {
            ctx->pc = 0x475EA4u;
            goto label_475ea4;
        }
    }
    ctx->pc = 0x475E74u;
label_475e74:
    // 0x475e74: 0x8fa20620  lw          $v0, 0x620($sp)
    ctx->pc = 0x475e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
label_475e78:
    // 0x475e78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x475e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_475e7c:
    // 0x475e7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x475e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_475e80:
    // 0x475e80: 0xc44c0040  lwc1        $f12, 0x40($v0)
    ctx->pc = 0x475e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_475e84:
    // 0x475e84: 0xc0eb3c8  jal         func_3ACF20
label_475e88:
    if (ctx->pc == 0x475E88u) {
        ctx->pc = 0x475E8Cu;
        goto label_475e8c;
    }
    ctx->pc = 0x475E84u;
    SET_GPR_U32(ctx, 31, 0x475E8Cu);
    ctx->pc = 0x3ACF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACF20u, 0x475E84u, 0x475E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475E8Cu;
label_475e8c:
    // 0x475e8c: 0x8fa30630  lw          $v1, 0x630($sp)
    ctx->pc = 0x475e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1584)));
label_475e90:
    // 0x475e90: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x475e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_475e94:
    // 0x475e94: 0x8fa30620  lw          $v1, 0x620($sp)
    ctx->pc = 0x475e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
label_475e98:
    // 0x475e98: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x475e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_475e9c:
    // 0x475e9c: 0x8fa30640  lw          $v1, 0x640($sp)
    ctx->pc = 0x475e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_475ea0:
    // 0x475ea0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x475ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_475ea4:
    // 0x475ea4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x475ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_475ea8:
    // 0x475ea8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x475ea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_475eac:
    // 0x475eac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x475eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_475eb0:
    // 0x475eb0: 0x27bd0650  addiu       $sp, $sp, 0x650
    ctx->pc = 0x475eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1616));
label_475eb4:
    // 0x475eb4: 0x3e00008  jr          $ra
label_475eb8:
    if (ctx->pc == 0x475EB8u) {
        ctx->pc = 0x475EBCu;
        goto label_475ebc;
    }
    ctx->pc = 0x475EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x475EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x475EBCu;
label_475ebc:
    // 0x475ebc: 0x0  nop
    ctx->pc = 0x475ebcu;
    // NOP
label_475ec0:
    // 0x475ec0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x475ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_475ec4:
    // 0x475ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x475ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_475ec8:
    // 0x475ec8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x475ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_475ecc:
    // 0x475ecc: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x475eccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_475ed0:
    // 0x475ed0: 0xe7ad0030  swc1        $f13, 0x30($sp)
    ctx->pc = 0x475ed0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_475ed4:
    // 0x475ed4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x475ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_475ed8:
    // 0x475ed8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x475ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_475edc:
    // 0x475edc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x475edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_475ee0:
    // 0x475ee0: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x475ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_475ee4:
    // 0x475ee4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x475ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_475ee8:
    // 0x475ee8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x475ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_475eec:
    // 0x475eec: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x475eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
label_475ef0:
    // 0x475ef0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x475ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_475ef4:
    // 0x475ef4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_475ef8:
    if (ctx->pc == 0x475EF8u) {
        ctx->pc = 0x475EFCu;
        goto label_475efc;
    }
    ctx->pc = 0x475EF4u;
    {
        const bool branch_taken_0x475ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x475ef4) {
            ctx->pc = 0x475F10u;
            goto label_475f10;
        }
    }
    ctx->pc = 0x475EFCu;
label_475efc:
    // 0x475efc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x475efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_475f00:
    // 0x475f00: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x475f00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_475f04:
    // 0x475f04: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x475f04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_475f08:
    // 0x475f08: 0x320f809  jalr        $t9
label_475f0c:
    if (ctx->pc == 0x475F0Cu) {
        ctx->pc = 0x475F10u;
        goto label_475f10;
    }
    ctx->pc = 0x475F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x475F10u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x475F08u, 0x475F10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x475F10u;
label_475f10:
    // 0x475f10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x475f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_475f14:
    // 0x475f14: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x475f14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_475f18:
    // 0x475f18: 0x3e00008  jr          $ra
label_475f1c:
    if (ctx->pc == 0x475F1Cu) {
        ctx->pc = 0x475F20u;
        goto label_475f20;
    }
    ctx->pc = 0x475F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x475F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x475F20u;
label_475f20:
    // 0x475f20: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x475f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_475f24:
    // 0x475f24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x475f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_475f28:
    // 0x475f28: 0xafa40270  sw          $a0, 0x270($sp)
    ctx->pc = 0x475f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 4));
label_475f2c:
    // 0x475f2c: 0xc11c1fc  jal         func_4707F0
label_475f30:
    if (ctx->pc == 0x475F30u) {
        ctx->pc = 0x475F34u;
        goto label_475f34;
    }
    ctx->pc = 0x475F2Cu;
    SET_GPR_U32(ctx, 31, 0x475F34u);
    ctx->pc = 0x4707F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4707F0u, 0x475F2Cu, 0x475F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475F34u;
label_475f34:
    // 0x475f34: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_475f38:
    if (ctx->pc == 0x475F38u) {
        ctx->pc = 0x475F3Cu;
        goto label_475f3c;
    }
    ctx->pc = 0x475F34u;
    {
        const bool branch_taken_0x475f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x475f34) {
            ctx->pc = 0x475FE4u;
            goto label_475fe4;
        }
    }
    ctx->pc = 0x475F3Cu;
label_475f3c:
    // 0x475f3c: 0x8f82b478  lw          $v0, -0x4B88($gp)
    ctx->pc = 0x475f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947960)));
label_475f40:
    // 0x475f40: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_475f44:
    if (ctx->pc == 0x475F44u) {
        ctx->pc = 0x475F48u;
        goto label_475f48;
    }
    ctx->pc = 0x475F40u;
    {
        const bool branch_taken_0x475f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475f40) {
            ctx->pc = 0x475FE4u;
            goto label_475fe4;
        }
    }
    ctx->pc = 0x475F48u;
label_475f48:
    // 0x475f48: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x475f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_475f4c:
    // 0x475f4c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x475f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_475f50:
    // 0x475f50: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x475f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_475f54:
    // 0x475f54: 0xc115ee8  jal         func_457BA0
label_475f58:
    if (ctx->pc == 0x475F58u) {
        ctx->pc = 0x475F5Cu;
        goto label_475f5c;
    }
    ctx->pc = 0x475F54u;
    SET_GPR_U32(ctx, 31, 0x475F5Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x475F54u, 0x475F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475F5Cu;
label_475f5c:
    // 0x475f5c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_475f60:
    if (ctx->pc == 0x475F60u) {
        ctx->pc = 0x475F64u;
        goto label_475f64;
    }
    ctx->pc = 0x475F5Cu;
    {
        const bool branch_taken_0x475f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475f5c) {
            ctx->pc = 0x475FE4u;
            goto label_475fe4;
        }
    }
    ctx->pc = 0x475F64u;
label_475f64:
    // 0x475f64: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x475f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_475f68:
    // 0x475f68: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_475f6c:
    if (ctx->pc == 0x475F6Cu) {
        ctx->pc = 0x475F70u;
        goto label_475f70;
    }
    ctx->pc = 0x475F68u;
    {
        const bool branch_taken_0x475f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475f68) {
            ctx->pc = 0x475FE4u;
            goto label_475fe4;
        }
    }
    ctx->pc = 0x475F70u;
label_475f70:
    // 0x475f70: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x475f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_475f74:
    // 0x475f74: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x475f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_475f78:
    // 0x475f78: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x475f78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_475f7c:
    // 0x475f7c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x475f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_475f80:
    // 0x475f80: 0x24e70db0  addiu       $a3, $a3, 0xDB0
    ctx->pc = 0x475f80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3504));
label_475f84:
    // 0x475f84: 0x24080126  addiu       $t0, $zero, 0x126
    ctx->pc = 0x475f84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
label_475f88:
    // 0x475f88: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x475f88u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_475f8c:
    // 0x475f8c: 0x25290f10  addiu       $t1, $t1, 0xF10
    ctx->pc = 0x475f8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3856));
label_475f90:
    // 0x475f90: 0xc113940  jal         func_44E500
label_475f94:
    if (ctx->pc == 0x475F94u) {
        ctx->pc = 0x475F98u;
        goto label_475f98;
    }
    ctx->pc = 0x475F90u;
    SET_GPR_U32(ctx, 31, 0x475F98u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x475F90u, 0x475F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475F98u;
label_475f98:
    // 0x475f98: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x475f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_475f9c:
    // 0x475f9c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x475f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_475fa0:
    // 0x475fa0: 0x24a511c0  addiu       $a1, $a1, 0x11C0
    ctx->pc = 0x475fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4544));
label_475fa4:
    // 0x475fa4: 0xc115c24  jal         func_457090
label_475fa8:
    if (ctx->pc == 0x475FA8u) {
        ctx->pc = 0x475FACu;
        goto label_475fac;
    }
    ctx->pc = 0x475FA4u;
    SET_GPR_U32(ctx, 31, 0x475FACu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x475FA4u, 0x475FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475FACu;
label_475fac:
    // 0x475fac: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x475facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_475fb0:
    // 0x475fb0: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x475fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_475fb4:
    // 0x475fb4: 0x40f809  jalr        $v0
label_475fb8:
    if (ctx->pc == 0x475FB8u) {
        ctx->pc = 0x475FBCu;
        goto label_475fbc;
    }
    ctx->pc = 0x475FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x475FBCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x475FB4u, 0x475FBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x475FBCu;
label_475fbc:
    // 0x475fbc: 0xaf82b478  sw          $v0, -0x4B88($gp)
    ctx->pc = 0x475fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947960), GPR_U32(ctx, 2));
label_475fc0:
    // 0x475fc0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x475fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_475fc4:
    // 0x475fc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_475fc8:
    if (ctx->pc == 0x475FC8u) {
        ctx->pc = 0x475FCCu;
        goto label_475fcc;
    }
    ctx->pc = 0x475FC4u;
    {
        const bool branch_taken_0x475fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475fc4) {
            ctx->pc = 0x475FD4u;
            goto label_475fd4;
        }
    }
    ctx->pc = 0x475FCCu;
label_475fcc:
    // 0x475fcc: 0xd  break       0
    ctx->pc = 0x475fccu;
    runtime->handleBreak(rdram, ctx);
label_475fd0:
    // 0x475fd0: 0x0  nop
    ctx->pc = 0x475fd0u;
    // NOP
label_475fd4:
    // 0x475fd4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x475fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_475fd8:
    // 0x475fd8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x475fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_475fdc:
    // 0x475fdc: 0xc11392c  jal         func_44E4B0
label_475fe0:
    if (ctx->pc == 0x475FE0u) {
        ctx->pc = 0x475FE4u;
        goto label_475fe4;
    }
    ctx->pc = 0x475FDCu;
    SET_GPR_U32(ctx, 31, 0x475FE4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x475FDCu, 0x475FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475FE4u;
label_475fe4:
    // 0x475fe4: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x475fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_475fe8:
    // 0x475fe8: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x475fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_475fec:
    // 0x475fec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x475fecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_475ff0:
    // 0x475ff0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x475ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_475ff4:
    // 0x475ff4: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_475ff8:
    if (ctx->pc == 0x475FF8u) {
        ctx->pc = 0x475FFCu;
        goto label_475ffc;
    }
    ctx->pc = 0x475FF4u;
    {
        const bool branch_taken_0x475ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x475ff4) {
            ctx->pc = 0x4760A4u;
            goto label_4760a4;
        }
    }
    ctx->pc = 0x475FFCu;
label_475ffc:
    // 0x475ffc: 0x8f82b47c  lw          $v0, -0x4B84($gp)
    ctx->pc = 0x475ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947964)));
label_476000:
    // 0x476000: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_476004:
    if (ctx->pc == 0x476004u) {
        ctx->pc = 0x476008u;
        goto label_476008;
    }
    ctx->pc = 0x476000u;
    {
        const bool branch_taken_0x476000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x476000) {
            ctx->pc = 0x4760A4u;
            goto label_4760a4;
        }
    }
    ctx->pc = 0x476008u;
label_476008:
    // 0x476008: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x476008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47600c:
    // 0x47600c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47600cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_476010:
    // 0x476010: 0x27a60250  addiu       $a2, $sp, 0x250
    ctx->pc = 0x476010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_476014:
    // 0x476014: 0xc115ee8  jal         func_457BA0
label_476018:
    if (ctx->pc == 0x476018u) {
        ctx->pc = 0x47601Cu;
        goto label_47601c;
    }
    ctx->pc = 0x476014u;
    SET_GPR_U32(ctx, 31, 0x47601Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x476014u, 0x47601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47601Cu;
label_47601c:
    // 0x47601c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_476020:
    if (ctx->pc == 0x476020u) {
        ctx->pc = 0x476024u;
        goto label_476024;
    }
    ctx->pc = 0x47601Cu;
    {
        const bool branch_taken_0x47601c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47601c) {
            ctx->pc = 0x4760A4u;
            goto label_4760a4;
        }
    }
    ctx->pc = 0x476024u;
label_476024:
    // 0x476024: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x476024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_476028:
    // 0x476028: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_47602c:
    if (ctx->pc == 0x47602Cu) {
        ctx->pc = 0x476030u;
        goto label_476030;
    }
    ctx->pc = 0x476028u;
    {
        const bool branch_taken_0x476028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x476028) {
            ctx->pc = 0x4760A4u;
            goto label_4760a4;
        }
    }
    ctx->pc = 0x476030u;
label_476030:
    // 0x476030: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x476030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_476034:
    // 0x476034: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x476034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_476038:
    // 0x476038: 0x8fa60254  lw          $a2, 0x254($sp)
    ctx->pc = 0x476038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_47603c:
    // 0x47603c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47603cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_476040:
    // 0x476040: 0x24e70db0  addiu       $a3, $a3, 0xDB0
    ctx->pc = 0x476040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3504));
label_476044:
    // 0x476044: 0x24080127  addiu       $t0, $zero, 0x127
    ctx->pc = 0x476044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 295));
label_476048:
    // 0x476048: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x476048u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47604c:
    // 0x47604c: 0x25290e50  addiu       $t1, $t1, 0xE50
    ctx->pc = 0x47604cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3664));
label_476050:
    // 0x476050: 0xc113940  jal         func_44E500
label_476054:
    if (ctx->pc == 0x476054u) {
        ctx->pc = 0x476058u;
        goto label_476058;
    }
    ctx->pc = 0x476050u;
    SET_GPR_U32(ctx, 31, 0x476058u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x476050u, 0x476058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476058u;
label_476058:
    // 0x476058: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x476058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_47605c:
    // 0x47605c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x47605cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_476060:
    // 0x476060: 0x24a51220  addiu       $a1, $a1, 0x1220
    ctx->pc = 0x476060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4640));
label_476064:
    // 0x476064: 0xc115c24  jal         func_457090
label_476068:
    if (ctx->pc == 0x476068u) {
        ctx->pc = 0x47606Cu;
        goto label_47606c;
    }
    ctx->pc = 0x476064u;
    SET_GPR_U32(ctx, 31, 0x47606Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x476064u, 0x47606Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47606Cu;
label_47606c:
    // 0x47606c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x47606cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_476070:
    // 0x476070: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x476070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_476074:
    // 0x476074: 0x40f809  jalr        $v0
label_476078:
    if (ctx->pc == 0x476078u) {
        ctx->pc = 0x47607Cu;
        goto label_47607c;
    }
    ctx->pc = 0x476074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47607Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476074u, 0x47607Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47607Cu;
label_47607c:
    // 0x47607c: 0xaf82b47c  sw          $v0, -0x4B84($gp)
    ctx->pc = 0x47607cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947964), GPR_U32(ctx, 2));
label_476080:
    // 0x476080: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x476080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_476084:
    // 0x476084: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_476088:
    if (ctx->pc == 0x476088u) {
        ctx->pc = 0x47608Cu;
        goto label_47608c;
    }
    ctx->pc = 0x476084u;
    {
        const bool branch_taken_0x476084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x476084) {
            ctx->pc = 0x476094u;
            goto label_476094;
        }
    }
    ctx->pc = 0x47608Cu;
label_47608c:
    // 0x47608c: 0xd  break       0
    ctx->pc = 0x47608cu;
    runtime->handleBreak(rdram, ctx);
label_476090:
    // 0x476090: 0x0  nop
    ctx->pc = 0x476090u;
    // NOP
label_476094:
    // 0x476094: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x476094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_476098:
    // 0x476098: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x476098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47609c:
    // 0x47609c: 0xc11392c  jal         func_44E4B0
label_4760a0:
    if (ctx->pc == 0x4760A0u) {
        ctx->pc = 0x4760A4u;
        goto label_4760a4;
    }
    ctx->pc = 0x47609Cu;
    SET_GPR_U32(ctx, 31, 0x4760A4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47609Cu, 0x4760A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4760A4u;
label_4760a4:
    // 0x4760a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4760a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4760a8:
    // 0x4760a8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x4760a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4760ac:
    // 0x4760ac: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x4760acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_4760b0:
    // 0x4760b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4760b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4760b4:
    // 0x4760b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4760b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4760b8:
    // 0x4760b8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4760b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4760bc:
    // 0x4760bc: 0x320f809  jalr        $t9
label_4760c0:
    if (ctx->pc == 0x4760C0u) {
        ctx->pc = 0x4760C4u;
        goto label_4760c4;
    }
    ctx->pc = 0x4760BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4760C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4760BCu, 0x4760C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4760C4u;
label_4760c4:
    // 0x4760c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4760c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4760c8:
    // 0x4760c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4760c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4760cc:
    // 0x4760cc: 0x27bd0280  addiu       $sp, $sp, 0x280
    ctx->pc = 0x4760ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_4760d0:
    // 0x4760d0: 0x3e00008  jr          $ra
label_4760d4:
    if (ctx->pc == 0x4760D4u) {
        ctx->pc = 0x4760D8u;
        goto label_4760d8;
    }
    ctx->pc = 0x4760D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4760D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4760D8u;
label_4760d8:
    // 0x4760d8: 0x0  nop
    ctx->pc = 0x4760d8u;
    // NOP
label_4760dc:
    // 0x4760dc: 0x0  nop
    ctx->pc = 0x4760dcu;
    // NOP
label_4760e0:
    // 0x4760e0: 0x27bdfbf0  addiu       $sp, $sp, -0x410
    ctx->pc = 0x4760e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966256));
label_4760e4:
    // 0x4760e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4760e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4760e8:
    // 0x4760e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4760e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4760ec:
    // 0x4760ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4760ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4760f0:
    // 0x4760f0: 0xafa403d0  sw          $a0, 0x3D0($sp)
    ctx->pc = 0x4760f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 976), GPR_U32(ctx, 4));
label_4760f4:
    // 0x4760f4: 0xe7ac03e0  swc1        $f12, 0x3E0($sp)
    ctx->pc = 0x4760f4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 992), bits); }
label_4760f8:
    // 0x4760f8: 0xe7ad03f0  swc1        $f13, 0x3F0($sp)
    ctx->pc = 0x4760f8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1008), bits); }
label_4760fc:
    // 0x4760fc: 0xafa50400  sw          $a1, 0x400($sp)
    ctx->pc = 0x4760fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 5));
label_476100:
    // 0x476100: 0xc11c1fc  jal         func_4707F0
label_476104:
    if (ctx->pc == 0x476104u) {
        ctx->pc = 0x476108u;
        goto label_476108;
    }
    ctx->pc = 0x476100u;
    SET_GPR_U32(ctx, 31, 0x476108u);
    ctx->pc = 0x4707F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4707F0u, 0x476100u, 0x476108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476108u;
label_476108:
    // 0x476108: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_47610c:
    if (ctx->pc == 0x47610Cu) {
        ctx->pc = 0x476110u;
        goto label_476110;
    }
    ctx->pc = 0x476108u;
    {
        const bool branch_taken_0x476108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x476108) {
            ctx->pc = 0x4761B8u;
            goto label_4761b8;
        }
    }
    ctx->pc = 0x476110u;
label_476110:
    // 0x476110: 0x8f82b480  lw          $v0, -0x4B80($gp)
    ctx->pc = 0x476110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947968)));
label_476114:
    // 0x476114: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_476118:
    if (ctx->pc == 0x476118u) {
        ctx->pc = 0x47611Cu;
        goto label_47611c;
    }
    ctx->pc = 0x476114u;
    {
        const bool branch_taken_0x476114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x476114) {
            ctx->pc = 0x4761B8u;
            goto label_4761b8;
        }
    }
    ctx->pc = 0x47611Cu;
label_47611c:
    // 0x47611c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47611cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_476120:
    // 0x476120: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x476120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_476124:
    // 0x476124: 0x27a603c0  addiu       $a2, $sp, 0x3C0
    ctx->pc = 0x476124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_476128:
    // 0x476128: 0xc115ee8  jal         func_457BA0
label_47612c:
    if (ctx->pc == 0x47612Cu) {
        ctx->pc = 0x476130u;
        goto label_476130;
    }
    ctx->pc = 0x476128u;
    SET_GPR_U32(ctx, 31, 0x476130u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x476128u, 0x476130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476130u;
label_476130:
    // 0x476130: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_476134:
    if (ctx->pc == 0x476134u) {
        ctx->pc = 0x476138u;
        goto label_476138;
    }
    ctx->pc = 0x476130u;
    {
        const bool branch_taken_0x476130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x476130) {
            ctx->pc = 0x4761B8u;
            goto label_4761b8;
        }
    }
    ctx->pc = 0x476138u;
label_476138:
    // 0x476138: 0x8fa203c8  lw          $v0, 0x3C8($sp)
    ctx->pc = 0x476138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 968)));
label_47613c:
    // 0x47613c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_476140:
    if (ctx->pc == 0x476140u) {
        ctx->pc = 0x476144u;
        goto label_476144;
    }
    ctx->pc = 0x47613Cu;
    {
        const bool branch_taken_0x47613c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47613c) {
            ctx->pc = 0x4761B8u;
            goto label_4761b8;
        }
    }
    ctx->pc = 0x476144u;
label_476144:
    // 0x476144: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x476144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_476148:
    // 0x476148: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x476148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47614c:
    // 0x47614c: 0x8fa603c4  lw          $a2, 0x3C4($sp)
    ctx->pc = 0x47614cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 964)));
label_476150:
    // 0x476150: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x476150u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_476154:
    // 0x476154: 0x24e70db0  addiu       $a3, $a3, 0xDB0
    ctx->pc = 0x476154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3504));
label_476158:
    // 0x476158: 0x24080132  addiu       $t0, $zero, 0x132
    ctx->pc = 0x476158u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 306));
label_47615c:
    // 0x47615c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47615cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_476160:
    // 0x476160: 0x25290f10  addiu       $t1, $t1, 0xF10
    ctx->pc = 0x476160u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3856));
label_476164:
    // 0x476164: 0xc113940  jal         func_44E500
label_476168:
    if (ctx->pc == 0x476168u) {
        ctx->pc = 0x47616Cu;
        goto label_47616c;
    }
    ctx->pc = 0x476164u;
    SET_GPR_U32(ctx, 31, 0x47616Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x476164u, 0x47616Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47616Cu;
label_47616c:
    // 0x47616c: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x47616cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_476170:
    // 0x476170: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x476170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_476174:
    // 0x476174: 0x24a51270  addiu       $a1, $a1, 0x1270
    ctx->pc = 0x476174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4720));
label_476178:
    // 0x476178: 0xc115c24  jal         func_457090
label_47617c:
    if (ctx->pc == 0x47617Cu) {
        ctx->pc = 0x476180u;
        goto label_476180;
    }
    ctx->pc = 0x476178u;
    SET_GPR_U32(ctx, 31, 0x476180u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x476178u, 0x476180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476180u;
label_476180:
    // 0x476180: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x476180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_476184:
    // 0x476184: 0x8fa203c8  lw          $v0, 0x3C8($sp)
    ctx->pc = 0x476184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 968)));
label_476188:
    // 0x476188: 0x40f809  jalr        $v0
label_47618c:
    if (ctx->pc == 0x47618Cu) {
        ctx->pc = 0x476190u;
        goto label_476190;
    }
    ctx->pc = 0x476188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x476190u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476188u, 0x476190u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x476190u;
label_476190:
    // 0x476190: 0xaf82b480  sw          $v0, -0x4B80($gp)
    ctx->pc = 0x476190u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947968), GPR_U32(ctx, 2));
label_476194:
    // 0x476194: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x476194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_476198:
    // 0x476198: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47619c:
    if (ctx->pc == 0x47619Cu) {
        ctx->pc = 0x4761A0u;
        goto label_4761a0;
    }
    ctx->pc = 0x476198u;
    {
        const bool branch_taken_0x476198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x476198) {
            ctx->pc = 0x4761A8u;
            goto label_4761a8;
        }
    }
    ctx->pc = 0x4761A0u;
label_4761a0:
    // 0x4761a0: 0xd  break       0
    ctx->pc = 0x4761a0u;
    runtime->handleBreak(rdram, ctx);
label_4761a4:
    // 0x4761a4: 0x0  nop
    ctx->pc = 0x4761a4u;
    // NOP
label_4761a8:
    // 0x4761a8: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x4761a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_4761ac:
    // 0x4761ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4761acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4761b0:
    // 0x4761b0: 0xc11392c  jal         func_44E4B0
label_4761b4:
    if (ctx->pc == 0x4761B4u) {
        ctx->pc = 0x4761B8u;
        goto label_4761b8;
    }
    ctx->pc = 0x4761B0u;
    SET_GPR_U32(ctx, 31, 0x4761B8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4761B0u, 0x4761B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4761B8u;
label_4761b8:
    // 0x4761b8: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x4761b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_4761bc:
    // 0x4761bc: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x4761bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4761c0:
    // 0x4761c0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4761c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4761c4:
    // 0x4761c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4761c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4761c8:
    // 0x4761c8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_4761cc:
    if (ctx->pc == 0x4761CCu) {
        ctx->pc = 0x4761D0u;
        goto label_4761d0;
    }
    ctx->pc = 0x4761C8u;
    {
        const bool branch_taken_0x4761c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4761c8) {
            ctx->pc = 0x476278u;
            goto label_476278;
        }
    }
    ctx->pc = 0x4761D0u;
label_4761d0:
    // 0x4761d0: 0x8f82b484  lw          $v0, -0x4B7C($gp)
    ctx->pc = 0x4761d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947972)));
label_4761d4:
    // 0x4761d4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4761d8:
    if (ctx->pc == 0x4761D8u) {
        ctx->pc = 0x4761DCu;
        goto label_4761dc;
    }
    ctx->pc = 0x4761D4u;
    {
        const bool branch_taken_0x4761d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4761d4) {
            ctx->pc = 0x476278u;
            goto label_476278;
        }
    }
    ctx->pc = 0x4761DCu;
label_4761dc:
    // 0x4761dc: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4761dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4761e0:
    // 0x4761e0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4761e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4761e4:
    // 0x4761e4: 0x27a603b0  addiu       $a2, $sp, 0x3B0
    ctx->pc = 0x4761e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_4761e8:
    // 0x4761e8: 0xc115ee8  jal         func_457BA0
label_4761ec:
    if (ctx->pc == 0x4761ECu) {
        ctx->pc = 0x4761F0u;
        goto label_4761f0;
    }
    ctx->pc = 0x4761E8u;
    SET_GPR_U32(ctx, 31, 0x4761F0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4761E8u, 0x4761F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4761F0u;
label_4761f0:
    // 0x4761f0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4761f4:
    if (ctx->pc == 0x4761F4u) {
        ctx->pc = 0x4761F8u;
        goto label_4761f8;
    }
    ctx->pc = 0x4761F0u;
    {
        const bool branch_taken_0x4761f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4761f0) {
            ctx->pc = 0x476278u;
            goto label_476278;
        }
    }
    ctx->pc = 0x4761F8u;
label_4761f8:
    // 0x4761f8: 0x8fa203b8  lw          $v0, 0x3B8($sp)
    ctx->pc = 0x4761f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 952)));
label_4761fc:
    // 0x4761fc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_476200:
    if (ctx->pc == 0x476200u) {
        ctx->pc = 0x476204u;
        goto label_476204;
    }
    ctx->pc = 0x4761FCu;
    {
        const bool branch_taken_0x4761fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4761fc) {
            ctx->pc = 0x476278u;
            goto label_476278;
        }
    }
    ctx->pc = 0x476204u;
label_476204:
    // 0x476204: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x476204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_476208:
    // 0x476208: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x476208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47620c:
    // 0x47620c: 0x8fa603b4  lw          $a2, 0x3B4($sp)
    ctx->pc = 0x47620cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 948)));
label_476210:
    // 0x476210: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x476210u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_476214:
    // 0x476214: 0x24e70db0  addiu       $a3, $a3, 0xDB0
    ctx->pc = 0x476214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3504));
label_476218:
    // 0x476218: 0x24080133  addiu       $t0, $zero, 0x133
    ctx->pc = 0x476218u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 307));
label_47621c:
    // 0x47621c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47621cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_476220:
    // 0x476220: 0x25290e50  addiu       $t1, $t1, 0xE50
    ctx->pc = 0x476220u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3664));
label_476224:
    // 0x476224: 0xc113940  jal         func_44E500
label_476228:
    if (ctx->pc == 0x476228u) {
        ctx->pc = 0x47622Cu;
        goto label_47622c;
    }
    ctx->pc = 0x476224u;
    SET_GPR_U32(ctx, 31, 0x47622Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x476224u, 0x47622Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47622Cu;
label_47622c:
    // 0x47622c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x47622cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_476230:
    // 0x476230: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x476230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_476234:
    // 0x476234: 0x24a512d0  addiu       $a1, $a1, 0x12D0
    ctx->pc = 0x476234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4816));
label_476238:
    // 0x476238: 0xc115c24  jal         func_457090
label_47623c:
    if (ctx->pc == 0x47623Cu) {
        ctx->pc = 0x476240u;
        goto label_476240;
    }
    ctx->pc = 0x476238u;
    SET_GPR_U32(ctx, 31, 0x476240u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x476238u, 0x476240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476240u;
label_476240:
    // 0x476240: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x476240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_476244:
    // 0x476244: 0x8fa203b8  lw          $v0, 0x3B8($sp)
    ctx->pc = 0x476244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 952)));
label_476248:
    // 0x476248: 0x40f809  jalr        $v0
label_47624c:
    if (ctx->pc == 0x47624Cu) {
        ctx->pc = 0x476250u;
        goto label_476250;
    }
    ctx->pc = 0x476248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x476250u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476248u, 0x476250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x476250u;
label_476250:
    // 0x476250: 0xaf82b484  sw          $v0, -0x4B7C($gp)
    ctx->pc = 0x476250u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947972), GPR_U32(ctx, 2));
label_476254:
    // 0x476254: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x476254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_476258:
    // 0x476258: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47625c:
    if (ctx->pc == 0x47625Cu) {
        ctx->pc = 0x476260u;
        goto label_476260;
    }
    ctx->pc = 0x476258u;
    {
        const bool branch_taken_0x476258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x476258) {
            ctx->pc = 0x476268u;
            goto label_476268;
        }
    }
    ctx->pc = 0x476260u;
label_476260:
    // 0x476260: 0xd  break       0
    ctx->pc = 0x476260u;
    runtime->handleBreak(rdram, ctx);
label_476264:
    // 0x476264: 0x0  nop
    ctx->pc = 0x476264u;
    // NOP
label_476268:
    // 0x476268: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x476268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_47626c:
    // 0x47626c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47626cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_476270:
    // 0x476270: 0xc11392c  jal         func_44E4B0
label_476274:
    if (ctx->pc == 0x476274u) {
        ctx->pc = 0x476278u;
        goto label_476278;
    }
    ctx->pc = 0x476270u;
    SET_GPR_U32(ctx, 31, 0x476278u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x476270u, 0x476278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476278u;
label_476278:
    // 0x476278: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x476278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47627c:
    // 0x47627c: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x47627cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_476280:
    // 0x476280: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x476280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_476284:
    // 0x476284: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_476288:
    if (ctx->pc == 0x476288u) {
        ctx->pc = 0x47628Cu;
        goto label_47628c;
    }
    ctx->pc = 0x476284u;
    {
        const bool branch_taken_0x476284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x476284) {
            ctx->pc = 0x4762ACu;
            goto label_4762ac;
        }
    }
    ctx->pc = 0x47628Cu;
label_47628c:
    // 0x47628c: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x47628cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_476290:
    // 0x476290: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x476290u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_476294:
    // 0x476294: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x476294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_476298:
    // 0x476298: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x476298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_47629c:
    // 0x47629c: 0x0  nop
    ctx->pc = 0x47629cu;
    // NOP
label_4762a0:
    // 0x4762a0: 0x0  nop
    ctx->pc = 0x4762a0u;
    // NOP
label_4762a4:
    // 0x4762a4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_4762a8:
    if (ctx->pc == 0x4762A8u) {
        ctx->pc = 0x4762ACu;
        goto label_4762ac;
    }
    ctx->pc = 0x4762A4u;
    {
        const bool branch_taken_0x4762a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4762a4) {
            ctx->pc = 0x476290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_476290;
        }
    }
    ctx->pc = 0x4762ACu;
label_4762ac:
    // 0x4762ac: 0xc7a003e0  lwc1        $f0, 0x3E0($sp)
    ctx->pc = 0x4762acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4762b0:
    // 0x4762b0: 0xe7a003a0  swc1        $f0, 0x3A0($sp)
    ctx->pc = 0x4762b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 928), bits); }
label_4762b4:
    // 0x4762b4: 0xc7a003f0  lwc1        $f0, 0x3F0($sp)
    ctx->pc = 0x4762b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4762b8:
    // 0x4762b8: 0xe7a003a4  swc1        $f0, 0x3A4($sp)
    ctx->pc = 0x4762b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 932), bits); }
label_4762bc:
    // 0x4762bc: 0xe7a003cc  swc1        $f0, 0x3CC($sp)
    ctx->pc = 0x4762bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 972), bits); }
label_4762c0:
    // 0x4762c0: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x4762c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_4762c4:
    // 0x4762c4: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x4762c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4762c8:
    // 0x4762c8: 0xc0ed194  jal         func_3B4650
label_4762cc:
    if (ctx->pc == 0x4762CCu) {
        ctx->pc = 0x4762D0u;
        goto label_4762d0;
    }
    ctx->pc = 0x4762C8u;
    SET_GPR_U32(ctx, 31, 0x4762D0u);
    ctx->pc = 0x3B4650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4650u, 0x4762C8u, 0x4762D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4762D0u;
label_4762d0:
    // 0x4762d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4762d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4762d4:
    // 0x4762d4: 0x8fa20400  lw          $v0, 0x400($sp)
    ctx->pc = 0x4762d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
label_4762d8:
    // 0x4762d8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_4762dc:
    if (ctx->pc == 0x4762DCu) {
        ctx->pc = 0x4762E0u;
        goto label_4762e0;
    }
    ctx->pc = 0x4762D8u;
    {
        const bool branch_taken_0x4762d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4762d8) {
            ctx->pc = 0x476324u;
            goto label_476324;
        }
    }
    ctx->pc = 0x4762E0u;
label_4762e0:
    // 0x4762e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4762e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4762e4:
    // 0x4762e4: 0x27a503a0  addiu       $a1, $sp, 0x3A0
    ctx->pc = 0x4762e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_4762e8:
    // 0x4762e8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4762e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4762ec:
    // 0x4762ec: 0xc103d16  jal         func_40F458
label_4762f0:
    if (ctx->pc == 0x4762F0u) {
        ctx->pc = 0x4762F4u;
        goto label_4762f4;
    }
    ctx->pc = 0x4762ECu;
    SET_GPR_U32(ctx, 31, 0x4762F4u);
    ctx->pc = 0x40F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F458u, 0x4762ECu, 0x4762F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4762F4u;
label_4762f4:
    // 0x4762f4: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x4762f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_4762f8:
    // 0x4762f8: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x4762f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4762fc:
    // 0x4762fc: 0xc7a003e0  lwc1        $f0, 0x3E0($sp)
    ctx->pc = 0x4762fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_476300:
    // 0x476300: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x476300u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_476304:
    // 0x476304: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x476304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_476308:
    // 0x476308: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x476308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_47630c:
    // 0x47630c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x47630cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_476310:
    // 0x476310: 0xc7a003f0  lwc1        $f0, 0x3F0($sp)
    ctx->pc = 0x476310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_476314:
    // 0x476314: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x476314u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_476318:
    // 0x476318: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x476318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_47631c:
    // 0x47631c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_476320:
    if (ctx->pc == 0x476320u) {
        ctx->pc = 0x476324u;
        goto label_476324;
    }
    ctx->pc = 0x47631Cu;
    {
        const bool branch_taken_0x47631c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47631c) {
            ctx->pc = 0x476394u;
            goto label_476394;
        }
    }
    ctx->pc = 0x476324u;
label_476324:
    // 0x476324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x476324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_476328:
    // 0x476328: 0x27a503a0  addiu       $a1, $sp, 0x3A0
    ctx->pc = 0x476328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_47632c:
    // 0x47632c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x47632cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_476330:
    // 0x476330: 0xc103d16  jal         func_40F458
label_476334:
    if (ctx->pc == 0x476334u) {
        ctx->pc = 0x476338u;
        goto label_476338;
    }
    ctx->pc = 0x476330u;
    SET_GPR_U32(ctx, 31, 0x476338u);
    ctx->pc = 0x40F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F458u, 0x476330u, 0x476338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476338u;
label_476338:
    // 0x476338: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x476338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_47633c:
    // 0x47633c: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x47633cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_476340:
    // 0x476340: 0xe7a003a0  swc1        $f0, 0x3A0($sp)
    ctx->pc = 0x476340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 928), bits); }
label_476344:
    // 0x476344: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x476344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_476348:
    // 0x476348: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x476348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47634c:
    // 0x47634c: 0xe7a003a4  swc1        $f0, 0x3A4($sp)
    ctx->pc = 0x47634cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 932), bits); }
label_476350:
    // 0x476350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x476350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_476354:
    // 0x476354: 0x27a503a0  addiu       $a1, $sp, 0x3A0
    ctx->pc = 0x476354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_476358:
    // 0x476358: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x476358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47635c:
    // 0x47635c: 0xc103d16  jal         func_40F458
label_476360:
    if (ctx->pc == 0x476360u) {
        ctx->pc = 0x476364u;
        goto label_476364;
    }
    ctx->pc = 0x47635Cu;
    SET_GPR_U32(ctx, 31, 0x476364u);
    ctx->pc = 0x40F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F458u, 0x47635Cu, 0x476364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476364u;
label_476364:
    // 0x476364: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x476364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_476368:
    // 0x476368: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x476368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47636c:
    // 0x47636c: 0xc7a003e0  lwc1        $f0, 0x3E0($sp)
    ctx->pc = 0x47636cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_476370:
    // 0x476370: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x476370u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_476374:
    // 0x476374: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x476374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_476378:
    // 0x476378: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x476378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_47637c:
    // 0x47637c: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x47637cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_476380:
    // 0x476380: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x476380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_476384:
    // 0x476384: 0xc7a003f0  lwc1        $f0, 0x3F0($sp)
    ctx->pc = 0x476384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_476388:
    // 0x476388: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x476388u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_47638c:
    // 0x47638c: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x47638cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_476390:
    // 0x476390: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x476390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_476394:
    // 0x476394: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x476394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_476398:
    // 0x476398: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x476398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_47639c:
    // 0x47639c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47639cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4763a0:
    // 0x4763a0: 0xc0ed196  jal         func_3B4658
label_4763a4:
    if (ctx->pc == 0x4763A4u) {
        ctx->pc = 0x4763A8u;
        goto label_4763a8;
    }
    ctx->pc = 0x4763A0u;
    SET_GPR_U32(ctx, 31, 0x4763A8u);
    ctx->pc = 0x3B4658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4658u, 0x4763A0u, 0x4763A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4763A8u;
label_4763a8:
    // 0x4763a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4763a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4763ac:
    // 0x4763ac: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x4763acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_4763b0:
    // 0x4763b0: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x4763b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4763b4:
    // 0x4763b4: 0xc0ed18e  jal         func_3B4638
label_4763b8:
    if (ctx->pc == 0x4763B8u) {
        ctx->pc = 0x4763BCu;
        goto label_4763bc;
    }
    ctx->pc = 0x4763B4u;
    SET_GPR_U32(ctx, 31, 0x4763BCu);
    ctx->pc = 0x3B4638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4638u, 0x4763B4u, 0x4763BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4763BCu;
label_4763bc:
    // 0x4763bc: 0x11102b  sltu        $v0, $zero, $s1
    ctx->pc = 0x4763bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4763c0:
    // 0x4763c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4763c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4763c4:
    // 0x4763c4: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_4763c8:
    if (ctx->pc == 0x4763C8u) {
        ctx->pc = 0x4763CCu;
        goto label_4763cc;
    }
    ctx->pc = 0x4763C4u;
    {
        const bool branch_taken_0x4763c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4763c4) {
            ctx->pc = 0x476470u;
            goto label_476470;
        }
    }
    ctx->pc = 0x4763CCu;
label_4763cc:
    // 0x4763cc: 0x8f82b488  lw          $v0, -0x4B78($gp)
    ctx->pc = 0x4763ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947976)));
label_4763d0:
    // 0x4763d0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_4763d4:
    if (ctx->pc == 0x4763D4u) {
        ctx->pc = 0x4763D8u;
        goto label_4763d8;
    }
    ctx->pc = 0x4763D0u;
    {
        const bool branch_taken_0x4763d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4763d0) {
            ctx->pc = 0x476470u;
            goto label_476470;
        }
    }
    ctx->pc = 0x4763D8u;
label_4763d8:
    // 0x4763d8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4763d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4763dc:
    // 0x4763dc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4763dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4763e0:
    // 0x4763e0: 0x27a60390  addiu       $a2, $sp, 0x390
    ctx->pc = 0x4763e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_4763e4:
    // 0x4763e4: 0xc115ee8  jal         func_457BA0
label_4763e8:
    if (ctx->pc == 0x4763E8u) {
        ctx->pc = 0x4763ECu;
        goto label_4763ec;
    }
    ctx->pc = 0x4763E4u;
    SET_GPR_U32(ctx, 31, 0x4763ECu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4763E4u, 0x4763ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4763ECu;
label_4763ec:
    // 0x4763ec: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_4763f0:
    if (ctx->pc == 0x4763F0u) {
        ctx->pc = 0x4763F4u;
        goto label_4763f4;
    }
    ctx->pc = 0x4763ECu;
    {
        const bool branch_taken_0x4763ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4763ec) {
            ctx->pc = 0x476470u;
            goto label_476470;
        }
    }
    ctx->pc = 0x4763F4u;
label_4763f4:
    // 0x4763f4: 0x8fa20398  lw          $v0, 0x398($sp)
    ctx->pc = 0x4763f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 920)));
label_4763f8:
    // 0x4763f8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_4763fc:
    if (ctx->pc == 0x4763FCu) {
        ctx->pc = 0x476400u;
        goto label_476400;
    }
    ctx->pc = 0x4763F8u;
    {
        const bool branch_taken_0x4763f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4763f8) {
            ctx->pc = 0x476470u;
            goto label_476470;
        }
    }
    ctx->pc = 0x476400u;
label_476400:
    // 0x476400: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x476400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_476404:
    // 0x476404: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x476404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_476408:
    // 0x476408: 0x8fa60394  lw          $a2, 0x394($sp)
    ctx->pc = 0x476408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 916)));
label_47640c:
    // 0x47640c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47640cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_476410:
    // 0x476410: 0x24e70db0  addiu       $a3, $a3, 0xDB0
    ctx->pc = 0x476410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3504));
label_476414:
    // 0x476414: 0x24080152  addiu       $t0, $zero, 0x152
    ctx->pc = 0x476414u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 338));
label_476418:
    // 0x476418: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x476418u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47641c:
    // 0x47641c: 0x25291320  addiu       $t1, $t1, 0x1320
    ctx->pc = 0x47641cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4896));
label_476420:
    // 0x476420: 0xc113940  jal         func_44E500
label_476424:
    if (ctx->pc == 0x476424u) {
        ctx->pc = 0x476428u;
        goto label_476428;
    }
    ctx->pc = 0x476420u;
    SET_GPR_U32(ctx, 31, 0x476428u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x476420u, 0x476428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476428u;
label_476428:
    // 0x476428: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x476428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_47642c:
    // 0x47642c: 0x2785b48c  addiu       $a1, $gp, -0x4B74
    ctx->pc = 0x47642cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947980));
label_476430:
    // 0x476430: 0xc115c24  jal         func_457090
label_476434:
    if (ctx->pc == 0x476434u) {
        ctx->pc = 0x476438u;
        goto label_476438;
    }
    ctx->pc = 0x476430u;
    SET_GPR_U32(ctx, 31, 0x476438u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x476430u, 0x476438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476438u;
label_476438:
    // 0x476438: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x476438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_47643c:
    // 0x47643c: 0x8fa20398  lw          $v0, 0x398($sp)
    ctx->pc = 0x47643cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 920)));
label_476440:
    // 0x476440: 0x40f809  jalr        $v0
label_476444:
    if (ctx->pc == 0x476444u) {
        ctx->pc = 0x476448u;
        goto label_476448;
    }
    ctx->pc = 0x476440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x476448u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476440u, 0x476448u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x476448u;
label_476448:
    // 0x476448: 0xaf82b488  sw          $v0, -0x4B78($gp)
    ctx->pc = 0x476448u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947976), GPR_U32(ctx, 2));
label_47644c:
    // 0x47644c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x47644cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_476450:
    // 0x476450: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_476454:
    if (ctx->pc == 0x476454u) {
        ctx->pc = 0x476458u;
        goto label_476458;
    }
    ctx->pc = 0x476450u;
    {
        const bool branch_taken_0x476450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x476450) {
            ctx->pc = 0x476460u;
            goto label_476460;
        }
    }
    ctx->pc = 0x476458u;
label_476458:
    // 0x476458: 0xd  break       0
    ctx->pc = 0x476458u;
    runtime->handleBreak(rdram, ctx);
label_47645c:
    // 0x47645c: 0x0  nop
    ctx->pc = 0x47645cu;
    // NOP
label_476460:
    // 0x476460: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x476460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_476464:
    // 0x476464: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x476464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_476468:
    // 0x476468: 0xc11392c  jal         func_44E4B0
label_47646c:
    if (ctx->pc == 0x47646Cu) {
        ctx->pc = 0x476470u;
        goto label_476470;
    }
    ctx->pc = 0x476468u;
    SET_GPR_U32(ctx, 31, 0x476470u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x476468u, 0x476470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476470u;
label_476470:
    // 0x476470: 0x11102b  sltu        $v0, $zero, $s1
    ctx->pc = 0x476470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_476474:
    // 0x476474: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x476474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_476478:
    // 0x476478: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x476478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_47647c:
    // 0x47647c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47647cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_476480:
    // 0x476480: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x476480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_476484:
    // 0x476484: 0x27bd0410  addiu       $sp, $sp, 0x410
    ctx->pc = 0x476484u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_476488:
    // 0x476488: 0x3e00008  jr          $ra
label_47648c:
    if (ctx->pc == 0x47648Cu) {
        ctx->pc = 0x476490u;
        goto label_476490;
    }
    ctx->pc = 0x476488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x476490u;
label_476490:
    // 0x476490: 0x27bdfbd0  addiu       $sp, $sp, -0x430
    ctx->pc = 0x476490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966224));
label_476494:
    // 0x476494: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x476494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_476498:
    // 0x476498: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x476498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47649c:
    // 0x47649c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47649cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4764a0:
    // 0x4764a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4764a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4764a4:
    // 0x4764a4: 0xafa403f0  sw          $a0, 0x3F0($sp)
    ctx->pc = 0x4764a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1008), GPR_U32(ctx, 4));
label_4764a8:
    // 0x4764a8: 0xe7ac0400  swc1        $f12, 0x400($sp)
    ctx->pc = 0x4764a8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1024), bits); }
label_4764ac:
    // 0x4764ac: 0xe7ad0410  swc1        $f13, 0x410($sp)
    ctx->pc = 0x4764acu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1040), bits); }
label_4764b0:
    // 0x4764b0: 0xafa50420  sw          $a1, 0x420($sp)
    ctx->pc = 0x4764b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 5));
label_4764b4:
    // 0x4764b4: 0xc11c1fc  jal         func_4707F0
label_4764b8:
    if (ctx->pc == 0x4764B8u) {
        ctx->pc = 0x4764BCu;
        goto label_4764bc;
    }
    ctx->pc = 0x4764B4u;
    SET_GPR_U32(ctx, 31, 0x4764BCu);
    ctx->pc = 0x4707F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4707F0u, 0x4764B4u, 0x4764BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4764BCu;
label_4764bc:
    // 0x4764bc: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_4764c0:
    if (ctx->pc == 0x4764C0u) {
        ctx->pc = 0x4764C4u;
        goto label_4764c4;
    }
    ctx->pc = 0x4764BCu;
    {
        const bool branch_taken_0x4764bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4764bc) {
            ctx->pc = 0x47656Cu;
            goto label_47656c;
        }
    }
    ctx->pc = 0x4764C4u;
label_4764c4:
    // 0x4764c4: 0x8f82b490  lw          $v0, -0x4B70($gp)
    ctx->pc = 0x4764c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947984)));
label_4764c8:
    // 0x4764c8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4764cc:
    if (ctx->pc == 0x4764CCu) {
        ctx->pc = 0x4764D0u;
        goto label_4764d0;
    }
    ctx->pc = 0x4764C8u;
    {
        const bool branch_taken_0x4764c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4764c8) {
            ctx->pc = 0x47656Cu;
            goto label_47656c;
        }
    }
    ctx->pc = 0x4764D0u;
label_4764d0:
    // 0x4764d0: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4764d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4764d4:
    // 0x4764d4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4764d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4764d8:
    // 0x4764d8: 0x27a603d0  addiu       $a2, $sp, 0x3D0
    ctx->pc = 0x4764d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_4764dc:
    // 0x4764dc: 0xc115ee8  jal         func_457BA0
label_4764e0:
    if (ctx->pc == 0x4764E0u) {
        ctx->pc = 0x4764E4u;
        goto label_4764e4;
    }
    ctx->pc = 0x4764DCu;
    SET_GPR_U32(ctx, 31, 0x4764E4u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4764DCu, 0x4764E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4764E4u;
label_4764e4:
    // 0x4764e4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4764e8:
    if (ctx->pc == 0x4764E8u) {
        ctx->pc = 0x4764ECu;
        goto label_4764ec;
    }
    ctx->pc = 0x4764E4u;
    {
        const bool branch_taken_0x4764e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4764e4) {
            ctx->pc = 0x47656Cu;
            goto label_47656c;
        }
    }
    ctx->pc = 0x4764ECu;
label_4764ec:
    // 0x4764ec: 0x8fa203d8  lw          $v0, 0x3D8($sp)
    ctx->pc = 0x4764ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 984)));
label_4764f0:
    // 0x4764f0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4764f4:
    if (ctx->pc == 0x4764F4u) {
        ctx->pc = 0x4764F8u;
        goto label_4764f8;
    }
    ctx->pc = 0x4764F0u;
    {
        const bool branch_taken_0x4764f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4764f0) {
            ctx->pc = 0x47656Cu;
            goto label_47656c;
        }
    }
    ctx->pc = 0x4764F8u;
label_4764f8:
    // 0x4764f8: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x4764f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_4764fc:
    // 0x4764fc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4764fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_476500:
    // 0x476500: 0x8fa603d4  lw          $a2, 0x3D4($sp)
    ctx->pc = 0x476500u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 980)));
label_476504:
    // 0x476504: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x476504u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_476508:
    // 0x476508: 0x24e70db0  addiu       $a3, $a3, 0xDB0
    ctx->pc = 0x476508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3504));
label_47650c:
    // 0x47650c: 0x2408015b  addiu       $t0, $zero, 0x15B
    ctx->pc = 0x47650cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 347));
label_476510:
    // 0x476510: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x476510u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_476514:
    // 0x476514: 0x25290f10  addiu       $t1, $t1, 0xF10
    ctx->pc = 0x476514u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3856));
label_476518:
    // 0x476518: 0xc113940  jal         func_44E500
label_47651c:
    if (ctx->pc == 0x47651Cu) {
        ctx->pc = 0x476520u;
        goto label_476520;
    }
    ctx->pc = 0x476518u;
    SET_GPR_U32(ctx, 31, 0x476520u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x476518u, 0x476520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476520u;
label_476520:
    // 0x476520: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x476520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_476524:
    // 0x476524: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x476524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_476528:
    // 0x476528: 0x24a51340  addiu       $a1, $a1, 0x1340
    ctx->pc = 0x476528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4928));
label_47652c:
    // 0x47652c: 0xc115c24  jal         func_457090
label_476530:
    if (ctx->pc == 0x476530u) {
        ctx->pc = 0x476534u;
        goto label_476534;
    }
    ctx->pc = 0x47652Cu;
    SET_GPR_U32(ctx, 31, 0x476534u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47652Cu, 0x476534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476534u;
label_476534:
    // 0x476534: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x476534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_476538:
    // 0x476538: 0x8fa203d8  lw          $v0, 0x3D8($sp)
    ctx->pc = 0x476538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 984)));
label_47653c:
    // 0x47653c: 0x40f809  jalr        $v0
label_476540:
    if (ctx->pc == 0x476540u) {
        ctx->pc = 0x476544u;
        goto label_476544;
    }
    ctx->pc = 0x47653Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x476544u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47653Cu, 0x476544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x476544u;
label_476544:
    // 0x476544: 0xaf82b490  sw          $v0, -0x4B70($gp)
    ctx->pc = 0x476544u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947984), GPR_U32(ctx, 2));
label_476548:
    // 0x476548: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x476548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_47654c:
    // 0x47654c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_476550:
    if (ctx->pc == 0x476550u) {
        ctx->pc = 0x476554u;
        goto label_476554;
    }
    ctx->pc = 0x47654Cu;
    {
        const bool branch_taken_0x47654c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47654c) {
            ctx->pc = 0x47655Cu;
            goto label_47655c;
        }
    }
    ctx->pc = 0x476554u;
label_476554:
    // 0x476554: 0xd  break       0
    ctx->pc = 0x476554u;
    runtime->handleBreak(rdram, ctx);
label_476558:
    // 0x476558: 0x0  nop
    ctx->pc = 0x476558u;
    // NOP
label_47655c:
    // 0x47655c: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x47655cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_476560:
    // 0x476560: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x476560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_476564:
    // 0x476564: 0xc11392c  jal         func_44E4B0
label_476568:
    if (ctx->pc == 0x476568u) {
        ctx->pc = 0x47656Cu;
        goto label_47656c;
    }
    ctx->pc = 0x476564u;
    SET_GPR_U32(ctx, 31, 0x47656Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x476564u, 0x47656Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47656Cu;
label_47656c:
    // 0x47656c: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x47656cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_476570:
    // 0x476570: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x476570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_476574:
    // 0x476574: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x476574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_476578:
    // 0x476578: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x476578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_47657c:
    // 0x47657c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_476580:
    if (ctx->pc == 0x476580u) {
        ctx->pc = 0x476584u;
        goto label_476584;
    }
    ctx->pc = 0x47657Cu;
    {
        const bool branch_taken_0x47657c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47657c) {
            ctx->pc = 0x47662Cu;
            goto label_47662c;
        }
    }
    ctx->pc = 0x476584u;
label_476584:
    // 0x476584: 0x8f82b494  lw          $v0, -0x4B6C($gp)
    ctx->pc = 0x476584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947988)));
label_476588:
    // 0x476588: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_47658c:
    if (ctx->pc == 0x47658Cu) {
        ctx->pc = 0x476590u;
        goto label_476590;
    }
    ctx->pc = 0x476588u;
    {
        const bool branch_taken_0x476588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x476588) {
            ctx->pc = 0x47662Cu;
            goto label_47662c;
        }
    }
    ctx->pc = 0x476590u;
label_476590:
    // 0x476590: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x476590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_476594:
    // 0x476594: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x476594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_476598:
    // 0x476598: 0x27a603c0  addiu       $a2, $sp, 0x3C0
    ctx->pc = 0x476598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_47659c:
    // 0x47659c: 0xc115ee8  jal         func_457BA0
label_4765a0:
    if (ctx->pc == 0x4765A0u) {
        ctx->pc = 0x4765A4u;
        goto label_4765a4;
    }
    ctx->pc = 0x47659Cu;
    SET_GPR_U32(ctx, 31, 0x4765A4u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47659Cu, 0x4765A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4765A4u;
label_4765a4:
    // 0x4765a4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4765a8:
    if (ctx->pc == 0x4765A8u) {
        ctx->pc = 0x4765ACu;
        goto label_4765ac;
    }
    ctx->pc = 0x4765A4u;
    {
        const bool branch_taken_0x4765a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4765a4) {
            ctx->pc = 0x47662Cu;
            goto label_47662c;
        }
    }
    ctx->pc = 0x4765ACu;
label_4765ac:
    // 0x4765ac: 0x8fa203c8  lw          $v0, 0x3C8($sp)
    ctx->pc = 0x4765acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 968)));
label_4765b0:
    // 0x4765b0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4765b4:
    if (ctx->pc == 0x4765B4u) {
        ctx->pc = 0x4765B8u;
        goto label_4765b8;
    }
    ctx->pc = 0x4765B0u;
    {
        const bool branch_taken_0x4765b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4765b0) {
            ctx->pc = 0x47662Cu;
            goto label_47662c;
        }
    }
    ctx->pc = 0x4765B8u;
label_4765b8:
    // 0x4765b8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x4765b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_4765bc:
    // 0x4765bc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4765bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4765c0:
    // 0x4765c0: 0x8fa603c4  lw          $a2, 0x3C4($sp)
    ctx->pc = 0x4765c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 964)));
label_4765c4:
    // 0x4765c4: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4765c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4765c8:
    // 0x4765c8: 0x24e70db0  addiu       $a3, $a3, 0xDB0
    ctx->pc = 0x4765c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3504));
label_4765cc:
    // 0x4765cc: 0x2408015c  addiu       $t0, $zero, 0x15C
    ctx->pc = 0x4765ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
label_4765d0:
    // 0x4765d0: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4765d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4765d4:
    // 0x4765d4: 0x25290e50  addiu       $t1, $t1, 0xE50
    ctx->pc = 0x4765d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3664));
label_4765d8:
    // 0x4765d8: 0xc113940  jal         func_44E500
label_4765dc:
    if (ctx->pc == 0x4765DCu) {
        ctx->pc = 0x4765E0u;
        goto label_4765e0;
    }
    ctx->pc = 0x4765D8u;
    SET_GPR_U32(ctx, 31, 0x4765E0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4765D8u, 0x4765E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4765E0u;
label_4765e0:
    // 0x4765e0: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x4765e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_4765e4:
    // 0x4765e4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4765e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4765e8:
    // 0x4765e8: 0x24a513a0  addiu       $a1, $a1, 0x13A0
    ctx->pc = 0x4765e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5024));
label_4765ec:
    // 0x4765ec: 0xc115c24  jal         func_457090
label_4765f0:
    if (ctx->pc == 0x4765F0u) {
        ctx->pc = 0x4765F4u;
        goto label_4765f4;
    }
    ctx->pc = 0x4765ECu;
    SET_GPR_U32(ctx, 31, 0x4765F4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4765ECu, 0x4765F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4765F4u;
label_4765f4:
    // 0x4765f4: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x4765f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_4765f8:
    // 0x4765f8: 0x8fa203c8  lw          $v0, 0x3C8($sp)
    ctx->pc = 0x4765f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 968)));
label_4765fc:
    // 0x4765fc: 0x40f809  jalr        $v0
label_476600:
    if (ctx->pc == 0x476600u) {
        ctx->pc = 0x476604u;
        goto label_476604;
    }
    ctx->pc = 0x4765FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x476604u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4765FCu, 0x476604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x476604u;
label_476604:
    // 0x476604: 0xaf82b494  sw          $v0, -0x4B6C($gp)
    ctx->pc = 0x476604u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947988), GPR_U32(ctx, 2));
label_476608:
    // 0x476608: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x476608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_47660c:
    // 0x47660c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_476610:
    if (ctx->pc == 0x476610u) {
        ctx->pc = 0x476614u;
        goto label_476614;
    }
    ctx->pc = 0x47660Cu;
    {
        const bool branch_taken_0x47660c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47660c) {
            ctx->pc = 0x47661Cu;
            goto label_47661c;
        }
    }
    ctx->pc = 0x476614u;
label_476614:
    // 0x476614: 0xd  break       0
    ctx->pc = 0x476614u;
    runtime->handleBreak(rdram, ctx);
label_476618:
    // 0x476618: 0x0  nop
    ctx->pc = 0x476618u;
    // NOP
label_47661c:
    // 0x47661c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x47661cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_476620:
    // 0x476620: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x476620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_476624:
    // 0x476624: 0xc11392c  jal         func_44E4B0
label_476628:
    if (ctx->pc == 0x476628u) {
        ctx->pc = 0x47662Cu;
        goto label_47662c;
    }
    ctx->pc = 0x476624u;
    SET_GPR_U32(ctx, 31, 0x47662Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x476624u, 0x47662Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47662Cu;
label_47662c:
    // 0x47662c: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x47662cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_476630:
    // 0x476630: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x476630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_476634:
    // 0x476634: 0xe7a003ec  swc1        $f0, 0x3EC($sp)
    ctx->pc = 0x476634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1004), bits); }
label_476638:
    // 0x476638: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x476638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_47663c:
    // 0x47663c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x47663cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_476640:
    // 0x476640: 0xe7a003e8  swc1        $f0, 0x3E8($sp)
    ctx->pc = 0x476640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1000), bits); }
label_476644:
    // 0x476644: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x476644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_476648:
    // 0x476648: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x476648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_47664c:
    // 0x47664c: 0x24841330  addiu       $a0, $a0, 0x1330
    ctx->pc = 0x47664cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_476650:
    // 0x476650: 0x27a303b0  addiu       $v1, $sp, 0x3B0
    ctx->pc = 0x476650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_476654:
    // 0x476654: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x476654u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_476658:
    // 0x476658: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x476658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47665c:
    // 0x47665c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x47665cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_476660:
    // 0x476660: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x476660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_476664:
    // 0x476664: 0xc7a00400  lwc1        $f0, 0x400($sp)
    ctx->pc = 0x476664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_476668:
    // 0x476668: 0xe7a003b0  swc1        $f0, 0x3B0($sp)
    ctx->pc = 0x476668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 944), bits); }
label_47666c:
    // 0x47666c: 0xc7a00410  lwc1        $f0, 0x410($sp)
    ctx->pc = 0x47666cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_476670:
    // 0x476670: 0xe7a003b4  swc1        $f0, 0x3B4($sp)
    ctx->pc = 0x476670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 948), bits); }
label_476674:
    // 0x476674: 0xe7a003dc  swc1        $f0, 0x3DC($sp)
    ctx->pc = 0x476674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 988), bits); }
label_476678:
    // 0x476678: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x476678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_47667c:
    // 0x47667c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x47667cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_476680:
    // 0x476680: 0xc0ed194  jal         func_3B4650
label_476684:
    if (ctx->pc == 0x476684u) {
        ctx->pc = 0x476688u;
        goto label_476688;
    }
    ctx->pc = 0x476680u;
    SET_GPR_U32(ctx, 31, 0x476688u);
    ctx->pc = 0x3B4650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4650u, 0x476680u, 0x476688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476688u;
label_476688:
    // 0x476688: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x476688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47668c:
    // 0x47668c: 0x8fa20420  lw          $v0, 0x420($sp)
    ctx->pc = 0x47668cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
label_476690:
    // 0x476690: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_476694:
    if (ctx->pc == 0x476694u) {
        ctx->pc = 0x476698u;
        goto label_476698;
    }
    ctx->pc = 0x476690u;
    {
        const bool branch_taken_0x476690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x476690) {
            ctx->pc = 0x4766A4u;
            goto label_4766a4;
        }
    }
    ctx->pc = 0x476698u;
label_476698:
    // 0x476698: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x476698u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47669c:
    // 0x47669c: 0x10000002  b           . + 4 + (0x2 << 2)
label_4766a0:
    if (ctx->pc == 0x4766A0u) {
        ctx->pc = 0x4766A4u;
        goto label_4766a4;
    }
    ctx->pc = 0x47669Cu;
    {
        const bool branch_taken_0x47669c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47669c) {
            ctx->pc = 0x4766A8u;
            goto label_4766a8;
        }
    }
    ctx->pc = 0x4766A4u;
label_4766a4:
    // 0x4766a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4766a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4766a8:
    // 0x4766a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4766a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4766ac:
    // 0x4766ac: 0x27a503b0  addiu       $a1, $sp, 0x3B0
    ctx->pc = 0x4766acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_4766b0:
    // 0x4766b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4766b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4766b4:
    // 0x4766b4: 0xc103c86  jal         func_40F218
label_4766b8:
    if (ctx->pc == 0x4766B8u) {
        ctx->pc = 0x4766BCu;
        goto label_4766bc;
    }
    ctx->pc = 0x4766B4u;
    SET_GPR_U32(ctx, 31, 0x4766BCu);
    ctx->pc = 0x40F218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F218u, 0x4766B4u, 0x4766BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4766BCu;
label_4766bc:
    // 0x4766bc: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x4766bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_4766c0:
    // 0x4766c0: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x4766c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4766c4:
    // 0x4766c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4766c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4766c8:
    // 0x4766c8: 0xc0ed196  jal         func_3B4658
label_4766cc:
    if (ctx->pc == 0x4766CCu) {
        ctx->pc = 0x4766D0u;
        goto label_4766d0;
    }
    ctx->pc = 0x4766C8u;
    SET_GPR_U32(ctx, 31, 0x4766D0u);
    ctx->pc = 0x3B4658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4658u, 0x4766C8u, 0x4766D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4766D0u;
label_4766d0:
    // 0x4766d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4766d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4766d4:
    // 0x4766d4: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x4766d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_4766d8:
    // 0x4766d8: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x4766d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4766dc:
    // 0x4766dc: 0xc0ed18e  jal         func_3B4638
label_4766e0:
    if (ctx->pc == 0x4766E0u) {
        ctx->pc = 0x4766E4u;
        goto label_4766e4;
    }
    ctx->pc = 0x4766DCu;
    SET_GPR_U32(ctx, 31, 0x4766E4u);
    ctx->pc = 0x3B4638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4638u, 0x4766DCu, 0x4766E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4766E4u;
label_4766e4:
    // 0x4766e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4766e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4766e8:
    // 0x4766e8: 0x0  nop
    ctx->pc = 0x4766e8u;
    // NOP
label_4766ec:
    // 0x4766ec: 0xe7a003e4  swc1        $f0, 0x3E4($sp)
    ctx->pc = 0x4766ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 996), bits); }
label_4766f0:
    // 0x4766f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4766f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4766f4:
    // 0x4766f4: 0x0  nop
    ctx->pc = 0x4766f4u;
    // NOP
label_4766f8:
    // 0x4766f8: 0xe7a003e0  swc1        $f0, 0x3E0($sp)
    ctx->pc = 0x4766f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 992), bits); }
label_4766fc:
    // 0x4766fc: 0x8fa403f0  lw          $a0, 0x3F0($sp)
    ctx->pc = 0x4766fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_476700:
    // 0x476700: 0x27a503e4  addiu       $a1, $sp, 0x3E4
    ctx->pc = 0x476700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 996));
label_476704:
    // 0x476704: 0x27a603e0  addiu       $a2, $sp, 0x3E0
    ctx->pc = 0x476704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_476708:
    // 0x476708: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x476708u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47670c:
    // 0x47670c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x47670cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_476710:
    // 0x476710: 0x320f809  jalr        $t9
label_476714:
    if (ctx->pc == 0x476714u) {
        ctx->pc = 0x476718u;
        goto label_476718;
    }
    ctx->pc = 0x476710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x476718u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476710u, 0x476718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x476718u;
label_476718:
    // 0x476718: 0x8fa20420  lw          $v0, 0x420($sp)
    ctx->pc = 0x476718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
label_47671c:
    // 0x47671c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_476720:
    if (ctx->pc == 0x476720u) {
        ctx->pc = 0x476724u;
        goto label_476724;
    }
    ctx->pc = 0x47671Cu;
    {
        const bool branch_taken_0x47671c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47671c) {
            ctx->pc = 0x4767C4u;
            goto label_4767c4;
        }
    }
    ctx->pc = 0x476724u;
label_476724:
    // 0x476724: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x476724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_476728:
    // 0x476728: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x476728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47672c:
    // 0x47672c: 0xc7a00400  lwc1        $f0, 0x400($sp)
    ctx->pc = 0x47672cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_476730:
    // 0x476730: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x476730u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_476734:
    // 0x476734: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x476734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_476738:
    // 0x476738: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x476738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_47673c:
    // 0x47673c: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x47673cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_476740:
    // 0x476740: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x476740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_476744:
    // 0x476744: 0xc7a00410  lwc1        $f0, 0x410($sp)
    ctx->pc = 0x476744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_476748:
    // 0x476748: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x476748u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47674c:
    // 0x47674c: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x47674cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_476750:
    // 0x476750: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x476750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_476754:
    // 0x476754: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x476754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_476758:
    // 0x476758: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x476758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47675c:
    // 0x47675c: 0xc7a00400  lwc1        $f0, 0x400($sp)
    ctx->pc = 0x47675cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_476760:
    // 0x476760: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x476760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_476764:
    // 0x476764: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x476764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_476768:
    // 0x476768: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x476768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_47676c:
    // 0x47676c: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x47676cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_476770:
    // 0x476770: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x476770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_476774:
    // 0x476774: 0xc7a00410  lwc1        $f0, 0x410($sp)
    ctx->pc = 0x476774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_476778:
    // 0x476778: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x476778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47677c:
    // 0x47677c: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x47677cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_476780:
    // 0x476780: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x476780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_476784:
    // 0x476784: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x476784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_476788:
    // 0x476788: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x476788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47678c:
    // 0x47678c: 0xc7a003ec  lwc1        $f0, 0x3EC($sp)
    ctx->pc = 0x47678cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_476790:
    // 0x476790: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x476790u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_476794:
    // 0x476794: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x476794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_476798:
    // 0x476798: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x476798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47679c:
    // 0x47679c: 0xc7a003e8  lwc1        $f0, 0x3E8($sp)
    ctx->pc = 0x47679cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4767a0:
    // 0x4767a0: 0x46010341  sub.s       $f13, $f0, $f1
    ctx->pc = 0x4767a0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4767a4:
    // 0x4767a4: 0x8fa403f0  lw          $a0, 0x3F0($sp)
    ctx->pc = 0x4767a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_4767a8:
    // 0x4767a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4767a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4767ac:
    // 0x4767ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4767acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4767b0:
    // 0x4767b0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4767b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4767b4:
    // 0x4767b4: 0x320f809  jalr        $t9
label_4767b8:
    if (ctx->pc == 0x4767B8u) {
        ctx->pc = 0x4767BCu;
        goto label_4767bc;
    }
    ctx->pc = 0x4767B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4767BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4767B4u, 0x4767BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4767BCu;
label_4767bc:
    // 0x4767bc: 0x10000019  b           . + 4 + (0x19 << 2)
label_4767c0:
    if (ctx->pc == 0x4767C0u) {
        ctx->pc = 0x4767C4u;
        goto label_4767c4;
    }
    ctx->pc = 0x4767BCu;
    {
        const bool branch_taken_0x4767bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4767bc) {
            ctx->pc = 0x476824u;
            goto label_476824;
        }
    }
    ctx->pc = 0x4767C4u;
label_4767c4:
    // 0x4767c4: 0xc7a103e4  lwc1        $f1, 0x3E4($sp)
    ctx->pc = 0x4767c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4767c8:
    // 0x4767c8: 0xc7a00400  lwc1        $f0, 0x400($sp)
    ctx->pc = 0x4767c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4767cc:
    // 0x4767cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4767ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4767d0:
    // 0x4767d0: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x4767d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_4767d4:
    // 0x4767d4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x4767d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_4767d8:
    // 0x4767d8: 0xc7a103e0  lwc1        $f1, 0x3E0($sp)
    ctx->pc = 0x4767d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4767dc:
    // 0x4767dc: 0xc7a00410  lwc1        $f0, 0x410($sp)
    ctx->pc = 0x4767dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4767e0:
    // 0x4767e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4767e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4767e4:
    // 0x4767e4: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x4767e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_4767e8:
    // 0x4767e8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x4767e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_4767ec:
    // 0x4767ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4767ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4767f0:
    // 0x4767f0: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x4767f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_4767f4:
    // 0x4767f4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x4767f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_4767f8:
    // 0x4767f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4767f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4767fc:
    // 0x4767fc: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x4767fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_476800:
    // 0x476800: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x476800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_476804:
    // 0x476804: 0x8fa403f0  lw          $a0, 0x3F0($sp)
    ctx->pc = 0x476804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_476808:
    // 0x476808: 0xc7ac03ec  lwc1        $f12, 0x3EC($sp)
    ctx->pc = 0x476808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_47680c:
    // 0x47680c: 0xc7ad03e8  lwc1        $f13, 0x3E8($sp)
    ctx->pc = 0x47680cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_476810:
    // 0x476810: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x476810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_476814:
    // 0x476814: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x476814u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_476818:
    // 0x476818: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x476818u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_47681c:
    // 0x47681c: 0x320f809  jalr        $t9
label_476820:
    if (ctx->pc == 0x476820u) {
        ctx->pc = 0x476824u;
        goto label_476824;
    }
    ctx->pc = 0x47681Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x476824u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47681Cu, 0x476824u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x476824u;
label_476824:
    // 0x476824: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x476824u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_476828:
    // 0x476828: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x476828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_47682c:
    // 0x47682c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_476830:
    if (ctx->pc == 0x476830u) {
        ctx->pc = 0x476834u;
        goto label_476834;
    }
    ctx->pc = 0x47682Cu;
    {
        const bool branch_taken_0x47682c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47682c) {
            ctx->pc = 0x4768D8u;
            goto label_4768d8;
        }
    }
    ctx->pc = 0x476834u;
label_476834:
    // 0x476834: 0x8f82b498  lw          $v0, -0x4B68($gp)
    ctx->pc = 0x476834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947992)));
label_476838:
    // 0x476838: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_47683c:
    if (ctx->pc == 0x47683Cu) {
        ctx->pc = 0x476840u;
        goto label_476840;
    }
    ctx->pc = 0x476838u;
    {
        const bool branch_taken_0x476838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x476838) {
            ctx->pc = 0x4768D8u;
            goto label_4768d8;
        }
    }
    ctx->pc = 0x476840u;
label_476840:
    // 0x476840: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x476840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_476844:
    // 0x476844: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x476844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_476848:
    // 0x476848: 0x27a603a0  addiu       $a2, $sp, 0x3A0
    ctx->pc = 0x476848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_47684c:
    // 0x47684c: 0xc115ee8  jal         func_457BA0
label_476850:
    if (ctx->pc == 0x476850u) {
        ctx->pc = 0x476854u;
        goto label_476854;
    }
    ctx->pc = 0x47684Cu;
    SET_GPR_U32(ctx, 31, 0x476854u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47684Cu, 0x476854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476854u;
label_476854:
    // 0x476854: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_476858:
    if (ctx->pc == 0x476858u) {
        ctx->pc = 0x47685Cu;
        goto label_47685c;
    }
    ctx->pc = 0x476854u;
    {
        const bool branch_taken_0x476854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x476854) {
            ctx->pc = 0x4768D8u;
            goto label_4768d8;
        }
    }
    ctx->pc = 0x47685Cu;
label_47685c:
    // 0x47685c: 0x8fa203a8  lw          $v0, 0x3A8($sp)
    ctx->pc = 0x47685cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
label_476860:
    // 0x476860: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_476864:
    if (ctx->pc == 0x476864u) {
        ctx->pc = 0x476868u;
        goto label_476868;
    }
    ctx->pc = 0x476860u;
    {
        const bool branch_taken_0x476860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x476860) {
            ctx->pc = 0x4768D8u;
            goto label_4768d8;
        }
    }
    ctx->pc = 0x476868u;
label_476868:
    // 0x476868: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x476868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_47686c:
    // 0x47686c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47686cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_476870:
    // 0x476870: 0x8fa603a4  lw          $a2, 0x3A4($sp)
    ctx->pc = 0x476870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 932)));
label_476874:
    // 0x476874: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x476874u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_476878:
    // 0x476878: 0x24e70db0  addiu       $a3, $a3, 0xDB0
    ctx->pc = 0x476878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3504));
label_47687c:
    // 0x47687c: 0x24080186  addiu       $t0, $zero, 0x186
    ctx->pc = 0x47687cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
label_476880:
    // 0x476880: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x476880u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_476884:
    // 0x476884: 0x25291320  addiu       $t1, $t1, 0x1320
    ctx->pc = 0x476884u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4896));
label_476888:
    // 0x476888: 0xc113940  jal         func_44E500
label_47688c:
    if (ctx->pc == 0x47688Cu) {
        ctx->pc = 0x476890u;
        goto label_476890;
    }
    ctx->pc = 0x476888u;
    SET_GPR_U32(ctx, 31, 0x476890u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x476888u, 0x476890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476890u;
label_476890:
    // 0x476890: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x476890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_476894:
    // 0x476894: 0x2785b48c  addiu       $a1, $gp, -0x4B74
    ctx->pc = 0x476894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947980));
label_476898:
    // 0x476898: 0xc115c24  jal         func_457090
label_47689c:
    if (ctx->pc == 0x47689Cu) {
        ctx->pc = 0x4768A0u;
        goto label_4768a0;
    }
    ctx->pc = 0x476898u;
    SET_GPR_U32(ctx, 31, 0x4768A0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x476898u, 0x4768A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4768A0u;
label_4768a0:
    // 0x4768a0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4768a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4768a4:
    // 0x4768a4: 0x8fa203a8  lw          $v0, 0x3A8($sp)
    ctx->pc = 0x4768a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
label_4768a8:
    // 0x4768a8: 0x40f809  jalr        $v0
label_4768ac:
    if (ctx->pc == 0x4768ACu) {
        ctx->pc = 0x4768B0u;
        goto label_4768b0;
    }
    ctx->pc = 0x4768A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4768B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4768A8u, 0x4768B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4768B0u;
label_4768b0:
    // 0x4768b0: 0xaf82b498  sw          $v0, -0x4B68($gp)
    ctx->pc = 0x4768b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947992), GPR_U32(ctx, 2));
label_4768b4:
    // 0x4768b4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4768b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4768b8:
    // 0x4768b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4768bc:
    if (ctx->pc == 0x4768BCu) {
        ctx->pc = 0x4768C0u;
        goto label_4768c0;
    }
    ctx->pc = 0x4768B8u;
    {
        const bool branch_taken_0x4768b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4768b8) {
            ctx->pc = 0x4768C8u;
            goto label_4768c8;
        }
    }
    ctx->pc = 0x4768C0u;
label_4768c0:
    // 0x4768c0: 0xd  break       0
    ctx->pc = 0x4768c0u;
    runtime->handleBreak(rdram, ctx);
label_4768c4:
    // 0x4768c4: 0x0  nop
    ctx->pc = 0x4768c4u;
    // NOP
label_4768c8:
    // 0x4768c8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4768c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4768cc:
    // 0x4768cc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4768ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4768d0:
    // 0x4768d0: 0xc11392c  jal         func_44E4B0
label_4768d4:
    if (ctx->pc == 0x4768D4u) {
        ctx->pc = 0x4768D8u;
        goto label_4768d8;
    }
    ctx->pc = 0x4768D0u;
    SET_GPR_U32(ctx, 31, 0x4768D8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4768D0u, 0x4768D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4768D8u;
label_4768d8:
    // 0x4768d8: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x4768d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4768dc:
    // 0x4768dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4768dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4768e0:
    // 0x4768e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4768e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4768e4:
    // 0x4768e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4768e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4768e8:
    // 0x4768e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4768e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4768ec:
    // 0x4768ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4768ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4768f0:
    // 0x4768f0: 0x27bd0430  addiu       $sp, $sp, 0x430
    ctx->pc = 0x4768f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_4768f4:
    // 0x4768f4: 0x3e00008  jr          $ra
label_4768f8:
    if (ctx->pc == 0x4768F8u) {
        ctx->pc = 0x4768FCu;
        goto label_4768fc;
    }
    ctx->pc = 0x4768F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4768F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4768FCu;
label_4768fc:
    // 0x4768fc: 0x0  nop
    ctx->pc = 0x4768fcu;
    // NOP
label_476900:
    // 0x476900: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x476900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_476904:
    // 0x476904: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x476904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_476908:
    // 0x476908: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x476908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47690c:
    // 0x47690c: 0xafa40280  sw          $a0, 0x280($sp)
    ctx->pc = 0x47690cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 4));
label_476910:
    // 0x476910: 0xc11c1fc  jal         func_4707F0
label_476914:
    if (ctx->pc == 0x476914u) {
        ctx->pc = 0x476918u;
        goto label_476918;
    }
    ctx->pc = 0x476910u;
    SET_GPR_U32(ctx, 31, 0x476918u);
    ctx->pc = 0x4707F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4707F0u, 0x476910u, 0x476918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476918u;
label_476918:
    // 0x476918: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_47691c:
    if (ctx->pc == 0x47691Cu) {
        ctx->pc = 0x476920u;
        goto label_476920;
    }
    ctx->pc = 0x476918u;
    {
        const bool branch_taken_0x476918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x476918) {
            ctx->pc = 0x4769C8u;
            goto label_4769c8;
        }
    }
    ctx->pc = 0x476920u;
label_476920:
    // 0x476920: 0x8f82b49c  lw          $v0, -0x4B64($gp)
    ctx->pc = 0x476920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947996)));
label_476924:
    // 0x476924: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_476928:
    if (ctx->pc == 0x476928u) {
        ctx->pc = 0x47692Cu;
        goto label_47692c;
    }
    ctx->pc = 0x476924u;
    {
        const bool branch_taken_0x476924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x476924) {
            ctx->pc = 0x4769C8u;
            goto label_4769c8;
        }
    }
    ctx->pc = 0x47692Cu;
label_47692c:
    // 0x47692c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47692cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_476930:
    // 0x476930: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x476930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_476934:
    // 0x476934: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x476934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_476938:
    // 0x476938: 0xc115ee8  jal         func_457BA0
label_47693c:
    if (ctx->pc == 0x47693Cu) {
        ctx->pc = 0x476940u;
        goto label_476940;
    }
    ctx->pc = 0x476938u;
    SET_GPR_U32(ctx, 31, 0x476940u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x476938u, 0x476940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476940u;
label_476940:
    // 0x476940: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_476944:
    if (ctx->pc == 0x476944u) {
        ctx->pc = 0x476948u;
        goto label_476948;
    }
    ctx->pc = 0x476940u;
    {
        const bool branch_taken_0x476940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x476940) {
            ctx->pc = 0x4769C8u;
            goto label_4769c8;
        }
    }
    ctx->pc = 0x476948u;
label_476948:
    // 0x476948: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x476948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_47694c:
    // 0x47694c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_476950:
    if (ctx->pc == 0x476950u) {
        ctx->pc = 0x476954u;
        goto label_476954;
    }
    ctx->pc = 0x47694Cu;
    {
        const bool branch_taken_0x47694c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47694c) {
            ctx->pc = 0x4769C8u;
            goto label_4769c8;
        }
    }
    ctx->pc = 0x476954u;
label_476954:
    // 0x476954: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x476954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_476958:
    // 0x476958: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x476958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47695c:
    // 0x47695c: 0x8fa60274  lw          $a2, 0x274($sp)
    ctx->pc = 0x47695cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_476960:
    // 0x476960: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x476960u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_476964:
    // 0x476964: 0x24e70db0  addiu       $a3, $a3, 0xDB0
    ctx->pc = 0x476964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3504));
label_476968:
    // 0x476968: 0x2408018e  addiu       $t0, $zero, 0x18E
    ctx->pc = 0x476968u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 398));
label_47696c:
    // 0x47696c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47696cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_476970:
    // 0x476970: 0x25290f10  addiu       $t1, $t1, 0xF10
    ctx->pc = 0x476970u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3856));
label_476974:
    // 0x476974: 0xc113940  jal         func_44E500
label_476978:
    if (ctx->pc == 0x476978u) {
        ctx->pc = 0x47697Cu;
        goto label_47697c;
    }
    ctx->pc = 0x476974u;
    SET_GPR_U32(ctx, 31, 0x47697Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x476974u, 0x47697Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47697Cu;
label_47697c:
    // 0x47697c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x47697cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_476980:
    // 0x476980: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x476980u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_476984:
    // 0x476984: 0x24a50ff0  addiu       $a1, $a1, 0xFF0
    ctx->pc = 0x476984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4080));
label_476988:
    // 0x476988: 0xc115c24  jal         func_457090
label_47698c:
    if (ctx->pc == 0x47698Cu) {
        ctx->pc = 0x476990u;
        goto label_476990;
    }
    ctx->pc = 0x476988u;
    SET_GPR_U32(ctx, 31, 0x476990u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x476988u, 0x476990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476990u;
label_476990:
    // 0x476990: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x476990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_476994:
    // 0x476994: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x476994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_476998:
    // 0x476998: 0x40f809  jalr        $v0
label_47699c:
    if (ctx->pc == 0x47699Cu) {
        ctx->pc = 0x4769A0u;
        goto label_4769a0;
    }
    ctx->pc = 0x476998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4769A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476998u, 0x4769A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4769A0u;
label_4769a0:
    // 0x4769a0: 0xaf82b49c  sw          $v0, -0x4B64($gp)
    ctx->pc = 0x4769a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947996), GPR_U32(ctx, 2));
label_4769a4:
    // 0x4769a4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x4769a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_4769a8:
    // 0x4769a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4769ac:
    if (ctx->pc == 0x4769ACu) {
        ctx->pc = 0x4769B0u;
        goto label_4769b0;
    }
    ctx->pc = 0x4769A8u;
    {
        const bool branch_taken_0x4769a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4769a8) {
            ctx->pc = 0x4769B8u;
            goto label_4769b8;
        }
    }
    ctx->pc = 0x4769B0u;
label_4769b0:
    // 0x4769b0: 0xd  break       0
    ctx->pc = 0x4769b0u;
    runtime->handleBreak(rdram, ctx);
label_4769b4:
    // 0x4769b4: 0x0  nop
    ctx->pc = 0x4769b4u;
    // NOP
label_4769b8:
    // 0x4769b8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x4769b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4769bc:
    // 0x4769bc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4769bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4769c0:
    // 0x4769c0: 0xc11392c  jal         func_44E4B0
label_4769c4:
    if (ctx->pc == 0x4769C4u) {
        ctx->pc = 0x4769C8u;
        goto label_4769c8;
    }
    ctx->pc = 0x4769C0u;
    SET_GPR_U32(ctx, 31, 0x4769C8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4769C0u, 0x4769C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4769C8u;
label_4769c8:
    // 0x4769c8: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x4769c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_4769cc:
    // 0x4769cc: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x4769ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4769d0:
    // 0x4769d0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4769d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4769d4:
    // 0x4769d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4769d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4769d8:
    // 0x4769d8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_4769dc:
    if (ctx->pc == 0x4769DCu) {
        ctx->pc = 0x4769E0u;
        goto label_4769e0;
    }
    ctx->pc = 0x4769D8u;
    {
        const bool branch_taken_0x4769d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4769d8) {
            ctx->pc = 0x476A88u;
            goto label_476a88;
        }
    }
    ctx->pc = 0x4769E0u;
label_4769e0:
    // 0x4769e0: 0x8f82b4a0  lw          $v0, -0x4B60($gp)
    ctx->pc = 0x4769e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948000)));
label_4769e4:
    // 0x4769e4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4769e8:
    if (ctx->pc == 0x4769E8u) {
        ctx->pc = 0x4769ECu;
        goto label_4769ec;
    }
    ctx->pc = 0x4769E4u;
    {
        const bool branch_taken_0x4769e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4769e4) {
            ctx->pc = 0x476A88u;
            goto label_476a88;
        }
    }
    ctx->pc = 0x4769ECu;
label_4769ec:
    // 0x4769ec: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4769ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4769f0:
    // 0x4769f0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4769f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4769f4:
    // 0x4769f4: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x4769f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_4769f8:
    // 0x4769f8: 0xc115ee8  jal         func_457BA0
label_4769fc:
    if (ctx->pc == 0x4769FCu) {
        ctx->pc = 0x476A00u;
        goto label_476a00;
    }
    ctx->pc = 0x4769F8u;
    SET_GPR_U32(ctx, 31, 0x476A00u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4769F8u, 0x476A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476A00u;
label_476a00:
    // 0x476a00: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_476a04:
    if (ctx->pc == 0x476A04u) {
        ctx->pc = 0x476A08u;
        goto label_476a08;
    }
    ctx->pc = 0x476A00u;
    {
        const bool branch_taken_0x476a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x476a00) {
            ctx->pc = 0x476A88u;
            goto label_476a88;
        }
    }
    ctx->pc = 0x476A08u;
label_476a08:
    // 0x476a08: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x476a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_476a0c:
    // 0x476a0c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_476a10:
    if (ctx->pc == 0x476A10u) {
        ctx->pc = 0x476A14u;
        goto label_476a14;
    }
    ctx->pc = 0x476A0Cu;
    {
        const bool branch_taken_0x476a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x476a0c) {
            ctx->pc = 0x476A88u;
            goto label_476a88;
        }
    }
    ctx->pc = 0x476A14u;
label_476a14:
    // 0x476a14: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x476a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_476a18:
    // 0x476a18: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x476a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_476a1c:
    // 0x476a1c: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x476a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_476a20:
    // 0x476a20: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x476a20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_476a24:
    // 0x476a24: 0x24e70db0  addiu       $a3, $a3, 0xDB0
    ctx->pc = 0x476a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3504));
label_476a28:
    // 0x476a28: 0x2408018f  addiu       $t0, $zero, 0x18F
    ctx->pc = 0x476a28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 399));
label_476a2c:
    // 0x476a2c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x476a2cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_476a30:
    // 0x476a30: 0x25290e50  addiu       $t1, $t1, 0xE50
    ctx->pc = 0x476a30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3664));
label_476a34:
    // 0x476a34: 0xc113940  jal         func_44E500
label_476a38:
    if (ctx->pc == 0x476A38u) {
        ctx->pc = 0x476A3Cu;
        goto label_476a3c;
    }
    ctx->pc = 0x476A34u;
    SET_GPR_U32(ctx, 31, 0x476A3Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x476A34u, 0x476A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476A3Cu;
label_476a3c:
    // 0x476a3c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x476a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_476a40:
    // 0x476a40: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x476a40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_476a44:
    // 0x476a44: 0x24a51060  addiu       $a1, $a1, 0x1060
    ctx->pc = 0x476a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4192));
label_476a48:
    // 0x476a48: 0xc115c24  jal         func_457090
label_476a4c:
    if (ctx->pc == 0x476A4Cu) {
        ctx->pc = 0x476A50u;
        goto label_476a50;
    }
    ctx->pc = 0x476A48u;
    SET_GPR_U32(ctx, 31, 0x476A50u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x476A48u, 0x476A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476A50u;
label_476a50:
    // 0x476a50: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x476a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_476a54:
    // 0x476a54: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x476a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_476a58:
    // 0x476a58: 0x40f809  jalr        $v0
label_476a5c:
    if (ctx->pc == 0x476A5Cu) {
        ctx->pc = 0x476A60u;
        goto label_476a60;
    }
    ctx->pc = 0x476A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x476A60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476A58u, 0x476A60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x476A60u;
label_476a60:
    // 0x476a60: 0xaf82b4a0  sw          $v0, -0x4B60($gp)
    ctx->pc = 0x476a60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948000), GPR_U32(ctx, 2));
label_476a64:
    // 0x476a64: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x476a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_476a68:
    // 0x476a68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_476a6c:
    if (ctx->pc == 0x476A6Cu) {
        ctx->pc = 0x476A70u;
        goto label_476a70;
    }
    ctx->pc = 0x476A68u;
    {
        const bool branch_taken_0x476a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x476a68) {
            ctx->pc = 0x476A78u;
            goto label_476a78;
        }
    }
    ctx->pc = 0x476A70u;
label_476a70:
    // 0x476a70: 0xd  break       0
    ctx->pc = 0x476a70u;
    runtime->handleBreak(rdram, ctx);
label_476a74:
    // 0x476a74: 0x0  nop
    ctx->pc = 0x476a74u;
    // NOP
label_476a78:
    // 0x476a78: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x476a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_476a7c:
    // 0x476a7c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x476a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_476a80:
    // 0x476a80: 0xc11392c  jal         func_44E4B0
label_476a84:
    if (ctx->pc == 0x476A84u) {
        ctx->pc = 0x476A88u;
        goto label_476a88;
    }
    ctx->pc = 0x476A80u;
    SET_GPR_U32(ctx, 31, 0x476A88u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x476A80u, 0x476A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476A88u;
label_476a88:
    // 0x476a88: 0xc11c200  jal         func_470800
label_476a8c:
    if (ctx->pc == 0x476A8Cu) {
        ctx->pc = 0x476A90u;
        goto label_476a90;
    }
    ctx->pc = 0x476A88u;
    SET_GPR_U32(ctx, 31, 0x476A90u);
    ctx->pc = 0x470800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470800u, 0x476A88u, 0x476A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476A90u;
label_476a90:
    // 0x476a90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x476a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_476a94:
    // 0x476a94: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_476a98:
    if (ctx->pc == 0x476A98u) {
        ctx->pc = 0x476A9Cu;
        goto label_476a9c;
    }
    ctx->pc = 0x476A94u;
    {
        const bool branch_taken_0x476a94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x476a94) {
            ctx->pc = 0x476AA8u;
            goto label_476aa8;
        }
    }
    ctx->pc = 0x476A9Cu;
label_476a9c:
    // 0x476a9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x476a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_476aa0:
    // 0x476aa0: 0x10000007  b           . + 4 + (0x7 << 2)
label_476aa4:
    if (ctx->pc == 0x476AA4u) {
        ctx->pc = 0x476AA8u;
        goto label_476aa8;
    }
    ctx->pc = 0x476AA0u;
    {
        const bool branch_taken_0x476aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x476aa0) {
            ctx->pc = 0x476AC0u;
            goto label_476ac0;
        }
    }
    ctx->pc = 0x476AA8u;
label_476aa8:
    // 0x476aa8: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x476aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_476aac:
    // 0x476aac: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x476aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_476ab0:
    // 0x476ab0: 0xc0ecddc  jal         func_3B3770
label_476ab4:
    if (ctx->pc == 0x476AB4u) {
        ctx->pc = 0x476AB8u;
        goto label_476ab8;
    }
    ctx->pc = 0x476AB0u;
    SET_GPR_U32(ctx, 31, 0x476AB8u);
    ctx->pc = 0x3B3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3770u, 0x476AB0u, 0x476AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476AB8u;
label_476ab8:
    // 0x476ab8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x476ab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_476abc:
    // 0x476abc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x476abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_476ac0:
    // 0x476ac0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x476ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_476ac4:
    // 0x476ac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x476ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_476ac8:
    // 0x476ac8: 0x27bd0290  addiu       $sp, $sp, 0x290
    ctx->pc = 0x476ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_476acc:
    // 0x476acc: 0x3e00008  jr          $ra
label_476ad0:
    if (ctx->pc == 0x476AD0u) {
        ctx->pc = 0x476AD4u;
        goto label_476ad4;
    }
    ctx->pc = 0x476ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x476AD4u;
label_476ad4:
    // 0x476ad4: 0x0  nop
    ctx->pc = 0x476ad4u;
    // NOP
label_476ad8:
    // 0x476ad8: 0x0  nop
    ctx->pc = 0x476ad8u;
    // NOP
label_476adc:
    // 0x476adc: 0x0  nop
    ctx->pc = 0x476adcu;
    // NOP
    ctx->pc = 0x476ae0u;
}
