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

// Function: sub_00171A00
// Address: 0x171a00 - 0x172640
void sub_00171A00_0x171a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171A00_0x171a00");
#endif

    switch (ctx->pc) {
        case 0x171a00u: goto label_171a00;
        case 0x171a04u: goto label_171a04;
        case 0x171a08u: goto label_171a08;
        case 0x171a0cu: goto label_171a0c;
        case 0x171a10u: goto label_171a10;
        case 0x171a14u: goto label_171a14;
        case 0x171a18u: goto label_171a18;
        case 0x171a1cu: goto label_171a1c;
        case 0x171a20u: goto label_171a20;
        case 0x171a24u: goto label_171a24;
        case 0x171a28u: goto label_171a28;
        case 0x171a2cu: goto label_171a2c;
        case 0x171a30u: goto label_171a30;
        case 0x171a34u: goto label_171a34;
        case 0x171a38u: goto label_171a38;
        case 0x171a3cu: goto label_171a3c;
        case 0x171a40u: goto label_171a40;
        case 0x171a44u: goto label_171a44;
        case 0x171a48u: goto label_171a48;
        case 0x171a4cu: goto label_171a4c;
        case 0x171a50u: goto label_171a50;
        case 0x171a54u: goto label_171a54;
        case 0x171a58u: goto label_171a58;
        case 0x171a5cu: goto label_171a5c;
        case 0x171a60u: goto label_171a60;
        case 0x171a64u: goto label_171a64;
        case 0x171a68u: goto label_171a68;
        case 0x171a6cu: goto label_171a6c;
        case 0x171a70u: goto label_171a70;
        case 0x171a74u: goto label_171a74;
        case 0x171a78u: goto label_171a78;
        case 0x171a7cu: goto label_171a7c;
        case 0x171a80u: goto label_171a80;
        case 0x171a84u: goto label_171a84;
        case 0x171a88u: goto label_171a88;
        case 0x171a8cu: goto label_171a8c;
        case 0x171a90u: goto label_171a90;
        case 0x171a94u: goto label_171a94;
        case 0x171a98u: goto label_171a98;
        case 0x171a9cu: goto label_171a9c;
        case 0x171aa0u: goto label_171aa0;
        case 0x171aa4u: goto label_171aa4;
        case 0x171aa8u: goto label_171aa8;
        case 0x171aacu: goto label_171aac;
        case 0x171ab0u: goto label_171ab0;
        case 0x171ab4u: goto label_171ab4;
        case 0x171ab8u: goto label_171ab8;
        case 0x171abcu: goto label_171abc;
        case 0x171ac0u: goto label_171ac0;
        case 0x171ac4u: goto label_171ac4;
        case 0x171ac8u: goto label_171ac8;
        case 0x171accu: goto label_171acc;
        case 0x171ad0u: goto label_171ad0;
        case 0x171ad4u: goto label_171ad4;
        case 0x171ad8u: goto label_171ad8;
        case 0x171adcu: goto label_171adc;
        case 0x171ae0u: goto label_171ae0;
        case 0x171ae4u: goto label_171ae4;
        case 0x171ae8u: goto label_171ae8;
        case 0x171aecu: goto label_171aec;
        case 0x171af0u: goto label_171af0;
        case 0x171af4u: goto label_171af4;
        case 0x171af8u: goto label_171af8;
        case 0x171afcu: goto label_171afc;
        case 0x171b00u: goto label_171b00;
        case 0x171b04u: goto label_171b04;
        case 0x171b08u: goto label_171b08;
        case 0x171b0cu: goto label_171b0c;
        case 0x171b10u: goto label_171b10;
        case 0x171b14u: goto label_171b14;
        case 0x171b18u: goto label_171b18;
        case 0x171b1cu: goto label_171b1c;
        case 0x171b20u: goto label_171b20;
        case 0x171b24u: goto label_171b24;
        case 0x171b28u: goto label_171b28;
        case 0x171b2cu: goto label_171b2c;
        case 0x171b30u: goto label_171b30;
        case 0x171b34u: goto label_171b34;
        case 0x171b38u: goto label_171b38;
        case 0x171b3cu: goto label_171b3c;
        case 0x171b40u: goto label_171b40;
        case 0x171b44u: goto label_171b44;
        case 0x171b48u: goto label_171b48;
        case 0x171b4cu: goto label_171b4c;
        case 0x171b50u: goto label_171b50;
        case 0x171b54u: goto label_171b54;
        case 0x171b58u: goto label_171b58;
        case 0x171b5cu: goto label_171b5c;
        case 0x171b60u: goto label_171b60;
        case 0x171b64u: goto label_171b64;
        case 0x171b68u: goto label_171b68;
        case 0x171b6cu: goto label_171b6c;
        case 0x171b70u: goto label_171b70;
        case 0x171b74u: goto label_171b74;
        case 0x171b78u: goto label_171b78;
        case 0x171b7cu: goto label_171b7c;
        case 0x171b80u: goto label_171b80;
        case 0x171b84u: goto label_171b84;
        case 0x171b88u: goto label_171b88;
        case 0x171b8cu: goto label_171b8c;
        case 0x171b90u: goto label_171b90;
        case 0x171b94u: goto label_171b94;
        case 0x171b98u: goto label_171b98;
        case 0x171b9cu: goto label_171b9c;
        case 0x171ba0u: goto label_171ba0;
        case 0x171ba4u: goto label_171ba4;
        case 0x171ba8u: goto label_171ba8;
        case 0x171bacu: goto label_171bac;
        case 0x171bb0u: goto label_171bb0;
        case 0x171bb4u: goto label_171bb4;
        case 0x171bb8u: goto label_171bb8;
        case 0x171bbcu: goto label_171bbc;
        case 0x171bc0u: goto label_171bc0;
        case 0x171bc4u: goto label_171bc4;
        case 0x171bc8u: goto label_171bc8;
        case 0x171bccu: goto label_171bcc;
        case 0x171bd0u: goto label_171bd0;
        case 0x171bd4u: goto label_171bd4;
        case 0x171bd8u: goto label_171bd8;
        case 0x171bdcu: goto label_171bdc;
        case 0x171be0u: goto label_171be0;
        case 0x171be4u: goto label_171be4;
        case 0x171be8u: goto label_171be8;
        case 0x171becu: goto label_171bec;
        case 0x171bf0u: goto label_171bf0;
        case 0x171bf4u: goto label_171bf4;
        case 0x171bf8u: goto label_171bf8;
        case 0x171bfcu: goto label_171bfc;
        case 0x171c00u: goto label_171c00;
        case 0x171c04u: goto label_171c04;
        case 0x171c08u: goto label_171c08;
        case 0x171c0cu: goto label_171c0c;
        case 0x171c10u: goto label_171c10;
        case 0x171c14u: goto label_171c14;
        case 0x171c18u: goto label_171c18;
        case 0x171c1cu: goto label_171c1c;
        case 0x171c20u: goto label_171c20;
        case 0x171c24u: goto label_171c24;
        case 0x171c28u: goto label_171c28;
        case 0x171c2cu: goto label_171c2c;
        case 0x171c30u: goto label_171c30;
        case 0x171c34u: goto label_171c34;
        case 0x171c38u: goto label_171c38;
        case 0x171c3cu: goto label_171c3c;
        case 0x171c40u: goto label_171c40;
        case 0x171c44u: goto label_171c44;
        case 0x171c48u: goto label_171c48;
        case 0x171c4cu: goto label_171c4c;
        case 0x171c50u: goto label_171c50;
        case 0x171c54u: goto label_171c54;
        case 0x171c58u: goto label_171c58;
        case 0x171c5cu: goto label_171c5c;
        case 0x171c60u: goto label_171c60;
        case 0x171c64u: goto label_171c64;
        case 0x171c68u: goto label_171c68;
        case 0x171c6cu: goto label_171c6c;
        case 0x171c70u: goto label_171c70;
        case 0x171c74u: goto label_171c74;
        case 0x171c78u: goto label_171c78;
        case 0x171c7cu: goto label_171c7c;
        case 0x171c80u: goto label_171c80;
        case 0x171c84u: goto label_171c84;
        case 0x171c88u: goto label_171c88;
        case 0x171c8cu: goto label_171c8c;
        case 0x171c90u: goto label_171c90;
        case 0x171c94u: goto label_171c94;
        case 0x171c98u: goto label_171c98;
        case 0x171c9cu: goto label_171c9c;
        case 0x171ca0u: goto label_171ca0;
        case 0x171ca4u: goto label_171ca4;
        case 0x171ca8u: goto label_171ca8;
        case 0x171cacu: goto label_171cac;
        case 0x171cb0u: goto label_171cb0;
        case 0x171cb4u: goto label_171cb4;
        case 0x171cb8u: goto label_171cb8;
        case 0x171cbcu: goto label_171cbc;
        case 0x171cc0u: goto label_171cc0;
        case 0x171cc4u: goto label_171cc4;
        case 0x171cc8u: goto label_171cc8;
        case 0x171cccu: goto label_171ccc;
        case 0x171cd0u: goto label_171cd0;
        case 0x171cd4u: goto label_171cd4;
        case 0x171cd8u: goto label_171cd8;
        case 0x171cdcu: goto label_171cdc;
        case 0x171ce0u: goto label_171ce0;
        case 0x171ce4u: goto label_171ce4;
        case 0x171ce8u: goto label_171ce8;
        case 0x171cecu: goto label_171cec;
        case 0x171cf0u: goto label_171cf0;
        case 0x171cf4u: goto label_171cf4;
        case 0x171cf8u: goto label_171cf8;
        case 0x171cfcu: goto label_171cfc;
        case 0x171d00u: goto label_171d00;
        case 0x171d04u: goto label_171d04;
        case 0x171d08u: goto label_171d08;
        case 0x171d0cu: goto label_171d0c;
        case 0x171d10u: goto label_171d10;
        case 0x171d14u: goto label_171d14;
        case 0x171d18u: goto label_171d18;
        case 0x171d1cu: goto label_171d1c;
        case 0x171d20u: goto label_171d20;
        case 0x171d24u: goto label_171d24;
        case 0x171d28u: goto label_171d28;
        case 0x171d2cu: goto label_171d2c;
        case 0x171d30u: goto label_171d30;
        case 0x171d34u: goto label_171d34;
        case 0x171d38u: goto label_171d38;
        case 0x171d3cu: goto label_171d3c;
        case 0x171d40u: goto label_171d40;
        case 0x171d44u: goto label_171d44;
        case 0x171d48u: goto label_171d48;
        case 0x171d4cu: goto label_171d4c;
        case 0x171d50u: goto label_171d50;
        case 0x171d54u: goto label_171d54;
        case 0x171d58u: goto label_171d58;
        case 0x171d5cu: goto label_171d5c;
        case 0x171d60u: goto label_171d60;
        case 0x171d64u: goto label_171d64;
        case 0x171d68u: goto label_171d68;
        case 0x171d6cu: goto label_171d6c;
        case 0x171d70u: goto label_171d70;
        case 0x171d74u: goto label_171d74;
        case 0x171d78u: goto label_171d78;
        case 0x171d7cu: goto label_171d7c;
        case 0x171d80u: goto label_171d80;
        case 0x171d84u: goto label_171d84;
        case 0x171d88u: goto label_171d88;
        case 0x171d8cu: goto label_171d8c;
        case 0x171d90u: goto label_171d90;
        case 0x171d94u: goto label_171d94;
        case 0x171d98u: goto label_171d98;
        case 0x171d9cu: goto label_171d9c;
        case 0x171da0u: goto label_171da0;
        case 0x171da4u: goto label_171da4;
        case 0x171da8u: goto label_171da8;
        case 0x171dacu: goto label_171dac;
        case 0x171db0u: goto label_171db0;
        case 0x171db4u: goto label_171db4;
        case 0x171db8u: goto label_171db8;
        case 0x171dbcu: goto label_171dbc;
        case 0x171dc0u: goto label_171dc0;
        case 0x171dc4u: goto label_171dc4;
        case 0x171dc8u: goto label_171dc8;
        case 0x171dccu: goto label_171dcc;
        case 0x171dd0u: goto label_171dd0;
        case 0x171dd4u: goto label_171dd4;
        case 0x171dd8u: goto label_171dd8;
        case 0x171ddcu: goto label_171ddc;
        case 0x171de0u: goto label_171de0;
        case 0x171de4u: goto label_171de4;
        case 0x171de8u: goto label_171de8;
        case 0x171decu: goto label_171dec;
        case 0x171df0u: goto label_171df0;
        case 0x171df4u: goto label_171df4;
        case 0x171df8u: goto label_171df8;
        case 0x171dfcu: goto label_171dfc;
        case 0x171e00u: goto label_171e00;
        case 0x171e04u: goto label_171e04;
        case 0x171e08u: goto label_171e08;
        case 0x171e0cu: goto label_171e0c;
        case 0x171e10u: goto label_171e10;
        case 0x171e14u: goto label_171e14;
        case 0x171e18u: goto label_171e18;
        case 0x171e1cu: goto label_171e1c;
        case 0x171e20u: goto label_171e20;
        case 0x171e24u: goto label_171e24;
        case 0x171e28u: goto label_171e28;
        case 0x171e2cu: goto label_171e2c;
        case 0x171e30u: goto label_171e30;
        case 0x171e34u: goto label_171e34;
        case 0x171e38u: goto label_171e38;
        case 0x171e3cu: goto label_171e3c;
        case 0x171e40u: goto label_171e40;
        case 0x171e44u: goto label_171e44;
        case 0x171e48u: goto label_171e48;
        case 0x171e4cu: goto label_171e4c;
        case 0x171e50u: goto label_171e50;
        case 0x171e54u: goto label_171e54;
        case 0x171e58u: goto label_171e58;
        case 0x171e5cu: goto label_171e5c;
        case 0x171e60u: goto label_171e60;
        case 0x171e64u: goto label_171e64;
        case 0x171e68u: goto label_171e68;
        case 0x171e6cu: goto label_171e6c;
        case 0x171e70u: goto label_171e70;
        case 0x171e74u: goto label_171e74;
        case 0x171e78u: goto label_171e78;
        case 0x171e7cu: goto label_171e7c;
        case 0x171e80u: goto label_171e80;
        case 0x171e84u: goto label_171e84;
        case 0x171e88u: goto label_171e88;
        case 0x171e8cu: goto label_171e8c;
        case 0x171e90u: goto label_171e90;
        case 0x171e94u: goto label_171e94;
        case 0x171e98u: goto label_171e98;
        case 0x171e9cu: goto label_171e9c;
        case 0x171ea0u: goto label_171ea0;
        case 0x171ea4u: goto label_171ea4;
        case 0x171ea8u: goto label_171ea8;
        case 0x171eacu: goto label_171eac;
        case 0x171eb0u: goto label_171eb0;
        case 0x171eb4u: goto label_171eb4;
        case 0x171eb8u: goto label_171eb8;
        case 0x171ebcu: goto label_171ebc;
        case 0x171ec0u: goto label_171ec0;
        case 0x171ec4u: goto label_171ec4;
        case 0x171ec8u: goto label_171ec8;
        case 0x171eccu: goto label_171ecc;
        case 0x171ed0u: goto label_171ed0;
        case 0x171ed4u: goto label_171ed4;
        case 0x171ed8u: goto label_171ed8;
        case 0x171edcu: goto label_171edc;
        case 0x171ee0u: goto label_171ee0;
        case 0x171ee4u: goto label_171ee4;
        case 0x171ee8u: goto label_171ee8;
        case 0x171eecu: goto label_171eec;
        case 0x171ef0u: goto label_171ef0;
        case 0x171ef4u: goto label_171ef4;
        case 0x171ef8u: goto label_171ef8;
        case 0x171efcu: goto label_171efc;
        case 0x171f00u: goto label_171f00;
        case 0x171f04u: goto label_171f04;
        case 0x171f08u: goto label_171f08;
        case 0x171f0cu: goto label_171f0c;
        case 0x171f10u: goto label_171f10;
        case 0x171f14u: goto label_171f14;
        case 0x171f18u: goto label_171f18;
        case 0x171f1cu: goto label_171f1c;
        case 0x171f20u: goto label_171f20;
        case 0x171f24u: goto label_171f24;
        case 0x171f28u: goto label_171f28;
        case 0x171f2cu: goto label_171f2c;
        case 0x171f30u: goto label_171f30;
        case 0x171f34u: goto label_171f34;
        case 0x171f38u: goto label_171f38;
        case 0x171f3cu: goto label_171f3c;
        case 0x171f40u: goto label_171f40;
        case 0x171f44u: goto label_171f44;
        case 0x171f48u: goto label_171f48;
        case 0x171f4cu: goto label_171f4c;
        case 0x171f50u: goto label_171f50;
        case 0x171f54u: goto label_171f54;
        case 0x171f58u: goto label_171f58;
        case 0x171f5cu: goto label_171f5c;
        case 0x171f60u: goto label_171f60;
        case 0x171f64u: goto label_171f64;
        case 0x171f68u: goto label_171f68;
        case 0x171f6cu: goto label_171f6c;
        case 0x171f70u: goto label_171f70;
        case 0x171f74u: goto label_171f74;
        case 0x171f78u: goto label_171f78;
        case 0x171f7cu: goto label_171f7c;
        case 0x171f80u: goto label_171f80;
        case 0x171f84u: goto label_171f84;
        case 0x171f88u: goto label_171f88;
        case 0x171f8cu: goto label_171f8c;
        case 0x171f90u: goto label_171f90;
        case 0x171f94u: goto label_171f94;
        case 0x171f98u: goto label_171f98;
        case 0x171f9cu: goto label_171f9c;
        case 0x171fa0u: goto label_171fa0;
        case 0x171fa4u: goto label_171fa4;
        case 0x171fa8u: goto label_171fa8;
        case 0x171facu: goto label_171fac;
        case 0x171fb0u: goto label_171fb0;
        case 0x171fb4u: goto label_171fb4;
        case 0x171fb8u: goto label_171fb8;
        case 0x171fbcu: goto label_171fbc;
        case 0x171fc0u: goto label_171fc0;
        case 0x171fc4u: goto label_171fc4;
        case 0x171fc8u: goto label_171fc8;
        case 0x171fccu: goto label_171fcc;
        case 0x171fd0u: goto label_171fd0;
        case 0x171fd4u: goto label_171fd4;
        case 0x171fd8u: goto label_171fd8;
        case 0x171fdcu: goto label_171fdc;
        case 0x171fe0u: goto label_171fe0;
        case 0x171fe4u: goto label_171fe4;
        case 0x171fe8u: goto label_171fe8;
        case 0x171fecu: goto label_171fec;
        case 0x171ff0u: goto label_171ff0;
        case 0x171ff4u: goto label_171ff4;
        case 0x171ff8u: goto label_171ff8;
        case 0x171ffcu: goto label_171ffc;
        case 0x172000u: goto label_172000;
        case 0x172004u: goto label_172004;
        case 0x172008u: goto label_172008;
        case 0x17200cu: goto label_17200c;
        case 0x172010u: goto label_172010;
        case 0x172014u: goto label_172014;
        case 0x172018u: goto label_172018;
        case 0x17201cu: goto label_17201c;
        case 0x172020u: goto label_172020;
        case 0x172024u: goto label_172024;
        case 0x172028u: goto label_172028;
        case 0x17202cu: goto label_17202c;
        case 0x172030u: goto label_172030;
        case 0x172034u: goto label_172034;
        case 0x172038u: goto label_172038;
        case 0x17203cu: goto label_17203c;
        case 0x172040u: goto label_172040;
        case 0x172044u: goto label_172044;
        case 0x172048u: goto label_172048;
        case 0x17204cu: goto label_17204c;
        case 0x172050u: goto label_172050;
        case 0x172054u: goto label_172054;
        case 0x172058u: goto label_172058;
        case 0x17205cu: goto label_17205c;
        case 0x172060u: goto label_172060;
        case 0x172064u: goto label_172064;
        case 0x172068u: goto label_172068;
        case 0x17206cu: goto label_17206c;
        case 0x172070u: goto label_172070;
        case 0x172074u: goto label_172074;
        case 0x172078u: goto label_172078;
        case 0x17207cu: goto label_17207c;
        case 0x172080u: goto label_172080;
        case 0x172084u: goto label_172084;
        case 0x172088u: goto label_172088;
        case 0x17208cu: goto label_17208c;
        case 0x172090u: goto label_172090;
        case 0x172094u: goto label_172094;
        case 0x172098u: goto label_172098;
        case 0x17209cu: goto label_17209c;
        case 0x1720a0u: goto label_1720a0;
        case 0x1720a4u: goto label_1720a4;
        case 0x1720a8u: goto label_1720a8;
        case 0x1720acu: goto label_1720ac;
        case 0x1720b0u: goto label_1720b0;
        case 0x1720b4u: goto label_1720b4;
        case 0x1720b8u: goto label_1720b8;
        case 0x1720bcu: goto label_1720bc;
        case 0x1720c0u: goto label_1720c0;
        case 0x1720c4u: goto label_1720c4;
        case 0x1720c8u: goto label_1720c8;
        case 0x1720ccu: goto label_1720cc;
        case 0x1720d0u: goto label_1720d0;
        case 0x1720d4u: goto label_1720d4;
        case 0x1720d8u: goto label_1720d8;
        case 0x1720dcu: goto label_1720dc;
        case 0x1720e0u: goto label_1720e0;
        case 0x1720e4u: goto label_1720e4;
        case 0x1720e8u: goto label_1720e8;
        case 0x1720ecu: goto label_1720ec;
        case 0x1720f0u: goto label_1720f0;
        case 0x1720f4u: goto label_1720f4;
        case 0x1720f8u: goto label_1720f8;
        case 0x1720fcu: goto label_1720fc;
        case 0x172100u: goto label_172100;
        case 0x172104u: goto label_172104;
        case 0x172108u: goto label_172108;
        case 0x17210cu: goto label_17210c;
        case 0x172110u: goto label_172110;
        case 0x172114u: goto label_172114;
        case 0x172118u: goto label_172118;
        case 0x17211cu: goto label_17211c;
        case 0x172120u: goto label_172120;
        case 0x172124u: goto label_172124;
        case 0x172128u: goto label_172128;
        case 0x17212cu: goto label_17212c;
        case 0x172130u: goto label_172130;
        case 0x172134u: goto label_172134;
        case 0x172138u: goto label_172138;
        case 0x17213cu: goto label_17213c;
        case 0x172140u: goto label_172140;
        case 0x172144u: goto label_172144;
        case 0x172148u: goto label_172148;
        case 0x17214cu: goto label_17214c;
        case 0x172150u: goto label_172150;
        case 0x172154u: goto label_172154;
        case 0x172158u: goto label_172158;
        case 0x17215cu: goto label_17215c;
        case 0x172160u: goto label_172160;
        case 0x172164u: goto label_172164;
        case 0x172168u: goto label_172168;
        case 0x17216cu: goto label_17216c;
        case 0x172170u: goto label_172170;
        case 0x172174u: goto label_172174;
        case 0x172178u: goto label_172178;
        case 0x17217cu: goto label_17217c;
        case 0x172180u: goto label_172180;
        case 0x172184u: goto label_172184;
        case 0x172188u: goto label_172188;
        case 0x17218cu: goto label_17218c;
        case 0x172190u: goto label_172190;
        case 0x172194u: goto label_172194;
        case 0x172198u: goto label_172198;
        case 0x17219cu: goto label_17219c;
        case 0x1721a0u: goto label_1721a0;
        case 0x1721a4u: goto label_1721a4;
        case 0x1721a8u: goto label_1721a8;
        case 0x1721acu: goto label_1721ac;
        case 0x1721b0u: goto label_1721b0;
        case 0x1721b4u: goto label_1721b4;
        case 0x1721b8u: goto label_1721b8;
        case 0x1721bcu: goto label_1721bc;
        case 0x1721c0u: goto label_1721c0;
        case 0x1721c4u: goto label_1721c4;
        case 0x1721c8u: goto label_1721c8;
        case 0x1721ccu: goto label_1721cc;
        case 0x1721d0u: goto label_1721d0;
        case 0x1721d4u: goto label_1721d4;
        case 0x1721d8u: goto label_1721d8;
        case 0x1721dcu: goto label_1721dc;
        case 0x1721e0u: goto label_1721e0;
        case 0x1721e4u: goto label_1721e4;
        case 0x1721e8u: goto label_1721e8;
        case 0x1721ecu: goto label_1721ec;
        case 0x1721f0u: goto label_1721f0;
        case 0x1721f4u: goto label_1721f4;
        case 0x1721f8u: goto label_1721f8;
        case 0x1721fcu: goto label_1721fc;
        case 0x172200u: goto label_172200;
        case 0x172204u: goto label_172204;
        case 0x172208u: goto label_172208;
        case 0x17220cu: goto label_17220c;
        case 0x172210u: goto label_172210;
        case 0x172214u: goto label_172214;
        case 0x172218u: goto label_172218;
        case 0x17221cu: goto label_17221c;
        case 0x172220u: goto label_172220;
        case 0x172224u: goto label_172224;
        case 0x172228u: goto label_172228;
        case 0x17222cu: goto label_17222c;
        case 0x172230u: goto label_172230;
        case 0x172234u: goto label_172234;
        case 0x172238u: goto label_172238;
        case 0x17223cu: goto label_17223c;
        case 0x172240u: goto label_172240;
        case 0x172244u: goto label_172244;
        case 0x172248u: goto label_172248;
        case 0x17224cu: goto label_17224c;
        case 0x172250u: goto label_172250;
        case 0x172254u: goto label_172254;
        case 0x172258u: goto label_172258;
        case 0x17225cu: goto label_17225c;
        case 0x172260u: goto label_172260;
        case 0x172264u: goto label_172264;
        case 0x172268u: goto label_172268;
        case 0x17226cu: goto label_17226c;
        case 0x172270u: goto label_172270;
        case 0x172274u: goto label_172274;
        case 0x172278u: goto label_172278;
        case 0x17227cu: goto label_17227c;
        case 0x172280u: goto label_172280;
        case 0x172284u: goto label_172284;
        case 0x172288u: goto label_172288;
        case 0x17228cu: goto label_17228c;
        case 0x172290u: goto label_172290;
        case 0x172294u: goto label_172294;
        case 0x172298u: goto label_172298;
        case 0x17229cu: goto label_17229c;
        case 0x1722a0u: goto label_1722a0;
        case 0x1722a4u: goto label_1722a4;
        case 0x1722a8u: goto label_1722a8;
        case 0x1722acu: goto label_1722ac;
        case 0x1722b0u: goto label_1722b0;
        case 0x1722b4u: goto label_1722b4;
        case 0x1722b8u: goto label_1722b8;
        case 0x1722bcu: goto label_1722bc;
        case 0x1722c0u: goto label_1722c0;
        case 0x1722c4u: goto label_1722c4;
        case 0x1722c8u: goto label_1722c8;
        case 0x1722ccu: goto label_1722cc;
        case 0x1722d0u: goto label_1722d0;
        case 0x1722d4u: goto label_1722d4;
        case 0x1722d8u: goto label_1722d8;
        case 0x1722dcu: goto label_1722dc;
        case 0x1722e0u: goto label_1722e0;
        case 0x1722e4u: goto label_1722e4;
        case 0x1722e8u: goto label_1722e8;
        case 0x1722ecu: goto label_1722ec;
        case 0x1722f0u: goto label_1722f0;
        case 0x1722f4u: goto label_1722f4;
        case 0x1722f8u: goto label_1722f8;
        case 0x1722fcu: goto label_1722fc;
        case 0x172300u: goto label_172300;
        case 0x172304u: goto label_172304;
        case 0x172308u: goto label_172308;
        case 0x17230cu: goto label_17230c;
        case 0x172310u: goto label_172310;
        case 0x172314u: goto label_172314;
        case 0x172318u: goto label_172318;
        case 0x17231cu: goto label_17231c;
        case 0x172320u: goto label_172320;
        case 0x172324u: goto label_172324;
        case 0x172328u: goto label_172328;
        case 0x17232cu: goto label_17232c;
        case 0x172330u: goto label_172330;
        case 0x172334u: goto label_172334;
        case 0x172338u: goto label_172338;
        case 0x17233cu: goto label_17233c;
        case 0x172340u: goto label_172340;
        case 0x172344u: goto label_172344;
        case 0x172348u: goto label_172348;
        case 0x17234cu: goto label_17234c;
        case 0x172350u: goto label_172350;
        case 0x172354u: goto label_172354;
        case 0x172358u: goto label_172358;
        case 0x17235cu: goto label_17235c;
        case 0x172360u: goto label_172360;
        case 0x172364u: goto label_172364;
        case 0x172368u: goto label_172368;
        case 0x17236cu: goto label_17236c;
        case 0x172370u: goto label_172370;
        case 0x172374u: goto label_172374;
        case 0x172378u: goto label_172378;
        case 0x17237cu: goto label_17237c;
        case 0x172380u: goto label_172380;
        case 0x172384u: goto label_172384;
        case 0x172388u: goto label_172388;
        case 0x17238cu: goto label_17238c;
        case 0x172390u: goto label_172390;
        case 0x172394u: goto label_172394;
        case 0x172398u: goto label_172398;
        case 0x17239cu: goto label_17239c;
        case 0x1723a0u: goto label_1723a0;
        case 0x1723a4u: goto label_1723a4;
        case 0x1723a8u: goto label_1723a8;
        case 0x1723acu: goto label_1723ac;
        case 0x1723b0u: goto label_1723b0;
        case 0x1723b4u: goto label_1723b4;
        case 0x1723b8u: goto label_1723b8;
        case 0x1723bcu: goto label_1723bc;
        case 0x1723c0u: goto label_1723c0;
        case 0x1723c4u: goto label_1723c4;
        case 0x1723c8u: goto label_1723c8;
        case 0x1723ccu: goto label_1723cc;
        case 0x1723d0u: goto label_1723d0;
        case 0x1723d4u: goto label_1723d4;
        case 0x1723d8u: goto label_1723d8;
        case 0x1723dcu: goto label_1723dc;
        case 0x1723e0u: goto label_1723e0;
        case 0x1723e4u: goto label_1723e4;
        case 0x1723e8u: goto label_1723e8;
        case 0x1723ecu: goto label_1723ec;
        case 0x1723f0u: goto label_1723f0;
        case 0x1723f4u: goto label_1723f4;
        case 0x1723f8u: goto label_1723f8;
        case 0x1723fcu: goto label_1723fc;
        case 0x172400u: goto label_172400;
        case 0x172404u: goto label_172404;
        case 0x172408u: goto label_172408;
        case 0x17240cu: goto label_17240c;
        case 0x172410u: goto label_172410;
        case 0x172414u: goto label_172414;
        case 0x172418u: goto label_172418;
        case 0x17241cu: goto label_17241c;
        case 0x172420u: goto label_172420;
        case 0x172424u: goto label_172424;
        case 0x172428u: goto label_172428;
        case 0x17242cu: goto label_17242c;
        case 0x172430u: goto label_172430;
        case 0x172434u: goto label_172434;
        case 0x172438u: goto label_172438;
        case 0x17243cu: goto label_17243c;
        case 0x172440u: goto label_172440;
        case 0x172444u: goto label_172444;
        case 0x172448u: goto label_172448;
        case 0x17244cu: goto label_17244c;
        case 0x172450u: goto label_172450;
        case 0x172454u: goto label_172454;
        case 0x172458u: goto label_172458;
        case 0x17245cu: goto label_17245c;
        case 0x172460u: goto label_172460;
        case 0x172464u: goto label_172464;
        case 0x172468u: goto label_172468;
        case 0x17246cu: goto label_17246c;
        case 0x172470u: goto label_172470;
        case 0x172474u: goto label_172474;
        case 0x172478u: goto label_172478;
        case 0x17247cu: goto label_17247c;
        case 0x172480u: goto label_172480;
        case 0x172484u: goto label_172484;
        case 0x172488u: goto label_172488;
        case 0x17248cu: goto label_17248c;
        case 0x172490u: goto label_172490;
        case 0x172494u: goto label_172494;
        case 0x172498u: goto label_172498;
        case 0x17249cu: goto label_17249c;
        case 0x1724a0u: goto label_1724a0;
        case 0x1724a4u: goto label_1724a4;
        case 0x1724a8u: goto label_1724a8;
        case 0x1724acu: goto label_1724ac;
        case 0x1724b0u: goto label_1724b0;
        case 0x1724b4u: goto label_1724b4;
        case 0x1724b8u: goto label_1724b8;
        case 0x1724bcu: goto label_1724bc;
        case 0x1724c0u: goto label_1724c0;
        case 0x1724c4u: goto label_1724c4;
        case 0x1724c8u: goto label_1724c8;
        case 0x1724ccu: goto label_1724cc;
        case 0x1724d0u: goto label_1724d0;
        case 0x1724d4u: goto label_1724d4;
        case 0x1724d8u: goto label_1724d8;
        case 0x1724dcu: goto label_1724dc;
        case 0x1724e0u: goto label_1724e0;
        case 0x1724e4u: goto label_1724e4;
        case 0x1724e8u: goto label_1724e8;
        case 0x1724ecu: goto label_1724ec;
        case 0x1724f0u: goto label_1724f0;
        case 0x1724f4u: goto label_1724f4;
        case 0x1724f8u: goto label_1724f8;
        case 0x1724fcu: goto label_1724fc;
        case 0x172500u: goto label_172500;
        case 0x172504u: goto label_172504;
        case 0x172508u: goto label_172508;
        case 0x17250cu: goto label_17250c;
        case 0x172510u: goto label_172510;
        case 0x172514u: goto label_172514;
        case 0x172518u: goto label_172518;
        case 0x17251cu: goto label_17251c;
        case 0x172520u: goto label_172520;
        case 0x172524u: goto label_172524;
        case 0x172528u: goto label_172528;
        case 0x17252cu: goto label_17252c;
        case 0x172530u: goto label_172530;
        case 0x172534u: goto label_172534;
        case 0x172538u: goto label_172538;
        case 0x17253cu: goto label_17253c;
        case 0x172540u: goto label_172540;
        case 0x172544u: goto label_172544;
        case 0x172548u: goto label_172548;
        case 0x17254cu: goto label_17254c;
        case 0x172550u: goto label_172550;
        case 0x172554u: goto label_172554;
        case 0x172558u: goto label_172558;
        case 0x17255cu: goto label_17255c;
        case 0x172560u: goto label_172560;
        case 0x172564u: goto label_172564;
        case 0x172568u: goto label_172568;
        case 0x17256cu: goto label_17256c;
        case 0x172570u: goto label_172570;
        case 0x172574u: goto label_172574;
        case 0x172578u: goto label_172578;
        case 0x17257cu: goto label_17257c;
        case 0x172580u: goto label_172580;
        case 0x172584u: goto label_172584;
        case 0x172588u: goto label_172588;
        case 0x17258cu: goto label_17258c;
        case 0x172590u: goto label_172590;
        case 0x172594u: goto label_172594;
        case 0x172598u: goto label_172598;
        case 0x17259cu: goto label_17259c;
        case 0x1725a0u: goto label_1725a0;
        case 0x1725a4u: goto label_1725a4;
        case 0x1725a8u: goto label_1725a8;
        case 0x1725acu: goto label_1725ac;
        case 0x1725b0u: goto label_1725b0;
        case 0x1725b4u: goto label_1725b4;
        case 0x1725b8u: goto label_1725b8;
        case 0x1725bcu: goto label_1725bc;
        case 0x1725c0u: goto label_1725c0;
        case 0x1725c4u: goto label_1725c4;
        case 0x1725c8u: goto label_1725c8;
        case 0x1725ccu: goto label_1725cc;
        case 0x1725d0u: goto label_1725d0;
        case 0x1725d4u: goto label_1725d4;
        case 0x1725d8u: goto label_1725d8;
        case 0x1725dcu: goto label_1725dc;
        case 0x1725e0u: goto label_1725e0;
        case 0x1725e4u: goto label_1725e4;
        case 0x1725e8u: goto label_1725e8;
        case 0x1725ecu: goto label_1725ec;
        case 0x1725f0u: goto label_1725f0;
        case 0x1725f4u: goto label_1725f4;
        case 0x1725f8u: goto label_1725f8;
        case 0x1725fcu: goto label_1725fc;
        case 0x172600u: goto label_172600;
        case 0x172604u: goto label_172604;
        case 0x172608u: goto label_172608;
        case 0x17260cu: goto label_17260c;
        case 0x172610u: goto label_172610;
        case 0x172614u: goto label_172614;
        case 0x172618u: goto label_172618;
        case 0x17261cu: goto label_17261c;
        case 0x172620u: goto label_172620;
        case 0x172624u: goto label_172624;
        case 0x172628u: goto label_172628;
        case 0x17262cu: goto label_17262c;
        case 0x172630u: goto label_172630;
        case 0x172634u: goto label_172634;
        case 0x172638u: goto label_172638;
        case 0x17263cu: goto label_17263c;
        default: break;
    }

    ctx->pc = 0x171a00u;

