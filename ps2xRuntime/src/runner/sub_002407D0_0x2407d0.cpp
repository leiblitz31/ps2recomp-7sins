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

// Function: sub_002407D0
// Address: 0x2407d0 - 0x241400
void sub_002407D0_0x2407d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002407D0_0x2407d0");
#endif

    switch (ctx->pc) {
        case 0x2407d0u: goto label_2407d0;
        case 0x2407d4u: goto label_2407d4;
        case 0x2407d8u: goto label_2407d8;
        case 0x2407dcu: goto label_2407dc;
        case 0x2407e0u: goto label_2407e0;
        case 0x2407e4u: goto label_2407e4;
        case 0x2407e8u: goto label_2407e8;
        case 0x2407ecu: goto label_2407ec;
        case 0x2407f0u: goto label_2407f0;
        case 0x2407f4u: goto label_2407f4;
        case 0x2407f8u: goto label_2407f8;
        case 0x2407fcu: goto label_2407fc;
        case 0x240800u: goto label_240800;
        case 0x240804u: goto label_240804;
        case 0x240808u: goto label_240808;
        case 0x24080cu: goto label_24080c;
        case 0x240810u: goto label_240810;
        case 0x240814u: goto label_240814;
        case 0x240818u: goto label_240818;
        case 0x24081cu: goto label_24081c;
        case 0x240820u: goto label_240820;
        case 0x240824u: goto label_240824;
        case 0x240828u: goto label_240828;
        case 0x24082cu: goto label_24082c;
        case 0x240830u: goto label_240830;
        case 0x240834u: goto label_240834;
        case 0x240838u: goto label_240838;
        case 0x24083cu: goto label_24083c;
        case 0x240840u: goto label_240840;
        case 0x240844u: goto label_240844;
        case 0x240848u: goto label_240848;
        case 0x24084cu: goto label_24084c;
        case 0x240850u: goto label_240850;
        case 0x240854u: goto label_240854;
        case 0x240858u: goto label_240858;
        case 0x24085cu: goto label_24085c;
        case 0x240860u: goto label_240860;
        case 0x240864u: goto label_240864;
        case 0x240868u: goto label_240868;
        case 0x24086cu: goto label_24086c;
        case 0x240870u: goto label_240870;
        case 0x240874u: goto label_240874;
        case 0x240878u: goto label_240878;
        case 0x24087cu: goto label_24087c;
        case 0x240880u: goto label_240880;
        case 0x240884u: goto label_240884;
        case 0x240888u: goto label_240888;
        case 0x24088cu: goto label_24088c;
        case 0x240890u: goto label_240890;
        case 0x240894u: goto label_240894;
        case 0x240898u: goto label_240898;
        case 0x24089cu: goto label_24089c;
        case 0x2408a0u: goto label_2408a0;
        case 0x2408a4u: goto label_2408a4;
        case 0x2408a8u: goto label_2408a8;
        case 0x2408acu: goto label_2408ac;
        case 0x2408b0u: goto label_2408b0;
        case 0x2408b4u: goto label_2408b4;
        case 0x2408b8u: goto label_2408b8;
        case 0x2408bcu: goto label_2408bc;
        case 0x2408c0u: goto label_2408c0;
        case 0x2408c4u: goto label_2408c4;
        case 0x2408c8u: goto label_2408c8;
        case 0x2408ccu: goto label_2408cc;
        case 0x2408d0u: goto label_2408d0;
        case 0x2408d4u: goto label_2408d4;
        case 0x2408d8u: goto label_2408d8;
        case 0x2408dcu: goto label_2408dc;
        case 0x2408e0u: goto label_2408e0;
        case 0x2408e4u: goto label_2408e4;
        case 0x2408e8u: goto label_2408e8;
        case 0x2408ecu: goto label_2408ec;
        case 0x2408f0u: goto label_2408f0;
        case 0x2408f4u: goto label_2408f4;
        case 0x2408f8u: goto label_2408f8;
        case 0x2408fcu: goto label_2408fc;
        case 0x240900u: goto label_240900;
        case 0x240904u: goto label_240904;
        case 0x240908u: goto label_240908;
        case 0x24090cu: goto label_24090c;
        case 0x240910u: goto label_240910;
        case 0x240914u: goto label_240914;
        case 0x240918u: goto label_240918;
        case 0x24091cu: goto label_24091c;
        case 0x240920u: goto label_240920;
        case 0x240924u: goto label_240924;
        case 0x240928u: goto label_240928;
        case 0x24092cu: goto label_24092c;
        case 0x240930u: goto label_240930;
        case 0x240934u: goto label_240934;
        case 0x240938u: goto label_240938;
        case 0x24093cu: goto label_24093c;
        case 0x240940u: goto label_240940;
        case 0x240944u: goto label_240944;
        case 0x240948u: goto label_240948;
        case 0x24094cu: goto label_24094c;
        case 0x240950u: goto label_240950;
        case 0x240954u: goto label_240954;
        case 0x240958u: goto label_240958;
        case 0x24095cu: goto label_24095c;
        case 0x240960u: goto label_240960;
        case 0x240964u: goto label_240964;
        case 0x240968u: goto label_240968;
        case 0x24096cu: goto label_24096c;
        case 0x240970u: goto label_240970;
        case 0x240974u: goto label_240974;
        case 0x240978u: goto label_240978;
        case 0x24097cu: goto label_24097c;
        case 0x240980u: goto label_240980;
        case 0x240984u: goto label_240984;
        case 0x240988u: goto label_240988;
        case 0x24098cu: goto label_24098c;
        case 0x240990u: goto label_240990;
        case 0x240994u: goto label_240994;
        case 0x240998u: goto label_240998;
        case 0x24099cu: goto label_24099c;
        case 0x2409a0u: goto label_2409a0;
        case 0x2409a4u: goto label_2409a4;
        case 0x2409a8u: goto label_2409a8;
        case 0x2409acu: goto label_2409ac;
        case 0x2409b0u: goto label_2409b0;
        case 0x2409b4u: goto label_2409b4;
        case 0x2409b8u: goto label_2409b8;
        case 0x2409bcu: goto label_2409bc;
        case 0x2409c0u: goto label_2409c0;
        case 0x2409c4u: goto label_2409c4;
        case 0x2409c8u: goto label_2409c8;
        case 0x2409ccu: goto label_2409cc;
        case 0x2409d0u: goto label_2409d0;
        case 0x2409d4u: goto label_2409d4;
        case 0x2409d8u: goto label_2409d8;
        case 0x2409dcu: goto label_2409dc;
        case 0x2409e0u: goto label_2409e0;
        case 0x2409e4u: goto label_2409e4;
        case 0x2409e8u: goto label_2409e8;
        case 0x2409ecu: goto label_2409ec;
        case 0x2409f0u: goto label_2409f0;
        case 0x2409f4u: goto label_2409f4;
        case 0x2409f8u: goto label_2409f8;
        case 0x2409fcu: goto label_2409fc;
        case 0x240a00u: goto label_240a00;
        case 0x240a04u: goto label_240a04;
        case 0x240a08u: goto label_240a08;
        case 0x240a0cu: goto label_240a0c;
        case 0x240a10u: goto label_240a10;
        case 0x240a14u: goto label_240a14;
        case 0x240a18u: goto label_240a18;
        case 0x240a1cu: goto label_240a1c;
        case 0x240a20u: goto label_240a20;
        case 0x240a24u: goto label_240a24;
        case 0x240a28u: goto label_240a28;
        case 0x240a2cu: goto label_240a2c;
        case 0x240a30u: goto label_240a30;
        case 0x240a34u: goto label_240a34;
        case 0x240a38u: goto label_240a38;
        case 0x240a3cu: goto label_240a3c;
        case 0x240a40u: goto label_240a40;
        case 0x240a44u: goto label_240a44;
        case 0x240a48u: goto label_240a48;
        case 0x240a4cu: goto label_240a4c;
        case 0x240a50u: goto label_240a50;
        case 0x240a54u: goto label_240a54;
        case 0x240a58u: goto label_240a58;
        case 0x240a5cu: goto label_240a5c;
        case 0x240a60u: goto label_240a60;
        case 0x240a64u: goto label_240a64;
        case 0x240a68u: goto label_240a68;
        case 0x240a6cu: goto label_240a6c;
        case 0x240a70u: goto label_240a70;
        case 0x240a74u: goto label_240a74;
        case 0x240a78u: goto label_240a78;
        case 0x240a7cu: goto label_240a7c;
        case 0x240a80u: goto label_240a80;
        case 0x240a84u: goto label_240a84;
        case 0x240a88u: goto label_240a88;
        case 0x240a8cu: goto label_240a8c;
        case 0x240a90u: goto label_240a90;
        case 0x240a94u: goto label_240a94;
        case 0x240a98u: goto label_240a98;
        case 0x240a9cu: goto label_240a9c;
        case 0x240aa0u: goto label_240aa0;
        case 0x240aa4u: goto label_240aa4;
        case 0x240aa8u: goto label_240aa8;
        case 0x240aacu: goto label_240aac;
        case 0x240ab0u: goto label_240ab0;
        case 0x240ab4u: goto label_240ab4;
        case 0x240ab8u: goto label_240ab8;
        case 0x240abcu: goto label_240abc;
        case 0x240ac0u: goto label_240ac0;
        case 0x240ac4u: goto label_240ac4;
        case 0x240ac8u: goto label_240ac8;
        case 0x240accu: goto label_240acc;
        case 0x240ad0u: goto label_240ad0;
        case 0x240ad4u: goto label_240ad4;
        case 0x240ad8u: goto label_240ad8;
        case 0x240adcu: goto label_240adc;
        case 0x240ae0u: goto label_240ae0;
        case 0x240ae4u: goto label_240ae4;
        case 0x240ae8u: goto label_240ae8;
        case 0x240aecu: goto label_240aec;
        case 0x240af0u: goto label_240af0;
        case 0x240af4u: goto label_240af4;
        case 0x240af8u: goto label_240af8;
        case 0x240afcu: goto label_240afc;
        case 0x240b00u: goto label_240b00;
        case 0x240b04u: goto label_240b04;
        case 0x240b08u: goto label_240b08;
        case 0x240b0cu: goto label_240b0c;
        case 0x240b10u: goto label_240b10;
        case 0x240b14u: goto label_240b14;
        case 0x240b18u: goto label_240b18;
        case 0x240b1cu: goto label_240b1c;
        case 0x240b20u: goto label_240b20;
        case 0x240b24u: goto label_240b24;
        case 0x240b28u: goto label_240b28;
        case 0x240b2cu: goto label_240b2c;
        case 0x240b30u: goto label_240b30;
        case 0x240b34u: goto label_240b34;
        case 0x240b38u: goto label_240b38;
        case 0x240b3cu: goto label_240b3c;
        case 0x240b40u: goto label_240b40;
        case 0x240b44u: goto label_240b44;
        case 0x240b48u: goto label_240b48;
        case 0x240b4cu: goto label_240b4c;
        case 0x240b50u: goto label_240b50;
        case 0x240b54u: goto label_240b54;
        case 0x240b58u: goto label_240b58;
        case 0x240b5cu: goto label_240b5c;
        case 0x240b60u: goto label_240b60;
        case 0x240b64u: goto label_240b64;
        case 0x240b68u: goto label_240b68;
        case 0x240b6cu: goto label_240b6c;
        case 0x240b70u: goto label_240b70;
        case 0x240b74u: goto label_240b74;
        case 0x240b78u: goto label_240b78;
        case 0x240b7cu: goto label_240b7c;
        case 0x240b80u: goto label_240b80;
        case 0x240b84u: goto label_240b84;
        case 0x240b88u: goto label_240b88;
        case 0x240b8cu: goto label_240b8c;
        case 0x240b90u: goto label_240b90;
        case 0x240b94u: goto label_240b94;
        case 0x240b98u: goto label_240b98;
        case 0x240b9cu: goto label_240b9c;
        case 0x240ba0u: goto label_240ba0;
        case 0x240ba4u: goto label_240ba4;
        case 0x240ba8u: goto label_240ba8;
        case 0x240bacu: goto label_240bac;
        case 0x240bb0u: goto label_240bb0;
        case 0x240bb4u: goto label_240bb4;
        case 0x240bb8u: goto label_240bb8;
        case 0x240bbcu: goto label_240bbc;
        case 0x240bc0u: goto label_240bc0;
        case 0x240bc4u: goto label_240bc4;
        case 0x240bc8u: goto label_240bc8;
        case 0x240bccu: goto label_240bcc;
        case 0x240bd0u: goto label_240bd0;
        case 0x240bd4u: goto label_240bd4;
        case 0x240bd8u: goto label_240bd8;
        case 0x240bdcu: goto label_240bdc;
        case 0x240be0u: goto label_240be0;
        case 0x240be4u: goto label_240be4;
        case 0x240be8u: goto label_240be8;
        case 0x240becu: goto label_240bec;
        case 0x240bf0u: goto label_240bf0;
        case 0x240bf4u: goto label_240bf4;
        case 0x240bf8u: goto label_240bf8;
        case 0x240bfcu: goto label_240bfc;
        case 0x240c00u: goto label_240c00;
        case 0x240c04u: goto label_240c04;
        case 0x240c08u: goto label_240c08;
        case 0x240c0cu: goto label_240c0c;
        case 0x240c10u: goto label_240c10;
        case 0x240c14u: goto label_240c14;
        case 0x240c18u: goto label_240c18;
        case 0x240c1cu: goto label_240c1c;
        case 0x240c20u: goto label_240c20;
        case 0x240c24u: goto label_240c24;
        case 0x240c28u: goto label_240c28;
        case 0x240c2cu: goto label_240c2c;
        case 0x240c30u: goto label_240c30;
        case 0x240c34u: goto label_240c34;
        case 0x240c38u: goto label_240c38;
        case 0x240c3cu: goto label_240c3c;
        case 0x240c40u: goto label_240c40;
        case 0x240c44u: goto label_240c44;
        case 0x240c48u: goto label_240c48;
        case 0x240c4cu: goto label_240c4c;
        case 0x240c50u: goto label_240c50;
        case 0x240c54u: goto label_240c54;
        case 0x240c58u: goto label_240c58;
        case 0x240c5cu: goto label_240c5c;
        case 0x240c60u: goto label_240c60;
        case 0x240c64u: goto label_240c64;
        case 0x240c68u: goto label_240c68;
        case 0x240c6cu: goto label_240c6c;
        case 0x240c70u: goto label_240c70;
        case 0x240c74u: goto label_240c74;
        case 0x240c78u: goto label_240c78;
        case 0x240c7cu: goto label_240c7c;
        case 0x240c80u: goto label_240c80;
        case 0x240c84u: goto label_240c84;
        case 0x240c88u: goto label_240c88;
        case 0x240c8cu: goto label_240c8c;
        case 0x240c90u: goto label_240c90;
        case 0x240c94u: goto label_240c94;
        case 0x240c98u: goto label_240c98;
        case 0x240c9cu: goto label_240c9c;
        case 0x240ca0u: goto label_240ca0;
        case 0x240ca4u: goto label_240ca4;
        case 0x240ca8u: goto label_240ca8;
        case 0x240cacu: goto label_240cac;
        case 0x240cb0u: goto label_240cb0;
        case 0x240cb4u: goto label_240cb4;
        case 0x240cb8u: goto label_240cb8;
        case 0x240cbcu: goto label_240cbc;
        case 0x240cc0u: goto label_240cc0;
        case 0x240cc4u: goto label_240cc4;
        case 0x240cc8u: goto label_240cc8;
        case 0x240cccu: goto label_240ccc;
        case 0x240cd0u: goto label_240cd0;
        case 0x240cd4u: goto label_240cd4;
        case 0x240cd8u: goto label_240cd8;
        case 0x240cdcu: goto label_240cdc;
        case 0x240ce0u: goto label_240ce0;
        case 0x240ce4u: goto label_240ce4;
        case 0x240ce8u: goto label_240ce8;
        case 0x240cecu: goto label_240cec;
        case 0x240cf0u: goto label_240cf0;
        case 0x240cf4u: goto label_240cf4;
        case 0x240cf8u: goto label_240cf8;
        case 0x240cfcu: goto label_240cfc;
        case 0x240d00u: goto label_240d00;
        case 0x240d04u: goto label_240d04;
        case 0x240d08u: goto label_240d08;
        case 0x240d0cu: goto label_240d0c;
        case 0x240d10u: goto label_240d10;
        case 0x240d14u: goto label_240d14;
        case 0x240d18u: goto label_240d18;
        case 0x240d1cu: goto label_240d1c;
        case 0x240d20u: goto label_240d20;
        case 0x240d24u: goto label_240d24;
        case 0x240d28u: goto label_240d28;
        case 0x240d2cu: goto label_240d2c;
        case 0x240d30u: goto label_240d30;
        case 0x240d34u: goto label_240d34;
        case 0x240d38u: goto label_240d38;
        case 0x240d3cu: goto label_240d3c;
        case 0x240d40u: goto label_240d40;
        case 0x240d44u: goto label_240d44;
        case 0x240d48u: goto label_240d48;
        case 0x240d4cu: goto label_240d4c;
        case 0x240d50u: goto label_240d50;
        case 0x240d54u: goto label_240d54;
        case 0x240d58u: goto label_240d58;
        case 0x240d5cu: goto label_240d5c;
        case 0x240d60u: goto label_240d60;
        case 0x240d64u: goto label_240d64;
        case 0x240d68u: goto label_240d68;
        case 0x240d6cu: goto label_240d6c;
        case 0x240d70u: goto label_240d70;
        case 0x240d74u: goto label_240d74;
        case 0x240d78u: goto label_240d78;
        case 0x240d7cu: goto label_240d7c;
        case 0x240d80u: goto label_240d80;
        case 0x240d84u: goto label_240d84;
        case 0x240d88u: goto label_240d88;
        case 0x240d8cu: goto label_240d8c;
        case 0x240d90u: goto label_240d90;
        case 0x240d94u: goto label_240d94;
        case 0x240d98u: goto label_240d98;
        case 0x240d9cu: goto label_240d9c;
        case 0x240da0u: goto label_240da0;
        case 0x240da4u: goto label_240da4;
        case 0x240da8u: goto label_240da8;
        case 0x240dacu: goto label_240dac;
        case 0x240db0u: goto label_240db0;
        case 0x240db4u: goto label_240db4;
        case 0x240db8u: goto label_240db8;
        case 0x240dbcu: goto label_240dbc;
        case 0x240dc0u: goto label_240dc0;
        case 0x240dc4u: goto label_240dc4;
        case 0x240dc8u: goto label_240dc8;
        case 0x240dccu: goto label_240dcc;
        case 0x240dd0u: goto label_240dd0;
        case 0x240dd4u: goto label_240dd4;
        case 0x240dd8u: goto label_240dd8;
        case 0x240ddcu: goto label_240ddc;
        case 0x240de0u: goto label_240de0;
        case 0x240de4u: goto label_240de4;
        case 0x240de8u: goto label_240de8;
        case 0x240decu: goto label_240dec;
        case 0x240df0u: goto label_240df0;
        case 0x240df4u: goto label_240df4;
        case 0x240df8u: goto label_240df8;
        case 0x240dfcu: goto label_240dfc;
        case 0x240e00u: goto label_240e00;
        case 0x240e04u: goto label_240e04;
        case 0x240e08u: goto label_240e08;
        case 0x240e0cu: goto label_240e0c;
        case 0x240e10u: goto label_240e10;
        case 0x240e14u: goto label_240e14;
        case 0x240e18u: goto label_240e18;
        case 0x240e1cu: goto label_240e1c;
        case 0x240e20u: goto label_240e20;
        case 0x240e24u: goto label_240e24;
        case 0x240e28u: goto label_240e28;
        case 0x240e2cu: goto label_240e2c;
        case 0x240e30u: goto label_240e30;
        case 0x240e34u: goto label_240e34;
        case 0x240e38u: goto label_240e38;
        case 0x240e3cu: goto label_240e3c;
        case 0x240e40u: goto label_240e40;
        case 0x240e44u: goto label_240e44;
        case 0x240e48u: goto label_240e48;
        case 0x240e4cu: goto label_240e4c;
        case 0x240e50u: goto label_240e50;
        case 0x240e54u: goto label_240e54;
        case 0x240e58u: goto label_240e58;
        case 0x240e5cu: goto label_240e5c;
        case 0x240e60u: goto label_240e60;
        case 0x240e64u: goto label_240e64;
        case 0x240e68u: goto label_240e68;
        case 0x240e6cu: goto label_240e6c;
        case 0x240e70u: goto label_240e70;
        case 0x240e74u: goto label_240e74;
        case 0x240e78u: goto label_240e78;
        case 0x240e7cu: goto label_240e7c;
        case 0x240e80u: goto label_240e80;
        case 0x240e84u: goto label_240e84;
        case 0x240e88u: goto label_240e88;
        case 0x240e8cu: goto label_240e8c;
        case 0x240e90u: goto label_240e90;
        case 0x240e94u: goto label_240e94;
        case 0x240e98u: goto label_240e98;
        case 0x240e9cu: goto label_240e9c;
        case 0x240ea0u: goto label_240ea0;
        case 0x240ea4u: goto label_240ea4;
        case 0x240ea8u: goto label_240ea8;
        case 0x240eacu: goto label_240eac;
        case 0x240eb0u: goto label_240eb0;
        case 0x240eb4u: goto label_240eb4;
        case 0x240eb8u: goto label_240eb8;
        case 0x240ebcu: goto label_240ebc;
        case 0x240ec0u: goto label_240ec0;
        case 0x240ec4u: goto label_240ec4;
        case 0x240ec8u: goto label_240ec8;
        case 0x240eccu: goto label_240ecc;
        case 0x240ed0u: goto label_240ed0;
        case 0x240ed4u: goto label_240ed4;
        case 0x240ed8u: goto label_240ed8;
        case 0x240edcu: goto label_240edc;
        case 0x240ee0u: goto label_240ee0;
        case 0x240ee4u: goto label_240ee4;
        case 0x240ee8u: goto label_240ee8;
        case 0x240eecu: goto label_240eec;
        case 0x240ef0u: goto label_240ef0;
        case 0x240ef4u: goto label_240ef4;
        case 0x240ef8u: goto label_240ef8;
        case 0x240efcu: goto label_240efc;
        case 0x240f00u: goto label_240f00;
        case 0x240f04u: goto label_240f04;
        case 0x240f08u: goto label_240f08;
        case 0x240f0cu: goto label_240f0c;
        case 0x240f10u: goto label_240f10;
        case 0x240f14u: goto label_240f14;
        case 0x240f18u: goto label_240f18;
        case 0x240f1cu: goto label_240f1c;
        case 0x240f20u: goto label_240f20;
        case 0x240f24u: goto label_240f24;
        case 0x240f28u: goto label_240f28;
        case 0x240f2cu: goto label_240f2c;
        case 0x240f30u: goto label_240f30;
        case 0x240f34u: goto label_240f34;
        case 0x240f38u: goto label_240f38;
        case 0x240f3cu: goto label_240f3c;
        case 0x240f40u: goto label_240f40;
        case 0x240f44u: goto label_240f44;
        case 0x240f48u: goto label_240f48;
        case 0x240f4cu: goto label_240f4c;
        case 0x240f50u: goto label_240f50;
        case 0x240f54u: goto label_240f54;
        case 0x240f58u: goto label_240f58;
        case 0x240f5cu: goto label_240f5c;
        case 0x240f60u: goto label_240f60;
        case 0x240f64u: goto label_240f64;
        case 0x240f68u: goto label_240f68;
        case 0x240f6cu: goto label_240f6c;
        case 0x240f70u: goto label_240f70;
        case 0x240f74u: goto label_240f74;
        case 0x240f78u: goto label_240f78;
        case 0x240f7cu: goto label_240f7c;
        case 0x240f80u: goto label_240f80;
        case 0x240f84u: goto label_240f84;
        case 0x240f88u: goto label_240f88;
        case 0x240f8cu: goto label_240f8c;
        case 0x240f90u: goto label_240f90;
        case 0x240f94u: goto label_240f94;
        case 0x240f98u: goto label_240f98;
        case 0x240f9cu: goto label_240f9c;
        case 0x240fa0u: goto label_240fa0;
        case 0x240fa4u: goto label_240fa4;
        case 0x240fa8u: goto label_240fa8;
        case 0x240facu: goto label_240fac;
        case 0x240fb0u: goto label_240fb0;
        case 0x240fb4u: goto label_240fb4;
        case 0x240fb8u: goto label_240fb8;
        case 0x240fbcu: goto label_240fbc;
        case 0x240fc0u: goto label_240fc0;
        case 0x240fc4u: goto label_240fc4;
        case 0x240fc8u: goto label_240fc8;
        case 0x240fccu: goto label_240fcc;
        case 0x240fd0u: goto label_240fd0;
        case 0x240fd4u: goto label_240fd4;
        case 0x240fd8u: goto label_240fd8;
        case 0x240fdcu: goto label_240fdc;
        case 0x240fe0u: goto label_240fe0;
        case 0x240fe4u: goto label_240fe4;
        case 0x240fe8u: goto label_240fe8;
        case 0x240fecu: goto label_240fec;
        case 0x240ff0u: goto label_240ff0;
        case 0x240ff4u: goto label_240ff4;
        case 0x240ff8u: goto label_240ff8;
        case 0x240ffcu: goto label_240ffc;
        case 0x241000u: goto label_241000;
        case 0x241004u: goto label_241004;
        case 0x241008u: goto label_241008;
        case 0x24100cu: goto label_24100c;
        case 0x241010u: goto label_241010;
        case 0x241014u: goto label_241014;
        case 0x241018u: goto label_241018;
        case 0x24101cu: goto label_24101c;
        case 0x241020u: goto label_241020;
        case 0x241024u: goto label_241024;
        case 0x241028u: goto label_241028;
        case 0x24102cu: goto label_24102c;
        case 0x241030u: goto label_241030;
        case 0x241034u: goto label_241034;
        case 0x241038u: goto label_241038;
        case 0x24103cu: goto label_24103c;
        case 0x241040u: goto label_241040;
        case 0x241044u: goto label_241044;
        case 0x241048u: goto label_241048;
        case 0x24104cu: goto label_24104c;
        case 0x241050u: goto label_241050;
        case 0x241054u: goto label_241054;
        case 0x241058u: goto label_241058;
        case 0x24105cu: goto label_24105c;
        case 0x241060u: goto label_241060;
        case 0x241064u: goto label_241064;
        case 0x241068u: goto label_241068;
        case 0x24106cu: goto label_24106c;
        case 0x241070u: goto label_241070;
        case 0x241074u: goto label_241074;
        case 0x241078u: goto label_241078;
        case 0x24107cu: goto label_24107c;
        case 0x241080u: goto label_241080;
        case 0x241084u: goto label_241084;
        case 0x241088u: goto label_241088;
        case 0x24108cu: goto label_24108c;
        case 0x241090u: goto label_241090;
        case 0x241094u: goto label_241094;
        case 0x241098u: goto label_241098;
        case 0x24109cu: goto label_24109c;
        case 0x2410a0u: goto label_2410a0;
        case 0x2410a4u: goto label_2410a4;
        case 0x2410a8u: goto label_2410a8;
        case 0x2410acu: goto label_2410ac;
        case 0x2410b0u: goto label_2410b0;
        case 0x2410b4u: goto label_2410b4;
        case 0x2410b8u: goto label_2410b8;
        case 0x2410bcu: goto label_2410bc;
        case 0x2410c0u: goto label_2410c0;
        case 0x2410c4u: goto label_2410c4;
        case 0x2410c8u: goto label_2410c8;
        case 0x2410ccu: goto label_2410cc;
        case 0x2410d0u: goto label_2410d0;
        case 0x2410d4u: goto label_2410d4;
        case 0x2410d8u: goto label_2410d8;
        case 0x2410dcu: goto label_2410dc;
        case 0x2410e0u: goto label_2410e0;
        case 0x2410e4u: goto label_2410e4;
        case 0x2410e8u: goto label_2410e8;
        case 0x2410ecu: goto label_2410ec;
        case 0x2410f0u: goto label_2410f0;
        case 0x2410f4u: goto label_2410f4;
        case 0x2410f8u: goto label_2410f8;
        case 0x2410fcu: goto label_2410fc;
        case 0x241100u: goto label_241100;
        case 0x241104u: goto label_241104;
        case 0x241108u: goto label_241108;
        case 0x24110cu: goto label_24110c;
        case 0x241110u: goto label_241110;
        case 0x241114u: goto label_241114;
        case 0x241118u: goto label_241118;
        case 0x24111cu: goto label_24111c;
        case 0x241120u: goto label_241120;
        case 0x241124u: goto label_241124;
        case 0x241128u: goto label_241128;
        case 0x24112cu: goto label_24112c;
        case 0x241130u: goto label_241130;
        case 0x241134u: goto label_241134;
        case 0x241138u: goto label_241138;
        case 0x24113cu: goto label_24113c;
        case 0x241140u: goto label_241140;
        case 0x241144u: goto label_241144;
        case 0x241148u: goto label_241148;
        case 0x24114cu: goto label_24114c;
        case 0x241150u: goto label_241150;
        case 0x241154u: goto label_241154;
        case 0x241158u: goto label_241158;
        case 0x24115cu: goto label_24115c;
        case 0x241160u: goto label_241160;
        case 0x241164u: goto label_241164;
        case 0x241168u: goto label_241168;
        case 0x24116cu: goto label_24116c;
        case 0x241170u: goto label_241170;
        case 0x241174u: goto label_241174;
        case 0x241178u: goto label_241178;
        case 0x24117cu: goto label_24117c;
        case 0x241180u: goto label_241180;
        case 0x241184u: goto label_241184;
        case 0x241188u: goto label_241188;
        case 0x24118cu: goto label_24118c;
        case 0x241190u: goto label_241190;
        case 0x241194u: goto label_241194;
        case 0x241198u: goto label_241198;
        case 0x24119cu: goto label_24119c;
        case 0x2411a0u: goto label_2411a0;
        case 0x2411a4u: goto label_2411a4;
        case 0x2411a8u: goto label_2411a8;
        case 0x2411acu: goto label_2411ac;
        case 0x2411b0u: goto label_2411b0;
        case 0x2411b4u: goto label_2411b4;
        case 0x2411b8u: goto label_2411b8;
        case 0x2411bcu: goto label_2411bc;
        case 0x2411c0u: goto label_2411c0;
        case 0x2411c4u: goto label_2411c4;
        case 0x2411c8u: goto label_2411c8;
        case 0x2411ccu: goto label_2411cc;
        case 0x2411d0u: goto label_2411d0;
        case 0x2411d4u: goto label_2411d4;
        case 0x2411d8u: goto label_2411d8;
        case 0x2411dcu: goto label_2411dc;
        case 0x2411e0u: goto label_2411e0;
        case 0x2411e4u: goto label_2411e4;
        case 0x2411e8u: goto label_2411e8;
        case 0x2411ecu: goto label_2411ec;
        case 0x2411f0u: goto label_2411f0;
        case 0x2411f4u: goto label_2411f4;
        case 0x2411f8u: goto label_2411f8;
        case 0x2411fcu: goto label_2411fc;
        case 0x241200u: goto label_241200;
        case 0x241204u: goto label_241204;
        case 0x241208u: goto label_241208;
        case 0x24120cu: goto label_24120c;
        case 0x241210u: goto label_241210;
        case 0x241214u: goto label_241214;
        case 0x241218u: goto label_241218;
        case 0x24121cu: goto label_24121c;
        case 0x241220u: goto label_241220;
        case 0x241224u: goto label_241224;
        case 0x241228u: goto label_241228;
        case 0x24122cu: goto label_24122c;
        case 0x241230u: goto label_241230;
        case 0x241234u: goto label_241234;
        case 0x241238u: goto label_241238;
        case 0x24123cu: goto label_24123c;
        case 0x241240u: goto label_241240;
        case 0x241244u: goto label_241244;
        case 0x241248u: goto label_241248;
        case 0x24124cu: goto label_24124c;
        case 0x241250u: goto label_241250;
        case 0x241254u: goto label_241254;
        case 0x241258u: goto label_241258;
        case 0x24125cu: goto label_24125c;
        case 0x241260u: goto label_241260;
        case 0x241264u: goto label_241264;
        case 0x241268u: goto label_241268;
        case 0x24126cu: goto label_24126c;
        case 0x241270u: goto label_241270;
        case 0x241274u: goto label_241274;
        case 0x241278u: goto label_241278;
        case 0x24127cu: goto label_24127c;
        case 0x241280u: goto label_241280;
        case 0x241284u: goto label_241284;
        case 0x241288u: goto label_241288;
        case 0x24128cu: goto label_24128c;
        case 0x241290u: goto label_241290;
        case 0x241294u: goto label_241294;
        case 0x241298u: goto label_241298;
        case 0x24129cu: goto label_24129c;
        case 0x2412a0u: goto label_2412a0;
        case 0x2412a4u: goto label_2412a4;
        case 0x2412a8u: goto label_2412a8;
        case 0x2412acu: goto label_2412ac;
        case 0x2412b0u: goto label_2412b0;
        case 0x2412b4u: goto label_2412b4;
        case 0x2412b8u: goto label_2412b8;
        case 0x2412bcu: goto label_2412bc;
        case 0x2412c0u: goto label_2412c0;
        case 0x2412c4u: goto label_2412c4;
        case 0x2412c8u: goto label_2412c8;
        case 0x2412ccu: goto label_2412cc;
        case 0x2412d0u: goto label_2412d0;
        case 0x2412d4u: goto label_2412d4;
        case 0x2412d8u: goto label_2412d8;
        case 0x2412dcu: goto label_2412dc;
        case 0x2412e0u: goto label_2412e0;
        case 0x2412e4u: goto label_2412e4;
        case 0x2412e8u: goto label_2412e8;
        case 0x2412ecu: goto label_2412ec;
        case 0x2412f0u: goto label_2412f0;
        case 0x2412f4u: goto label_2412f4;
        case 0x2412f8u: goto label_2412f8;
        case 0x2412fcu: goto label_2412fc;
        case 0x241300u: goto label_241300;
        case 0x241304u: goto label_241304;
        case 0x241308u: goto label_241308;
        case 0x24130cu: goto label_24130c;
        case 0x241310u: goto label_241310;
        case 0x241314u: goto label_241314;
        case 0x241318u: goto label_241318;
        case 0x24131cu: goto label_24131c;
        case 0x241320u: goto label_241320;
        case 0x241324u: goto label_241324;
        case 0x241328u: goto label_241328;
        case 0x24132cu: goto label_24132c;
        case 0x241330u: goto label_241330;
        case 0x241334u: goto label_241334;
        case 0x241338u: goto label_241338;
        case 0x24133cu: goto label_24133c;
        case 0x241340u: goto label_241340;
        case 0x241344u: goto label_241344;
        case 0x241348u: goto label_241348;
        case 0x24134cu: goto label_24134c;
        case 0x241350u: goto label_241350;
        case 0x241354u: goto label_241354;
        case 0x241358u: goto label_241358;
        case 0x24135cu: goto label_24135c;
        case 0x241360u: goto label_241360;
        case 0x241364u: goto label_241364;
        case 0x241368u: goto label_241368;
        case 0x24136cu: goto label_24136c;
        case 0x241370u: goto label_241370;
        case 0x241374u: goto label_241374;
        case 0x241378u: goto label_241378;
        case 0x24137cu: goto label_24137c;
        case 0x241380u: goto label_241380;
        case 0x241384u: goto label_241384;
        case 0x241388u: goto label_241388;
        case 0x24138cu: goto label_24138c;
        case 0x241390u: goto label_241390;
        case 0x241394u: goto label_241394;
        case 0x241398u: goto label_241398;
        case 0x24139cu: goto label_24139c;
        case 0x2413a0u: goto label_2413a0;
        case 0x2413a4u: goto label_2413a4;
        case 0x2413a8u: goto label_2413a8;
        case 0x2413acu: goto label_2413ac;
        case 0x2413b0u: goto label_2413b0;
        case 0x2413b4u: goto label_2413b4;
        case 0x2413b8u: goto label_2413b8;
        case 0x2413bcu: goto label_2413bc;
        case 0x2413c0u: goto label_2413c0;
        case 0x2413c4u: goto label_2413c4;
        case 0x2413c8u: goto label_2413c8;
        case 0x2413ccu: goto label_2413cc;
        case 0x2413d0u: goto label_2413d0;
        case 0x2413d4u: goto label_2413d4;
        case 0x2413d8u: goto label_2413d8;
        case 0x2413dcu: goto label_2413dc;
        case 0x2413e0u: goto label_2413e0;
        case 0x2413e4u: goto label_2413e4;
        case 0x2413e8u: goto label_2413e8;
        case 0x2413ecu: goto label_2413ec;
        case 0x2413f0u: goto label_2413f0;
        case 0x2413f4u: goto label_2413f4;
        case 0x2413f8u: goto label_2413f8;
        case 0x2413fcu: goto label_2413fc;
        default: break;
    }

    ctx->pc = 0x2407d0u;