label_171a00:
    // 0x171a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_171a04:
    // 0x171a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_171a08:
    // 0x171a08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x171a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_171a0c:
    // 0x171a0c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x171a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_171a10:
    // 0x171a10: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x171a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_171a14:
    // 0x171a14: 0xc0557e8  jal         func_155FA0
label_171a18:
    if (ctx->pc == 0x171A18u) {
        ctx->pc = 0x171A1Cu;
        goto label_171a1c;
    }
    ctx->pc = 0x171A14u;
    SET_GPR_U32(ctx, 31, 0x171A1Cu);
    ctx->pc = 0x155FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FA0u, 0x171A14u, 0x171A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171A1Cu;
label_171a1c:
    // 0x171a1c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x171a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_171a20:
    // 0x171a20: 0x24633d90  addiu       $v1, $v1, 0x3D90
    ctx->pc = 0x171a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15760));
label_171a24:
    // 0x171a24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x171a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_171a28:
    // 0x171a28: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x171a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_171a2c:
    // 0x171a2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x171a2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171a30:
    // 0x171a30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x171a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_171a34:
    // 0x171a34: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x171a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
label_171a38:
    // 0x171a38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x171a38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171a3c:
    // 0x171a3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x171a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_171a40:
    // 0x171a40: 0xe440006c  swc1        $f0, 0x6C($v0)
    ctx->pc = 0x171a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
label_171a44:
    // 0x171a44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x171a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171a48:
    // 0x171a48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x171a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_171a4c:
    // 0x171a4c: 0xa0430070  sb          $v1, 0x70($v0)
    ctx->pc = 0x171a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 3));
label_171a50:
    // 0x171a50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x171a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171a54:
    // 0x171a54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x171a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_171a58:
    // 0x171a58: 0xa0430071  sb          $v1, 0x71($v0)
    ctx->pc = 0x171a58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 113), (uint8_t)GPR_U32(ctx, 3));
label_171a5c:
    // 0x171a5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x171a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_171a60:
    // 0x171a60: 0xa0400072  sb          $zero, 0x72($v0)
    ctx->pc = 0x171a60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 0));
label_171a64:
    // 0x171a64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x171a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_171a68:
    // 0x171a68: 0xa0400073  sb          $zero, 0x73($v0)
    ctx->pc = 0x171a68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 115), (uint8_t)GPR_U32(ctx, 0));
label_171a6c:
    // 0x171a6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x171a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_171a70:
    // 0x171a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_171a74:
    // 0x171a74: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x171a74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_171a78:
    // 0x171a78: 0x3e00008  jr          $ra
label_171a7c:
    if (ctx->pc == 0x171A7Cu) {
        ctx->pc = 0x171A80u;
        goto label_171a80;
    }
    ctx->pc = 0x171A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171A80u;
label_171a80:
    // 0x171a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x171a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_171a84:
    // 0x171a84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_171a88:
    // 0x171a88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x171a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_171a8c:
    // 0x171a8c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x171a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_171a90:
    // 0x171a90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x171a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_171a94:
    // 0x171a94: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_171a98:
    if (ctx->pc == 0x171A98u) {
        ctx->pc = 0x171A9Cu;
        goto label_171a9c;
    }
    ctx->pc = 0x171A94u;
    {
        const bool branch_taken_0x171a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171a94) {
            ctx->pc = 0x171ADCu;
            goto label_171adc;
        }
    }
    ctx->pc = 0x171A9Cu;
label_171a9c:
    // 0x171a9c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x171a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_171aa0:
    // 0x171aa0: 0x24633d90  addiu       $v1, $v1, 0x3D90
    ctx->pc = 0x171aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15760));
label_171aa4:
    // 0x171aa4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x171aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_171aa8:
    // 0x171aa8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x171aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_171aac:
    // 0x171aac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x171aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_171ab0:
    // 0x171ab0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171ab4:
    // 0x171ab4: 0xc055950  jal         func_156540
label_171ab8:
    if (ctx->pc == 0x171AB8u) {
        ctx->pc = 0x171ABCu;
        goto label_171abc;
    }
    ctx->pc = 0x171AB4u;
    SET_GPR_U32(ctx, 31, 0x171ABCu);
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x171AB4u, 0x171ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171ABCu;
label_171abc:
    // 0x171abc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x171abcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_171ac0:
    // 0x171ac0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x171ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_171ac4:
    // 0x171ac4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x171ac4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_171ac8:
    // 0x171ac8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_171acc:
    if (ctx->pc == 0x171ACCu) {
        ctx->pc = 0x171AD0u;
        goto label_171ad0;
    }
    ctx->pc = 0x171AC8u;
    {
        const bool branch_taken_0x171ac8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x171ac8) {
            ctx->pc = 0x171ADCu;
            goto label_171adc;
        }
    }
    ctx->pc = 0x171AD0u;
label_171ad0:
    // 0x171ad0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x171ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_171ad4:
    // 0x171ad4: 0xc0ba070  jal         func_2E81C0
label_171ad8:
    if (ctx->pc == 0x171AD8u) {
        ctx->pc = 0x171ADCu;
        goto label_171adc;
    }
    ctx->pc = 0x171AD4u;
    SET_GPR_U32(ctx, 31, 0x171ADCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x171AD4u, 0x171ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171ADCu;
label_171adc:
    // 0x171adc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x171adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_171ae0:
    // 0x171ae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_171ae4:
    // 0x171ae4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x171ae4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_171ae8:
    // 0x171ae8: 0x3e00008  jr          $ra
label_171aec:
    if (ctx->pc == 0x171AECu) {
        ctx->pc = 0x171AF0u;
        goto label_171af0;
    }
    ctx->pc = 0x171AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171AF0u;
label_171af0:
    // 0x171af0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x171af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_171af4:
    // 0x171af4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x171af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_171af8:
    // 0x171af8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x171af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_171afc:
    // 0x171afc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x171afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_171b00:
    // 0x171b00: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x171b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_171b04:
    // 0x171b04: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x171b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_171b08:
    // 0x171b08: 0xc055974  jal         func_1565D0
label_171b0c:
    if (ctx->pc == 0x171B0Cu) {
        ctx->pc = 0x171B10u;
        goto label_171b10;
    }
    ctx->pc = 0x171B08u;
    SET_GPR_U32(ctx, 31, 0x171B10u);
    ctx->pc = 0x1565D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1565D0u, 0x171B08u, 0x171B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171B10u;
label_171b10:
    // 0x171b10: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x171b10u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_171b14:
    // 0x171b14: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x171b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_171b18:
    // 0x171b18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171b1c:
    // 0x171b1c: 0x1462003d  bne         $v1, $v0, . + 4 + (0x3D << 2)
label_171b20:
    if (ctx->pc == 0x171B20u) {
        ctx->pc = 0x171B24u;
        goto label_171b24;
    }
    ctx->pc = 0x171B1Cu;
    {
        const bool branch_taken_0x171b1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x171b1c) {
            ctx->pc = 0x171C14u;
            goto label_171c14;
        }
    }
    ctx->pc = 0x171B24u;
label_171b24:
    // 0x171b24: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x171b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_171b28:
    // 0x171b28: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x171b28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_171b2c:
    // 0x171b2c: 0x24a546a0  addiu       $a1, $a1, 0x46A0
    ctx->pc = 0x171b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18080));
label_171b30:
    // 0x171b30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x171b30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_171b34:
    // 0x171b34: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x171b34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_171b38:
    // 0x171b38: 0x320f809  jalr        $t9