label_2407d0:
    // 0x2407d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2407d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2407d4:
    // 0x2407d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2407d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2407d8:
    // 0x2407d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2407d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2407dc:
    // 0x2407dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2407dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2407e0:
    // 0x2407e0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2407e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2407e4:
    // 0x2407e4: 0xc091504  jal         func_245410
label_2407e8:
    if (ctx->pc == 0x2407E8u) {
        ctx->pc = 0x2407ECu;
        goto label_2407ec;
    }
    ctx->pc = 0x2407E4u;
    SET_GPR_U32(ctx, 31, 0x2407ECu);
    ctx->pc = 0x245410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245410u, 0x2407E4u, 0x2407ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2407ECu;
label_2407ec:
    // 0x2407ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2407ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2407f0:
    // 0x2407f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2407f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2407f4:
    // 0x2407f4: 0x3e00008  jr          $ra
label_2407f8:
    if (ctx->pc == 0x2407F8u) {
        ctx->pc = 0x2407FCu;
        goto label_2407fc;
    }
    ctx->pc = 0x2407F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2407F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2407FCu;
label_2407fc:
    // 0x2407fc: 0x0  nop
    ctx->pc = 0x2407fcu;
    // NOP
label_240800:
    // 0x240800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x240800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_240804:
    // 0x240804: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_240808:
    // 0x240808: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_24080c:
    // 0x24080c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x24080cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_240810:
    // 0x240810: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x240810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_240814:
    // 0x240814: 0xc0852ac  jal         func_214AB0
label_240818:
    if (ctx->pc == 0x240818u) {
        ctx->pc = 0x24081Cu;
        goto label_24081c;
    }
    ctx->pc = 0x240814u;
    SET_GPR_U32(ctx, 31, 0x24081Cu);
    ctx->pc = 0x214AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214AB0u, 0x240814u, 0x24081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24081Cu;
label_24081c:
    // 0x24081c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x24081cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_240820:
    // 0x240820: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x240820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_240824:
    // 0x240824: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x240824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240828:
    // 0x240828: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
label_24082c:
    if (ctx->pc == 0x24082Cu) {
        ctx->pc = 0x240830u;
        goto label_240830;
    }
    ctx->pc = 0x240828u;
    {
        const bool branch_taken_0x240828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x240828) {
            ctx->pc = 0x240900u;
            goto label_240900;
        }
    }
    ctx->pc = 0x240830u;
label_240830:
    // 0x240830: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x240830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_240834:
    // 0x240834: 0x8c441118  lw          $a0, 0x1118($v0)
    ctx->pc = 0x240834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4376)));
label_240838:
    // 0x240838: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x240838u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24083c:
    // 0x24083c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x24083cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_240840:
    // 0x240840: 0x320f809  jalr        $t9
label_240844:
    if (ctx->pc == 0x240844u) {
        ctx->pc = 0x240848u;
        goto label_240848;
    }
    ctx->pc = 0x240840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x240848u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240840u, 0x240848u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240848u;
label_240848:
    // 0x240848: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x240848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_24084c:
    // 0x24084c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x24084cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_240850:
    // 0x240850: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x240850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_240854:
    // 0x240854: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x240854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_240858:
    // 0x240858: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x240858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_24085c:
    // 0x24085c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x24085cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_240860:
    // 0x240860: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x240860u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_240864:
    // 0x240864: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x240864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_240868:
    // 0x240868: 0x8c441120  lw          $a0, 0x1120($v0)
    ctx->pc = 0x240868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4384)));
label_24086c:
    // 0x24086c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24086cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_240870:
    // 0x240870: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x240870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_240874:
    // 0x240874: 0x320f809  jalr        $t9
label_240878:
    if (ctx->pc == 0x240878u) {
        ctx->pc = 0x24087Cu;
        goto label_24087c;
    }
    ctx->pc = 0x240874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24087Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240874u, 0x24087Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24087Cu;
label_24087c:
    // 0x24087c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x24087cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_240880:
    // 0x240880: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x240880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_240884:
    // 0x240884: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x240884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_240888:
    // 0x240888: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x240888u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_24088c:
    // 0x24088c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x24088cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_240890:
    // 0x240890: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x240890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_240894:
    // 0x240894: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x240894u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_240898:
    // 0x240898: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x240898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_24089c:
    // 0x24089c: 0x8c441124  lw          $a0, 0x1124($v0)
    ctx->pc = 0x24089cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4388)));
label_2408a0:
    // 0x2408a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2408a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2408a4:
    // 0x2408a4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2408a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2408a8:
    // 0x2408a8: 0x320f809  jalr        $t9
label_2408ac:
    if (ctx->pc == 0x2408ACu) {
        ctx->pc = 0x2408B0u;
        goto label_2408b0;
    }
    ctx->pc = 0x2408A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2408B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2408A8u, 0x2408B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2408B0u;
label_2408b0:
    // 0x2408b0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2408b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2408b4:
    // 0x2408b4: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2408b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_2408b8:
    // 0x2408b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2408b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2408bc:
    // 0x2408bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2408bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2408c0:
    // 0x2408c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2408c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2408c4:
    // 0x2408c4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2408c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2408c8:
    // 0x2408c8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2408c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2408cc:
    // 0x2408cc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2408ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2408d0:
    // 0x2408d0: 0x8c44111c  lw          $a0, 0x111C($v0)
    ctx->pc = 0x2408d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4380)));
label_2408d4:
    // 0x2408d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2408d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2408d8:
    // 0x2408d8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2408d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2408dc:
    // 0x2408dc: 0x320f809  jalr        $t9
label_2408e0:
    if (ctx->pc == 0x2408E0u) {
        ctx->pc = 0x2408E4u;
        goto label_2408e4;
    }
    ctx->pc = 0x2408DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2408E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2408DCu, 0x2408E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2408E4u;
label_2408e4:
    // 0x2408e4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2408e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2408e8:
    // 0x2408e8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2408e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_2408ec:
    // 0x2408ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2408ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2408f0:
    // 0x2408f0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2408f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2408f4:
    // 0x2408f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2408f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2408f8:
    // 0x2408f8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2408f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2408fc:
    // 0x2408fc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2408fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_240900:
    // 0x240900: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x240900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_240904:
    // 0x240904: 0xc0905b0  jal         func_2416C0
label_240908:
    if (ctx->pc == 0x240908u) {
        ctx->pc = 0x24090Cu;
        goto label_24090c;
    }
    ctx->pc = 0x240904u;
    SET_GPR_U32(ctx, 31, 0x24090Cu);
    ctx->pc = 0x2416C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2416C0u, 0x240904u, 0x24090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24090Cu;
label_24090c:
    // 0x24090c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24090cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_240910:
    // 0x240910: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_240914:
    // 0x240914: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x240914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_240918:
    // 0x240918: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x240918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_24091c:
    // 0x24091c: 0x3e00008  jr          $ra
label_240920:
    if (ctx->pc == 0x240920u) {
        ctx->pc = 0x240924u;
        goto label_240924;
    }
    ctx->pc = 0x24091Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24091Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240924u;
label_240924:
    // 0x240924: 0x0  nop
    ctx->pc = 0x240924u;
    // NOP
label_240928:
    // 0x240928: 0x0  nop
    ctx->pc = 0x240928u;
    // NOP
label_24092c:
    // 0x24092c: 0x0  nop
    ctx->pc = 0x24092cu;
    // NOP
label_240930:
    // 0x240930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x240930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_240934:
    // 0x240934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_240938:
    // 0x240938: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x240938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_24093c:
    // 0x24093c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x24093cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_240940:
    // 0x240940: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x240940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_240944:
    // 0x240944: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x240944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_240948:
    // 0x240948: 0xc0852b8  jal         func_214AE0
label_24094c:
    if (ctx->pc == 0x24094Cu) {
        ctx->pc = 0x240950u;
        goto label_240950;
    }
    ctx->pc = 0x240948u;
    SET_GPR_U32(ctx, 31, 0x240950u);
    ctx->pc = 0x214AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214AE0u, 0x240948u, 0x240950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240950u;
label_240950:
    // 0x240950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_240954:
    // 0x240954: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x240954u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_240958:
    // 0x240958: 0x3e00008  jr          $ra
label_24095c:
    if (ctx->pc == 0x24095Cu) {
        ctx->pc = 0x240960u;
        goto label_240960;
    }
    ctx->pc = 0x240958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240960u;
label_240960:
    // 0x240960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_240964:
    // 0x240964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_240968:
    // 0x240968: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x240968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_24096c:
    // 0x24096c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24096cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_240970:
    // 0x240970: 0xc0852c4  jal         func_214B10
label_240974:
    if (ctx->pc == 0x240974u) {
        ctx->pc = 0x240978u;
        goto label_240978;
    }
    ctx->pc = 0x240970u;
    SET_GPR_U32(ctx, 31, 0x240978u);
    ctx->pc = 0x214B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214B10u, 0x240970u, 0x240978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240978u;
label_240978:
    // 0x240978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24097c:
    // 0x24097c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24097cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_240980:
    // 0x240980: 0x3e00008  jr          $ra
label_240984:
    if (ctx->pc == 0x240984u) {
        ctx->pc = 0x240988u;
        goto label_240988;
    }
    ctx->pc = 0x240980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240988u;
label_240988:
    // 0x240988: 0x0  nop
    ctx->pc = 0x240988u;
    // NOP
label_24098c:
    // 0x24098c: 0x0  nop
    ctx->pc = 0x24098cu;
    // NOP
label_240990:
    // 0x240990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x240990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_240994:
    // 0x240994: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_240998:
    // 0x240998: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_24099c:
    // 0x24099c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x24099cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_2409a0:
    // 0x2409a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2409a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2409a4:
    // 0x2409a4: 0xc0852d0  jal         func_214B40
label_2409a8:
    if (ctx->pc == 0x2409A8u) {
        ctx->pc = 0x2409ACu;
        goto label_2409ac;
    }
    ctx->pc = 0x2409A4u;
    SET_GPR_U32(ctx, 31, 0x2409ACu);
    ctx->pc = 0x214B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214B40u, 0x2409A4u, 0x2409ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2409ACu;
label_2409ac:
    // 0x2409ac: 0xc08ef50  jal         func_23BD40
label_2409b0:
    if (ctx->pc == 0x2409B0u) {
        ctx->pc = 0x2409B4u;
        goto label_2409b4;
    }
    ctx->pc = 0x2409ACu;
    SET_GPR_U32(ctx, 31, 0x2409B4u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x2409ACu, 0x2409B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2409B4u;
label_2409b4:
    // 0x2409b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2409b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2409b8:
    // 0x2409b8: 0x10100018  beq         $zero, $s0, . + 4 + (0x18 << 2)
label_2409bc:
    if (ctx->pc == 0x2409BCu) {
        ctx->pc = 0x2409C0u;
        goto label_2409c0;
    }
    ctx->pc = 0x2409B8u;
    {
        const bool branch_taken_0x2409b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x2409b8) {
            ctx->pc = 0x240A1Cu;
            goto label_240a1c;
        }
    }
    ctx->pc = 0x2409C0u;
label_2409c0:
    // 0x2409c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2409c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2409c4:
    // 0x2409c4: 0xc0406f0  jal         func_101BC0
label_2409c8:
    if (ctx->pc == 0x2409C8u) {
        ctx->pc = 0x2409CCu;
        goto label_2409cc;
    }
    ctx->pc = 0x2409C4u;
    SET_GPR_U32(ctx, 31, 0x2409CCu);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x2409C4u, 0x2409CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2409CCu;
label_2409cc:
    // 0x2409cc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2409ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2409d0:
    // 0x2409d0: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
label_2409d4:
    if (ctx->pc == 0x2409D4u) {
        ctx->pc = 0x2409D8u;
        goto label_2409d8;
    }
    ctx->pc = 0x2409D0u;
    {
        const bool branch_taken_0x2409d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2409d0) {
            ctx->pc = 0x240A0Cu;
            goto label_240a0c;
        }
    }
    ctx->pc = 0x2409D8u;
label_2409d8:
    // 0x2409d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2409d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2409dc:
    // 0x2409dc: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
label_2409e0:
    if (ctx->pc == 0x2409E0u) {
        ctx->pc = 0x2409E4u;
        goto label_2409e4;
    }
    ctx->pc = 0x2409DCu;
    {
        const bool branch_taken_0x2409dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2409dc) {
            ctx->pc = 0x240A0Cu;
            goto label_240a0c;
        }
    }
    ctx->pc = 0x2409E4u;