label_171b3c:
    if (ctx->pc == 0x171B3Cu) {
        ctx->pc = 0x171B40u;
        goto label_171b40;
    }
    ctx->pc = 0x171B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x171B40u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171B38u, 0x171B40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x171B40u;
label_171b40:
    // 0x171b40: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x171b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_171b44:
    // 0x171b44: 0x27859040  addiu       $a1, $gp, -0x6FC0
    ctx->pc = 0x171b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938688));
label_171b48:
    // 0x171b48: 0xc0552e4  jal         func_154B90
label_171b4c:
    if (ctx->pc == 0x171B4Cu) {
        ctx->pc = 0x171B50u;
        goto label_171b50;
    }
    ctx->pc = 0x171B48u;
    SET_GPR_U32(ctx, 31, 0x171B50u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x171B48u, 0x171B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171B50u;
label_171b50:
    // 0x171b50: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x171b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_171b54:
    // 0x171b54: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x171b54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_171b58:
    // 0x171b58: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x171b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_171b5c:
    // 0x171b5c: 0x27859048  addiu       $a1, $gp, -0x6FB8
    ctx->pc = 0x171b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938696));
label_171b60:
    // 0x171b60: 0xc0552e4  jal         func_154B90
label_171b64:
    if (ctx->pc == 0x171B64u) {
        ctx->pc = 0x171B68u;
        goto label_171b68;
    }
    ctx->pc = 0x171B60u;
    SET_GPR_U32(ctx, 31, 0x171B68u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x171B60u, 0x171B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171B68u;
label_171b68:
    // 0x171b68: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x171b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_171b6c:
    // 0x171b6c: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x171b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
label_171b70:
    // 0x171b70: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x171b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_171b74:
    // 0x171b74: 0x27859050  addiu       $a1, $gp, -0x6FB0
    ctx->pc = 0x171b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938704));
label_171b78:
    // 0x171b78: 0xc0552e4  jal         func_154B90
label_171b7c:
    if (ctx->pc == 0x171B7Cu) {
        ctx->pc = 0x171B80u;
        goto label_171b80;
    }
    ctx->pc = 0x171B78u;
    SET_GPR_U32(ctx, 31, 0x171B80u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x171B78u, 0x171B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171B80u;
label_171b80:
    // 0x171b80: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x171b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_171b84:
    // 0x171b84: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x171b84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_171b88:
    // 0x171b88: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x171b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_171b8c:
    // 0x171b8c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x171b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_171b90:
    // 0x171b90: 0x24a546c0  addiu       $a1, $a1, 0x46C0
    ctx->pc = 0x171b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18112));
label_171b94:
    // 0x171b94: 0xc0552e4  jal         func_154B90
label_171b98:
    if (ctx->pc == 0x171B98u) {
        ctx->pc = 0x171B9Cu;
        goto label_171b9c;
    }
    ctx->pc = 0x171B94u;
    SET_GPR_U32(ctx, 31, 0x171B9Cu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x171B94u, 0x171B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171B9Cu;
label_171b9c:
    // 0x171b9c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x171b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_171ba0:
    // 0x171ba0: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x171ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
label_171ba4:
    // 0x171ba4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x171ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_171ba8:
    // 0x171ba8: 0x27859058  addiu       $a1, $gp, -0x6FA8
    ctx->pc = 0x171ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938712));
label_171bac:
    // 0x171bac: 0xc0552e4  jal         func_154B90
label_171bb0:
    if (ctx->pc == 0x171BB0u) {
        ctx->pc = 0x171BB4u;
        goto label_171bb4;
    }
    ctx->pc = 0x171BACu;
    SET_GPR_U32(ctx, 31, 0x171BB4u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x171BACu, 0x171BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171BB4u;
label_171bb4:
    // 0x171bb4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x171bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_171bb8:
    // 0x171bb8: 0xac620064  sw          $v0, 0x64($v1)
    ctx->pc = 0x171bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
label_171bbc:
    // 0x171bbc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x171bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_171bc0:
    // 0x171bc0: 0x27859060  addiu       $a1, $gp, -0x6FA0
    ctx->pc = 0x171bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938720));
label_171bc4:
    // 0x171bc4: 0xc0552e4  jal         func_154B90
label_171bc8:
    if (ctx->pc == 0x171BC8u) {
        ctx->pc = 0x171BCCu;
        goto label_171bcc;
    }
    ctx->pc = 0x171BC4u;
    SET_GPR_U32(ctx, 31, 0x171BCCu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x171BC4u, 0x171BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171BCCu;
label_171bcc:
    // 0x171bcc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x171bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_171bd0:
    // 0x171bd0: 0xac620068  sw          $v0, 0x68($v1)
    ctx->pc = 0x171bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 2));
label_171bd4:
    // 0x171bd4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x171bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171bd8:
    // 0x171bd8: 0x1000000b  b           . + 4 + (0xB << 2)
label_171bdc:
    if (ctx->pc == 0x171BDCu) {
        ctx->pc = 0x171BE0u;
        goto label_171be0;
    }
    ctx->pc = 0x171BD8u;
    {
        const bool branch_taken_0x171bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171bd8) {
            ctx->pc = 0x171C08u;
            goto label_171c08;
        }
    }
    ctx->pc = 0x171BE0u;
label_171be0:
    // 0x171be0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x171be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_171be4:
    // 0x171be4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x171be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_171be8:
    // 0x171be8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x171be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_171bec:
    // 0x171bec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x171becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_171bf0:
    // 0x171bf0: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x171bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_171bf4:
    // 0x171bf4: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x171bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_171bf8:
    // 0x171bf8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x171bf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171bfc:
    // 0x171bfc: 0xc08c8dc  jal         func_232370
label_171c00:
    if (ctx->pc == 0x171C00u) {
        ctx->pc = 0x171C04u;
        goto label_171c04;
    }
    ctx->pc = 0x171BFCu;
    SET_GPR_U32(ctx, 31, 0x171C04u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x171BFCu, 0x171C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171C04u;
label_171c04:
    // 0x171c04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x171c04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_171c08:
    // 0x171c08: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x171c08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_171c0c:
    // 0x171c0c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_171c10:
    if (ctx->pc == 0x171C10u) {
        ctx->pc = 0x171C14u;
        goto label_171c14;
    }
    ctx->pc = 0x171C0Cu;
    {
        const bool branch_taken_0x171c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x171c0c) {
            ctx->pc = 0x171BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171be0;
        }
    }
    ctx->pc = 0x171C14u;
label_171c14:
    // 0x171c14: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x171c14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_171c18:
    // 0x171c18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x171c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_171c1c:
    // 0x171c1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x171c1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_171c20:
    // 0x171c20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x171c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_171c24:
    // 0x171c24: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x171c24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_171c28:
    // 0x171c28: 0x3e00008  jr          $ra
label_171c2c:
    if (ctx->pc == 0x171C2Cu) {
        ctx->pc = 0x171C30u;
        goto label_171c30;
    }
    ctx->pc = 0x171C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171C30u;
label_171c30:
    // 0x171c30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x171c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_171c34:
    // 0x171c34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x171c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_171c38:
    // 0x171c38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x171c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_171c3c:
    // 0x171c3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x171c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_171c40:
    // 0x171c40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x171c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_171c44:
    // 0x171c44: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x171c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_171c48:
    // 0x171c48: 0xa3a50080  sb          $a1, 0x80($sp)
    ctx->pc = 0x171c48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 5));
label_171c4c:
    // 0x171c4c: 0xc08ef50  jal         func_23BD40
label_171c50:
    if (ctx->pc == 0x171C50u) {
        ctx->pc = 0x171C54u;
        goto label_171c54;
    }
    ctx->pc = 0x171C4Cu;
    SET_GPR_U32(ctx, 31, 0x171C54u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x171C4Cu, 0x171C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171C54u;
label_171c54:
    // 0x171c54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x171c54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171c58:
    // 0x171c58: 0x10120013  beq         $zero, $s2, . + 4 + (0x13 << 2)
label_171c5c:
    if (ctx->pc == 0x171C5Cu) {
        ctx->pc = 0x171C60u;
        goto label_171c60;
    }
    ctx->pc = 0x171C58u;
    {
        const bool branch_taken_0x171c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 18));
        if (branch_taken_0x171c58) {
            ctx->pc = 0x171CA8u;
            goto label_171ca8;
        }
    }
    ctx->pc = 0x171C60u;
label_171c60:
    // 0x171c60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x171c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_171c64:
    // 0x171c64: 0xc0406f0  jal         func_101BC0
label_171c68:
    if (ctx->pc == 0x171C68u) {
        ctx->pc = 0x171C6Cu;
        goto label_171c6c;
    }
    ctx->pc = 0x171C64u;
    SET_GPR_U32(ctx, 31, 0x171C6Cu);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x171C64u, 0x171C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171C6Cu;
label_171c6c:
    // 0x171c6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x171c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171c70:
    // 0x171c70: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
label_171c74:
    if (ctx->pc == 0x171C74u) {
        ctx->pc = 0x171C78u;
        goto label_171c78;
    }
    ctx->pc = 0x171C70u;
    {
        const bool branch_taken_0x171c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x171c70) {
            ctx->pc = 0x171CB0u;
            goto label_171cb0;
        }
    }
    ctx->pc = 0x171C78u;
label_171c78:
    // 0x171c78: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_171c7c:
    if (ctx->pc == 0x171C7Cu) {
        ctx->pc = 0x171C80u;
        goto label_171c80;
    }
    ctx->pc = 0x171C78u;
    {
        const bool branch_taken_0x171c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171c78) {
            ctx->pc = 0x171CB0u;
            goto label_171cb0;
        }
    }
    ctx->pc = 0x171C80u;
label_171c80:
    // 0x171c80: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x171c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_171c84:
    // 0x171c84: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
label_171c88:
    if (ctx->pc == 0x171C88u) {
        ctx->pc = 0x171C8Cu;
        goto label_171c8c;
    }
    ctx->pc = 0x171C84u;
    {
        const bool branch_taken_0x171c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x171c84) {
            ctx->pc = 0x171CB0u;
            goto label_171cb0;
        }
    }
    ctx->pc = 0x171C8Cu;
label_171c8c:
    // 0x171c8c: 0x93a30080  lbu         $v1, 0x80($sp)
    ctx->pc = 0x171c8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
label_171c90:
    // 0x171c90: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x171c90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_171c94:
    // 0x171c94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x171c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171c98:
    // 0x171c98: 0x108300ab  beq         $a0, $v1, . + 4 + (0xAB << 2)
label_171c9c:
    if (ctx->pc == 0x171C9Cu) {
        ctx->pc = 0x171CA0u;
        goto label_171ca0;
    }
    ctx->pc = 0x171C98u;
    {
        const bool branch_taken_0x171c98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x171c98) {
            ctx->pc = 0x171F48u;
            goto label_171f48;
        }
    }
    ctx->pc = 0x171CA0u;
label_171ca0:
    // 0x171ca0: 0x10000003  b           . + 4 + (0x3 << 2)
label_171ca4:
    if (ctx->pc == 0x171CA4u) {
        ctx->pc = 0x171CA8u;
        goto label_171ca8;
    }
    ctx->pc = 0x171CA0u;
    {
        const bool branch_taken_0x171ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171ca0) {
            ctx->pc = 0x171CB0u;
            goto label_171cb0;
        }
    }
    ctx->pc = 0x171CA8u;
label_171ca8:
    // 0x171ca8: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_171cac:
    if (ctx->pc == 0x171CACu) {
        ctx->pc = 0x171CB0u;
        goto label_171cb0;
    }
    ctx->pc = 0x171CA8u;
    {
        const bool branch_taken_0x171ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171ca8) {
            ctx->pc = 0x171F48u;
            goto label_171f48;
        }
    }
    ctx->pc = 0x171CB0u;
label_171cb0:
    // 0x171cb0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x171cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_171cb4:
    // 0x171cb4: 0x93a50080  lbu         $a1, 0x80($sp)
    ctx->pc = 0x171cb4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
label_171cb8:
    // 0x171cb8: 0xc055a78  jal         func_1569E0
label_171cbc:
    if (ctx->pc == 0x171CBCu) {
        ctx->pc = 0x171CC0u;
        goto label_171cc0;
    }
    ctx->pc = 0x171CB8u;
    SET_GPR_U32(ctx, 31, 0x171CC0u);
    ctx->pc = 0x1569E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569E0u, 0x171CB8u, 0x171CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171CC0u;
label_171cc0:
    // 0x171cc0: 0x93a20080  lbu         $v0, 0x80($sp)
    ctx->pc = 0x171cc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
label_171cc4:
    // 0x171cc4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x171cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_171cc8:
    // 0x171cc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171ccc:
    // 0x171ccc: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
label_171cd0:
    if (ctx->pc == 0x171CD0u) {
        ctx->pc = 0x171CD4u;
        goto label_171cd4;
    }
    ctx->pc = 0x171CCCu;
    {
        const bool branch_taken_0x171ccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x171ccc) {
            ctx->pc = 0x171D88u;
            goto label_171d88;
        }
    }
    ctx->pc = 0x171CD4u;
label_171cd4:
    // 0x171cd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x171cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171cd8:
    // 0x171cd8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x171cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_171cdc:
    // 0x171cdc: 0xa0430070  sb          $v1, 0x70($v0)
    ctx->pc = 0x171cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 3));
label_171ce0:
    // 0x171ce0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x171ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_171ce4:
    // 0x171ce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171ce8:
    // 0x171ce8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x171ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_171cec:
    // 0x171cec: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x171cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
label_171cf0:
    // 0x171cf0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x171cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171cf4:
    // 0x171cf4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_171cf8:
    if (ctx->pc == 0x171CF8u) {
        ctx->pc = 0x171CFCu;
        goto label_171cfc;
    }
    ctx->pc = 0x171CF4u;
    {
        const bool branch_taken_0x171cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171cf4) {
            ctx->pc = 0x171D60u;
            goto label_171d60;
        }
    }
    ctx->pc = 0x171CFCu;
label_171cfc:
    // 0x171cfc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x171cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_171d00:
    // 0x171d00: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
label_171d04:
    if (ctx->pc == 0x171D04u) {
        ctx->pc = 0x171D08u;
        goto label_171d08;
    }
    ctx->pc = 0x171D00u;
    {
        const bool branch_taken_0x171d00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x171d00) {
            ctx->pc = 0x171D38u;
            goto label_171d38;
        }
    }
    ctx->pc = 0x171D08u;
label_171d08:
    // 0x171d08: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x171d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_171d0c:
    // 0x171d0c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x171d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_171d10:
    // 0x171d10: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x171d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_171d14:
    // 0x171d14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x171d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_171d18:
    // 0x171d18: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x171d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_171d1c:
    // 0x171d1c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x171d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_171d20:
    // 0x171d20: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x171d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_171d24:
    // 0x171d24: 0x90460072  lbu         $a2, 0x72($v0)
    ctx->pc = 0x171d24u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 114)));