label_2409e4:
    // 0x2409e4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2409e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2409e8:
    // 0x2409e8: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_2409ec:
    if (ctx->pc == 0x2409ECu) {
        ctx->pc = 0x2409F0u;
        goto label_2409f0;
    }
    ctx->pc = 0x2409E8u;
    {
        const bool branch_taken_0x2409e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2409e8) {
            ctx->pc = 0x240A0Cu;
            goto label_240a0c;
        }
    }
    ctx->pc = 0x2409F0u;
label_2409f0:
    // 0x2409f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2409f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2409f4:
    // 0x2409f4: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_2409f8:
    if (ctx->pc == 0x2409F8u) {
        ctx->pc = 0x2409FCu;
        goto label_2409fc;
    }
    ctx->pc = 0x2409F4u;
    {
        const bool branch_taken_0x2409f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2409f4) {
            ctx->pc = 0x240A0Cu;
            goto label_240a0c;
        }
    }
    ctx->pc = 0x2409FCu;
label_2409fc:
    // 0x2409fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_240a00:
    if (ctx->pc == 0x240A00u) {
        ctx->pc = 0x240A04u;
        goto label_240a04;
    }
    ctx->pc = 0x2409FCu;
    {
        const bool branch_taken_0x2409fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2409fc) {
            ctx->pc = 0x240A0Cu;
            goto label_240a0c;
        }
    }
    ctx->pc = 0x240A04u;
label_240a04:
    // 0x240a04: 0x10000005  b           . + 4 + (0x5 << 2)
label_240a08:
    if (ctx->pc == 0x240A08u) {
        ctx->pc = 0x240A0Cu;
        goto label_240a0c;
    }
    ctx->pc = 0x240A04u;
    {
        const bool branch_taken_0x240a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240a04) {
            ctx->pc = 0x240A1Cu;
            goto label_240a1c;
        }
    }
    ctx->pc = 0x240A0Cu;
label_240a0c:
    // 0x240a0c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x240a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_240a10:
    // 0x240a10: 0x8c44111c  lw          $a0, 0x111C($v0)
    ctx->pc = 0x240a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4380)));
label_240a14:
    // 0x240a14: 0xc09558c  jal         func_255630
label_240a18:
    if (ctx->pc == 0x240A18u) {
        ctx->pc = 0x240A1Cu;
        goto label_240a1c;
    }
    ctx->pc = 0x240A14u;
    SET_GPR_U32(ctx, 31, 0x240A1Cu);
    ctx->pc = 0x255630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255630u, 0x240A14u, 0x240A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240A1Cu;
label_240a1c:
    // 0x240a1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_240a20:
    // 0x240a20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x240a20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_240a24:
    // 0x240a24: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x240a24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_240a28:
    // 0x240a28: 0x3e00008  jr          $ra
label_240a2c:
    if (ctx->pc == 0x240A2Cu) {
        ctx->pc = 0x240A30u;
        goto label_240a30;
    }
    ctx->pc = 0x240A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240A30u;
label_240a30:
    // 0x240a30: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x240a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_240a34:
    // 0x240a34: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x240a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_240a38:
    // 0x240a38: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x240a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_240a3c:
    // 0x240a3c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x240a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_240a40:
    // 0x240a40: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x240a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_240a44:
    // 0x240a44: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x240a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_240a48:
    // 0x240a48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x240a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_240a4c:
    // 0x240a4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x240a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_240a50:
    // 0x240a50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x240a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_240a54:
    // 0x240a54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x240a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_240a58:
    // 0x240a58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_240a5c:
    // 0x240a5c: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x240a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
label_240a60:
    // 0x240a60: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x240a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
label_240a64:
    // 0x240a64: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x240a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_240a68:
    // 0x240a68: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x240a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_240a6c:
    // 0x240a6c: 0x1062014e  beq         $v1, $v0, . + 4 + (0x14E << 2)
label_240a70:
    if (ctx->pc == 0x240A70u) {
        ctx->pc = 0x240A74u;
        goto label_240a74;
    }
    ctx->pc = 0x240A6Cu;
    {
        const bool branch_taken_0x240a6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x240a6c) {
            ctx->pc = 0x240FA8u;
            goto label_240fa8;
        }
    }
    ctx->pc = 0x240A74u;
label_240a74:
    // 0x240a74: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x240a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_240a78:
    // 0x240a78: 0x10620131  beq         $v1, $v0, . + 4 + (0x131 << 2)
label_240a7c:
    if (ctx->pc == 0x240A7Cu) {
        ctx->pc = 0x240A80u;
        goto label_240a80;
    }
    ctx->pc = 0x240A78u;
    {
        const bool branch_taken_0x240a78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x240a78) {
            ctx->pc = 0x240F40u;
            goto label_240f40;
        }
    }
    ctx->pc = 0x240A80u;
label_240a80:
    // 0x240a80: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x240a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_240a84:
    // 0x240a84: 0x10620114  beq         $v1, $v0, . + 4 + (0x114 << 2)
label_240a88:
    if (ctx->pc == 0x240A88u) {
        ctx->pc = 0x240A8Cu;
        goto label_240a8c;
    }
    ctx->pc = 0x240A84u;
    {
        const bool branch_taken_0x240a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x240a84) {
            ctx->pc = 0x240ED8u;
            goto label_240ed8;
        }
    }
    ctx->pc = 0x240A8Cu;
label_240a8c:
    // 0x240a8c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x240a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_240a90:
    // 0x240a90: 0x106200f7  beq         $v1, $v0, . + 4 + (0xF7 << 2)
label_240a94:
    if (ctx->pc == 0x240A94u) {
        ctx->pc = 0x240A98u;
        goto label_240a98;
    }
    ctx->pc = 0x240A90u;
    {
        const bool branch_taken_0x240a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x240a90) {
            ctx->pc = 0x240E70u;
            goto label_240e70;
        }
    }
    ctx->pc = 0x240A98u;
label_240a98:
    // 0x240a98: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x240a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_240a9c:
    // 0x240a9c: 0x106200da  beq         $v1, $v0, . + 4 + (0xDA << 2)
label_240aa0:
    if (ctx->pc == 0x240AA0u) {
        ctx->pc = 0x240AA4u;
        goto label_240aa4;
    }
    ctx->pc = 0x240A9Cu;
    {
        const bool branch_taken_0x240a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x240a9c) {
            ctx->pc = 0x240E08u;
            goto label_240e08;
        }
    }
    ctx->pc = 0x240AA4u;
label_240aa4:
    // 0x240aa4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x240aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_240aa8:
    // 0x240aa8: 0x106200bd  beq         $v1, $v0, . + 4 + (0xBD << 2)
label_240aac:
    if (ctx->pc == 0x240AACu) {
        ctx->pc = 0x240AB0u;
        goto label_240ab0;
    }
    ctx->pc = 0x240AA8u;
    {
        const bool branch_taken_0x240aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x240aa8) {
            ctx->pc = 0x240DA0u;
            goto label_240da0;
        }
    }
    ctx->pc = 0x240AB0u;
label_240ab0:
    // 0x240ab0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x240ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_240ab4:
    // 0x240ab4: 0x1062009c  beq         $v1, $v0, . + 4 + (0x9C << 2)
label_240ab8:
    if (ctx->pc == 0x240AB8u) {
        ctx->pc = 0x240ABCu;
        goto label_240abc;
    }
    ctx->pc = 0x240AB4u;
    {
        const bool branch_taken_0x240ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x240ab4) {
            ctx->pc = 0x240D28u;
            goto label_240d28;
        }
    }
    ctx->pc = 0x240ABCu;
label_240abc:
    // 0x240abc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x240abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_240ac0:
    // 0x240ac0: 0x1062007f  beq         $v1, $v0, . + 4 + (0x7F << 2)
label_240ac4:
    if (ctx->pc == 0x240AC4u) {
        ctx->pc = 0x240AC8u;
        goto label_240ac8;
    }
    ctx->pc = 0x240AC0u;
    {
        const bool branch_taken_0x240ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x240ac0) {
            ctx->pc = 0x240CC0u;
            goto label_240cc0;
        }
    }
    ctx->pc = 0x240AC8u;
label_240ac8:
    // 0x240ac8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x240ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_240acc:
    // 0x240acc: 0x10620060  beq         $v1, $v0, . + 4 + (0x60 << 2)
label_240ad0:
    if (ctx->pc == 0x240AD0u) {
        ctx->pc = 0x240AD4u;
        goto label_240ad4;
    }
    ctx->pc = 0x240ACCu;
    {
        const bool branch_taken_0x240acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x240acc) {
            ctx->pc = 0x240C50u;
            goto label_240c50;
        }
    }
    ctx->pc = 0x240AD4u;
label_240ad4:
    // 0x240ad4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x240ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_240ad8:
    // 0x240ad8: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
label_240adc:
    if (ctx->pc == 0x240ADCu) {
        ctx->pc = 0x240AE0u;
        goto label_240ae0;
    }
    ctx->pc = 0x240AD8u;
    {
        const bool branch_taken_0x240ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x240ad8) {
            ctx->pc = 0x240BE0u;
            goto label_240be0;
        }
    }
    ctx->pc = 0x240AE0u;
label_240ae0:
    // 0x240ae0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x240ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_240ae4:
    // 0x240ae4: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
label_240ae8:
    if (ctx->pc == 0x240AE8u) {
        ctx->pc = 0x240AECu;
        goto label_240aec;
    }
    ctx->pc = 0x240AE4u;
    {
        const bool branch_taken_0x240ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x240ae4) {
            ctx->pc = 0x240B70u;
            goto label_240b70;
        }
    }
    ctx->pc = 0x240AECu;
label_240aec:
    // 0x240aec: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x240aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_240af0:
    // 0x240af0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_240af4:
    if (ctx->pc == 0x240AF4u) {
        ctx->pc = 0x240AF8u;
        goto label_240af8;
    }
    ctx->pc = 0x240AF0u;
    {
        const bool branch_taken_0x240af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x240af0) {
            ctx->pc = 0x240B00u;
            goto label_240b00;
        }
    }
    ctx->pc = 0x240AF8u;
label_240af8:
    // 0x240af8: 0x10000145  b           . + 4 + (0x145 << 2)
label_240afc:
    if (ctx->pc == 0x240AFCu) {
        ctx->pc = 0x240B00u;
        goto label_240b00;
    }
    ctx->pc = 0x240AF8u;
    {
        const bool branch_taken_0x240af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240af8) {
            ctx->pc = 0x241010u;
            goto label_241010;
        }
    }
    ctx->pc = 0x240B00u;
label_240b00:
    // 0x240b00: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x240b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_240b04:
    // 0x240b04: 0xc119b68  jal         func_466DA0
label_240b08:
    if (ctx->pc == 0x240B08u) {
        ctx->pc = 0x240B0Cu;
        goto label_240b0c;
    }
    ctx->pc = 0x240B04u;
    SET_GPR_U32(ctx, 31, 0x240B0Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x240B04u, 0x240B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B0Cu;
label_240b0c:
    // 0x240b0c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x240b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_240b10:
    // 0x240b10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x240b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240b14:
    // 0x240b14: 0xc0400e0  jal         func_100380
label_240b18:
    if (ctx->pc == 0x240B18u) {
        ctx->pc = 0x240B1Cu;
        goto label_240b1c;
    }
    ctx->pc = 0x240B14u;
    SET_GPR_U32(ctx, 31, 0x240B1Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x240B14u, 0x240B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B1Cu;
label_240b1c:
    // 0x240b1c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x240b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_240b20:
    // 0x240b20: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x240b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_240b24:
    // 0x240b24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_240b28:
    if (ctx->pc == 0x240B28u) {
        ctx->pc = 0x240B2Cu;
        goto label_240b2c;
    }
    ctx->pc = 0x240B24u;
    {
        const bool branch_taken_0x240b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240b24) {
            ctx->pc = 0x240B3Cu;
            goto label_240b3c;
        }
    }
    ctx->pc = 0x240B2Cu;
label_240b2c:
    // 0x240b2c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x240b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_240b30:
    // 0x240b30: 0xc09191c  jal         func_246470
label_240b34:
    if (ctx->pc == 0x240B34u) {
        ctx->pc = 0x240B38u;
        goto label_240b38;
    }
    ctx->pc = 0x240B30u;
    SET_GPR_U32(ctx, 31, 0x240B38u);
    ctx->pc = 0x246470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246470u, 0x240B30u, 0x240B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B38u;
label_240b38:
    // 0x240b38: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x240b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_240b3c:
    // 0x240b3c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x240b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_240b40:
    // 0x240b40: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x240b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
label_240b44:
    // 0x240b44: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x240b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_240b48:
    // 0x240b48: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x240b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_240b4c:
    // 0x240b4c: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x240b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_240b50:
    // 0x240b50: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x240b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_240b54:
    // 0x240b54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x240b54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_240b58:
    // 0x240b58: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x240b58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_240b5c:
    // 0x240b5c: 0x320f809  jalr        $t9
label_240b60:
    if (ctx->pc == 0x240B60u) {
        ctx->pc = 0x240B64u;
        goto label_240b64;
    }
    ctx->pc = 0x240B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x240B64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240B5Cu, 0x240B64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240B64u;
label_240b64:
    // 0x240b64: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x240b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_240b68:
    // 0x240b68: 0x1000012a  b           . + 4 + (0x12A << 2)
label_240b6c:
    if (ctx->pc == 0x240B6Cu) {
        ctx->pc = 0x240B70u;
        goto label_240b70;
    }
    ctx->pc = 0x240B68u;
    {
        const bool branch_taken_0x240b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240b68) {
            ctx->pc = 0x241014u;
            goto label_241014;
        }
    }
    ctx->pc = 0x240B70u;
label_240b70:
    // 0x240b70: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x240b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_240b74:
    // 0x240b74: 0xc119b68  jal         func_466DA0
label_240b78:
    if (ctx->pc == 0x240B78u) {
        ctx->pc = 0x240B7Cu;
        goto label_240b7c;
    }
    ctx->pc = 0x240B74u;
    SET_GPR_U32(ctx, 31, 0x240B7Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x240B74u, 0x240B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B7Cu;
label_240b7c:
    // 0x240b7c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x240b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_240b80:
    // 0x240b80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x240b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240b84:
    // 0x240b84: 0xc0400e0  jal         func_100380
label_240b88:
    if (ctx->pc == 0x240B88u) {
        ctx->pc = 0x240B8Cu;
        goto label_240b8c;
    }
    ctx->pc = 0x240B84u;
    SET_GPR_U32(ctx, 31, 0x240B8Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x240B84u, 0x240B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B8Cu;
label_240b8c:
    // 0x240b8c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x240b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_240b90:
    // 0x240b90: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x240b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_240b94:
    // 0x240b94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_240b98:
    if (ctx->pc == 0x240B98u) {
        ctx->pc = 0x240B9Cu;
        goto label_240b9c;
    }
    ctx->pc = 0x240B94u;
    {
        const bool branch_taken_0x240b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240b94) {
            ctx->pc = 0x240BACu;
            goto label_240bac;
        }
    }
    ctx->pc = 0x240B9Cu;
label_240b9c:
    // 0x240b9c: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x240b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_240ba0:
    // 0x240ba0: 0xc091d98  jal         func_247660
label_240ba4:
    if (ctx->pc == 0x240BA4u) {
        ctx->pc = 0x240BA8u;
        goto label_240ba8;
    }
    ctx->pc = 0x240BA0u;
    SET_GPR_U32(ctx, 31, 0x240BA8u);
    ctx->pc = 0x247660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247660u, 0x240BA0u, 0x240BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240BA8u;
label_240ba8:
    // 0x240ba8: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x240ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_240bac:
    // 0x240bac: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x240bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_240bb0:
    // 0x240bb0: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x240bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_240bb4:
    // 0x240bb4: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x240bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_240bb8:
    // 0x240bb8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x240bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_240bbc:
    // 0x240bbc: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x240bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_240bc0:
    // 0x240bc0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x240bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_240bc4:
    // 0x240bc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x240bc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_240bc8:
    // 0x240bc8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x240bc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_240bcc:
    // 0x240bcc: 0x320f809  jalr        $t9
label_240bd0:
    if (ctx->pc == 0x240BD0u) {
        ctx->pc = 0x240BD4u;
        goto label_240bd4;
    }
    ctx->pc = 0x240BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x240BD4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240BCCu, 0x240BD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240BD4u;
label_240bd4:
    // 0x240bd4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x240bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_240bd8:
    // 0x240bd8: 0x1000010e  b           . + 4 + (0x10E << 2)
label_240bdc:
    if (ctx->pc == 0x240BDCu) {
        ctx->pc = 0x240BE0u;
        goto label_240be0;
    }
    ctx->pc = 0x240BD8u;
    {
        const bool branch_taken_0x240bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240bd8) {
            ctx->pc = 0x241014u;
            goto label_241014;
        }
    }
    ctx->pc = 0x240BE0u;
label_240be0:
    // 0x240be0: 0x24040084  addiu       $a0, $zero, 0x84
    ctx->pc = 0x240be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_240be4:
    // 0x240be4: 0xc119b68  jal         func_466DA0
label_240be8:
    if (ctx->pc == 0x240BE8u) {
        ctx->pc = 0x240BECu;
        goto label_240bec;
    }
    ctx->pc = 0x240BE4u;
    SET_GPR_U32(ctx, 31, 0x240BECu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x240BE4u, 0x240BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240BECu;
label_240bec:
    // 0x240bec: 0x24040084  addiu       $a0, $zero, 0x84
    ctx->pc = 0x240becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_240bf0:
    // 0x240bf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x240bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240bf4:
    // 0x240bf4: 0xc0400e0  jal         func_100380
label_240bf8:
    if (ctx->pc == 0x240BF8u) {
        ctx->pc = 0x240BFCu;
        goto label_240bfc;
    }
    ctx->pc = 0x240BF4u;
    SET_GPR_U32(ctx, 31, 0x240BFCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x240BF4u, 0x240BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240BFCu;
label_240bfc:
    // 0x240bfc: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x240bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_240c00:
    // 0x240c00: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x240c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_240c04:
    // 0x240c04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_240c08:
    if (ctx->pc == 0x240C08u) {
        ctx->pc = 0x240C0Cu;
        goto label_240c0c;
    }
    ctx->pc = 0x240C04u;
    {
        const bool branch_taken_0x240c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240c04) {
            ctx->pc = 0x240C1Cu;
            goto label_240c1c;
        }
    }
    ctx->pc = 0x240C0Cu;
label_240c0c:
    // 0x240c0c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x240c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_240c10:
    // 0x240c10: 0xc090e50  jal         func_243940
label_240c14:
    if (ctx->pc == 0x240C14u) {
        ctx->pc = 0x240C18u;
        goto label_240c18;
    }
    ctx->pc = 0x240C10u;
    SET_GPR_U32(ctx, 31, 0x240C18u);
    ctx->pc = 0x243940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243940u, 0x240C10u, 0x240C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240C18u;
label_240c18:
    // 0x240c18: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x240c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_240c1c:
    // 0x240c1c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x240c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_240c20:
    // 0x240c20: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x240c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_240c24:
    // 0x240c24: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x240c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_240c28:
    // 0x240c28: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x240c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_240c2c:
    // 0x240c2c: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x240c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_240c30:
    // 0x240c30: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x240c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_240c34:
    // 0x240c34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x240c34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_240c38:
    // 0x240c38: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x240c38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_240c3c:
    // 0x240c3c: 0x320f809  jalr        $t9
label_240c40:
    if (ctx->pc == 0x240C40u) {
        ctx->pc = 0x240C44u;
        goto label_240c44;
    }
    ctx->pc = 0x240C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x240C44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240C3Cu, 0x240C44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240C44u;
label_240c44:
    // 0x240c44: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x240c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_240c48:
    // 0x240c48: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_240c4c:
    if (ctx->pc == 0x240C4Cu) {
        ctx->pc = 0x240C50u;
        goto label_240c50;
    }
    ctx->pc = 0x240C48u;
    {
        const bool branch_taken_0x240c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240c48) {
            ctx->pc = 0x241014u;
            goto label_241014;
        }
    }
    ctx->pc = 0x240C50u;
label_240c50:
    // 0x240c50: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x240c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_240c54:
    // 0x240c54: 0xc119b68  jal         func_466DA0
label_240c58:
    if (ctx->pc == 0x240C58u) {
        ctx->pc = 0x240C5Cu;
        goto label_240c5c;
    }
    ctx->pc = 0x240C54u;
    SET_GPR_U32(ctx, 31, 0x240C5Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x240C54u, 0x240C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240C5Cu;
label_240c5c:
    // 0x240c5c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x240c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_240c60:
    // 0x240c60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x240c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240c64:
    // 0x240c64: 0xc0400e0  jal         func_100380
label_240c68:
    if (ctx->pc == 0x240C68u) {
        ctx->pc = 0x240C6Cu;
        goto label_240c6c;
    }
    ctx->pc = 0x240C64u;
    SET_GPR_U32(ctx, 31, 0x240C6Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x240C64u, 0x240C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240C6Cu;
label_240c6c:
    // 0x240c6c: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x240c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_240c70:
    // 0x240c70: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x240c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_240c74:
    // 0x240c74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_240c78:
    if (ctx->pc == 0x240C78u) {
        ctx->pc = 0x240C7Cu;
        goto label_240c7c;
    }
    ctx->pc = 0x240C74u;
    {
        const bool branch_taken_0x240c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240c74) {
            ctx->pc = 0x240C8Cu;
            goto label_240c8c;
        }
    }
    ctx->pc = 0x240C7Cu;
label_240c7c:
    // 0x240c7c: 0x8fa400a4  lw          $a0, 0xA4($sp)
    ctx->pc = 0x240c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_240c80:
    // 0x240c80: 0xc0909b0  jal         func_2426C0
label_240c84:
    if (ctx->pc == 0x240C84u) {
        ctx->pc = 0x240C88u;
        goto label_240c88;
    }
    ctx->pc = 0x240C80u;
    SET_GPR_U32(ctx, 31, 0x240C88u);
    ctx->pc = 0x2426C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2426C0u, 0x240C80u, 0x240C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240C88u;
label_240c88:
    // 0x240c88: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x240c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_240c8c:
    // 0x240c8c: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x240c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_240c90:
    // 0x240c90: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x240c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_240c94:
    // 0x240c94: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x240c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_240c98:
    // 0x240c98: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x240c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_240c9c:
    // 0x240c9c: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x240c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_240ca0:
    // 0x240ca0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x240ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_240ca4:
    // 0x240ca4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x240ca4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_240ca8:
    // 0x240ca8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x240ca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_240cac:
    // 0x240cac: 0x320f809  jalr        $t9
label_240cb0:
    if (ctx->pc == 0x240CB0u) {
        ctx->pc = 0x240CB4u;
        goto label_240cb4;
    }
    ctx->pc = 0x240CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x240CB4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240CACu, 0x240CB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240CB4u;
label_240cb4:
    // 0x240cb4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x240cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_240cb8:
    // 0x240cb8: 0x100000d6  b           . + 4 + (0xD6 << 2)
label_240cbc:
    if (ctx->pc == 0x240CBCu) {
        ctx->pc = 0x240CC0u;
        goto label_240cc0;
    }
    ctx->pc = 0x240CB8u;
    {
        const bool branch_taken_0x240cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240cb8) {
            ctx->pc = 0x241014u;
            goto label_241014;
        }
    }
    ctx->pc = 0x240CC0u;
label_240cc0:
    // 0x240cc0: 0x24040098  addiu       $a0, $zero, 0x98
    ctx->pc = 0x240cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
label_240cc4:
    // 0x240cc4: 0xc119b68  jal         func_466DA0
label_240cc8:
    if (ctx->pc == 0x240CC8u) {
        ctx->pc = 0x240CCCu;
        goto label_240ccc;
    }
    ctx->pc = 0x240CC4u;
    SET_GPR_U32(ctx, 31, 0x240CCCu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x240CC4u, 0x240CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240CCCu;
label_240ccc:
    // 0x240ccc: 0x24040098  addiu       $a0, $zero, 0x98
    ctx->pc = 0x240cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
label_240cd0:
    // 0x240cd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x240cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240cd4:
    // 0x240cd4: 0xc0400e0  jal         func_100380
label_240cd8:
    if (ctx->pc == 0x240CD8u) {
        ctx->pc = 0x240CDCu;
        goto label_240cdc;
    }
    ctx->pc = 0x240CD4u;
    SET_GPR_U32(ctx, 31, 0x240CDCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x240CD4u, 0x240CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240CDCu;
label_240cdc:
    // 0x240cdc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x240cdcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240ce0:
    // 0x240ce0: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
label_240ce4:
    if (ctx->pc == 0x240CE4u) {
        ctx->pc = 0x240CE8u;
        goto label_240ce8;
    }
    ctx->pc = 0x240CE0u;
    {
        const bool branch_taken_0x240ce0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x240ce0) {
            ctx->pc = 0x240CF8u;
            goto label_240cf8;
        }
    }
    ctx->pc = 0x240CE8u;
label_240ce8:
    // 0x240ce8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x240ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_240cec:
    // 0x240cec: 0xc0973c8  jal         func_25CF20
label_240cf0:
    if (ctx->pc == 0x240CF0u) {
        ctx->pc = 0x240CF4u;
        goto label_240cf4;
    }
    ctx->pc = 0x240CECu;
    SET_GPR_U32(ctx, 31, 0x240CF4u);
    ctx->pc = 0x25CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CF20u, 0x240CECu, 0x240CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240CF4u;
label_240cf4:
    // 0x240cf4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x240cf4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240cf8:
    // 0x240cf8: 0xafbe00cc  sw          $fp, 0xCC($sp)
    ctx->pc = 0x240cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 30));
label_240cfc:
    // 0x240cfc: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x240cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_240d00:
    // 0x240d00: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x240d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_240d04:
    // 0x240d04: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x240d04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_240d08:
    // 0x240d08: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x240d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_240d0c:
    // 0x240d0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x240d0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_240d10:
    // 0x240d10: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x240d10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_240d14:
    // 0x240d14: 0x320f809  jalr        $t9
label_240d18:
    if (ctx->pc == 0x240D18u) {
        ctx->pc = 0x240D1Cu;
        goto label_240d1c;
    }
    ctx->pc = 0x240D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x240D1Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240D14u, 0x240D1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240D1Cu;
label_240d1c:
    // 0x240d1c: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x240d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_240d20:
    // 0x240d20: 0x100000bc  b           . + 4 + (0xBC << 2)
label_240d24:
    if (ctx->pc == 0x240D24u) {
        ctx->pc = 0x240D28u;
        goto label_240d28;
    }
    ctx->pc = 0x240D20u;
    {
        const bool branch_taken_0x240d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240d20) {
            ctx->pc = 0x241014u;
            goto label_241014;
        }
    }
    ctx->pc = 0x240D28u;
label_240d28:
    // 0x240d28: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x240d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_240d2c:
    // 0x240d2c: 0xc119b68  jal         func_466DA0
label_240d30:
    if (ctx->pc == 0x240D30u) {
        ctx->pc = 0x240D34u;
        goto label_240d34;
    }
    ctx->pc = 0x240D2Cu;
    SET_GPR_U32(ctx, 31, 0x240D34u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x240D2Cu, 0x240D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D34u;
label_240d34:
    // 0x240d34: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x240d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_240d38:
    // 0x240d38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x240d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240d3c:
    // 0x240d3c: 0xc0400e0  jal         func_100380
label_240d40:
    if (ctx->pc == 0x240D40u) {
        ctx->pc = 0x240D44u;
        goto label_240d44;
    }
    ctx->pc = 0x240D3Cu;
    SET_GPR_U32(ctx, 31, 0x240D44u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x240D3Cu, 0x240D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D44u;
label_240d44:
    // 0x240d44: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x240d44u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240d48:
    // 0x240d48: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_240d4c:
    if (ctx->pc == 0x240D4Cu) {
        ctx->pc = 0x240D50u;
        goto label_240d50;
    }
    ctx->pc = 0x240D48u;
    {
        const bool branch_taken_0x240d48 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x240d48) {
            ctx->pc = 0x240D60u;
            goto label_240d60;
        }
    }
    ctx->pc = 0x240D50u;
label_240d50:
    // 0x240d50: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x240d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_240d54:
    // 0x240d54: 0xc095f5c  jal         func_257D70
label_240d58:
    if (ctx->pc == 0x240D58u) {
        ctx->pc = 0x240D5Cu;
        goto label_240d5c;
    }
    ctx->pc = 0x240D54u;
    SET_GPR_U32(ctx, 31, 0x240D5Cu);
    ctx->pc = 0x257D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257D70u, 0x240D54u, 0x240D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D5Cu;
label_240d5c:
    // 0x240d5c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x240d5cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240d60:
    // 0x240d60: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x240d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_240d64:
    // 0x240d64: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x240d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_240d68:
    // 0x240d68: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x240d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_240d6c:
    // 0x240d6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_240d70:
    // 0x240d70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x240d70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_240d74:
    // 0x240d74: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x240d74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_240d78:
    // 0x240d78: 0x320f809  jalr        $t9
label_240d7c:
    if (ctx->pc == 0x240D7Cu) {
        ctx->pc = 0x240D80u;
        goto label_240d80;
    }
    ctx->pc = 0x240D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x240D80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240D78u, 0x240D80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240D80u;
label_240d80:
    // 0x240d80: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x240d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_240d84:
    // 0x240d84: 0x8c44111c  lw          $a0, 0x111C($v0)
    ctx->pc = 0x240d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4380)));
label_240d88:
    // 0x240d88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x240d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_240d8c:
    // 0x240d8c: 0xc095430  jal         func_2550C0
label_240d90:
    if (ctx->pc == 0x240D90u) {
        ctx->pc = 0x240D94u;
        goto label_240d94;
    }
    ctx->pc = 0x240D8Cu;
    SET_GPR_U32(ctx, 31, 0x240D94u);
    ctx->pc = 0x2550C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2550C0u, 0x240D8Cu, 0x240D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D94u;
label_240d94:
    // 0x240d94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x240d94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_240d98:
    // 0x240d98: 0x1000009e  b           . + 4 + (0x9E << 2)
label_240d9c:
    if (ctx->pc == 0x240D9Cu) {
        ctx->pc = 0x240DA0u;
        goto label_240da0;
    }
    ctx->pc = 0x240D98u;
    {
        const bool branch_taken_0x240d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240d98) {
            ctx->pc = 0x241014u;
            goto label_241014;
        }
    }
    ctx->pc = 0x240DA0u;
label_240da0:
    // 0x240da0: 0x2404007c  addiu       $a0, $zero, 0x7C
    ctx->pc = 0x240da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
label_240da4:
    // 0x240da4: 0xc119b68  jal         func_466DA0
label_240da8:
    if (ctx->pc == 0x240DA8u) {
        ctx->pc = 0x240DACu;
        goto label_240dac;
    }
    ctx->pc = 0x240DA4u;
    SET_GPR_U32(ctx, 31, 0x240DACu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x240DA4u, 0x240DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240DACu;
label_240dac:
    // 0x240dac: 0x2404007c  addiu       $a0, $zero, 0x7C
    ctx->pc = 0x240dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
label_240db0:
    // 0x240db0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x240db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240db4:
    // 0x240db4: 0xc0400e0  jal         func_100380
label_240db8:
    if (ctx->pc == 0x240DB8u) {
        ctx->pc = 0x240DBCu;
        goto label_240dbc;
    }
    ctx->pc = 0x240DB4u;
    SET_GPR_U32(ctx, 31, 0x240DBCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x240DB4u, 0x240DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240DBCu;
label_240dbc:
    // 0x240dbc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x240dbcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240dc0:
    // 0x240dc0: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
label_240dc4:
    if (ctx->pc == 0x240DC4u) {
        ctx->pc = 0x240DC8u;
        goto label_240dc8;
    }
    ctx->pc = 0x240DC0u;
    {
        const bool branch_taken_0x240dc0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x240dc0) {
            ctx->pc = 0x240DD8u;
            goto label_240dd8;
        }
    }
    ctx->pc = 0x240DC8u;
label_240dc8:
    // 0x240dc8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x240dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_240dcc:
    // 0x240dcc: 0xc09744c  jal         func_25D130
label_240dd0:
    if (ctx->pc == 0x240DD0u) {
        ctx->pc = 0x240DD4u;
        goto label_240dd4;
    }
    ctx->pc = 0x240DCCu;
    SET_GPR_U32(ctx, 31, 0x240DD4u);
    ctx->pc = 0x25D130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D130u, 0x240DCCu, 0x240DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240DD4u;
label_240dd4:
    // 0x240dd4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x240dd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240dd8:
    // 0x240dd8: 0xafb600c8  sw          $s6, 0xC8($sp)
    ctx->pc = 0x240dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 22));
label_240ddc:
    // 0x240ddc: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x240ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_240de0:
    // 0x240de0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x240de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_240de4:
    // 0x240de4: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x240de4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_240de8:
    // 0x240de8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x240de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_240dec:
    // 0x240dec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x240decu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_240df0:
    // 0x240df0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x240df0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_240df4:
    // 0x240df4: 0x320f809  jalr        $t9