label_171d28:
    // 0x171d28: 0xc08c8dc  jal         func_232370
label_171d2c:
    if (ctx->pc == 0x171D2Cu) {
        ctx->pc = 0x171D30u;
        goto label_171d30;
    }
    ctx->pc = 0x171D28u;
    SET_GPR_U32(ctx, 31, 0x171D30u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x171D28u, 0x171D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171D30u;
label_171d30:
    // 0x171d30: 0x1000000a  b           . + 4 + (0xA << 2)
label_171d34:
    if (ctx->pc == 0x171D34u) {
        ctx->pc = 0x171D38u;
        goto label_171d38;
    }
    ctx->pc = 0x171D30u;
    {
        const bool branch_taken_0x171d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171d30) {
            ctx->pc = 0x171D5Cu;
            goto label_171d5c;
        }
    }
    ctx->pc = 0x171D38u;
label_171d38:
    // 0x171d38: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x171d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_171d3c:
    // 0x171d3c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x171d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_171d40:
    // 0x171d40: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x171d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_171d44:
    // 0x171d44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x171d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_171d48:
    // 0x171d48: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x171d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_171d4c:
    // 0x171d4c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x171d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_171d50:
    // 0x171d50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x171d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171d54:
    // 0x171d54: 0xc08c8dc  jal         func_232370
label_171d58:
    if (ctx->pc == 0x171D58u) {
        ctx->pc = 0x171D5Cu;
        goto label_171d5c;
    }
    ctx->pc = 0x171D54u;
    SET_GPR_U32(ctx, 31, 0x171D5Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x171D54u, 0x171D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171D5Cu;
label_171d5c:
    // 0x171d5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x171d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_171d60:
    // 0x171d60: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x171d60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_171d64:
    // 0x171d64: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_171d68:
    if (ctx->pc == 0x171D68u) {
        ctx->pc = 0x171D6Cu;
        goto label_171d6c;
    }
    ctx->pc = 0x171D64u;
    {
        const bool branch_taken_0x171d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x171d64) {
            ctx->pc = 0x171CFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171cfc;
        }
    }
    ctx->pc = 0x171D6Cu;
label_171d6c:
    // 0x171d6c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x171d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_171d70:
    // 0x171d70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x171d70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_171d74:
    // 0x171d74: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x171d74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_171d78:
    // 0x171d78: 0x320f809  jalr        $t9
label_171d7c:
    if (ctx->pc == 0x171D7Cu) {
        ctx->pc = 0x171D80u;
        goto label_171d80;
    }
    ctx->pc = 0x171D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x171D80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171D78u, 0x171D80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x171D80u;
label_171d80:
    // 0x171d80: 0x10000071  b           . + 4 + (0x71 << 2)
label_171d84:
    if (ctx->pc == 0x171D84u) {
        ctx->pc = 0x171D88u;
        goto label_171d88;
    }
    ctx->pc = 0x171D80u;
    {
        const bool branch_taken_0x171d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171d80) {
            ctx->pc = 0x171F48u;
            goto label_171f48;
        }
    }
    ctx->pc = 0x171D88u;
label_171d88:
    // 0x171d88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x171d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171d8c:
    // 0x171d8c: 0x1000000b  b           . + 4 + (0xB << 2)
label_171d90:
    if (ctx->pc == 0x171D90u) {
        ctx->pc = 0x171D94u;
        goto label_171d94;
    }
    ctx->pc = 0x171D8Cu;
    {
        const bool branch_taken_0x171d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171d8c) {
            ctx->pc = 0x171DBCu;
            goto label_171dbc;
        }
    }
    ctx->pc = 0x171D94u;
label_171d94:
    // 0x171d94: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x171d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_171d98:
    // 0x171d98: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x171d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_171d9c:
    // 0x171d9c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x171d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_171da0:
    // 0x171da0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x171da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_171da4:
    // 0x171da4: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x171da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_171da8:
    // 0x171da8: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x171da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_171dac:
    // 0x171dac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x171dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171db0:
    // 0x171db0: 0xc08c8dc  jal         func_232370
label_171db4:
    if (ctx->pc == 0x171DB4u) {
        ctx->pc = 0x171DB8u;
        goto label_171db8;
    }
    ctx->pc = 0x171DB0u;
    SET_GPR_U32(ctx, 31, 0x171DB8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x171DB0u, 0x171DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171DB8u;
label_171db8:
    // 0x171db8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x171db8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_171dbc:
    // 0x171dbc: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x171dbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_171dc0:
    // 0x171dc0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_171dc4:
    if (ctx->pc == 0x171DC4u) {
        ctx->pc = 0x171DC8u;
        goto label_171dc8;
    }
    ctx->pc = 0x171DC0u;
    {
        const bool branch_taken_0x171dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x171dc0) {
            ctx->pc = 0x171D94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171d94;
        }
    }
    ctx->pc = 0x171DC8u;
label_171dc8:
    // 0x171dc8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x171dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_171dcc:
    // 0x171dcc: 0xa0400073  sb          $zero, 0x73($v0)
    ctx->pc = 0x171dccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 115), (uint8_t)GPR_U32(ctx, 0));
label_171dd0:
    // 0x171dd0: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x171dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_171dd4:
    // 0x171dd4: 0xc047eb8  jal         func_11FAE0
label_171dd8:
    if (ctx->pc == 0x171DD8u) {
        ctx->pc = 0x171DDCu;
        goto label_171ddc;
    }
    ctx->pc = 0x171DD4u;
    SET_GPR_U32(ctx, 31, 0x171DDCu);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x171DD4u, 0x171DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171DDCu;
label_171ddc:
    // 0x171ddc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x171ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171de0:
    // 0x171de0: 0xc08d590  jal         func_235640
label_171de4:
    if (ctx->pc == 0x171DE4u) {
        ctx->pc = 0x171DE8u;
        goto label_171de8;
    }
    ctx->pc = 0x171DE0u;
    SET_GPR_U32(ctx, 31, 0x171DE8u);
    ctx->pc = 0x235640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235640u, 0x171DE0u, 0x171DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171DE8u;
label_171de8:
    // 0x171de8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x171de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_171dec:
    // 0x171dec: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x171decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_171df0:
    // 0x171df0: 0xc461006c  lwc1        $f1, 0x6C($v1)
    ctx->pc = 0x171df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_171df4:
    // 0x171df4: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x171df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171df8:
    // 0x171df8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x171df8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_171dfc:
    // 0x171dfc: 0x45010052  bc1t        . + 4 + (0x52 << 2)
label_171e00:
    if (ctx->pc == 0x171E00u) {
        ctx->pc = 0x171E04u;
        goto label_171e04;
    }
    ctx->pc = 0x171DFCu;
    {
        const bool branch_taken_0x171dfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x171dfc) {
            ctx->pc = 0x171F48u;
            goto label_171f48;
        }
    }
    ctx->pc = 0x171E04u;
label_171e04:
    // 0x171e04: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x171e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171e08:
    // 0x171e08: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x171e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_171e0c:
    // 0x171e0c: 0xe440006c  swc1        $f0, 0x6C($v0)
    ctx->pc = 0x171e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
label_171e10:
    // 0x171e10: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x171e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_171e14:
    // 0x171e14: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x171e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_171e18:
    // 0x171e18: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_171e1c:
    if (ctx->pc == 0x171E1Cu) {
        ctx->pc = 0x171E20u;
        goto label_171e20;
    }
    ctx->pc = 0x171E18u;
    {
        const bool branch_taken_0x171e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171e18) {
            ctx->pc = 0x171F28u;
            goto label_171f28;
        }
    }
    ctx->pc = 0x171E20u;
label_171e20:
    // 0x171e20: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x171e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_171e24:
    // 0x171e24: 0xc047eb8  jal         func_11FAE0
label_171e28:
    if (ctx->pc == 0x171E28u) {
        ctx->pc = 0x171E2Cu;
        goto label_171e2c;
    }
    ctx->pc = 0x171E24u;
    SET_GPR_U32(ctx, 31, 0x171E2Cu);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x171E24u, 0x171E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171E2Cu;
label_171e2c:
    // 0x171e2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x171e2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_171e30:
    // 0x171e30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x171e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171e34:
    // 0x171e34: 0x24050550  addiu       $a1, $zero, 0x550
    ctx->pc = 0x171e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1360));
label_171e38:
    // 0x171e38: 0xc042090  jal         func_108240
label_171e3c:
    if (ctx->pc == 0x171E3Cu) {
        ctx->pc = 0x171E40u;
        goto label_171e40;
    }
    ctx->pc = 0x171E38u;
    SET_GPR_U32(ctx, 31, 0x171E40u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x171E38u, 0x171E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171E40u;
label_171e40:
    // 0x171e40: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x171e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_171e44:
    // 0x171e44: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x171e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_171e48:
    // 0x171e48: 0xc041b48  jal         func_106D20
label_171e4c:
    if (ctx->pc == 0x171E4Cu) {
        ctx->pc = 0x171E50u;
        goto label_171e50;
    }
    ctx->pc = 0x171E48u;
    SET_GPR_U32(ctx, 31, 0x171E50u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x171E48u, 0x171E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171E50u;
label_171e50:
    // 0x171e50: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x171e50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_171e54:
    // 0x171e54: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x171e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171e58:
    // 0x171e58: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x171e58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_171e5c:
    // 0x171e5c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_171e60:
    if (ctx->pc == 0x171E60u) {
        ctx->pc = 0x171E64u;
        goto label_171e64;
    }
    ctx->pc = 0x171E5Cu;
    {
        const bool branch_taken_0x171e5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x171e5c) {
            ctx->pc = 0x171E7Cu;
            goto label_171e7c;
        }
    }
    ctx->pc = 0x171E64u;
label_171e64:
    // 0x171e64: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x171e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_171e68:
    // 0x171e68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x171e68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_171e6c:
    // 0x171e6c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x171e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171e70:
    // 0x171e70: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x171e70u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_171e74:
    // 0x171e74: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_171e78:
    if (ctx->pc == 0x171E78u) {
        ctx->pc = 0x171E7Cu;
        goto label_171e7c;
    }
    ctx->pc = 0x171E74u;
    {
        const bool branch_taken_0x171e74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x171e74) {
            ctx->pc = 0x171EA4u;
            goto label_171ea4;
        }
    }
    ctx->pc = 0x171E7Cu;
label_171e7c:
    // 0x171e7c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x171e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_171e80:
    // 0x171e80: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x171e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171e84:
    // 0x171e84: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x171e84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_171e88:
    // 0x171e88: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x171e88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_171e8c:
    // 0x171e8c: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x171e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_171e90:
    // 0x171e90: 0x27859068  addiu       $a1, $gp, -0x6F98
    ctx->pc = 0x171e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938728));
label_171e94:
    // 0x171e94: 0xc0424a8  jal         func_1092A0
label_171e98:
    if (ctx->pc == 0x171E98u) {
        ctx->pc = 0x171E9Cu;
        goto label_171e9c;
    }
    ctx->pc = 0x171E94u;
    SET_GPR_U32(ctx, 31, 0x171E9Cu);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x171E94u, 0x171E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171E9Cu;
label_171e9c:
    // 0x171e9c: 0x1000000e  b           . + 4 + (0xE << 2)
label_171ea0:
    if (ctx->pc == 0x171EA0u) {
        ctx->pc = 0x171EA4u;
        goto label_171ea4;
    }
    ctx->pc = 0x171E9Cu;
    {
        const bool branch_taken_0x171e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171e9c) {
            ctx->pc = 0x171ED8u;
            goto label_171ed8;
        }
    }
    ctx->pc = 0x171EA4u;
label_171ea4:
    // 0x171ea4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x171ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_171ea8:
    // 0x171ea8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x171ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_171eac:
    // 0x171eac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x171eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_171eb0:
    // 0x171eb0: 0xc460006c  lwc1        $f0, 0x6C($v1)
    ctx->pc = 0x171eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171eb4:
    // 0x171eb4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x171eb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_171eb8:
    // 0x171eb8: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x171eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171ebc:
    // 0x171ebc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x171ebcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_171ec0:
    // 0x171ec0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x171ec0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_171ec4:
    // 0x171ec4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x171ec4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_171ec8:
    // 0x171ec8: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x171ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_171ecc:
    // 0x171ecc: 0x27859068  addiu       $a1, $gp, -0x6F98
    ctx->pc = 0x171eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938728));
label_171ed0:
    // 0x171ed0: 0xc0424a8  jal         func_1092A0