label_240df8:
    if (ctx->pc == 0x240DF8u) {
        ctx->pc = 0x240DFCu;
        goto label_240dfc;
    }
    ctx->pc = 0x240DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x240DFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240DF4u, 0x240DFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240DFCu;
label_240dfc:
    // 0x240dfc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x240dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_240e00:
    // 0x240e00: 0x10000084  b           . + 4 + (0x84 << 2)
label_240e04:
    if (ctx->pc == 0x240E04u) {
        ctx->pc = 0x240E08u;
        goto label_240e08;
    }
    ctx->pc = 0x240E00u;
    {
        const bool branch_taken_0x240e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240e00) {
            ctx->pc = 0x241014u;
            goto label_241014;
        }
    }
    ctx->pc = 0x240E08u;
label_240e08:
    // 0x240e08: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x240e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_240e0c:
    // 0x240e0c: 0xc119b68  jal         func_466DA0
label_240e10:
    if (ctx->pc == 0x240E10u) {
        ctx->pc = 0x240E14u;
        goto label_240e14;
    }
    ctx->pc = 0x240E0Cu;
    SET_GPR_U32(ctx, 31, 0x240E14u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x240E0Cu, 0x240E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240E14u;
label_240e14:
    // 0x240e14: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x240e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_240e18:
    // 0x240e18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x240e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240e1c:
    // 0x240e1c: 0xc0400e0  jal         func_100380
label_240e20:
    if (ctx->pc == 0x240E20u) {
        ctx->pc = 0x240E24u;
        goto label_240e24;
    }
    ctx->pc = 0x240E1Cu;
    SET_GPR_U32(ctx, 31, 0x240E24u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x240E1Cu, 0x240E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240E24u;
label_240e24:
    // 0x240e24: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x240e24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240e28:
    // 0x240e28: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_240e2c:
    if (ctx->pc == 0x240E2Cu) {
        ctx->pc = 0x240E30u;
        goto label_240e30;
    }
    ctx->pc = 0x240E28u;
    {
        const bool branch_taken_0x240e28 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x240e28) {
            ctx->pc = 0x240E40u;
            goto label_240e40;
        }
    }
    ctx->pc = 0x240E30u;
label_240e30:
    // 0x240e30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x240e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_240e34:
    // 0x240e34: 0xc091c2c  jal         func_2470B0
label_240e38:
    if (ctx->pc == 0x240E38u) {
        ctx->pc = 0x240E3Cu;
        goto label_240e3c;
    }
    ctx->pc = 0x240E34u;
    SET_GPR_U32(ctx, 31, 0x240E3Cu);
    ctx->pc = 0x2470B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2470B0u, 0x240E34u, 0x240E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240E3Cu;
label_240e3c:
    // 0x240e3c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x240e3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240e40:
    // 0x240e40: 0xafb500c4  sw          $s5, 0xC4($sp)
    ctx->pc = 0x240e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 21));
label_240e44:
    // 0x240e44: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x240e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_240e48:
    // 0x240e48: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x240e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_240e4c:
    // 0x240e4c: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x240e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_240e50:
    // 0x240e50: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x240e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_240e54:
    // 0x240e54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x240e54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_240e58:
    // 0x240e58: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x240e58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_240e5c:
    // 0x240e5c: 0x320f809  jalr        $t9
label_240e60:
    if (ctx->pc == 0x240E60u) {
        ctx->pc = 0x240E64u;
        goto label_240e64;
    }
    ctx->pc = 0x240E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x240E64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240E5Cu, 0x240E64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240E64u;
label_240e64:
    // 0x240e64: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x240e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_240e68:
    // 0x240e68: 0x1000006a  b           . + 4 + (0x6A << 2)
label_240e6c:
    if (ctx->pc == 0x240E6Cu) {
        ctx->pc = 0x240E70u;
        goto label_240e70;
    }
    ctx->pc = 0x240E68u;
    {
        const bool branch_taken_0x240e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240e68) {
            ctx->pc = 0x241014u;
            goto label_241014;
        }
    }
    ctx->pc = 0x240E70u;
label_240e70:
    // 0x240e70: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x240e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_240e74:
    // 0x240e74: 0xc119b68  jal         func_466DA0
label_240e78:
    if (ctx->pc == 0x240E78u) {
        ctx->pc = 0x240E7Cu;
        goto label_240e7c;
    }
    ctx->pc = 0x240E74u;
    SET_GPR_U32(ctx, 31, 0x240E7Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x240E74u, 0x240E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240E7Cu;
label_240e7c:
    // 0x240e7c: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x240e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_240e80:
    // 0x240e80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x240e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240e84:
    // 0x240e84: 0xc0400e0  jal         func_100380
label_240e88:
    if (ctx->pc == 0x240E88u) {
        ctx->pc = 0x240E8Cu;
        goto label_240e8c;
    }
    ctx->pc = 0x240E84u;
    SET_GPR_U32(ctx, 31, 0x240E8Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x240E84u, 0x240E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240E8Cu;
label_240e8c:
    // 0x240e8c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x240e8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240e90:
    // 0x240e90: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_240e94:
    if (ctx->pc == 0x240E94u) {
        ctx->pc = 0x240E98u;
        goto label_240e98;
    }
    ctx->pc = 0x240E90u;
    {
        const bool branch_taken_0x240e90 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x240e90) {
            ctx->pc = 0x240EA8u;
            goto label_240ea8;
        }
    }
    ctx->pc = 0x240E98u;
label_240e98:
    // 0x240e98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x240e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_240e9c:
    // 0x240e9c: 0xc093fe4  jal         func_24FF90
label_240ea0:
    if (ctx->pc == 0x240EA0u) {
        ctx->pc = 0x240EA4u;
        goto label_240ea4;
    }
    ctx->pc = 0x240E9Cu;
    SET_GPR_U32(ctx, 31, 0x240EA4u);
    ctx->pc = 0x24FF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FF90u, 0x240E9Cu, 0x240EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240EA4u;
label_240ea4:
    // 0x240ea4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x240ea4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240ea8:
    // 0x240ea8: 0xafb400c0  sw          $s4, 0xC0($sp)
    ctx->pc = 0x240ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 20));
label_240eac:
    // 0x240eac: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x240eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_240eb0:
    // 0x240eb0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x240eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_240eb4:
    // 0x240eb4: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x240eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_240eb8:
    // 0x240eb8: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x240eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_240ebc:
    // 0x240ebc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x240ebcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_240ec0:
    // 0x240ec0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x240ec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_240ec4:
    // 0x240ec4: 0x320f809  jalr        $t9
label_240ec8:
    if (ctx->pc == 0x240EC8u) {
        ctx->pc = 0x240ECCu;
        goto label_240ecc;
    }
    ctx->pc = 0x240EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x240ECCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240EC4u, 0x240ECCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240ECCu;
label_240ecc:
    // 0x240ecc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x240eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_240ed0:
    // 0x240ed0: 0x10000050  b           . + 4 + (0x50 << 2)
label_240ed4:
    if (ctx->pc == 0x240ED4u) {
        ctx->pc = 0x240ED8u;
        goto label_240ed8;
    }
    ctx->pc = 0x240ED0u;
    {
        const bool branch_taken_0x240ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240ed0) {
            ctx->pc = 0x241014u;
            goto label_241014;
        }
    }
    ctx->pc = 0x240ED8u;
label_240ed8:
    // 0x240ed8: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x240ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_240edc:
    // 0x240edc: 0xc119b68  jal         func_466DA0
label_240ee0:
    if (ctx->pc == 0x240EE0u) {
        ctx->pc = 0x240EE4u;
        goto label_240ee4;
    }
    ctx->pc = 0x240EDCu;
    SET_GPR_U32(ctx, 31, 0x240EE4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x240EDCu, 0x240EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240EE4u;
label_240ee4:
    // 0x240ee4: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x240ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_240ee8:
    // 0x240ee8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x240ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240eec:
    // 0x240eec: 0xc0400e0  jal         func_100380
label_240ef0:
    if (ctx->pc == 0x240EF0u) {
        ctx->pc = 0x240EF4u;
        goto label_240ef4;
    }
    ctx->pc = 0x240EECu;
    SET_GPR_U32(ctx, 31, 0x240EF4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x240EECu, 0x240EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240EF4u;
label_240ef4:
    // 0x240ef4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x240ef4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240ef8:
    // 0x240ef8: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_240efc:
    if (ctx->pc == 0x240EFCu) {
        ctx->pc = 0x240F00u;
        goto label_240f00;
    }
    ctx->pc = 0x240EF8u;
    {
        const bool branch_taken_0x240ef8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x240ef8) {
            ctx->pc = 0x240F10u;
            goto label_240f10;
        }
    }
    ctx->pc = 0x240F00u;
label_240f00:
    // 0x240f00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x240f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_240f04:
    // 0x240f04: 0xc09bebc  jal         func_26FAF0
label_240f08:
    if (ctx->pc == 0x240F08u) {
        ctx->pc = 0x240F0Cu;
        goto label_240f0c;
    }
    ctx->pc = 0x240F04u;
    SET_GPR_U32(ctx, 31, 0x240F0Cu);
    ctx->pc = 0x26FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FAF0u, 0x240F04u, 0x240F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240F0Cu;
label_240f0c:
    // 0x240f0c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x240f0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240f10:
    // 0x240f10: 0xafb300bc  sw          $s3, 0xBC($sp)
    ctx->pc = 0x240f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 19));
label_240f14:
    // 0x240f14: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x240f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_240f18:
    // 0x240f18: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x240f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_240f1c:
    // 0x240f1c: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x240f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_240f20:
    // 0x240f20: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x240f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_240f24:
    // 0x240f24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x240f24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_240f28:
    // 0x240f28: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x240f28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_240f2c:
    // 0x240f2c: 0x320f809  jalr        $t9
label_240f30:
    if (ctx->pc == 0x240F30u) {
        ctx->pc = 0x240F34u;
        goto label_240f34;
    }
    ctx->pc = 0x240F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x240F34u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240F2Cu, 0x240F34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240F34u;
label_240f34:
    // 0x240f34: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x240f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_240f38:
    // 0x240f38: 0x10000036  b           . + 4 + (0x36 << 2)
label_240f3c:
    if (ctx->pc == 0x240F3Cu) {
        ctx->pc = 0x240F40u;
        goto label_240f40;
    }
    ctx->pc = 0x240F38u;
    {
        const bool branch_taken_0x240f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240f38) {
            ctx->pc = 0x241014u;
            goto label_241014;
        }
    }
    ctx->pc = 0x240F40u;
label_240f40:
    // 0x240f40: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x240f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_240f44:
    // 0x240f44: 0xc119b68  jal         func_466DA0
label_240f48:
    if (ctx->pc == 0x240F48u) {
        ctx->pc = 0x240F4Cu;
        goto label_240f4c;
    }
    ctx->pc = 0x240F44u;
    SET_GPR_U32(ctx, 31, 0x240F4Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x240F44u, 0x240F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240F4Cu;
label_240f4c:
    // 0x240f4c: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x240f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_240f50:
    // 0x240f50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x240f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240f54:
    // 0x240f54: 0xc0400e0  jal         func_100380
label_240f58:
    if (ctx->pc == 0x240F58u) {
        ctx->pc = 0x240F5Cu;
        goto label_240f5c;
    }
    ctx->pc = 0x240F54u;
    SET_GPR_U32(ctx, 31, 0x240F5Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x240F54u, 0x240F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240F5Cu;
label_240f5c:
    // 0x240f5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x240f5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240f60:
    // 0x240f60: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_240f64:
    if (ctx->pc == 0x240F64u) {
        ctx->pc = 0x240F68u;
        goto label_240f68;
    }
    ctx->pc = 0x240F60u;
    {
        const bool branch_taken_0x240f60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x240f60) {
            ctx->pc = 0x240F78u;
            goto label_240f78;
        }
    }
    ctx->pc = 0x240F68u;
label_240f68:
    // 0x240f68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_240f6c:
    // 0x240f6c: 0xc097c9c  jal         func_25F270
label_240f70:
    if (ctx->pc == 0x240F70u) {
        ctx->pc = 0x240F74u;
        goto label_240f74;
    }
    ctx->pc = 0x240F6Cu;
    SET_GPR_U32(ctx, 31, 0x240F74u);
    ctx->pc = 0x25F270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F270u, 0x240F6Cu, 0x240F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240F74u;
label_240f74:
    // 0x240f74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x240f74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240f78:
    // 0x240f78: 0xafb200b8  sw          $s2, 0xB8($sp)
    ctx->pc = 0x240f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 18));
label_240f7c:
    // 0x240f7c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x240f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_240f80:
    // 0x240f80: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x240f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_240f84:
    // 0x240f84: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x240f84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_240f88:
    // 0x240f88: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x240f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_240f8c:
    // 0x240f8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x240f8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_240f90:
    // 0x240f90: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x240f90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_240f94:
    // 0x240f94: 0x320f809  jalr        $t9
label_240f98:
    if (ctx->pc == 0x240F98u) {
        ctx->pc = 0x240F9Cu;
        goto label_240f9c;
    }
    ctx->pc = 0x240F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x240F9Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240F94u, 0x240F9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240F9Cu;
label_240f9c:
    // 0x240f9c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x240f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_240fa0:
    // 0x240fa0: 0x1000001c  b           . + 4 + (0x1C << 2)
label_240fa4:
    if (ctx->pc == 0x240FA4u) {
        ctx->pc = 0x240FA8u;
        goto label_240fa8;
    }
    ctx->pc = 0x240FA0u;
    {
        const bool branch_taken_0x240fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240fa0) {
            ctx->pc = 0x241014u;
            goto label_241014;
        }
    }
    ctx->pc = 0x240FA8u;
label_240fa8:
    // 0x240fa8: 0x240400c4  addiu       $a0, $zero, 0xC4
    ctx->pc = 0x240fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
label_240fac:
    // 0x240fac: 0xc119b68  jal         func_466DA0
label_240fb0:
    if (ctx->pc == 0x240FB0u) {
        ctx->pc = 0x240FB4u;
        goto label_240fb4;
    }
    ctx->pc = 0x240FACu;
    SET_GPR_U32(ctx, 31, 0x240FB4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x240FACu, 0x240FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240FB4u;
label_240fb4:
    // 0x240fb4: 0x240400c4  addiu       $a0, $zero, 0xC4
    ctx->pc = 0x240fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
label_240fb8:
    // 0x240fb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x240fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240fbc:
    // 0x240fbc: 0xc0400e0  jal         func_100380
label_240fc0:
    if (ctx->pc == 0x240FC0u) {
        ctx->pc = 0x240FC4u;
        goto label_240fc4;
    }
    ctx->pc = 0x240FBCu;
    SET_GPR_U32(ctx, 31, 0x240FC4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x240FBCu, 0x240FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240FC4u;
label_240fc4:
    // 0x240fc4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x240fc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240fc8:
    // 0x240fc8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_240fcc:
    if (ctx->pc == 0x240FCCu) {
        ctx->pc = 0x240FD0u;
        goto label_240fd0;
    }
    ctx->pc = 0x240FC8u;
    {
        const bool branch_taken_0x240fc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x240fc8) {
            ctx->pc = 0x240FE0u;
            goto label_240fe0;
        }
    }
    ctx->pc = 0x240FD0u;
label_240fd0:
    // 0x240fd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x240fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_240fd4:
    // 0x240fd4: 0xc09ac90  jal         func_26B240
label_240fd8:
    if (ctx->pc == 0x240FD8u) {
        ctx->pc = 0x240FDCu;
        goto label_240fdc;
    }
    ctx->pc = 0x240FD4u;
    SET_GPR_U32(ctx, 31, 0x240FDCu);
    ctx->pc = 0x26B240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B240u, 0x240FD4u, 0x240FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240FDCu;
label_240fdc:
    // 0x240fdc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x240fdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240fe0:
    // 0x240fe0: 0xafb100b4  sw          $s1, 0xB4($sp)
    ctx->pc = 0x240fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 17));
label_240fe4:
    // 0x240fe4: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x240fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_240fe8:
    // 0x240fe8: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x240fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_240fec:
    // 0x240fec: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x240fecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_240ff0:
    // 0x240ff0: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x240ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_240ff4:
    // 0x240ff4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x240ff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_240ff8:
    // 0x240ff8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x240ff8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_240ffc:
    // 0x240ffc: 0x320f809  jalr        $t9
label_241000:
    if (ctx->pc == 0x241000u) {
        ctx->pc = 0x241004u;
        goto label_241004;
    }
    ctx->pc = 0x240FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x241004u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240FFCu, 0x241004u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x241004u;
label_241004:
    // 0x241004: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x241004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_241008:
    // 0x241008: 0x10000002  b           . + 4 + (0x2 << 2)
label_24100c:
    if (ctx->pc == 0x24100Cu) {
        ctx->pc = 0x241010u;
        goto label_241010;
    }
    ctx->pc = 0x241008u;
    {
        const bool branch_taken_0x241008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241008) {
            ctx->pc = 0x241014u;
            goto label_241014;
        }
    }
    ctx->pc = 0x241010u;
label_241010:
    // 0x241010: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x241010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241014:
    // 0x241014: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x241014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_241018:
    // 0x241018: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x241018u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_24101c:
    // 0x24101c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x24101cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_241020:
    // 0x241020: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x241020u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_241024:
    // 0x241024: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x241024u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_241028:
    // 0x241028: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x241028u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24102c:
    // 0x24102c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24102cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_241030:
    // 0x241030: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x241030u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_241034:
    // 0x241034: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x241034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_241038:
    // 0x241038: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x241038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24103c:
    // 0x24103c: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x24103cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_241040:
    // 0x241040: 0x3e00008  jr          $ra
label_241044:
    if (ctx->pc == 0x241044u) {
        ctx->pc = 0x241048u;
        goto label_241048;
    }
    ctx->pc = 0x241040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241048u;
label_241048:
    // 0x241048: 0x0  nop
    ctx->pc = 0x241048u;
    // NOP
label_24104c:
    // 0x24104c: 0x0  nop
    ctx->pc = 0x24104cu;
    // NOP
label_241050:
    // 0x241050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x241050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_241054:
    // 0x241054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x241054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_241058:
    // 0x241058: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x241058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_24105c:
    // 0x24105c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x24105cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_241060:
    // 0x241060: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x241060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_241064:
    // 0x241064: 0xc084efc  jal         func_213BF0
label_241068:
    if (ctx->pc == 0x241068u) {
        ctx->pc = 0x24106Cu;
        goto label_24106c;
    }
    ctx->pc = 0x241064u;
    SET_GPR_U32(ctx, 31, 0x24106Cu);
    ctx->pc = 0x213BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213BF0u, 0x241064u, 0x24106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24106Cu;
label_24106c:
    // 0x24106c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x24106cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_241070:
    // 0x241070: 0x104300cb  beq         $v0, $v1, . + 4 + (0xCB << 2)
label_241074:
    if (ctx->pc == 0x241074u) {
        ctx->pc = 0x241078u;
        goto label_241078;
    }
    ctx->pc = 0x241070u;
    {
        const bool branch_taken_0x241070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x241070) {
            ctx->pc = 0x2413A0u;
            goto label_2413a0;
        }
    }
    ctx->pc = 0x241078u;
label_241078:
    // 0x241078: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x241078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_24107c:
    // 0x24107c: 0x104300b6  beq         $v0, $v1, . + 4 + (0xB6 << 2)
label_241080:
    if (ctx->pc == 0x241080u) {
        ctx->pc = 0x241084u;
        goto label_241084;
    }
    ctx->pc = 0x24107Cu;
    {
        const bool branch_taken_0x24107c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x24107c) {
            ctx->pc = 0x241358u;
            goto label_241358;
        }
    }
    ctx->pc = 0x241084u;
label_241084:
    // 0x241084: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x241084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_241088:
    // 0x241088: 0x104300a1  beq         $v0, $v1, . + 4 + (0xA1 << 2)
label_24108c:
    if (ctx->pc == 0x24108Cu) {
        ctx->pc = 0x241090u;
        goto label_241090;
    }
    ctx->pc = 0x241088u;
    {
        const bool branch_taken_0x241088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x241088) {
            ctx->pc = 0x241310u;
            goto label_241310;
        }
    }
    ctx->pc = 0x241090u;
label_241090:
    // 0x241090: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x241090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_241094:
    // 0x241094: 0x1043008c  beq         $v0, $v1, . + 4 + (0x8C << 2)
label_241098:
    if (ctx->pc == 0x241098u) {
        ctx->pc = 0x24109Cu;
        goto label_24109c;
    }
    ctx->pc = 0x241094u;
    {
        const bool branch_taken_0x241094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x241094) {
            ctx->pc = 0x2412C8u;
            goto label_2412c8;
        }
    }
    ctx->pc = 0x24109Cu;
label_24109c:
    // 0x24109c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x24109cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_2410a0:
    // 0x2410a0: 0x10430089  beq         $v0, $v1, . + 4 + (0x89 << 2)
label_2410a4:
    if (ctx->pc == 0x2410A4u) {
        ctx->pc = 0x2410A8u;
        goto label_2410a8;
    }
    ctx->pc = 0x2410A0u;
    {
        const bool branch_taken_0x2410a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2410a0) {
            ctx->pc = 0x2412C8u;
            goto label_2412c8;
        }
    }
    ctx->pc = 0x2410A8u;
label_2410a8:
    // 0x2410a8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2410a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2410ac:
    // 0x2410ac: 0x10430074  beq         $v0, $v1, . + 4 + (0x74 << 2)
label_2410b0:
    if (ctx->pc == 0x2410B0u) {
        ctx->pc = 0x2410B4u;
        goto label_2410b4;
    }
    ctx->pc = 0x2410ACu;
    {
        const bool branch_taken_0x2410ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2410ac) {
            ctx->pc = 0x241280u;
            goto label_241280;
        }
    }
    ctx->pc = 0x2410B4u;
label_2410b4:
    // 0x2410b4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2410b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2410b8:
    // 0x2410b8: 0x1043005a  beq         $v0, $v1, . + 4 + (0x5A << 2)
label_2410bc:
    if (ctx->pc == 0x2410BCu) {
        ctx->pc = 0x2410C0u;
        goto label_2410c0;
    }
    ctx->pc = 0x2410B8u;
    {
        const bool branch_taken_0x2410b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2410b8) {
            ctx->pc = 0x241224u;
            goto label_241224;
        }
    }
    ctx->pc = 0x2410C0u;
label_2410c0:
    // 0x2410c0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2410c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2410c4:
    // 0x2410c4: 0x10430045  beq         $v0, $v1, . + 4 + (0x45 << 2)
label_2410c8:
    if (ctx->pc == 0x2410C8u) {
        ctx->pc = 0x2410CCu;
        goto label_2410cc;
    }
    ctx->pc = 0x2410C4u;
    {
        const bool branch_taken_0x2410c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2410c4) {
            ctx->pc = 0x2411DCu;
            goto label_2411dc;
        }
    }
    ctx->pc = 0x2410CCu;
label_2410cc:
    // 0x2410cc: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2410ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2410d0:
    // 0x2410d0: 0x10430030  beq         $v0, $v1, . + 4 + (0x30 << 2)
label_2410d4:
    if (ctx->pc == 0x2410D4u) {
        ctx->pc = 0x2410D8u;
        goto label_2410d8;
    }
    ctx->pc = 0x2410D0u;
    {
        const bool branch_taken_0x2410d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2410d0) {
            ctx->pc = 0x241194u;
            goto label_241194;
        }
    }
    ctx->pc = 0x2410D8u;
label_2410d8:
    // 0x2410d8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2410d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2410dc:
    // 0x2410dc: 0x1043002d  beq         $v0, $v1, . + 4 + (0x2D << 2)
label_2410e0:
    if (ctx->pc == 0x2410E0u) {
        ctx->pc = 0x2410E4u;
        goto label_2410e4;
    }
    ctx->pc = 0x2410DCu;
    {
        const bool branch_taken_0x2410dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2410dc) {
            ctx->pc = 0x241194u;
            goto label_241194;
        }
    }
    ctx->pc = 0x2410E4u;
label_2410e4:
    // 0x2410e4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2410e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2410e8:
    // 0x2410e8: 0x10430018  beq         $v0, $v1, . + 4 + (0x18 << 2)
label_2410ec:
    if (ctx->pc == 0x2410ECu) {
        ctx->pc = 0x2410F0u;
        goto label_2410f0;
    }
    ctx->pc = 0x2410E8u;
    {
        const bool branch_taken_0x2410e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2410e8) {
            ctx->pc = 0x24114Cu;
            goto label_24114c;
        }
    }
    ctx->pc = 0x2410F0u;
label_2410f0:
    // 0x2410f0: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2410f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2410f4:
    // 0x2410f4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_2410f8:
    if (ctx->pc == 0x2410F8u) {
        ctx->pc = 0x2410FCu;
        goto label_2410fc;
    }
    ctx->pc = 0x2410F4u;
    {
        const bool branch_taken_0x2410f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2410f4) {
            ctx->pc = 0x241104u;
            goto label_241104;
        }
    }
    ctx->pc = 0x2410FCu;
label_2410fc:
    // 0x2410fc: 0x100000ba  b           . + 4 + (0xBA << 2)
label_241100:
    if (ctx->pc == 0x241100u) {
        ctx->pc = 0x241104u;
        goto label_241104;
    }
    ctx->pc = 0x2410FCu;
    {
        const bool branch_taken_0x2410fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2410fc) {
            ctx->pc = 0x2413E8u;
            goto label_2413e8;
        }
    }
    ctx->pc = 0x241104u;
label_241104:
    // 0x241104: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x241104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_241108:
    // 0x241108: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x241108u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24110c:
    // 0x24110c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x24110cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_241110:
    // 0x241110: 0x320f809  jalr        $t9
label_241114:
    if (ctx->pc == 0x241114u) {
        ctx->pc = 0x241118u;
        goto label_241118;
    }
    ctx->pc = 0x241110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x241118u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241110u, 0x241118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x241118u;
label_241118:
    // 0x241118: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x241118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_24111c:
    // 0x24111c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_241120:
    if (ctx->pc == 0x241120u) {
        ctx->pc = 0x241124u;
        goto label_241124;
    }
    ctx->pc = 0x24111Cu;
    {
        const bool branch_taken_0x24111c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24111c) {
            ctx->pc = 0x241140u;
            goto label_241140;
        }
    }
    ctx->pc = 0x241124u;
label_241124:
    // 0x241124: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x241124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_241128:
    // 0x241128: 0xc090500  jal         func_241400
label_24112c:
    if (ctx->pc == 0x24112Cu) {
        ctx->pc = 0x241130u;
        goto label_241130;
    }
    ctx->pc = 0x241128u;
    SET_GPR_U32(ctx, 31, 0x241130u);
    ctx->pc = 0x241400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241400u, 0x241128u, 0x241130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241130u;
label_241130:
    // 0x241130: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x241130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_241134:
    // 0x241134: 0xc119c5c  jal         func_467170
label_241138:
    if (ctx->pc == 0x241138u) {
        ctx->pc = 0x24113Cu;
        goto label_24113c;
    }
    ctx->pc = 0x241134u;
    SET_GPR_U32(ctx, 31, 0x24113Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x241134u, 0x24113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24113Cu;
label_24113c:
    // 0x24113c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x24113cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_241140:
    // 0x241140: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241144:
    // 0x241144: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_241148:
    if (ctx->pc == 0x241148u) {
        ctx->pc = 0x24114Cu;
        goto label_24114c;
    }
    ctx->pc = 0x241144u;
    {
        const bool branch_taken_0x241144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241144) {
            ctx->pc = 0x2413ECu;
            goto label_2413ec;
        }
    }
    ctx->pc = 0x24114Cu;
label_24114c:
    // 0x24114c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x24114cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_241150:
    // 0x241150: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x241150u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_241154:
    // 0x241154: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x241154u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_241158:
    // 0x241158: 0x320f809  jalr        $t9
label_24115c:
    if (ctx->pc == 0x24115Cu) {
        ctx->pc = 0x241160u;
        goto label_241160;
    }
    ctx->pc = 0x241158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x241160u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241158u, 0x241160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x241160u;
label_241160:
    // 0x241160: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x241160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_241164:
    // 0x241164: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_241168:
    if (ctx->pc == 0x241168u) {
        ctx->pc = 0x24116Cu;
        goto label_24116c;
    }
    ctx->pc = 0x241164u;
    {
        const bool branch_taken_0x241164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241164) {
            ctx->pc = 0x241188u;
            goto label_241188;
        }
    }
    ctx->pc = 0x24116Cu;
label_24116c:
    // 0x24116c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x24116cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_241170:
    // 0x241170: 0xc090500  jal         func_241400
label_241174:
    if (ctx->pc == 0x241174u) {
        ctx->pc = 0x241178u;
        goto label_241178;
    }
    ctx->pc = 0x241170u;
    SET_GPR_U32(ctx, 31, 0x241178u);
    ctx->pc = 0x241400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241400u, 0x241170u, 0x241178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241178u;
label_241178:
    // 0x241178: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x241178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_24117c:
    // 0x24117c: 0xc119c5c  jal         func_467170
label_241180:
    if (ctx->pc == 0x241180u) {
        ctx->pc = 0x241184u;
        goto label_241184;
    }
    ctx->pc = 0x24117Cu;
    SET_GPR_U32(ctx, 31, 0x241184u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x24117Cu, 0x241184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241184u;
label_241184:
    // 0x241184: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x241184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_241188:
    // 0x241188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24118c:
    // 0x24118c: 0x10000097  b           . + 4 + (0x97 << 2)
label_241190:
    if (ctx->pc == 0x241190u) {
        ctx->pc = 0x241194u;
        goto label_241194;
    }
    ctx->pc = 0x24118Cu;
    {
        const bool branch_taken_0x24118c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24118c) {
            ctx->pc = 0x2413ECu;
            goto label_2413ec;
        }
    }
    ctx->pc = 0x241194u;
label_241194:
    // 0x241194: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x241194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_241198:
    // 0x241198: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x241198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24119c:
    // 0x24119c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x24119cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2411a0:
    // 0x2411a0: 0x320f809  jalr        $t9
label_2411a4:
    if (ctx->pc == 0x2411A4u) {
        ctx->pc = 0x2411A8u;
        goto label_2411a8;
    }
    ctx->pc = 0x2411A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2411A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2411A0u, 0x2411A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2411A8u;
label_2411a8:
    // 0x2411a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2411a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2411ac:
    // 0x2411ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2411b0:
    if (ctx->pc == 0x2411B0u) {
        ctx->pc = 0x2411B4u;
        goto label_2411b4;
    }
    ctx->pc = 0x2411ACu;
    {
        const bool branch_taken_0x2411ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2411ac) {
            ctx->pc = 0x2411D0u;
            goto label_2411d0;
        }
    }
    ctx->pc = 0x2411B4u;
label_2411b4:
    // 0x2411b4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2411b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2411b8:
    // 0x2411b8: 0xc090500  jal         func_241400
label_2411bc:
    if (ctx->pc == 0x2411BCu) {
        ctx->pc = 0x2411C0u;
        goto label_2411c0;
    }
    ctx->pc = 0x2411B8u;
    SET_GPR_U32(ctx, 31, 0x2411C0u);
    ctx->pc = 0x241400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241400u, 0x2411B8u, 0x2411C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2411C0u;
label_2411c0:
    // 0x2411c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2411c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2411c4:
    // 0x2411c4: 0xc119c5c  jal         func_467170
label_2411c8:
    if (ctx->pc == 0x2411C8u) {
        ctx->pc = 0x2411CCu;
        goto label_2411cc;
    }
    ctx->pc = 0x2411C4u;
    SET_GPR_U32(ctx, 31, 0x2411CCu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2411C4u, 0x2411CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2411CCu;
label_2411cc:
    // 0x2411cc: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2411ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2411d0:
    // 0x2411d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2411d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2411d4:
    // 0x2411d4: 0x10000085  b           . + 4 + (0x85 << 2)
label_2411d8:
    if (ctx->pc == 0x2411D8u) {
        ctx->pc = 0x2411DCu;
        goto label_2411dc;
    }
    ctx->pc = 0x2411D4u;
    {
        const bool branch_taken_0x2411d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2411d4) {
            ctx->pc = 0x2413ECu;
            goto label_2413ec;
        }
    }
    ctx->pc = 0x2411DCu;
label_2411dc:
    // 0x2411dc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2411dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2411e0:
    // 0x2411e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2411e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2411e4:
    // 0x2411e4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2411e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2411e8:
    // 0x2411e8: 0x320f809  jalr        $t9
label_2411ec:
    if (ctx->pc == 0x2411ECu) {
        ctx->pc = 0x2411F0u;
        goto label_2411f0;
    }
    ctx->pc = 0x2411E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2411F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2411E8u, 0x2411F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2411F0u;
label_2411f0:
    // 0x2411f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2411f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2411f4:
    // 0x2411f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2411f8:
    if (ctx->pc == 0x2411F8u) {
        ctx->pc = 0x2411FCu;
        goto label_2411fc;
    }
    ctx->pc = 0x2411F4u;
    {
        const bool branch_taken_0x2411f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2411f4) {
            ctx->pc = 0x241218u;
            goto label_241218;
        }
    }
    ctx->pc = 0x2411FCu;