label_171ed4:
    if (ctx->pc == 0x171ED4u) {
        ctx->pc = 0x171ED8u;
        goto label_171ed8;
    }
    ctx->pc = 0x171ED0u;
    SET_GPR_U32(ctx, 31, 0x171ED8u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x171ED0u, 0x171ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171ED8u;
label_171ed8:
    // 0x171ed8: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x171ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_171edc:
    // 0x171edc: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x171edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_171ee0:
    // 0x171ee0: 0xc119568  jal         func_4655A0
label_171ee4:
    if (ctx->pc == 0x171EE4u) {
        ctx->pc = 0x171EE8u;
        goto label_171ee8;
    }
    ctx->pc = 0x171EE0u;
    SET_GPR_U32(ctx, 31, 0x171EE8u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x171EE0u, 0x171EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171EE8u;
label_171ee8:
    // 0x171ee8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x171ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_171eec:
    // 0x171eec: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x171eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_171ef0:
    // 0x171ef0: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x171ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_171ef4:
    // 0x171ef4: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x171ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_171ef8:
    // 0x171ef8: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x171ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_171efc:
    // 0x171efc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x171efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171f00:
    // 0x171f00: 0xc08c378  jal         func_230DE0
label_171f04:
    if (ctx->pc == 0x171F04u) {
        ctx->pc = 0x171F08u;
        goto label_171f08;
    }
    ctx->pc = 0x171F00u;
    SET_GPR_U32(ctx, 31, 0x171F08u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x171F00u, 0x171F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171F08u;
label_171f08:
    // 0x171f08: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x171f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_171f0c:
    // 0x171f0c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x171f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_171f10:
    // 0x171f10: 0xc0406a0  jal         func_101A80
label_171f14:
    if (ctx->pc == 0x171F14u) {
        ctx->pc = 0x171F18u;
        goto label_171f18;
    }
    ctx->pc = 0x171F10u;
    SET_GPR_U32(ctx, 31, 0x171F18u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x171F10u, 0x171F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171F18u;
label_171f18:
    // 0x171f18: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x171f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_171f1c:
    // 0x171f1c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x171f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_171f20:
    // 0x171f20: 0xc0402d4  jal         func_100B50
label_171f24:
    if (ctx->pc == 0x171F24u) {
        ctx->pc = 0x171F28u;
        goto label_171f28;
    }
    ctx->pc = 0x171F20u;
    SET_GPR_U32(ctx, 31, 0x171F28u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x171F20u, 0x171F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171F28u;
label_171f28:
    // 0x171f28: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x171f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_171f2c:
    // 0x171f2c: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x171f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171f30:
    // 0x171f30: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x171f30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_171f34:
    // 0x171f34: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x171f34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_171f38:
    // 0x171f38: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x171f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_171f3c:
    // 0x171f3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x171f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171f40:
    // 0x171f40: 0xc08d48c  jal         func_235230
label_171f44:
    if (ctx->pc == 0x171F44u) {
        ctx->pc = 0x171F48u;
        goto label_171f48;
    }
    ctx->pc = 0x171F40u;
    SET_GPR_U32(ctx, 31, 0x171F48u);
    ctx->pc = 0x235230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235230u, 0x171F40u, 0x171F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171F48u;
label_171f48:
    // 0x171f48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x171f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_171f4c:
    // 0x171f4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x171f4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_171f50:
    // 0x171f50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x171f50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_171f54:
    // 0x171f54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x171f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_171f58:
    // 0x171f58: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x171f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_171f5c:
    // 0x171f5c: 0x3e00008  jr          $ra
label_171f60:
    if (ctx->pc == 0x171F60u) {
        ctx->pc = 0x171F64u;
        goto label_171f64;
    }
    ctx->pc = 0x171F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171F64u;
label_171f64:
    // 0x171f64: 0x0  nop
    ctx->pc = 0x171f64u;
    // NOP
label_171f68:
    // 0x171f68: 0x0  nop
    ctx->pc = 0x171f68u;
    // NOP
label_171f6c:
    // 0x171f6c: 0x0  nop
    ctx->pc = 0x171f6cu;
    // NOP
label_171f70:
    // 0x171f70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x171f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_171f74:
    // 0x171f74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_171f78:
    // 0x171f78: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x171f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_171f7c:
    // 0x171f7c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x171f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_171f80:
    // 0x171f80: 0xc055b3c  jal         func_156CF0
label_171f84:
    if (ctx->pc == 0x171F84u) {
        ctx->pc = 0x171F88u;
        goto label_171f88;
    }
    ctx->pc = 0x171F80u;
    SET_GPR_U32(ctx, 31, 0x171F88u);
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x171F80u, 0x171F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171F88u;
label_171f88:
    // 0x171f88: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x171f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_171f8c:
    // 0x171f8c: 0xc0413bc  jal         func_104EF0
label_171f90:
    if (ctx->pc == 0x171F90u) {
        ctx->pc = 0x171F94u;
        goto label_171f94;
    }
    ctx->pc = 0x171F8Cu;
    SET_GPR_U32(ctx, 31, 0x171F94u);
    ctx->pc = 0x104EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EF0u, 0x171F8Cu, 0x171F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171F94u;
label_171f94:
    // 0x171f94: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x171f94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_171f98:
    // 0x171f98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x171f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171f9c:
    // 0x171f9c: 0x14830196  bne         $a0, $v1, . + 4 + (0x196 << 2)
label_171fa0:
    if (ctx->pc == 0x171FA0u) {
        ctx->pc = 0x171FA4u;
        goto label_171fa4;
    }
    ctx->pc = 0x171F9Cu;
    {
        const bool branch_taken_0x171f9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x171f9c) {
            ctx->pc = 0x1725F8u;
            goto label_1725f8;
        }
    }
    ctx->pc = 0x171FA4u;
label_171fa4:
    // 0x171fa4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x171fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_171fa8:
    // 0x171fa8: 0x90420071  lbu         $v0, 0x71($v0)
    ctx->pc = 0x171fa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 113)));
label_171fac:
    // 0x171fac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x171facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_171fb0:
    // 0x171fb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171fb4:
    // 0x171fb4: 0x1462009c  bne         $v1, $v0, . + 4 + (0x9C << 2)
label_171fb8:
    if (ctx->pc == 0x171FB8u) {
        ctx->pc = 0x171FBCu;
        goto label_171fbc;
    }
    ctx->pc = 0x171FB4u;
    {
        const bool branch_taken_0x171fb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x171fb4) {
            ctx->pc = 0x172228u;
            goto label_172228;
        }
    }
    ctx->pc = 0x171FBCu;
label_171fbc:
    // 0x171fbc: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x171fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_171fc0:
    // 0x171fc0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x171fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_171fc4:
    // 0x171fc4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x171fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_171fc8:
    // 0x171fc8: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x171fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171fcc:
    // 0x171fcc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x171fccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_171fd0:
    // 0x171fd0: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x171fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
label_171fd4:
    // 0x171fd4: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x171fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_171fd8:
    // 0x171fd8: 0xc047eb8  jal         func_11FAE0
label_171fdc:
    if (ctx->pc == 0x171FDCu) {
        ctx->pc = 0x171FE0u;
        goto label_171fe0;
    }
    ctx->pc = 0x171FD8u;
    SET_GPR_U32(ctx, 31, 0x171FE0u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x171FD8u, 0x171FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171FE0u;
label_171fe0:
    // 0x171fe0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x171fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171fe4:
    // 0x171fe4: 0xc08d590  jal         func_235640
label_171fe8:
    if (ctx->pc == 0x171FE8u) {
        ctx->pc = 0x171FECu;
        goto label_171fec;
    }
    ctx->pc = 0x171FE4u;
    SET_GPR_U32(ctx, 31, 0x171FECu);
    ctx->pc = 0x235640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235640u, 0x171FE4u, 0x171FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171FECu;
label_171fec:
    // 0x171fec: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x171fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_171ff0:
    // 0x171ff0: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x171ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_171ff4:
    // 0x171ff4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x171ff4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_171ff8:
    // 0x171ff8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x171ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_171ffc:
    // 0x171ffc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x171ffcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_172000:
    // 0x172000: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x172000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172004:
    // 0x172004: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x172004u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_172008:
    // 0x172008: 0x45000087  bc1f        . + 4 + (0x87 << 2)
label_17200c:
    if (ctx->pc == 0x17200Cu) {
        ctx->pc = 0x172010u;
        goto label_172010;
    }
    ctx->pc = 0x172008u;
    {
        const bool branch_taken_0x172008 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x172008) {
            ctx->pc = 0x172228u;
            goto label_172228;
        }
    }
    ctx->pc = 0x172010u;
label_172010:
    // 0x172010: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x172010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_172014:
    // 0x172014: 0x90420073  lbu         $v0, 0x73($v0)
    ctx->pc = 0x172014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 115)));
label_172018:
    // 0x172018: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
label_17201c:
    if (ctx->pc == 0x17201Cu) {
        ctx->pc = 0x172020u;
        goto label_172020;
    }
    ctx->pc = 0x172018u;
    {
        const bool branch_taken_0x172018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x172018) {
            ctx->pc = 0x172228u;
            goto label_172228;
        }
    }
    ctx->pc = 0x172020u;
label_172020:
    // 0x172020: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x172020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_172024:
    // 0x172024: 0xc047eb8  jal         func_11FAE0
label_172028:
    if (ctx->pc == 0x172028u) {
        ctx->pc = 0x17202Cu;
        goto label_17202c;
    }
    ctx->pc = 0x172024u;
    SET_GPR_U32(ctx, 31, 0x17202Cu);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x172024u, 0x17202Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17202Cu;
label_17202c:
    // 0x17202c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17202cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172030:
    // 0x172030: 0xc08d5a0  jal         func_235680
label_172034:
    if (ctx->pc == 0x172034u) {
        ctx->pc = 0x172038u;
        goto label_172038;
    }
    ctx->pc = 0x172030u;
    SET_GPR_U32(ctx, 31, 0x172038u);
    ctx->pc = 0x235680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235680u, 0x172030u, 0x172038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172038u;
label_172038:
    // 0x172038: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x172038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_17203c:
    // 0x17203c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17203cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_172040:
    // 0x172040: 0x0  nop
    ctx->pc = 0x172040u;
    // NOP
label_172044:
    // 0x172044: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x172044u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_172048:
    // 0x172048: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x172048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_17204c:
    // 0x17204c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17204cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172050:
    // 0x172050: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x172050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_172054:
    // 0x172054: 0xa0430073  sb          $v1, 0x73($v0)
    ctx->pc = 0x172054u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 115), (uint8_t)GPR_U32(ctx, 3));
label_172058:
    // 0x172058: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x172058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17205c:
    // 0x17205c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x17205cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172060:
    // 0x172060: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x172060u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_172064:
    // 0x172064: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172064u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_172068:
    // 0x172068: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x172068u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_17206c:
    // 0x17206c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x17206cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_172070:
    // 0x172070: 0x27859078  addiu       $a1, $gp, -0x6F88
    ctx->pc = 0x172070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938744));
label_172074:
    // 0x172074: 0xc0bc3e2  jal         func_2F0F88
label_172078:
    if (ctx->pc == 0x172078u) {
        ctx->pc = 0x17207Cu;
        goto label_17207c;
    }
    ctx->pc = 0x172074u;
    SET_GPR_U32(ctx, 31, 0x17207Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x172074u, 0x17207Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17207Cu;
label_17207c:
    // 0x17207c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x17207cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_172080:
    // 0x172080: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x172080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_172084:
    // 0x172084: 0x8c450068  lw          $a1, 0x68($v0)
    ctx->pc = 0x172084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_172088:
    // 0x172088: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x172088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_17208c:
    // 0x17208c: 0xc08c7c8  jal         func_231F20
label_172090:
    if (ctx->pc == 0x172090u) {
        ctx->pc = 0x172094u;
        goto label_172094;
    }
    ctx->pc = 0x17208Cu;
    SET_GPR_U32(ctx, 31, 0x172094u);
    ctx->pc = 0x231F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231F20u, 0x17208Cu, 0x172094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172094u;
label_172094:
    // 0x172094: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x172094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_172098:
    // 0x172098: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x172098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_17209c:
    // 0x17209c: 0x8c450068  lw          $a1, 0x68($v0)
    ctx->pc = 0x17209cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_1720a0:
    // 0x1720a0: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1720a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1720a4:
    // 0x1720a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1720a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1720a8:
    // 0x1720a8: 0xc08c8dc  jal         func_232370
label_1720ac:
    if (ctx->pc == 0x1720ACu) {
        ctx->pc = 0x1720B0u;
        goto label_1720b0;
    }
    ctx->pc = 0x1720A8u;
    SET_GPR_U32(ctx, 31, 0x1720B0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1720A8u, 0x1720B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1720B0u;
label_1720b0:
    // 0x1720b0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1720b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1720b4:
    // 0x1720b4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1720b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1720b8:
    // 0x1720b8: 0x8c450068  lw          $a1, 0x68($v0)
    ctx->pc = 0x1720b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_1720bc:
    // 0x1720bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1720bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1720c0:
    // 0x1720c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1720c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1720c4:
    // 0x1720c4: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1720c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1720c8:
    // 0x1720c8: 0xc08c434  jal         func_2310D0
label_1720cc:
    if (ctx->pc == 0x1720CCu) {
        ctx->pc = 0x1720D0u;
        goto label_1720d0;
    }
    ctx->pc = 0x1720C8u;
    SET_GPR_U32(ctx, 31, 0x1720D0u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1720C8u, 0x1720D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1720D0u;
label_1720d0:
    // 0x1720d0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1720d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1720d4:
    // 0x1720d4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1720d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1720d8:
    // 0x1720d8: 0x8c450068  lw          $a1, 0x68($v0)
    ctx->pc = 0x1720d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_1720dc:
    // 0x1720dc: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1720dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1720e0:
    // 0x1720e0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1720e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1720e4:
    // 0x1720e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1720e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1720e8:
    // 0x1720e8: 0xc08c32c  jal         func_230CB0
label_1720ec:
    if (ctx->pc == 0x1720ECu) {
        ctx->pc = 0x1720F0u;
        goto label_1720f0;
    }
    ctx->pc = 0x1720E8u;
    SET_GPR_U32(ctx, 31, 0x1720F0u);
    ctx->pc = 0x230CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230CB0u, 0x1720E8u, 0x1720F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1720F0u;
label_1720f0:
    // 0x1720f0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1720f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1720f4:
    // 0x1720f4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1720f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1720f8:
    // 0x1720f8: 0x8c450068  lw          $a1, 0x68($v0)
    ctx->pc = 0x1720f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_1720fc:
    // 0x1720fc: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1720fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_172100:
    // 0x172100: 0xc08c9a8  jal         func_2326A0
label_172104:
    if (ctx->pc == 0x172104u) {
        ctx->pc = 0x172108u;
        goto label_172108;
    }
    ctx->pc = 0x172100u;
    SET_GPR_U32(ctx, 31, 0x172108u);
    ctx->pc = 0x2326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326A0u, 0x172100u, 0x172108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172108u;
label_172108:
    // 0x172108: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
label_17210c:
    if (ctx->pc == 0x17210Cu) {
        ctx->pc = 0x172110u;
        goto label_172110;
    }
    ctx->pc = 0x172108u;
    {
        const bool branch_taken_0x172108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x172108) {
            ctx->pc = 0x172228u;
            goto label_172228;
        }
    }
    ctx->pc = 0x172110u;
label_172110:
    // 0x172110: 0x27a30058  addiu       $v1, $sp, 0x58
    ctx->pc = 0x172110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_172114:
    // 0x172114: 0xdf829070  ld          $v0, -0x6F90($gp)
    ctx->pc = 0x172114u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294938736)));
label_172118:
    // 0x172118: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x172118u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_17211c:
    // 0x17211c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x17211cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_172120:
    // 0x172120: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x172120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_172124:
    // 0x172124: 0x8c450068  lw          $a1, 0x68($v0)
    ctx->pc = 0x172124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_172128:
    // 0x172128: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x172128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_17212c:
    // 0x17212c: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x17212cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_172130:
    // 0x172130: 0xc08c744  jal         func_231D10
label_172134:
    if (ctx->pc == 0x172134u) {
        ctx->pc = 0x172138u;
        goto label_172138;
    }
    ctx->pc = 0x172130u;
    SET_GPR_U32(ctx, 31, 0x172138u);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x172130u, 0x172138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172138u;
label_172138:
    // 0x172138: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x172138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_17213c:
    // 0x17213c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17213cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172140:
    // 0x172140: 0x0  nop
    ctx->pc = 0x172140u;
    // NOP
label_172144:
    // 0x172144: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x172144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_172148:
    // 0x172148: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x172148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_17214c:
    // 0x17214c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x17214cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_172150:
    // 0x172150: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_172154:
    if (ctx->pc == 0x172154u) {
        ctx->pc = 0x172158u;
        goto label_172158;
    }
    ctx->pc = 0x172150u;
    {
        const bool branch_taken_0x172150 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x172150) {
            ctx->pc = 0x17216Cu;
            goto label_17216c;
        }
    }
    ctx->pc = 0x172158u;
label_172158:
    // 0x172158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17215c:
    // 0x17215c: 0x0  nop
    ctx->pc = 0x17215cu;
    // NOP
label_172160:
    // 0x172160: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x172160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_172164:
    // 0x172164: 0x10000008  b           . + 4 + (0x8 << 2)
label_172168:
    if (ctx->pc == 0x172168u) {
        ctx->pc = 0x17216Cu;
        goto label_17216c;
    }
    ctx->pc = 0x172164u;
    {
        const bool branch_taken_0x172164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172164) {
            ctx->pc = 0x172188u;
            goto label_172188;
        }
    }
    ctx->pc = 0x17216Cu;
label_17216c:
    // 0x17216c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x17216cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_172170:
    // 0x172170: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x172170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_172174:
    // 0x172174: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x172174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_172178:
    // 0x172178: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172178u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17217c:
    // 0x17217c: 0x0  nop
    ctx->pc = 0x17217cu;
    // NOP
label_172180:
    // 0x172180: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x172180u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_172184:
    // 0x172184: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x172184u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_172188:
    // 0x172188: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x172188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
label_17218c:
    // 0x17218c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17218cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172190:
    // 0x172190: 0x0  nop
    ctx->pc = 0x172190u;
    // NOP
label_172194:
    // 0x172194: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x172194u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_172198:
    // 0x172198: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x172198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17219c:
    // 0x17219c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17219cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1721a0:
    // 0x1721a0: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1721a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1721a4:
    // 0x1721a4: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x1721a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1721a8:
    // 0x1721a8: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1721a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1721ac:
    // 0x1721ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1721acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1721b0:
    // 0x1721b0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1721b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_1721b4:
    // 0x1721b4: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1721b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1721b8:
    // 0x1721b8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1721b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1721bc:
    // 0x1721bc: 0x8c450068  lw          $a1, 0x68($v0)
    ctx->pc = 0x1721bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_1721c0:
    // 0x1721c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1721c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1721c4:
    // 0x1721c4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1721c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1721c8:
    // 0x1721c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1721c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1721cc:
    // 0x1721cc: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1721ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1721d0:
    // 0x1721d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1721d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1721d4:
    // 0x1721d4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x1721d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_1721d8:
    // 0x1721d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1721d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1721dc:
    // 0x1721dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1721dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1721e0:
    // 0x1721e0: 0xc08b9fc  jal         func_22E7F0
label_1721e4:
    if (ctx->pc == 0x1721E4u) {
        ctx->pc = 0x1721E8u;
        goto label_1721e8;
    }
    ctx->pc = 0x1721E0u;
    SET_GPR_U32(ctx, 31, 0x1721E8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1721E0u, 0x1721E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1721E8u;
label_1721e8:
    // 0x1721e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1721e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1721ec:
    // 0x1721ec: 0x0  nop
    ctx->pc = 0x1721ecu;
    // NOP
label_1721f0:
    // 0x1721f0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1721f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1721f4:
    // 0x1721f4: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1721f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1721f8:
    // 0x1721f8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1721f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1721fc:
    // 0x1721fc: 0x8c450068  lw          $a1, 0x68($v0)
    ctx->pc = 0x1721fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_172200:
    // 0x172200: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x172200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_172204:
    // 0x172204: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x172204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_172208:
    // 0x172208: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x172208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_17220c:
    // 0x17220c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x17220cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_172210:
    // 0x172210: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x172210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_172214:
    // 0x172214: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x172214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_172218:
    // 0x172218: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x172218u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17221c:
    // 0x17221c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17221cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172220:
    // 0x172220: 0xc08b9fc  jal         func_22E7F0
label_172224:
    if (ctx->pc == 0x172224u) {
        ctx->pc = 0x172228u;
        goto label_172228;
    }
    ctx->pc = 0x172220u;
    SET_GPR_U32(ctx, 31, 0x172228u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x172220u, 0x172228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172228u;
label_172228:
    // 0x172228: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x172228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_17222c:
    // 0x17222c: 0x90420071  lbu         $v0, 0x71($v0)
    ctx->pc = 0x17222cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 113)));
label_172230:
    // 0x172230: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x172230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_172234:
    // 0x172234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x172234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172238:
    // 0x172238: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_17223c:
    if (ctx->pc == 0x17223Cu) {
        ctx->pc = 0x172240u;
        goto label_172240;
    }
    ctx->pc = 0x172238u;
    {
        const bool branch_taken_0x172238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x172238) {
            ctx->pc = 0x17227Cu;
            goto label_17227c;
        }
    }
    ctx->pc = 0x172240u;
label_172240:
    // 0x172240: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x172240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_172244:
    // 0x172244: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x172244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172248:
    // 0x172248: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17224c:
    // 0x17224c: 0x0  nop
    ctx->pc = 0x17224cu;
    // NOP
label_172250:
    // 0x172250: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172250u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_172254:
    // 0x172254: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_172258:
    if (ctx->pc == 0x172258u) {
        ctx->pc = 0x17225Cu;
        goto label_17225c;
    }
    ctx->pc = 0x172254u;
    {
        const bool branch_taken_0x172254 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x172254) {
            ctx->pc = 0x17227Cu;
            goto label_17227c;
        }
    }
    ctx->pc = 0x17225Cu;
label_17225c:
    // 0x17225c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x17225cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_172260:
    // 0x172260: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172264:
    // 0x172264: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x172264u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_172268:
    // 0x172268: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x172268u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_17226c:
    // 0x17226c: 0x320f809  jalr        $t9
label_172270:
    if (ctx->pc == 0x172270u) {
        ctx->pc = 0x172274u;
        goto label_172274;
    }
    ctx->pc = 0x17226Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172274u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17226Cu, 0x172274u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172274u;
label_172274:
    // 0x172274: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_172278:
    if (ctx->pc == 0x172278u) {
        ctx->pc = 0x17227Cu;
        goto label_17227c;
    }
    ctx->pc = 0x172274u;
    {
        const bool branch_taken_0x172274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172274) {
            ctx->pc = 0x1725F8u;
            goto label_1725f8;
        }
    }
    ctx->pc = 0x17227Cu;
label_17227c:
    // 0x17227c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x17227cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_172280:
    // 0x172280: 0xc047eb8  jal         func_11FAE0
label_172284:
    if (ctx->pc == 0x172284u) {
        ctx->pc = 0x172288u;
        goto label_172288;
    }
    ctx->pc = 0x172280u;
    SET_GPR_U32(ctx, 31, 0x172288u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x172280u, 0x172288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172288u;
label_172288:
    // 0x172288: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x172288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17228c:
    // 0x17228c: 0xc08d590  jal         func_235640
label_172290:
    if (ctx->pc == 0x172290u) {
        ctx->pc = 0x172294u;
        goto label_172294;
    }
    ctx->pc = 0x17228Cu;
    SET_GPR_U32(ctx, 31, 0x172294u);
    ctx->pc = 0x235640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235640u, 0x17228Cu, 0x172294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172294u;
label_172294:
    // 0x172294: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x172294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_172298:
    // 0x172298: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x172298u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17229c:
    // 0x17229c: 0xc780bad8  lwc1        $f0, -0x4528($gp)
    ctx->pc = 0x17229cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1722a0:
    // 0x1722a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1722a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1722a4:
    // 0x1722a4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_1722a8:
    if (ctx->pc == 0x1722A8u) {
        ctx->pc = 0x1722ACu;
        goto label_1722ac;
    }
    ctx->pc = 0x1722A4u;
    {
        const bool branch_taken_0x1722a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1722a4) {
            ctx->pc = 0x1722E0u;
            goto label_1722e0;
        }
    }
    ctx->pc = 0x1722ACu;
label_1722ac:
    // 0x1722ac: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1722acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_1722b0:
    // 0x1722b0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1722b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1722b4:
    // 0x1722b4: 0xc780bad8  lwc1        $f0, -0x4528($gp)
    ctx->pc = 0x1722b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1722b8:
    // 0x1722b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1722b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1722bc:
    // 0x1722bc: 0xe780bad8  swc1        $f0, -0x4528($gp)
    ctx->pc = 0x1722bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949592), bits); }
label_1722c0:
    // 0x1722c0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1722c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1722c4:
    // 0x1722c4: 0xc780bad8  lwc1        $f0, -0x4528($gp)
    ctx->pc = 0x1722c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1722c8:
    // 0x1722c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1722c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1722cc:
    // 0x1722cc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1722d0:
    if (ctx->pc == 0x1722D0u) {
        ctx->pc = 0x1722D4u;
        goto label_1722d4;
    }
    ctx->pc = 0x1722CCu;
    {
        const bool branch_taken_0x1722cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1722cc) {
            ctx->pc = 0x1722E0u;
            goto label_1722e0;
        }
    }
    ctx->pc = 0x1722D4u;
label_1722d4:
    // 0x1722d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1722d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1722d8:
    // 0x1722d8: 0x0  nop
    ctx->pc = 0x1722d8u;
    // NOP
label_1722dc:
    // 0x1722dc: 0xe780bad8  swc1        $f0, -0x4528($gp)
    ctx->pc = 0x1722dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949592), bits); }
label_1722e0:
    // 0x1722e0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1722e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1722e4:
    // 0x1722e4: 0xc780bad8  lwc1        $f0, -0x4528($gp)
    ctx->pc = 0x1722e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1722e8:
    // 0x1722e8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1722e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1722ec:
    // 0x1722ec: 0x4500009b  bc1f        . + 4 + (0x9B << 2)
label_1722f0:
    if (ctx->pc == 0x1722F0u) {
        ctx->pc = 0x1722F4u;
        goto label_1722f4;
    }
    ctx->pc = 0x1722ECu;
    {
        const bool branch_taken_0x1722ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1722ec) {
            ctx->pc = 0x17255Cu;
            goto label_17255c;
        }
    }
    ctx->pc = 0x1722F4u;
label_1722f4:
    // 0x1722f4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1722f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1722f8:
    // 0x1722f8: 0x90420070  lbu         $v0, 0x70($v0)
    ctx->pc = 0x1722f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
label_1722fc:
    // 0x1722fc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_172300:
    if (ctx->pc == 0x172300u) {
        ctx->pc = 0x172304u;
        goto label_172304;
    }
    ctx->pc = 0x1722FCu;
    {
        const bool branch_taken_0x1722fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1722fc) {
            ctx->pc = 0x17231Cu;
            goto label_17231c;
        }
    }
    ctx->pc = 0x172304u;
label_172304:
    // 0x172304: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x172304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_172308:
    // 0x172308: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x172308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17230c:
    // 0x17230c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x17230cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172310:
    // 0x172310: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x172310u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_172314:
    // 0x172314: 0x45010091  bc1t        . + 4 + (0x91 << 2)
label_172318:
    if (ctx->pc == 0x172318u) {
        ctx->pc = 0x17231Cu;
        goto label_17231c;
    }
    ctx->pc = 0x172314u;
    {
        const bool branch_taken_0x172314 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172314) {
            ctx->pc = 0x17255Cu;
            goto label_17255c;
        }
    }
    ctx->pc = 0x17231Cu;
label_17231c:
    // 0x17231c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x17231cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_172320:
    // 0x172320: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x172320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_172324:
    // 0x172324: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x172324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_172328:
    // 0x172328: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x172328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_17232c:
    // 0x17232c: 0xc08c910  jal         func_232440
label_172330:
    if (ctx->pc == 0x172330u) {
        ctx->pc = 0x172334u;
        goto label_172334;
    }
    ctx->pc = 0x17232Cu;
    SET_GPR_U32(ctx, 31, 0x172334u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x17232Cu, 0x172334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172334u;
label_172334:
    // 0x172334: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x172334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_172338:
    // 0x172338: 0xa0400070  sb          $zero, 0x70($v0)
    ctx->pc = 0x172338u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 0));
label_17233c:
    // 0x17233c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x17233cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_172340:
    // 0x172340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172344:
    // 0x172344: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x172344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_172348:
    // 0x172348: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x172348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
label_17234c:
    // 0x17234c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x17234cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_172350:
    // 0x172350: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x172350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172354:
    // 0x172354: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x172354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172358:
    // 0x172358: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x172358u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17235c:
    // 0x17235c: 0x45010017  bc1t        . + 4 + (0x17 << 2)
label_172360:
    if (ctx->pc == 0x172360u) {
        ctx->pc = 0x172364u;
        goto label_172364;
    }
    ctx->pc = 0x17235Cu;
    {
        const bool branch_taken_0x17235c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17235c) {
            ctx->pc = 0x1723BCu;
            goto label_1723bc;
        }
    }
    ctx->pc = 0x172364u;
label_172364:
    // 0x172364: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x172364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_172368:
    // 0x172368: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x172368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_17236c:
    // 0x17236c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x17236cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_172370:
    // 0x172370: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x172370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_172374:
    // 0x172374: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x172374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_172378:
    // 0x172378: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x172378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17237c:
    // 0x17237c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17237cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172380:
    // 0x172380: 0x0  nop
    ctx->pc = 0x172380u;
    // NOP
label_172384:
    // 0x172384: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x172384u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_172388:
    // 0x172388: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x172388u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_17238c:
    // 0x17238c: 0xe440006c  swc1        $f0, 0x6C($v0)
    ctx->pc = 0x17238cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
label_172390:
    // 0x172390: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x172390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_172394:
    // 0x172394: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x172394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172398:
    // 0x172398: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x172398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17239c:
    // 0x17239c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17239cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1723a0:
    // 0x1723a0: 0x45010020  bc1t        . + 4 + (0x20 << 2)
label_1723a4:
    if (ctx->pc == 0x1723A4u) {
        ctx->pc = 0x1723A8u;
        goto label_1723a8;
    }
    ctx->pc = 0x1723A0u;
    {
        const bool branch_taken_0x1723a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1723a0) {
            ctx->pc = 0x172424u;
            goto label_172424;
        }
    }
    ctx->pc = 0x1723A8u;
label_1723a8:
    // 0x1723a8: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1723a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1723ac:
    // 0x1723ac: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1723acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1723b0:
    // 0x1723b0: 0xe440006c  swc1        $f0, 0x6C($v0)
    ctx->pc = 0x1723b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
label_1723b4:
    // 0x1723b4: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1723b8:
    if (ctx->pc == 0x1723B8u) {
        ctx->pc = 0x1723BCu;
        goto label_1723bc;
    }
    ctx->pc = 0x1723B4u;
    {
        const bool branch_taken_0x1723b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1723b4) {
            ctx->pc = 0x172424u;
            goto label_172424;
        }
    }
    ctx->pc = 0x1723BCu;
label_1723bc:
    // 0x1723bc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1723bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1723c0:
    // 0x1723c0: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x1723c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1723c4:
    // 0x1723c4: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1723c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1723c8:
    // 0x1723c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1723c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1723cc:
    // 0x1723cc: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_1723d0:
    if (ctx->pc == 0x1723D0u) {
        ctx->pc = 0x1723D4u;
        goto label_1723d4;
    }
    ctx->pc = 0x1723CCu;
    {
        const bool branch_taken_0x1723cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1723cc) {
            ctx->pc = 0x172424u;
            goto label_172424;
        }
    }
    ctx->pc = 0x1723D4u;