label_2411fc:
    // 0x2411fc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2411fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_241200:
    // 0x241200: 0xc090500  jal         func_241400
label_241204:
    if (ctx->pc == 0x241204u) {
        ctx->pc = 0x241208u;
        goto label_241208;
    }
    ctx->pc = 0x241200u;
    SET_GPR_U32(ctx, 31, 0x241208u);
    ctx->pc = 0x241400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241400u, 0x241200u, 0x241208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241208u;
label_241208:
    // 0x241208: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x241208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_24120c:
    // 0x24120c: 0xc119c5c  jal         func_467170
label_241210:
    if (ctx->pc == 0x241210u) {
        ctx->pc = 0x241214u;
        goto label_241214;
    }
    ctx->pc = 0x24120Cu;
    SET_GPR_U32(ctx, 31, 0x241214u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x24120Cu, 0x241214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241214u;
label_241214:
    // 0x241214: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x241214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_241218:
    // 0x241218: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24121c:
    // 0x24121c: 0x10000073  b           . + 4 + (0x73 << 2)
label_241220:
    if (ctx->pc == 0x241220u) {
        ctx->pc = 0x241224u;
        goto label_241224;
    }
    ctx->pc = 0x24121Cu;
    {
        const bool branch_taken_0x24121c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24121c) {
            ctx->pc = 0x2413ECu;
            goto label_2413ec;
        }
    }
    ctx->pc = 0x241224u;
label_241224:
    // 0x241224: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x241224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_241228:
    // 0x241228: 0x8c44111c  lw          $a0, 0x111C($v0)
    ctx->pc = 0x241228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4380)));
label_24122c:
    // 0x24122c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x24122cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_241230:
    // 0x241230: 0xc095538  jal         func_2554E0
label_241234:
    if (ctx->pc == 0x241234u) {
        ctx->pc = 0x241238u;
        goto label_241238;
    }
    ctx->pc = 0x241230u;
    SET_GPR_U32(ctx, 31, 0x241238u);
    ctx->pc = 0x2554E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2554E0u, 0x241230u, 0x241238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241238u;
label_241238:
    // 0x241238: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x241238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_24123c:
    // 0x24123c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24123cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_241240:
    // 0x241240: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x241240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_241244:
    // 0x241244: 0x320f809  jalr        $t9
label_241248:
    if (ctx->pc == 0x241248u) {
        ctx->pc = 0x24124Cu;
        goto label_24124c;
    }
    ctx->pc = 0x241244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24124Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241244u, 0x24124Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24124Cu;
label_24124c:
    // 0x24124c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x24124cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_241250:
    // 0x241250: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_241254:
    if (ctx->pc == 0x241254u) {
        ctx->pc = 0x241258u;
        goto label_241258;
    }
    ctx->pc = 0x241250u;
    {
        const bool branch_taken_0x241250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241250) {
            ctx->pc = 0x241274u;
            goto label_241274;
        }
    }
    ctx->pc = 0x241258u;
label_241258:
    // 0x241258: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x241258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_24125c:
    // 0x24125c: 0xc090500  jal         func_241400
label_241260:
    if (ctx->pc == 0x241260u) {
        ctx->pc = 0x241264u;
        goto label_241264;
    }
    ctx->pc = 0x24125Cu;
    SET_GPR_U32(ctx, 31, 0x241264u);
    ctx->pc = 0x241400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241400u, 0x24125Cu, 0x241264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241264u;
label_241264:
    // 0x241264: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x241264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_241268:
    // 0x241268: 0xc119c5c  jal         func_467170
label_24126c:
    if (ctx->pc == 0x24126Cu) {
        ctx->pc = 0x241270u;
        goto label_241270;
    }
    ctx->pc = 0x241268u;
    SET_GPR_U32(ctx, 31, 0x241270u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x241268u, 0x241270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241270u;
label_241270:
    // 0x241270: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x241270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_241274:
    // 0x241274: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241278:
    // 0x241278: 0x1000005c  b           . + 4 + (0x5C << 2)
label_24127c:
    if (ctx->pc == 0x24127Cu) {
        ctx->pc = 0x241280u;
        goto label_241280;
    }
    ctx->pc = 0x241278u;
    {
        const bool branch_taken_0x241278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241278) {
            ctx->pc = 0x2413ECu;
            goto label_2413ec;
        }
    }
    ctx->pc = 0x241280u;
label_241280:
    // 0x241280: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x241280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_241284:
    // 0x241284: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x241284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_241288:
    // 0x241288: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x241288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_24128c:
    // 0x24128c: 0x320f809  jalr        $t9
label_241290:
    if (ctx->pc == 0x241290u) {
        ctx->pc = 0x241294u;
        goto label_241294;
    }
    ctx->pc = 0x24128Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x241294u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24128Cu, 0x241294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x241294u;
label_241294:
    // 0x241294: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x241294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_241298:
    // 0x241298: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_24129c:
    if (ctx->pc == 0x24129Cu) {
        ctx->pc = 0x2412A0u;
        goto label_2412a0;
    }
    ctx->pc = 0x241298u;
    {
        const bool branch_taken_0x241298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241298) {
            ctx->pc = 0x2412BCu;
            goto label_2412bc;
        }
    }
    ctx->pc = 0x2412A0u;
label_2412a0:
    // 0x2412a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2412a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2412a4:
    // 0x2412a4: 0xc090500  jal         func_241400
label_2412a8:
    if (ctx->pc == 0x2412A8u) {
        ctx->pc = 0x2412ACu;
        goto label_2412ac;
    }
    ctx->pc = 0x2412A4u;
    SET_GPR_U32(ctx, 31, 0x2412ACu);
    ctx->pc = 0x241400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241400u, 0x2412A4u, 0x2412ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2412ACu;
label_2412ac:
    // 0x2412ac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2412acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2412b0:
    // 0x2412b0: 0xc119c5c  jal         func_467170
label_2412b4:
    if (ctx->pc == 0x2412B4u) {
        ctx->pc = 0x2412B8u;
        goto label_2412b8;
    }
    ctx->pc = 0x2412B0u;
    SET_GPR_U32(ctx, 31, 0x2412B8u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2412B0u, 0x2412B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2412B8u;
label_2412b8:
    // 0x2412b8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2412b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2412bc:
    // 0x2412bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2412bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2412c0:
    // 0x2412c0: 0x1000004a  b           . + 4 + (0x4A << 2)
label_2412c4:
    if (ctx->pc == 0x2412C4u) {
        ctx->pc = 0x2412C8u;
        goto label_2412c8;
    }
    ctx->pc = 0x2412C0u;
    {
        const bool branch_taken_0x2412c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2412c0) {
            ctx->pc = 0x2413ECu;
            goto label_2413ec;
        }
    }
    ctx->pc = 0x2412C8u;
label_2412c8:
    // 0x2412c8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2412c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2412cc:
    // 0x2412cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2412ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2412d0:
    // 0x2412d0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2412d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2412d4:
    // 0x2412d4: 0x320f809  jalr        $t9
label_2412d8:
    if (ctx->pc == 0x2412D8u) {
        ctx->pc = 0x2412DCu;
        goto label_2412dc;
    }
    ctx->pc = 0x2412D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2412DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2412D4u, 0x2412DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2412DCu;
label_2412dc:
    // 0x2412dc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2412dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2412e0:
    // 0x2412e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2412e4:
    if (ctx->pc == 0x2412E4u) {
        ctx->pc = 0x2412E8u;
        goto label_2412e8;
    }
    ctx->pc = 0x2412E0u;
    {
        const bool branch_taken_0x2412e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2412e0) {
            ctx->pc = 0x241304u;
            goto label_241304;
        }
    }
    ctx->pc = 0x2412E8u;
label_2412e8:
    // 0x2412e8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2412e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2412ec:
    // 0x2412ec: 0xc090500  jal         func_241400
label_2412f0:
    if (ctx->pc == 0x2412F0u) {
        ctx->pc = 0x2412F4u;
        goto label_2412f4;
    }
    ctx->pc = 0x2412ECu;
    SET_GPR_U32(ctx, 31, 0x2412F4u);
    ctx->pc = 0x241400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241400u, 0x2412ECu, 0x2412F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2412F4u;
label_2412f4:
    // 0x2412f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2412f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2412f8:
    // 0x2412f8: 0xc119c5c  jal         func_467170
label_2412fc:
    if (ctx->pc == 0x2412FCu) {
        ctx->pc = 0x241300u;
        goto label_241300;
    }
    ctx->pc = 0x2412F8u;
    SET_GPR_U32(ctx, 31, 0x241300u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2412F8u, 0x241300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241300u;
label_241300:
    // 0x241300: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x241300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_241304:
    // 0x241304: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241308:
    // 0x241308: 0x10000038  b           . + 4 + (0x38 << 2)
label_24130c:
    if (ctx->pc == 0x24130Cu) {
        ctx->pc = 0x241310u;
        goto label_241310;
    }
    ctx->pc = 0x241308u;
    {
        const bool branch_taken_0x241308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241308) {
            ctx->pc = 0x2413ECu;
            goto label_2413ec;
        }
    }
    ctx->pc = 0x241310u;
label_241310:
    // 0x241310: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x241310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_241314:
    // 0x241314: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x241314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_241318:
    // 0x241318: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x241318u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_24131c:
    // 0x24131c: 0x320f809  jalr        $t9
label_241320:
    if (ctx->pc == 0x241320u) {
        ctx->pc = 0x241324u;
        goto label_241324;
    }
    ctx->pc = 0x24131Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x241324u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24131Cu, 0x241324u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x241324u;
label_241324:
    // 0x241324: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x241324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_241328:
    // 0x241328: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_24132c:
    if (ctx->pc == 0x24132Cu) {
        ctx->pc = 0x241330u;
        goto label_241330;
    }
    ctx->pc = 0x241328u;
    {
        const bool branch_taken_0x241328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241328) {
            ctx->pc = 0x24134Cu;
            goto label_24134c;
        }
    }
    ctx->pc = 0x241330u;
label_241330:
    // 0x241330: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x241330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_241334:
    // 0x241334: 0xc090500  jal         func_241400
label_241338:
    if (ctx->pc == 0x241338u) {
        ctx->pc = 0x24133Cu;
        goto label_24133c;
    }
    ctx->pc = 0x241334u;
    SET_GPR_U32(ctx, 31, 0x24133Cu);
    ctx->pc = 0x241400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241400u, 0x241334u, 0x24133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24133Cu;
label_24133c:
    // 0x24133c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x24133cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_241340:
    // 0x241340: 0xc119c5c  jal         func_467170
label_241344:
    if (ctx->pc == 0x241344u) {
        ctx->pc = 0x241348u;
        goto label_241348;
    }
    ctx->pc = 0x241340u;
    SET_GPR_U32(ctx, 31, 0x241348u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x241340u, 0x241348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241348u;
label_241348:
    // 0x241348: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x241348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_24134c:
    // 0x24134c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24134cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241350:
    // 0x241350: 0x10000026  b           . + 4 + (0x26 << 2)
label_241354:
    if (ctx->pc == 0x241354u) {
        ctx->pc = 0x241358u;
        goto label_241358;
    }
    ctx->pc = 0x241350u;
    {
        const bool branch_taken_0x241350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241350) {
            ctx->pc = 0x2413ECu;
            goto label_2413ec;
        }
    }
    ctx->pc = 0x241358u;
label_241358:
    // 0x241358: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x241358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_24135c:
    // 0x24135c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24135cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_241360:
    // 0x241360: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x241360u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_241364:
    // 0x241364: 0x320f809  jalr        $t9
label_241368:
    if (ctx->pc == 0x241368u) {
        ctx->pc = 0x24136Cu;
        goto label_24136c;
    }
    ctx->pc = 0x241364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24136Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241364u, 0x24136Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24136Cu;
label_24136c:
    // 0x24136c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x24136cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_241370:
    // 0x241370: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_241374:
    if (ctx->pc == 0x241374u) {
        ctx->pc = 0x241378u;
        goto label_241378;
    }
    ctx->pc = 0x241370u;
    {
        const bool branch_taken_0x241370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241370) {
            ctx->pc = 0x241394u;
            goto label_241394;
        }
    }
    ctx->pc = 0x241378u;
label_241378:
    // 0x241378: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x241378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_24137c:
    // 0x24137c: 0xc090500  jal         func_241400
label_241380:
    if (ctx->pc == 0x241380u) {
        ctx->pc = 0x241384u;
        goto label_241384;
    }
    ctx->pc = 0x24137Cu;
    SET_GPR_U32(ctx, 31, 0x241384u);
    ctx->pc = 0x241400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241400u, 0x24137Cu, 0x241384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241384u;
label_241384:
    // 0x241384: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x241384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_241388:
    // 0x241388: 0xc119c5c  jal         func_467170
label_24138c:
    if (ctx->pc == 0x24138Cu) {
        ctx->pc = 0x241390u;
        goto label_241390;
    }
    ctx->pc = 0x241388u;
    SET_GPR_U32(ctx, 31, 0x241390u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x241388u, 0x241390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241390u;
label_241390:
    // 0x241390: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x241390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_241394:
    // 0x241394: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241398:
    // 0x241398: 0x10000014  b           . + 4 + (0x14 << 2)
label_24139c:
    if (ctx->pc == 0x24139Cu) {
        ctx->pc = 0x2413A0u;
        goto label_2413a0;
    }
    ctx->pc = 0x241398u;
    {
        const bool branch_taken_0x241398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241398) {
            ctx->pc = 0x2413ECu;
            goto label_2413ec;
        }
    }
    ctx->pc = 0x2413A0u;
label_2413a0:
    // 0x2413a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2413a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2413a4:
    // 0x2413a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2413a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2413a8:
    // 0x2413a8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2413a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2413ac:
    // 0x2413ac: 0x320f809  jalr        $t9
label_2413b0:
    if (ctx->pc == 0x2413B0u) {
        ctx->pc = 0x2413B4u;
        goto label_2413b4;
    }
    ctx->pc = 0x2413ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2413B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2413ACu, 0x2413B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2413B4u;
label_2413b4:
    // 0x2413b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2413b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2413b8:
    // 0x2413b8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2413bc:
    if (ctx->pc == 0x2413BCu) {
        ctx->pc = 0x2413C0u;
        goto label_2413c0;
    }
    ctx->pc = 0x2413B8u;
    {
        const bool branch_taken_0x2413b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2413b8) {
            ctx->pc = 0x2413DCu;
            goto label_2413dc;
        }
    }
    ctx->pc = 0x2413C0u;
label_2413c0:
    // 0x2413c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2413c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2413c4:
    // 0x2413c4: 0xc090500  jal         func_241400
label_2413c8:
    if (ctx->pc == 0x2413C8u) {
        ctx->pc = 0x2413CCu;
        goto label_2413cc;
    }
    ctx->pc = 0x2413C4u;
    SET_GPR_U32(ctx, 31, 0x2413CCu);
    ctx->pc = 0x241400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241400u, 0x2413C4u, 0x2413CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2413CCu;
label_2413cc:
    // 0x2413cc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2413ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2413d0:
    // 0x2413d0: 0xc119c5c  jal         func_467170
label_2413d4:
    if (ctx->pc == 0x2413D4u) {
        ctx->pc = 0x2413D8u;
        goto label_2413d8;
    }
    ctx->pc = 0x2413D0u;
    SET_GPR_U32(ctx, 31, 0x2413D8u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2413D0u, 0x2413D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2413D8u;
label_2413d8:
    // 0x2413d8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2413d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2413dc:
    // 0x2413dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2413dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2413e0:
    // 0x2413e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2413e4:
    if (ctx->pc == 0x2413E4u) {
        ctx->pc = 0x2413E8u;
        goto label_2413e8;
    }
    ctx->pc = 0x2413E0u;
    {
        const bool branch_taken_0x2413e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2413e0) {
            ctx->pc = 0x2413ECu;
            goto label_2413ec;
        }
    }
    ctx->pc = 0x2413E8u;
label_2413e8:
    // 0x2413e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2413e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2413ec:
    // 0x2413ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2413ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2413f0:
    // 0x2413f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2413f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2413f4:
    // 0x2413f4: 0x3e00008  jr          $ra
label_2413f8:
    if (ctx->pc == 0x2413F8u) {
        ctx->pc = 0x2413FCu;
        goto label_2413fc;
    }
    ctx->pc = 0x2413F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2413F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2413FCu;
label_2413fc:
    // 0x2413fc: 0x0  nop
    ctx->pc = 0x2413fcu;
    // NOP
    ctx->pc = 0x241400u;
}