label_1723d4:
    // 0x1723d4: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1723d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_1723d8:
    // 0x1723d8: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1723d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1723dc:
    // 0x1723dc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1723dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1723e0:
    // 0x1723e0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1723e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1723e4:
    // 0x1723e4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1723e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1723e8:
    // 0x1723e8: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x1723e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1723ec:
    // 0x1723ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1723ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1723f0:
    // 0x1723f0: 0x0  nop
    ctx->pc = 0x1723f0u;
    // NOP
label_1723f4:
    // 0x1723f4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1723f4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1723f8:
    // 0x1723f8: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x1723f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1723fc:
    // 0x1723fc: 0xe440006c  swc1        $f0, 0x6C($v0)
    ctx->pc = 0x1723fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
label_172400:
    // 0x172400: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x172400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_172404:
    // 0x172404: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x172404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172408:
    // 0x172408: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x172408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17240c:
    // 0x17240c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17240cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_172410:
    // 0x172410: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_172414:
    if (ctx->pc == 0x172414u) {
        ctx->pc = 0x172418u;
        goto label_172418;
    }
    ctx->pc = 0x172410u;
    {
        const bool branch_taken_0x172410 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x172410) {
            ctx->pc = 0x172424u;
            goto label_172424;
        }
    }
    ctx->pc = 0x172418u;
label_172418:
    // 0x172418: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x172418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17241c:
    // 0x17241c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x17241cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_172420:
    // 0x172420: 0xe440006c  swc1        $f0, 0x6C($v0)
    ctx->pc = 0x172420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
label_172424:
    // 0x172424: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x172424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_172428:
    // 0x172428: 0xc047eb8  jal         func_11FAE0
label_17242c:
    if (ctx->pc == 0x17242Cu) {
        ctx->pc = 0x172430u;
        goto label_172430;
    }
    ctx->pc = 0x172428u;
    SET_GPR_U32(ctx, 31, 0x172430u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x172428u, 0x172430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172430u;
label_172430:
    // 0x172430: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x172430u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_172434:
    // 0x172434: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x172434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172438:
    // 0x172438: 0x24050550  addiu       $a1, $zero, 0x550
    ctx->pc = 0x172438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1360));
label_17243c:
    // 0x17243c: 0xc042090  jal         func_108240
label_172440:
    if (ctx->pc == 0x172440u) {
        ctx->pc = 0x172444u;
        goto label_172444;
    }
    ctx->pc = 0x17243Cu;
    SET_GPR_U32(ctx, 31, 0x172444u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x17243Cu, 0x172444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172444u;
label_172444:
    // 0x172444: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x172444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_172448:
    // 0x172448: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x172448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_17244c:
    // 0x17244c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x17244cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_172450:
    // 0x172450: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_172454:
    if (ctx->pc == 0x172454u) {
        ctx->pc = 0x172458u;
        goto label_172458;
    }
    ctx->pc = 0x172450u;
    {
        const bool branch_taken_0x172450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172450) {
            ctx->pc = 0x17255Cu;
            goto label_17255c;
        }
    }
    ctx->pc = 0x172458u;
label_172458:
    // 0x172458: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x172458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_17245c:
    // 0x17245c: 0xc041b48  jal         func_106D20
label_172460:
    if (ctx->pc == 0x172460u) {
        ctx->pc = 0x172464u;
        goto label_172464;
    }
    ctx->pc = 0x17245Cu;
    SET_GPR_U32(ctx, 31, 0x172464u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x17245Cu, 0x172464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172464u;
label_172464:
    // 0x172464: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x172464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_172468:
    // 0x172468: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x172468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17246c:
    // 0x17246c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x17246cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_172470:
    // 0x172470: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_172474:
    if (ctx->pc == 0x172474u) {
        ctx->pc = 0x172478u;
        goto label_172478;
    }
    ctx->pc = 0x172470u;
    {
        const bool branch_taken_0x172470 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172470) {
            ctx->pc = 0x172490u;
            goto label_172490;
        }
    }
    ctx->pc = 0x172478u;
label_172478:
    // 0x172478: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x172478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_17247c:
    // 0x17247c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17247cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_172480:
    // 0x172480: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x172480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172484:
    // 0x172484: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x172484u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_172488:
    // 0x172488: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_17248c:
    if (ctx->pc == 0x17248Cu) {
        ctx->pc = 0x172490u;
        goto label_172490;
    }
    ctx->pc = 0x172488u;
    {
        const bool branch_taken_0x172488 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x172488) {
            ctx->pc = 0x1724B8u;
            goto label_1724b8;
        }
    }
    ctx->pc = 0x172490u;
label_172490:
    // 0x172490: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x172490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_172494:
    // 0x172494: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x172494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172498:
    // 0x172498: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172498u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_17249c:
    // 0x17249c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x17249cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1724a0:
    // 0x1724a0: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1724a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1724a4:
    // 0x1724a4: 0x27859068  addiu       $a1, $gp, -0x6F98
    ctx->pc = 0x1724a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938728));
label_1724a8:
    // 0x1724a8: 0xc0424a8  jal         func_1092A0
label_1724ac:
    if (ctx->pc == 0x1724ACu) {
        ctx->pc = 0x1724B0u;
        goto label_1724b0;
    }
    ctx->pc = 0x1724A8u;
    SET_GPR_U32(ctx, 31, 0x1724B0u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x1724A8u, 0x1724B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1724B0u;
label_1724b0:
    // 0x1724b0: 0x1000000e  b           . + 4 + (0xE << 2)
label_1724b4:
    if (ctx->pc == 0x1724B4u) {
        ctx->pc = 0x1724B8u;
        goto label_1724b8;
    }
    ctx->pc = 0x1724B0u;
    {
        const bool branch_taken_0x1724b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1724b0) {
            ctx->pc = 0x1724ECu;
            goto label_1724ec;
        }
    }
    ctx->pc = 0x1724B8u;
label_1724b8:
    // 0x1724b8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1724b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1724bc:
    // 0x1724bc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1724bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1724c0:
    // 0x1724c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1724c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1724c4:
    // 0x1724c4: 0xc460006c  lwc1        $f0, 0x6C($v1)
    ctx->pc = 0x1724c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1724c8:
    // 0x1724c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1724c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1724cc:
    // 0x1724cc: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1724ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1724d0:
    // 0x1724d0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1724d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1724d4:
    // 0x1724d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1724d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1724d8:
    // 0x1724d8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1724d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1724dc:
    // 0x1724dc: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1724dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1724e0:
    // 0x1724e0: 0x27859068  addiu       $a1, $gp, -0x6F98
    ctx->pc = 0x1724e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938728));
label_1724e4:
    // 0x1724e4: 0xc0424a8  jal         func_1092A0
label_1724e8:
    if (ctx->pc == 0x1724E8u) {
        ctx->pc = 0x1724ECu;
        goto label_1724ec;
    }
    ctx->pc = 0x1724E4u;
    SET_GPR_U32(ctx, 31, 0x1724ECu);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x1724E4u, 0x1724ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1724ECu;
label_1724ec:
    // 0x1724ec: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x1724ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_1724f0:
    // 0x1724f0: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x1724f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1724f4:
    // 0x1724f4: 0xc119568  jal         func_4655A0
label_1724f8:
    if (ctx->pc == 0x1724F8u) {
        ctx->pc = 0x1724FCu;
        goto label_1724fc;
    }
    ctx->pc = 0x1724F4u;
    SET_GPR_U32(ctx, 31, 0x1724FCu);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x1724F4u, 0x1724FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1724FCu;
label_1724fc:
    // 0x1724fc: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1724fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_172500:
    // 0x172500: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x172500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_172504:
    // 0x172504: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x172504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_172508:
    // 0x172508: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x172508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_17250c:
    // 0x17250c: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x17250cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_172510:
    // 0x172510: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x172510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172514:
    // 0x172514: 0xc08c378  jal         func_230DE0
label_172518:
    if (ctx->pc == 0x172518u) {
        ctx->pc = 0x17251Cu;
        goto label_17251c;
    }
    ctx->pc = 0x172514u;
    SET_GPR_U32(ctx, 31, 0x17251Cu);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x172514u, 0x17251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17251Cu;
label_17251c:
    // 0x17251c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x17251cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_172520:
    // 0x172520: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x172520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172524:
    // 0x172524: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172524u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_172528:
    // 0x172528: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x172528u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_17252c:
    // 0x17252c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x17252cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_172530:
    // 0x172530: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x172530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172534:
    // 0x172534: 0xc08d48c  jal         func_235230
label_172538:
    if (ctx->pc == 0x172538u) {
        ctx->pc = 0x17253Cu;
        goto label_17253c;
    }
    ctx->pc = 0x172534u;
    SET_GPR_U32(ctx, 31, 0x17253Cu);
    ctx->pc = 0x235230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235230u, 0x172534u, 0x17253Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17253Cu;
label_17253c:
    // 0x17253c: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x17253cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_172540:
    // 0x172540: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x172540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_172544:
    // 0x172544: 0xc0406a0  jal         func_101A80
label_172548:
    if (ctx->pc == 0x172548u) {
        ctx->pc = 0x17254Cu;
        goto label_17254c;
    }
    ctx->pc = 0x172544u;
    SET_GPR_U32(ctx, 31, 0x17254Cu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x172544u, 0x17254Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17254Cu;
label_17254c:
    // 0x17254c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x17254cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_172550:
    // 0x172550: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x172550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_172554:
    // 0x172554: 0xc0402d4  jal         func_100B50
label_172558:
    if (ctx->pc == 0x172558u) {
        ctx->pc = 0x17255Cu;
        goto label_17255c;
    }
    ctx->pc = 0x172554u;
    SET_GPR_U32(ctx, 31, 0x17255Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x172554u, 0x17255Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17255Cu;
label_17255c:
    // 0x17255c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x17255cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_172560:
    // 0x172560: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x172560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_172564:
    // 0x172564: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x172564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_172568:
    // 0x172568: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x172568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17256c:
    // 0x17256c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x17256cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_172570:
    // 0x172570: 0x0  nop
    ctx->pc = 0x172570u;
    // NOP
label_172574:
    // 0x172574: 0xc7808284  lwc1        $f0, -0x7D7C($gp)
    ctx->pc = 0x172574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172578:
    // 0x172578: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x172578u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_17257c:
    // 0x17257c: 0xc0c3966  jal         func_30E598
label_172580:
    if (ctx->pc == 0x172580u) {
        ctx->pc = 0x172584u;
        goto label_172584;
    }
    ctx->pc = 0x17257Cu;
    SET_GPR_U32(ctx, 31, 0x172584u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x17257Cu, 0x172584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172584u;
label_172584:
    // 0x172584: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x172584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_172588:
    // 0x172588: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x172588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_17258c:
    // 0x17258c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x17258cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_172590:
    // 0x172590: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x172590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_172594:
    // 0x172594: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x172594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_172598:
    // 0x172598: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x172598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_17259c:
    // 0x17259c: 0xc08c434  jal         func_2310D0
label_1725a0:
    if (ctx->pc == 0x1725A0u) {
        ctx->pc = 0x1725A4u;
        goto label_1725a4;
    }
    ctx->pc = 0x17259Cu;
    SET_GPR_U32(ctx, 31, 0x1725A4u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x17259Cu, 0x1725A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1725A4u;
label_1725a4:
    // 0x1725a4: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1725a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1725a8:
    // 0x1725a8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1725a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1725ac:
    // 0x1725ac: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x1725acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1725b0:
    // 0x1725b0: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1725b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1725b4:
    // 0x1725b4: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x1725b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1725b8:
    // 0x1725b8: 0xc08c434  jal         func_2310D0
label_1725bc:
    if (ctx->pc == 0x1725BCu) {
        ctx->pc = 0x1725C0u;
        goto label_1725c0;
    }
    ctx->pc = 0x1725B8u;
    SET_GPR_U32(ctx, 31, 0x1725C0u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1725B8u, 0x1725C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1725C0u;
label_1725c0:
    // 0x1725c0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1725c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1725c4:
    // 0x1725c4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1725c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1725c8:
    // 0x1725c8: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x1725c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1725cc:
    // 0x1725cc: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1725ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1725d0:
    // 0x1725d0: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x1725d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1725d4:
    // 0x1725d4: 0xc08c434  jal         func_2310D0
label_1725d8:
    if (ctx->pc == 0x1725D8u) {
        ctx->pc = 0x1725DCu;
        goto label_1725dc;
    }
    ctx->pc = 0x1725D4u;
    SET_GPR_U32(ctx, 31, 0x1725DCu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1725D4u, 0x1725DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1725DCu;
label_1725dc:
    // 0x1725dc: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1725dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1725e0:
    // 0x1725e0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1725e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1725e4:
    // 0x1725e4: 0x8c450064  lw          $a1, 0x64($v0)
    ctx->pc = 0x1725e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_1725e8:
    // 0x1725e8: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1725e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1725ec:
    // 0x1725ec: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x1725ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1725f0:
    // 0x1725f0: 0xc08c434  jal         func_2310D0
label_1725f4:
    if (ctx->pc == 0x1725F4u) {
        ctx->pc = 0x1725F8u;
        goto label_1725f8;
    }
    ctx->pc = 0x1725F0u;
    SET_GPR_U32(ctx, 31, 0x1725F8u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1725F0u, 0x1725F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1725F8u;
label_1725f8:
    // 0x1725f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1725f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1725fc:
    // 0x1725fc: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1725fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_172600:
    // 0x172600: 0x3e00008  jr          $ra
label_172604:
    if (ctx->pc == 0x172604u) {
        ctx->pc = 0x172608u;
        goto label_172608;
    }
    ctx->pc = 0x172600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172608u;
label_172608:
    // 0x172608: 0x0  nop
    ctx->pc = 0x172608u;
    // NOP
label_17260c:
    // 0x17260c: 0x0  nop
    ctx->pc = 0x17260cu;
    // NOP
label_172610:
    // 0x172610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x172610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_172614:
    // 0x172614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_172618:
    // 0x172618: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x172618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_17261c:
    // 0x17261c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17261cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_172620:
    // 0x172620: 0xc055a84  jal         func_156A10
label_172624:
    if (ctx->pc == 0x172624u) {
        ctx->pc = 0x172628u;
        goto label_172628;
    }
    ctx->pc = 0x172620u;
    SET_GPR_U32(ctx, 31, 0x172628u);
    ctx->pc = 0x156A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156A10u, 0x172620u, 0x172628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172628u;
label_172628:
    // 0x172628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17262c:
    // 0x17262c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17262cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_172630:
    // 0x172630: 0x3e00008  jr          $ra
label_172634:
    if (ctx->pc == 0x172634u) {
        ctx->pc = 0x172638u;
        goto label_172638;
    }
    ctx->pc = 0x172630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172638u;
label_172638:
    // 0x172638: 0x0  nop
    ctx->pc = 0x172638u;
    // NOP
label_17263c:
    // 0x17263c: 0x0  nop
    ctx->pc = 0x17263cu;
    // NOP
    ctx->pc = 0x172640u;
}
