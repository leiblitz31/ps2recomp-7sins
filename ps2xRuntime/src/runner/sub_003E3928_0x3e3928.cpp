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

// Function: sub_003E3928
// Address: 0x3e3928 - 0x3e3eb8
void sub_003E3928_0x3e3928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3928_0x3e3928");
#endif

    switch (ctx->pc) {
        case 0x3e3928u: goto label_3e3928;
        case 0x3e392cu: goto label_3e392c;
        case 0x3e3930u: goto label_3e3930;
        case 0x3e3934u: goto label_3e3934;
        case 0x3e3938u: goto label_3e3938;
        case 0x3e393cu: goto label_3e393c;
        case 0x3e3940u: goto label_3e3940;
        case 0x3e3944u: goto label_3e3944;
        case 0x3e3948u: goto label_3e3948;
        case 0x3e394cu: goto label_3e394c;
        case 0x3e3950u: goto label_3e3950;
        case 0x3e3954u: goto label_3e3954;
        case 0x3e3958u: goto label_3e3958;
        case 0x3e395cu: goto label_3e395c;
        case 0x3e3960u: goto label_3e3960;
        case 0x3e3964u: goto label_3e3964;
        case 0x3e3968u: goto label_3e3968;
        case 0x3e396cu: goto label_3e396c;
        case 0x3e3970u: goto label_3e3970;
        case 0x3e3974u: goto label_3e3974;
        case 0x3e3978u: goto label_3e3978;
        case 0x3e397cu: goto label_3e397c;
        case 0x3e3980u: goto label_3e3980;
        case 0x3e3984u: goto label_3e3984;
        case 0x3e3988u: goto label_3e3988;
        case 0x3e398cu: goto label_3e398c;
        case 0x3e3990u: goto label_3e3990;
        case 0x3e3994u: goto label_3e3994;
        case 0x3e3998u: goto label_3e3998;
        case 0x3e399cu: goto label_3e399c;
        case 0x3e39a0u: goto label_3e39a0;
        case 0x3e39a4u: goto label_3e39a4;
        case 0x3e39a8u: goto label_3e39a8;
        case 0x3e39acu: goto label_3e39ac;
        case 0x3e39b0u: goto label_3e39b0;
        case 0x3e39b4u: goto label_3e39b4;
        case 0x3e39b8u: goto label_3e39b8;
        case 0x3e39bcu: goto label_3e39bc;
        case 0x3e39c0u: goto label_3e39c0;
        case 0x3e39c4u: goto label_3e39c4;
        case 0x3e39c8u: goto label_3e39c8;
        case 0x3e39ccu: goto label_3e39cc;
        case 0x3e39d0u: goto label_3e39d0;
        case 0x3e39d4u: goto label_3e39d4;
        case 0x3e39d8u: goto label_3e39d8;
        case 0x3e39dcu: goto label_3e39dc;
        case 0x3e39e0u: goto label_3e39e0;
        case 0x3e39e4u: goto label_3e39e4;
        case 0x3e39e8u: goto label_3e39e8;
        case 0x3e39ecu: goto label_3e39ec;
        case 0x3e39f0u: goto label_3e39f0;
        case 0x3e39f4u: goto label_3e39f4;
        case 0x3e39f8u: goto label_3e39f8;
        case 0x3e39fcu: goto label_3e39fc;
        case 0x3e3a00u: goto label_3e3a00;
        case 0x3e3a04u: goto label_3e3a04;
        case 0x3e3a08u: goto label_3e3a08;
        case 0x3e3a0cu: goto label_3e3a0c;
        case 0x3e3a10u: goto label_3e3a10;
        case 0x3e3a14u: goto label_3e3a14;
        case 0x3e3a18u: goto label_3e3a18;
        case 0x3e3a1cu: goto label_3e3a1c;
        case 0x3e3a20u: goto label_3e3a20;
        case 0x3e3a24u: goto label_3e3a24;
        case 0x3e3a28u: goto label_3e3a28;
        case 0x3e3a2cu: goto label_3e3a2c;
        case 0x3e3a30u: goto label_3e3a30;
        case 0x3e3a34u: goto label_3e3a34;
        case 0x3e3a38u: goto label_3e3a38;
        case 0x3e3a3cu: goto label_3e3a3c;
        case 0x3e3a40u: goto label_3e3a40;
        case 0x3e3a44u: goto label_3e3a44;
        case 0x3e3a48u: goto label_3e3a48;
        case 0x3e3a4cu: goto label_3e3a4c;
        case 0x3e3a50u: goto label_3e3a50;
        case 0x3e3a54u: goto label_3e3a54;
        case 0x3e3a58u: goto label_3e3a58;
        case 0x3e3a5cu: goto label_3e3a5c;
        case 0x3e3a60u: goto label_3e3a60;
        case 0x3e3a64u: goto label_3e3a64;
        case 0x3e3a68u: goto label_3e3a68;
        case 0x3e3a6cu: goto label_3e3a6c;
        case 0x3e3a70u: goto label_3e3a70;
        case 0x3e3a74u: goto label_3e3a74;
        case 0x3e3a78u: goto label_3e3a78;
        case 0x3e3a7cu: goto label_3e3a7c;
        case 0x3e3a80u: goto label_3e3a80;
        case 0x3e3a84u: goto label_3e3a84;
        case 0x3e3a88u: goto label_3e3a88;
        case 0x3e3a8cu: goto label_3e3a8c;
        case 0x3e3a90u: goto label_3e3a90;
        case 0x3e3a94u: goto label_3e3a94;
        case 0x3e3a98u: goto label_3e3a98;
        case 0x3e3a9cu: goto label_3e3a9c;
        case 0x3e3aa0u: goto label_3e3aa0;
        case 0x3e3aa4u: goto label_3e3aa4;
        case 0x3e3aa8u: goto label_3e3aa8;
        case 0x3e3aacu: goto label_3e3aac;
        case 0x3e3ab0u: goto label_3e3ab0;
        case 0x3e3ab4u: goto label_3e3ab4;
        case 0x3e3ab8u: goto label_3e3ab8;
        case 0x3e3abcu: goto label_3e3abc;
        case 0x3e3ac0u: goto label_3e3ac0;
        case 0x3e3ac4u: goto label_3e3ac4;
        case 0x3e3ac8u: goto label_3e3ac8;
        case 0x3e3accu: goto label_3e3acc;
        case 0x3e3ad0u: goto label_3e3ad0;
        case 0x3e3ad4u: goto label_3e3ad4;
        case 0x3e3ad8u: goto label_3e3ad8;
        case 0x3e3adcu: goto label_3e3adc;
        case 0x3e3ae0u: goto label_3e3ae0;
        case 0x3e3ae4u: goto label_3e3ae4;
        case 0x3e3ae8u: goto label_3e3ae8;
        case 0x3e3aecu: goto label_3e3aec;
        case 0x3e3af0u: goto label_3e3af0;
        case 0x3e3af4u: goto label_3e3af4;
        case 0x3e3af8u: goto label_3e3af8;
        case 0x3e3afcu: goto label_3e3afc;
        case 0x3e3b00u: goto label_3e3b00;
        case 0x3e3b04u: goto label_3e3b04;
        case 0x3e3b08u: goto label_3e3b08;
        case 0x3e3b0cu: goto label_3e3b0c;
        case 0x3e3b10u: goto label_3e3b10;
        case 0x3e3b14u: goto label_3e3b14;
        case 0x3e3b18u: goto label_3e3b18;
        case 0x3e3b1cu: goto label_3e3b1c;
        case 0x3e3b20u: goto label_3e3b20;
        case 0x3e3b24u: goto label_3e3b24;
        case 0x3e3b28u: goto label_3e3b28;
        case 0x3e3b2cu: goto label_3e3b2c;
        case 0x3e3b30u: goto label_3e3b30;
        case 0x3e3b34u: goto label_3e3b34;
        case 0x3e3b38u: goto label_3e3b38;
        case 0x3e3b3cu: goto label_3e3b3c;
        case 0x3e3b40u: goto label_3e3b40;
        case 0x3e3b44u: goto label_3e3b44;
        case 0x3e3b48u: goto label_3e3b48;
        case 0x3e3b4cu: goto label_3e3b4c;
        case 0x3e3b50u: goto label_3e3b50;
        case 0x3e3b54u: goto label_3e3b54;
        case 0x3e3b58u: goto label_3e3b58;
        case 0x3e3b5cu: goto label_3e3b5c;
        case 0x3e3b60u: goto label_3e3b60;
        case 0x3e3b64u: goto label_3e3b64;
        case 0x3e3b68u: goto label_3e3b68;
        case 0x3e3b6cu: goto label_3e3b6c;
        case 0x3e3b70u: goto label_3e3b70;
        case 0x3e3b74u: goto label_3e3b74;
        case 0x3e3b78u: goto label_3e3b78;
        case 0x3e3b7cu: goto label_3e3b7c;
        case 0x3e3b80u: goto label_3e3b80;
        case 0x3e3b84u: goto label_3e3b84;
        case 0x3e3b88u: goto label_3e3b88;
        case 0x3e3b8cu: goto label_3e3b8c;
        case 0x3e3b90u: goto label_3e3b90;
        case 0x3e3b94u: goto label_3e3b94;
        case 0x3e3b98u: goto label_3e3b98;
        case 0x3e3b9cu: goto label_3e3b9c;
        case 0x3e3ba0u: goto label_3e3ba0;
        case 0x3e3ba4u: goto label_3e3ba4;
        case 0x3e3ba8u: goto label_3e3ba8;
        case 0x3e3bacu: goto label_3e3bac;
        case 0x3e3bb0u: goto label_3e3bb0;
        case 0x3e3bb4u: goto label_3e3bb4;
        case 0x3e3bb8u: goto label_3e3bb8;
        case 0x3e3bbcu: goto label_3e3bbc;
        case 0x3e3bc0u: goto label_3e3bc0;
        case 0x3e3bc4u: goto label_3e3bc4;
        case 0x3e3bc8u: goto label_3e3bc8;
        case 0x3e3bccu: goto label_3e3bcc;
        case 0x3e3bd0u: goto label_3e3bd0;
        case 0x3e3bd4u: goto label_3e3bd4;
        case 0x3e3bd8u: goto label_3e3bd8;
        case 0x3e3bdcu: goto label_3e3bdc;
        case 0x3e3be0u: goto label_3e3be0;
        case 0x3e3be4u: goto label_3e3be4;
        case 0x3e3be8u: goto label_3e3be8;
        case 0x3e3becu: goto label_3e3bec;
        case 0x3e3bf0u: goto label_3e3bf0;
        case 0x3e3bf4u: goto label_3e3bf4;
        case 0x3e3bf8u: goto label_3e3bf8;
        case 0x3e3bfcu: goto label_3e3bfc;
        case 0x3e3c00u: goto label_3e3c00;
        case 0x3e3c04u: goto label_3e3c04;
        case 0x3e3c08u: goto label_3e3c08;
        case 0x3e3c0cu: goto label_3e3c0c;
        case 0x3e3c10u: goto label_3e3c10;
        case 0x3e3c14u: goto label_3e3c14;
        case 0x3e3c18u: goto label_3e3c18;
        case 0x3e3c1cu: goto label_3e3c1c;
        case 0x3e3c20u: goto label_3e3c20;
        case 0x3e3c24u: goto label_3e3c24;
        case 0x3e3c28u: goto label_3e3c28;
        case 0x3e3c2cu: goto label_3e3c2c;
        case 0x3e3c30u: goto label_3e3c30;
        case 0x3e3c34u: goto label_3e3c34;
        case 0x3e3c38u: goto label_3e3c38;
        case 0x3e3c3cu: goto label_3e3c3c;
        case 0x3e3c40u: goto label_3e3c40;
        case 0x3e3c44u: goto label_3e3c44;
        case 0x3e3c48u: goto label_3e3c48;
        case 0x3e3c4cu: goto label_3e3c4c;
        case 0x3e3c50u: goto label_3e3c50;
        case 0x3e3c54u: goto label_3e3c54;
        case 0x3e3c58u: goto label_3e3c58;
        case 0x3e3c5cu: goto label_3e3c5c;
        case 0x3e3c60u: goto label_3e3c60;
        case 0x3e3c64u: goto label_3e3c64;
        case 0x3e3c68u: goto label_3e3c68;
        case 0x3e3c6cu: goto label_3e3c6c;
        case 0x3e3c70u: goto label_3e3c70;
        case 0x3e3c74u: goto label_3e3c74;
        case 0x3e3c78u: goto label_3e3c78;
        case 0x3e3c7cu: goto label_3e3c7c;
        case 0x3e3c80u: goto label_3e3c80;
        case 0x3e3c84u: goto label_3e3c84;
        case 0x3e3c88u: goto label_3e3c88;
        case 0x3e3c8cu: goto label_3e3c8c;
        case 0x3e3c90u: goto label_3e3c90;
        case 0x3e3c94u: goto label_3e3c94;
        case 0x3e3c98u: goto label_3e3c98;
        case 0x3e3c9cu: goto label_3e3c9c;
        case 0x3e3ca0u: goto label_3e3ca0;
        case 0x3e3ca4u: goto label_3e3ca4;
        case 0x3e3ca8u: goto label_3e3ca8;
        case 0x3e3cacu: goto label_3e3cac;
        case 0x3e3cb0u: goto label_3e3cb0;
        case 0x3e3cb4u: goto label_3e3cb4;
        case 0x3e3cb8u: goto label_3e3cb8;
        case 0x3e3cbcu: goto label_3e3cbc;
        case 0x3e3cc0u: goto label_3e3cc0;
        case 0x3e3cc4u: goto label_3e3cc4;
        case 0x3e3cc8u: goto label_3e3cc8;
        case 0x3e3cccu: goto label_3e3ccc;
        case 0x3e3cd0u: goto label_3e3cd0;
        case 0x3e3cd4u: goto label_3e3cd4;
        case 0x3e3cd8u: goto label_3e3cd8;
        case 0x3e3cdcu: goto label_3e3cdc;
        case 0x3e3ce0u: goto label_3e3ce0;
        case 0x3e3ce4u: goto label_3e3ce4;
        case 0x3e3ce8u: goto label_3e3ce8;
        case 0x3e3cecu: goto label_3e3cec;
        case 0x3e3cf0u: goto label_3e3cf0;
        case 0x3e3cf4u: goto label_3e3cf4;
        case 0x3e3cf8u: goto label_3e3cf8;
        case 0x3e3cfcu: goto label_3e3cfc;
        case 0x3e3d00u: goto label_3e3d00;
        case 0x3e3d04u: goto label_3e3d04;
        case 0x3e3d08u: goto label_3e3d08;
        case 0x3e3d0cu: goto label_3e3d0c;
        case 0x3e3d10u: goto label_3e3d10;
        case 0x3e3d14u: goto label_3e3d14;
        case 0x3e3d18u: goto label_3e3d18;
        case 0x3e3d1cu: goto label_3e3d1c;
        case 0x3e3d20u: goto label_3e3d20;
        case 0x3e3d24u: goto label_3e3d24;
        case 0x3e3d28u: goto label_3e3d28;
        case 0x3e3d2cu: goto label_3e3d2c;
        case 0x3e3d30u: goto label_3e3d30;
        case 0x3e3d34u: goto label_3e3d34;
        case 0x3e3d38u: goto label_3e3d38;
        case 0x3e3d3cu: goto label_3e3d3c;
        case 0x3e3d40u: goto label_3e3d40;
        case 0x3e3d44u: goto label_3e3d44;
        case 0x3e3d48u: goto label_3e3d48;
        case 0x3e3d4cu: goto label_3e3d4c;
        case 0x3e3d50u: goto label_3e3d50;
        case 0x3e3d54u: goto label_3e3d54;
        case 0x3e3d58u: goto label_3e3d58;
        case 0x3e3d5cu: goto label_3e3d5c;
        case 0x3e3d60u: goto label_3e3d60;
        case 0x3e3d64u: goto label_3e3d64;
        case 0x3e3d68u: goto label_3e3d68;
        case 0x3e3d6cu: goto label_3e3d6c;
        case 0x3e3d70u: goto label_3e3d70;
        case 0x3e3d74u: goto label_3e3d74;
        case 0x3e3d78u: goto label_3e3d78;
        case 0x3e3d7cu: goto label_3e3d7c;
        case 0x3e3d80u: goto label_3e3d80;
        case 0x3e3d84u: goto label_3e3d84;
        case 0x3e3d88u: goto label_3e3d88;
        case 0x3e3d8cu: goto label_3e3d8c;
        case 0x3e3d90u: goto label_3e3d90;
        case 0x3e3d94u: goto label_3e3d94;
        case 0x3e3d98u: goto label_3e3d98;
        case 0x3e3d9cu: goto label_3e3d9c;
        case 0x3e3da0u: goto label_3e3da0;
        case 0x3e3da4u: goto label_3e3da4;
        case 0x3e3da8u: goto label_3e3da8;
        case 0x3e3dacu: goto label_3e3dac;
        case 0x3e3db0u: goto label_3e3db0;
        case 0x3e3db4u: goto label_3e3db4;
        case 0x3e3db8u: goto label_3e3db8;
        case 0x3e3dbcu: goto label_3e3dbc;
        case 0x3e3dc0u: goto label_3e3dc0;
        case 0x3e3dc4u: goto label_3e3dc4;
        case 0x3e3dc8u: goto label_3e3dc8;
        case 0x3e3dccu: goto label_3e3dcc;
        case 0x3e3dd0u: goto label_3e3dd0;
        case 0x3e3dd4u: goto label_3e3dd4;
        case 0x3e3dd8u: goto label_3e3dd8;
        case 0x3e3ddcu: goto label_3e3ddc;
        case 0x3e3de0u: goto label_3e3de0;
        case 0x3e3de4u: goto label_3e3de4;
        case 0x3e3de8u: goto label_3e3de8;
        case 0x3e3decu: goto label_3e3dec;
        case 0x3e3df0u: goto label_3e3df0;
        case 0x3e3df4u: goto label_3e3df4;
        case 0x3e3df8u: goto label_3e3df8;
        case 0x3e3dfcu: goto label_3e3dfc;
        case 0x3e3e00u: goto label_3e3e00;
        case 0x3e3e04u: goto label_3e3e04;
        case 0x3e3e08u: goto label_3e3e08;
        case 0x3e3e0cu: goto label_3e3e0c;
        case 0x3e3e10u: goto label_3e3e10;
        case 0x3e3e14u: goto label_3e3e14;
        case 0x3e3e18u: goto label_3e3e18;
        case 0x3e3e1cu: goto label_3e3e1c;
        case 0x3e3e20u: goto label_3e3e20;
        case 0x3e3e24u: goto label_3e3e24;
        case 0x3e3e28u: goto label_3e3e28;
        case 0x3e3e2cu: goto label_3e3e2c;
        case 0x3e3e30u: goto label_3e3e30;
        case 0x3e3e34u: goto label_3e3e34;
        case 0x3e3e38u: goto label_3e3e38;
        case 0x3e3e3cu: goto label_3e3e3c;
        case 0x3e3e40u: goto label_3e3e40;
        case 0x3e3e44u: goto label_3e3e44;
        case 0x3e3e48u: goto label_3e3e48;
        case 0x3e3e4cu: goto label_3e3e4c;
        case 0x3e3e50u: goto label_3e3e50;
        case 0x3e3e54u: goto label_3e3e54;
        case 0x3e3e58u: goto label_3e3e58;
        case 0x3e3e5cu: goto label_3e3e5c;
        case 0x3e3e60u: goto label_3e3e60;
        case 0x3e3e64u: goto label_3e3e64;
        case 0x3e3e68u: goto label_3e3e68;
        case 0x3e3e6cu: goto label_3e3e6c;
        case 0x3e3e70u: goto label_3e3e70;
        case 0x3e3e74u: goto label_3e3e74;
        case 0x3e3e78u: goto label_3e3e78;
        case 0x3e3e7cu: goto label_3e3e7c;
        case 0x3e3e80u: goto label_3e3e80;
        case 0x3e3e84u: goto label_3e3e84;
        case 0x3e3e88u: goto label_3e3e88;
        case 0x3e3e8cu: goto label_3e3e8c;
        case 0x3e3e90u: goto label_3e3e90;
        case 0x3e3e94u: goto label_3e3e94;
        case 0x3e3e98u: goto label_3e3e98;
        case 0x3e3e9cu: goto label_3e3e9c;
        case 0x3e3ea0u: goto label_3e3ea0;
        case 0x3e3ea4u: goto label_3e3ea4;
        case 0x3e3ea8u: goto label_3e3ea8;
        case 0x3e3eacu: goto label_3e3eac;
        case 0x3e3eb0u: goto label_3e3eb0;
        case 0x3e3eb4u: goto label_3e3eb4;
        default: break;
    }

    ctx->pc = 0x3e3928u;

label_3e3928:
    // 0x3e3928: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3e3928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3e392c:
    // 0x3e392c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3e392cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3e3930:
    // 0x3e3930: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3e3930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3e3934:
    // 0x3e3934: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e3934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e3938:
    // 0x3e3938: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3e3938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3e393c:
    // 0x3e393c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3e393cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e3940:
    // 0x3e3940: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3e3940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3e3944:
    // 0x3e3944: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3e3944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_3e3948:
    // 0x3e3948: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3e3948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3e394c:
    // 0x3e394c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3e394cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_3e3950:
    // 0x3e3950: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3e3950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_3e3954:
    // 0x3e3954: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3e3954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_3e3958:
    // 0x3e3958: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e3958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3e395c:
    // 0x3e395c: 0xde020100  ld          $v0, 0x100($s0)
    ctx->pc = 0x3e395cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
label_3e3960:
    // 0x3e3960: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3e3960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_3e3964:
    // 0x3e3964: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3e3968:
    if (ctx->pc == 0x3E3968u) {
        ctx->pc = 0x3E3968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3964u;
        // 0x3e3968: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E396Cu;
        goto label_3e396c;
    }
    ctx->pc = 0x3E3964u;
    {
        const bool branch_taken_0x3e3964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3964u;
        // 0x3e3968: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3964) {
            ctx->pc = 0x3E3974u;
            goto label_3e3974;
        }
    }
    ctx->pc = 0x3E396Cu;
label_3e396c:
    // 0x3e396c: 0xc0fe630  jal         func_3F98C0
label_3e3970:
    if (ctx->pc == 0x3E3970u) {
        ctx->pc = 0x3E3974u;
        goto label_3e3974;
    }
    ctx->pc = 0x3E396Cu;
    SET_GPR_U32(ctx, 31, 0x3E3974u);
    ctx->pc = 0x3F98C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F98C0u, 0x3E396Cu, 0x3E3974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3974u;
label_3e3974:
    // 0x3e3974: 0x92020207  lbu         $v0, 0x207($s0)
    ctx->pc = 0x3e3974u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 519)));
label_3e3978:
    // 0x3e3978: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
label_3e397c:
    if (ctx->pc == 0x3E397Cu) {
        ctx->pc = 0x3E397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3978u;
        // 0x3e397c: 0xde0501b0  ld          $a1, 0x1B0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3980u;
        goto label_3e3980;
    }
    ctx->pc = 0x3E3978u;
    {
        const bool branch_taken_0x3e3978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3978u;
        // 0x3e397c: 0xde0501b0  ld          $a1, 0x1B0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3978) {
            ctx->pc = 0x3E3B78u;
            goto label_3e3b78;
        }
    }
    ctx->pc = 0x3E3980u;
label_3e3980:
    // 0x3e3980: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3e3980u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3e3984:
    // 0x3e3984: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3e3984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3e3988:
    // 0x3e3988: 0x5040007c  beql        $v0, $zero, . + 4 + (0x7C << 2)
label_3e398c:
    if (ctx->pc == 0x3E398Cu) {
        ctx->pc = 0x3E398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3988u;
        // 0x3e398c: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3990u;
        goto label_3e3990;
    }
    ctx->pc = 0x3E3988u;
    {
        const bool branch_taken_0x3e3988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3988) {
            ctx->pc = 0x3E398Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3988u;
            // 0x3e398c: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3B7Cu;
            goto label_3e3b7c;
        }
    }
    ctx->pc = 0x3E3990u;
label_3e3990:
    // 0x3e3990: 0x92020208  lbu         $v0, 0x208($s0)
    ctx->pc = 0x3e3990u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 520)));
label_3e3994:
    // 0x3e3994: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3e3994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e3998:
    // 0x3e3998: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x3e3998u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_3e399c:
    // 0x3e399c: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
label_3e39a0:
    if (ctx->pc == 0x3E39A0u) {
        ctx->pc = 0x3E39A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E399Cu;
        // 0x3e39a0: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E39A4u;
        goto label_3e39a4;
    }
    ctx->pc = 0x3E399Cu;
    {
        const bool branch_taken_0x3e399c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E39A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E399Cu;
        // 0x3e39a0: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e399c) {
            ctx->pc = 0x3E3B78u;
            goto label_3e3b78;
        }
    }
    ctx->pc = 0x3E39A4u;
label_3e39a4:
    // 0x3e39a4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3e39a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3e39a8:
    // 0x3e39a8: 0x2442e680  addiu       $v0, $v0, -0x1980
    ctx->pc = 0x3e39a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960768));
label_3e39ac:
    // 0x3e39ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3e39acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e39b0:
    // 0x3e39b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3e39b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3e39b4:
    // 0x3e39b4: 0x800008  jr          $a0
label_3e39b8:
    if (ctx->pc == 0x3E39B8u) {
        ctx->pc = 0x3E39BCu;
        goto label_3e39bc;
    }
    ctx->pc = 0x3E39B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E39B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3E39BCu;
label_3e39bc:
    // 0x3e39bc: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x3e39bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
label_3e39c0:
    // 0x3e39c0: 0x5040006e  beql        $v0, $zero, . + 4 + (0x6E << 2)
label_3e39c4:
    if (ctx->pc == 0x3E39C4u) {
        ctx->pc = 0x3E39C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E39C0u;
        // 0x3e39c4: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E39C8u;
        goto label_3e39c8;
    }
    ctx->pc = 0x3E39C0u;
    {
        const bool branch_taken_0x3e39c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e39c0) {
            ctx->pc = 0x3E39C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E39C0u;
            // 0x3e39c4: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3B7Cu;
            goto label_3e3b7c;
        }
    }
    ctx->pc = 0x3E39C8u;
label_3e39c8:
    // 0x3e39c8: 0x12400067  beqz        $s2, . + 4 + (0x67 << 2)
label_3e39cc:
    if (ctx->pc == 0x3E39CCu) {
        ctx->pc = 0x3E39CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E39C8u;
        // 0x3e39cc: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E39D0u;
        goto label_3e39d0;
    }
    ctx->pc = 0x3E39C8u;
    {
        const bool branch_taken_0x3e39c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E39CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E39C8u;
        // 0x3e39cc: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e39c8) {
            ctx->pc = 0x3E3B68u;
            goto label_3e3b68;
        }
    }
    ctx->pc = 0x3E39D0u;
label_3e39d0:
    // 0x3e39d0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3e39d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3e39d4:
    // 0x3e39d4: 0x2442e158  addiu       $v0, $v0, -0x1EA8
    ctx->pc = 0x3e39d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959448));
label_3e39d8:
    // 0x3e39d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e39d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e39dc:
    // 0x3e39dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3e39dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e39e0:
    // 0x3e39e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e39e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e39e4:
    // 0x3e39e4: 0xc0fde96  jal         func_3F7A58
label_3e39e8:
    if (ctx->pc == 0x3E39E8u) {
        ctx->pc = 0x3E39E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E39E4u;
        // 0x3e39e8: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E39ECu;
        goto label_3e39ec;
    }
    ctx->pc = 0x3E39E4u;
    SET_GPR_U32(ctx, 31, 0x3E39ECu);
    ctx->pc = 0x3E39E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E39E4u;
    // 0x3e39e8: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F7A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F7A58u, 0x3E39E4u, 0x3E39ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E39ECu;
label_3e39ec:
    // 0x3e39ec: 0x1000005e  b           . + 4 + (0x5E << 2)
label_3e39f0:
    if (ctx->pc == 0x3E39F0u) {
        ctx->pc = 0x3E39F4u;
        goto label_3e39f4;
    }
    ctx->pc = 0x3E39ECu;
    {
        const bool branch_taken_0x3e39ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e39ec) {
            ctx->pc = 0x3E3B68u;
            goto label_3e3b68;
        }
    }
    ctx->pc = 0x3E39F4u;
label_3e39f4:
    // 0x3e39f4: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x3e39f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
label_3e39f8:
    // 0x3e39f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3e39fc:
    if (ctx->pc == 0x3E39FCu) {
        ctx->pc = 0x3E3A00u;
        goto label_3e3a00;
    }
    ctx->pc = 0x3E39F8u;
    {
        const bool branch_taken_0x3e39f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e39f8) {
            ctx->pc = 0x3E3A10u;
            goto label_3e3a10;
        }
    }
    ctx->pc = 0x3E3A00u;
label_3e3a00:
    // 0x3e3a00: 0xde020178  ld          $v0, 0x178($s0)
    ctx->pc = 0x3e3a00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 376)));
label_3e3a04:
    // 0x3e3a04: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x3e3a04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_3e3a08:
    // 0x3e3a08: 0x5040005c  beql        $v0, $zero, . + 4 + (0x5C << 2)
label_3e3a0c:
    if (ctx->pc == 0x3E3A0Cu) {
        ctx->pc = 0x3E3A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3A08u;
        // 0x3e3a0c: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3A10u;
        goto label_3e3a10;
    }
    ctx->pc = 0x3E3A08u;
    {
        const bool branch_taken_0x3e3a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3a08) {
            ctx->pc = 0x3E3A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3A08u;
            // 0x3e3a0c: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3B7Cu;
            goto label_3e3b7c;
        }
    }
    ctx->pc = 0x3E3A10u;
label_3e3a10:
    // 0x3e3a10: 0x12400055  beqz        $s2, . + 4 + (0x55 << 2)
label_3e3a14:
    if (ctx->pc == 0x3E3A14u) {
        ctx->pc = 0x3E3A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3A10u;
        // 0x3e3a14: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3A18u;
        goto label_3e3a18;
    }
    ctx->pc = 0x3E3A10u;
    {
        const bool branch_taken_0x3e3a10 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3A10u;
        // 0x3e3a14: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3a10) {
            ctx->pc = 0x3E3B68u;
            goto label_3e3b68;
        }
    }
    ctx->pc = 0x3E3A18u;
label_3e3a18:
    // 0x3e3a18: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3e3a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3e3a1c:
    // 0x3e3a1c: 0x2442e158  addiu       $v0, $v0, -0x1EA8
    ctx->pc = 0x3e3a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959448));
label_3e3a20:
    // 0x3e3a20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e3a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e3a24:
    // 0x3e3a24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3e3a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e3a28:
    // 0x3e3a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3a2c:
    // 0x3e3a2c: 0xc0fde96  jal         func_3F7A58
label_3e3a30:
    if (ctx->pc == 0x3E3A30u) {
        ctx->pc = 0x3E3A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3A2Cu;
        // 0x3e3a30: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3A34u;
        goto label_3e3a34;
    }
    ctx->pc = 0x3E3A2Cu;
    SET_GPR_U32(ctx, 31, 0x3E3A34u);
    ctx->pc = 0x3E3A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3A2Cu;
    // 0x3e3a30: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F7A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F7A58u, 0x3E3A2Cu, 0x3E3A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3A34u;
label_3e3a34:
    // 0x3e3a34: 0x1000004c  b           . + 4 + (0x4C << 2)
label_3e3a38:
    if (ctx->pc == 0x3E3A38u) {
        ctx->pc = 0x3E3A3Cu;
        goto label_3e3a3c;
    }
    ctx->pc = 0x3E3A34u;
    {
        const bool branch_taken_0x3e3a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3a34) {
            ctx->pc = 0x3E3B68u;
            goto label_3e3b68;
        }
    }
    ctx->pc = 0x3E3A3Cu;
label_3e3a3c:
    // 0x3e3a3c: 0x30a30007  andi        $v1, $a1, 0x7
    ctx->pc = 0x3e3a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
label_3e3a40:
    // 0x3e3a40: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3e3a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e3a44:
    // 0x3e3a44: 0x5062004d  beql        $v1, $v0, . + 4 + (0x4D << 2)
label_3e3a48:
    if (ctx->pc == 0x3E3A48u) {
        ctx->pc = 0x3E3A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3A44u;
        // 0x3e3a48: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3A4Cu;
        goto label_3e3a4c;
    }
    ctx->pc = 0x3E3A44u;
    {
        const bool branch_taken_0x3e3a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e3a44) {
            ctx->pc = 0x3E3A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3A44u;
            // 0x3e3a48: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3B7Cu;
            goto label_3e3b7c;
        }
    }
    ctx->pc = 0x3E3A4Cu;
label_3e3a4c:
    // 0x3e3a4c: 0x12400046  beqz        $s2, . + 4 + (0x46 << 2)
label_3e3a50:
    if (ctx->pc == 0x3E3A50u) {
        ctx->pc = 0x3E3A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3A4Cu;
        // 0x3e3a50: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3A54u;
        goto label_3e3a54;
    }
    ctx->pc = 0x3E3A4Cu;
    {
        const bool branch_taken_0x3e3a4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3A4Cu;
        // 0x3e3a50: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3a4c) {
            ctx->pc = 0x3E3B68u;
            goto label_3e3b68;
        }
    }
    ctx->pc = 0x3E3A54u;
label_3e3a54:
    // 0x3e3a54: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_3e3a58:
    if (ctx->pc == 0x3E3A58u) {
        ctx->pc = 0x3E3A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3A54u;
        // 0x3e3a58: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3A5Cu;
        goto label_3e3a5c;
    }
    ctx->pc = 0x3E3A54u;
    {
        const bool branch_taken_0x3e3a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3A54u;
        // 0x3e3a58: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3a54) {
            ctx->pc = 0x3E3B68u;
            goto label_3e3b68;
        }
    }
    ctx->pc = 0x3E3A5Cu;
label_3e3a5c:
    // 0x3e3a5c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3e3a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3e3a60:
    // 0x3e3a60: 0x2442e158  addiu       $v0, $v0, -0x1EA8
    ctx->pc = 0x3e3a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959448));
label_3e3a64:
    // 0x3e3a64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e3a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e3a68:
    // 0x3e3a68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3e3a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e3a6c:
    // 0x3e3a6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3a70:
    // 0x3e3a70: 0xc0fde96  jal         func_3F7A58
label_3e3a74:
    if (ctx->pc == 0x3E3A74u) {
        ctx->pc = 0x3E3A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3A70u;
        // 0x3e3a74: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3A78u;
        goto label_3e3a78;
    }
    ctx->pc = 0x3E3A70u;
    SET_GPR_U32(ctx, 31, 0x3E3A78u);
    ctx->pc = 0x3E3A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3A70u;
    // 0x3e3a74: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F7A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F7A58u, 0x3E3A70u, 0x3E3A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3A78u;
label_3e3a78:
    // 0x3e3a78: 0x1000003b  b           . + 4 + (0x3B << 2)
label_3e3a7c:
    if (ctx->pc == 0x3E3A7Cu) {
        ctx->pc = 0x3E3A80u;
        goto label_3e3a80;
    }
    ctx->pc = 0x3E3A78u;
    {
        const bool branch_taken_0x3e3a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3a78) {
            ctx->pc = 0x3E3B68u;
            goto label_3e3b68;
        }
    }
    ctx->pc = 0x3E3A80u;
label_3e3a80:
    // 0x3e3a80: 0x30a20003  andi        $v0, $a1, 0x3
    ctx->pc = 0x3e3a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
label_3e3a84:
    // 0x3e3a84: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3e3a88:
    if (ctx->pc == 0x3E3A88u) {
        ctx->pc = 0x3E3A8Cu;
        goto label_3e3a8c;
    }
    ctx->pc = 0x3E3A84u;
    {
        const bool branch_taken_0x3e3a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e3a84) {
            ctx->pc = 0x3E3A9Cu;
            goto label_3e3a9c;
        }
    }
    ctx->pc = 0x3E3A8Cu;
label_3e3a8c:
    // 0x3e3a8c: 0xde020178  ld          $v0, 0x178($s0)
    ctx->pc = 0x3e3a8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 376)));
label_3e3a90:
    // 0x3e3a90: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x3e3a90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3e3a94:
    // 0x3e3a94: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_3e3a98:
    if (ctx->pc == 0x3E3A98u) {
        ctx->pc = 0x3E3A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3A94u;
        // 0x3e3a98: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3A9Cu;
        goto label_3e3a9c;
    }
    ctx->pc = 0x3E3A94u;
    {
        const bool branch_taken_0x3e3a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3a94) {
            ctx->pc = 0x3E3A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3A94u;
            // 0x3e3a98: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3B7Cu;
            goto label_3e3b7c;
        }
    }
    ctx->pc = 0x3E3A9Cu;
label_3e3a9c:
    // 0x3e3a9c: 0x12400032  beqz        $s2, . + 4 + (0x32 << 2)
label_3e3aa0:
    if (ctx->pc == 0x3E3AA0u) {
        ctx->pc = 0x3E3AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3A9Cu;
        // 0x3e3aa0: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3AA4u;
        goto label_3e3aa4;
    }
    ctx->pc = 0x3E3A9Cu;
    {
        const bool branch_taken_0x3e3a9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3A9Cu;
        // 0x3e3aa0: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3a9c) {
            ctx->pc = 0x3E3B68u;
            goto label_3e3b68;
        }
    }
    ctx->pc = 0x3E3AA4u;
label_3e3aa4:
    // 0x3e3aa4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3e3aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3e3aa8:
    // 0x3e3aa8: 0x2442e158  addiu       $v0, $v0, -0x1EA8
    ctx->pc = 0x3e3aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959448));
label_3e3aac:
    // 0x3e3aac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e3aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e3ab0:
    // 0x3e3ab0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3e3ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e3ab4:
    // 0x3e3ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3ab8:
    // 0x3e3ab8: 0xc0fde96  jal         func_3F7A58
label_3e3abc:
    if (ctx->pc == 0x3E3ABCu) {
        ctx->pc = 0x3E3ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3AB8u;
        // 0x3e3abc: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3AC0u;
        goto label_3e3ac0;
    }
    ctx->pc = 0x3E3AB8u;
    SET_GPR_U32(ctx, 31, 0x3E3AC0u);
    ctx->pc = 0x3E3ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3AB8u;
    // 0x3e3abc: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F7A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F7A58u, 0x3E3AB8u, 0x3E3AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3AC0u;
label_3e3ac0:
    // 0x3e3ac0: 0x10000029  b           . + 4 + (0x29 << 2)
label_3e3ac4:
    if (ctx->pc == 0x3E3AC4u) {
        ctx->pc = 0x3E3AC8u;
        goto label_3e3ac8;
    }
    ctx->pc = 0x3E3AC0u;
    {
        const bool branch_taken_0x3e3ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3ac0) {
            ctx->pc = 0x3E3B68u;
            goto label_3e3b68;
        }
    }
    ctx->pc = 0x3E3AC8u;
label_3e3ac8:
    // 0x3e3ac8: 0x30a30003  andi        $v1, $a1, 0x3
    ctx->pc = 0x3e3ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
label_3e3acc:
    // 0x3e3acc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e3accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e3ad0:
    // 0x3e3ad0: 0x5062002a  beql        $v1, $v0, . + 4 + (0x2A << 2)
label_3e3ad4:
    if (ctx->pc == 0x3E3AD4u) {
        ctx->pc = 0x3E3AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3AD0u;
        // 0x3e3ad4: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3AD8u;
        goto label_3e3ad8;
    }
    ctx->pc = 0x3E3AD0u;
    {
        const bool branch_taken_0x3e3ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e3ad0) {
            ctx->pc = 0x3E3AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3AD0u;
            // 0x3e3ad4: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3B7Cu;
            goto label_3e3b7c;
        }
    }
    ctx->pc = 0x3E3AD8u;
label_3e3ad8:
    // 0x3e3ad8: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
label_3e3adc:
    if (ctx->pc == 0x3E3ADCu) {
        ctx->pc = 0x3E3ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3AD8u;
        // 0x3e3adc: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3AE0u;
        goto label_3e3ae0;
    }
    ctx->pc = 0x3E3AD8u;
    {
        const bool branch_taken_0x3e3ad8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3AD8u;
        // 0x3e3adc: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3ad8) {
            ctx->pc = 0x3E3B68u;
            goto label_3e3b68;
        }
    }
    ctx->pc = 0x3E3AE0u;
label_3e3ae0:
    // 0x3e3ae0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_3e3ae4:
    if (ctx->pc == 0x3E3AE4u) {
        ctx->pc = 0x3E3AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3AE0u;
        // 0x3e3ae4: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3AE8u;
        goto label_3e3ae8;
    }
    ctx->pc = 0x3E3AE0u;
    {
        const bool branch_taken_0x3e3ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3AE0u;
        // 0x3e3ae4: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3ae0) {
            ctx->pc = 0x3E3B68u;
            goto label_3e3b68;
        }
    }
    ctx->pc = 0x3E3AE8u;
label_3e3ae8:
    // 0x3e3ae8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3e3ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3e3aec:
    // 0x3e3aec: 0x2442e158  addiu       $v0, $v0, -0x1EA8
    ctx->pc = 0x3e3aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959448));
label_3e3af0:
    // 0x3e3af0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e3af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e3af4:
    // 0x3e3af4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3e3af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e3af8:
    // 0x3e3af8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3afc:
    // 0x3e3afc: 0xc0fde96  jal         func_3F7A58
label_3e3b00:
    if (ctx->pc == 0x3E3B00u) {
        ctx->pc = 0x3E3B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3AFCu;
        // 0x3e3b00: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3B04u;
        goto label_3e3b04;
    }
    ctx->pc = 0x3E3AFCu;
    SET_GPR_U32(ctx, 31, 0x3E3B04u);
    ctx->pc = 0x3E3B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3AFCu;
    // 0x3e3b00: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F7A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F7A58u, 0x3E3AFCu, 0x3E3B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3B04u;
label_3e3b04:
    // 0x3e3b04: 0x10000018  b           . + 4 + (0x18 << 2)
label_3e3b08:
    if (ctx->pc == 0x3E3B08u) {
        ctx->pc = 0x3E3B0Cu;
        goto label_3e3b0c;
    }
    ctx->pc = 0x3E3B04u;
    {
        const bool branch_taken_0x3e3b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3b04) {
            ctx->pc = 0x3E3B68u;
            goto label_3e3b68;
        }
    }
    ctx->pc = 0x3E3B0Cu;
label_3e3b0c:
    // 0x3e3b0c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x3e3b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_3e3b10:
    // 0x3e3b10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3e3b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3e3b14:
    // 0x3e3b14: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e3b14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3e3b18:
    // 0x3e3b18: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3e3b1c:
    if (ctx->pc == 0x3E3B1Cu) {
        ctx->pc = 0x3E3B20u;
        goto label_3e3b20;
    }
    ctx->pc = 0x3E3B18u;
    {
        const bool branch_taken_0x3e3b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e3b18) {
            ctx->pc = 0x3E3B30u;
            goto label_3e3b30;
        }
    }
    ctx->pc = 0x3E3B20u;
label_3e3b20:
    // 0x3e3b20: 0xde020178  ld          $v0, 0x178($s0)
    ctx->pc = 0x3e3b20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 376)));
label_3e3b24:
    // 0x3e3b24: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3e3b24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3e3b28:
    // 0x3e3b28: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_3e3b2c:
    if (ctx->pc == 0x3E3B2Cu) {
        ctx->pc = 0x3E3B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3B28u;
        // 0x3e3b2c: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3B30u;
        goto label_3e3b30;
    }
    ctx->pc = 0x3E3B28u;
    {
        const bool branch_taken_0x3e3b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3b28) {
            ctx->pc = 0x3E3B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3B28u;
            // 0x3e3b2c: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3B7Cu;
            goto label_3e3b7c;
        }
    }
    ctx->pc = 0x3E3B30u;
label_3e3b30:
    // 0x3e3b30: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_3e3b34:
    if (ctx->pc == 0x3E3B34u) {
        ctx->pc = 0x3E3B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3B30u;
        // 0x3e3b34: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3B38u;
        goto label_3e3b38;
    }
    ctx->pc = 0x3E3B30u;
    {
        const bool branch_taken_0x3e3b30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3B30u;
        // 0x3e3b34: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3b30) {
            ctx->pc = 0x3E3B68u;
            goto label_3e3b68;
        }
    }
    ctx->pc = 0x3E3B38u;
label_3e3b38:
    // 0x3e3b38: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3e3b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3e3b3c:
    // 0x3e3b3c: 0x2442e158  addiu       $v0, $v0, -0x1EA8
    ctx->pc = 0x3e3b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959448));
label_3e3b40:
    // 0x3e3b40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e3b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e3b44:
    // 0x3e3b44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3e3b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e3b48:
    // 0x3e3b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3b4c:
    // 0x3e3b4c: 0xc0fde96  jal         func_3F7A58
label_3e3b50:
    if (ctx->pc == 0x3E3B50u) {
        ctx->pc = 0x3E3B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3B4Cu;
        // 0x3e3b50: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3B54u;
        goto label_3e3b54;
    }
    ctx->pc = 0x3E3B4Cu;
    SET_GPR_U32(ctx, 31, 0x3E3B54u);
    ctx->pc = 0x3E3B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3B4Cu;
    // 0x3e3b50: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F7A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F7A58u, 0x3E3B4Cu, 0x3E3B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3B54u;
label_3e3b54:
    // 0x3e3b54: 0x10000004  b           . + 4 + (0x4 << 2)
label_3e3b58:
    if (ctx->pc == 0x3E3B58u) {
        ctx->pc = 0x3E3B5Cu;
        goto label_3e3b5c;
    }
    ctx->pc = 0x3E3B54u;
    {
        const bool branch_taken_0x3e3b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3b54) {
            ctx->pc = 0x3E3B68u;
            goto label_3e3b68;
        }
    }
    ctx->pc = 0x3E3B5Cu;
label_3e3b5c:
    // 0x3e3b5c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x3e3b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_3e3b60:
    // 0x3e3b60: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_3e3b64:
    if (ctx->pc == 0x3E3B64u) {
        ctx->pc = 0x3E3B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3B60u;
        // 0x3e3b64: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3B68u;
        goto label_3e3b68;
    }
    ctx->pc = 0x3E3B60u;
    {
        const bool branch_taken_0x3e3b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e3b60) {
            ctx->pc = 0x3E3B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3B60u;
            // 0x3e3b64: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3B7Cu;
            goto label_3e3b7c;
        }
    }
    ctx->pc = 0x3E3B68u;
label_3e3b68:
    // 0x3e3b68: 0xc0fe534  jal         func_3F94D0
label_3e3b6c:
    if (ctx->pc == 0x3E3B6Cu) {
        ctx->pc = 0x3E3B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3B68u;
        // 0x3e3b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3B70u;
        goto label_3e3b70;
    }
    ctx->pc = 0x3E3B68u;
    SET_GPR_U32(ctx, 31, 0x3E3B70u);
    ctx->pc = 0x3E3B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3B68u;
    // 0x3e3b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F94D0u, 0x3E3B68u, 0x3E3B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3B70u;
label_3e3b70:
    // 0x3e3b70: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_3e3b74:
    if (ctx->pc == 0x3E3B74u) {
        ctx->pc = 0x3E3B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3B70u;
        // 0x3e3b74: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3B78u;
        goto label_3e3b78;
    }
    ctx->pc = 0x3E3B70u;
    {
        const bool branch_taken_0x3e3b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3B70u;
        // 0x3e3b74: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3b70) {
            ctx->pc = 0x3E3E88u;
            goto label_3e3e88;
        }
    }
    ctx->pc = 0x3E3B78u;
label_3e3b78:
    // 0x3e3b78: 0xde0200f8  ld          $v0, 0xF8($s0)
    ctx->pc = 0x3e3b78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
label_3e3b7c:
    // 0x3e3b7c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3e3b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3e3b80:
    // 0x3e3b80: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_3e3b84:
    if (ctx->pc == 0x3E3B84u) {
        ctx->pc = 0x3E3B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3B80u;
        // 0x3e3b84: 0x8e0201bc  lw          $v0, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3B88u;
        goto label_3e3b88;
    }
    ctx->pc = 0x3E3B80u;
    {
        const bool branch_taken_0x3e3b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e3b80) {
            ctx->pc = 0x3E3B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3B80u;
            // 0x3e3b84: 0x8e0201bc  lw          $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3B9Cu;
            goto label_3e3b9c;
        }
    }
    ctx->pc = 0x3E3B88u;
label_3e3b88:
    // 0x3e3b88: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3e3b88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3e3b8c:
    // 0x3e3b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3b90:
    // 0x3e3b90: 0xc0f86f2  jal         func_3E1BC8
label_3e3b94:
    if (ctx->pc == 0x3E3B94u) {
        ctx->pc = 0x3E3B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3B90u;
        // 0x3e3b94: 0x24a5e608  addiu       $a1, $a1, -0x19F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3B98u;
        goto label_3e3b98;
    }
    ctx->pc = 0x3E3B90u;
    SET_GPR_U32(ctx, 31, 0x3E3B98u);
    ctx->pc = 0x3E3B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3B90u;
    // 0x3e3b94: 0x24a5e608  addiu       $a1, $a1, -0x19F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E3B90u, 0x3E3B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3B98u;
label_3e3b98:
    // 0x3e3b98: 0x8e0201bc  lw          $v0, 0x1BC($s0)
    ctx->pc = 0x3e3b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3e3b9c:
    // 0x3e3b9c: 0x26150110  addiu       $s5, $s0, 0x110
    ctx->pc = 0x3e3b9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_3e3ba0:
    // 0x3e3ba0: 0x8e0301a0  lw          $v1, 0x1A0($s0)
    ctx->pc = 0x3e3ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
label_3e3ba4:
    // 0x3e3ba4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x3e3ba4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e3ba8:
    // 0x3e3ba8: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x3e3ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
label_3e3bac:
    // 0x3e3bac: 0x3c1e0060  lui         $fp, 0x60
    ctx->pc = 0x3e3bacu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
label_3e3bb0:
    // 0x3e3bb0: 0xae030124  sw          $v1, 0x124($s0)
    ctx->pc = 0x3e3bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
label_3e3bb4:
    // 0x3e3bb4: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x3e3bb4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
label_3e3bb8:
    // 0x3e3bb8: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x3e3bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_3e3bbc:
    // 0x3e3bbc: 0x0  nop
    ctx->pc = 0x3e3bbcu;
    // NOP
label_3e3bc0:
    // 0x3e3bc0: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_3e3bc4:
    if (ctx->pc == 0x3E3BC4u) {
        ctx->pc = 0x3E3BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3BC0u;
        // 0x3e3bc4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3BC8u;
        goto label_3e3bc8;
    }
    ctx->pc = 0x3E3BC0u;
    {
        const bool branch_taken_0x3e3bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3BC0u;
        // 0x3e3bc4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3bc0) {
            ctx->pc = 0x3E3C98u;
            goto label_3e3c98;
        }
    }
    ctx->pc = 0x3E3BC8u;
label_3e3bc8:
    // 0x3e3bc8: 0xde0201e8  ld          $v0, 0x1E8($s0)
    ctx->pc = 0x3e3bc8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 488)));
label_3e3bcc:
    // 0x3e3bcc: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
label_3e3bd0:
    if (ctx->pc == 0x3E3BD0u) {
        ctx->pc = 0x3E3BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3BCCu;
        // 0x3e3bd0: 0x8e05015c  lw          $a1, 0x15C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3BD4u;
        goto label_3e3bd4;
    }
    ctx->pc = 0x3E3BCCu;
    {
        const bool branch_taken_0x3e3bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e3bcc) {
            ctx->pc = 0x3E3BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3BCCu;
            // 0x3e3bd0: 0x8e05015c  lw          $a1, 0x15C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3C4Cu;
            goto label_3e3c4c;
        }
    }
    ctx->pc = 0x3E3BD4u;
label_3e3bd4:
    // 0x3e3bd4: 0x26110200  addiu       $s1, $s0, 0x200
    ctx->pc = 0x3e3bd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
label_3e3bd8:
    // 0x3e3bd8: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x3e3bd8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
label_3e3bdc:
    // 0x3e3bdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3be0:
    // 0x3e3be0: 0xc0fe732  jal         func_3F9CC8
label_3e3be4:
    if (ctx->pc == 0x3E3BE4u) {
        ctx->pc = 0x3E3BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3BE0u;
        // 0x3e3be4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3BE8u;
        goto label_3e3be8;
    }
    ctx->pc = 0x3E3BE0u;
    SET_GPR_U32(ctx, 31, 0x3E3BE8u);
    ctx->pc = 0x3E3BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3BE0u;
    // 0x3e3be4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9CC8u, 0x3E3BE0u, 0x3E3BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3BE8u;
label_3e3be8:
    // 0x3e3be8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3e3be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e3bec:
    // 0x3e3bec: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3e3becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e3bf0:
    // 0x3e3bf0: 0xc0f94da  jal         func_3E5368
label_3e3bf4:
    if (ctx->pc == 0x3E3BF4u) {
        ctx->pc = 0x3E3BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3BF0u;
        // 0x3e3bf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3BF8u;
        goto label_3e3bf8;
    }
    ctx->pc = 0x3E3BF0u;
    SET_GPR_U32(ctx, 31, 0x3E3BF8u);
    ctx->pc = 0x3E3BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3BF0u;
    // 0x3e3bf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3E3BF0u, 0x3E3BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3BF8u;
label_3e3bf8:
    // 0x3e3bf8: 0xc0fe70c  jal         func_3F9C30
label_3e3bfc:
    if (ctx->pc == 0x3E3BFCu) {
        ctx->pc = 0x3E3BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3BF8u;
        // 0x3e3bfc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3C00u;
        goto label_3e3c00;
    }
    ctx->pc = 0x3E3BF8u;
    SET_GPR_U32(ctx, 31, 0x3E3C00u);
    ctx->pc = 0x3E3BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3BF8u;
    // 0x3e3bfc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9C30u, 0x3E3BF8u, 0x3E3C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3C00u;
label_3e3c00:
    // 0x3e3c00: 0xfe0201e8  sd          $v0, 0x1E8($s0)
    ctx->pc = 0x3e3c00u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 488), GPR_U64(ctx, 2));
label_3e3c04:
    // 0x3e3c04: 0xc0f85de  jal         func_3E1778
label_3e3c08:
    if (ctx->pc == 0x3E3C08u) {
        ctx->pc = 0x3E3C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3C04u;
        // 0x3e3c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3C0Cu;
        goto label_3e3c0c;
    }
    ctx->pc = 0x3E3C04u;
    SET_GPR_U32(ctx, 31, 0x3E3C0Cu);
    ctx->pc = 0x3E3C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3C04u;
    // 0x3e3c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1778u, 0x3E3C04u, 0x3E3C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3C0Cu;
label_3e3c0c:
    // 0x3e3c0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3c10:
    // 0x3e3c10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e3c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e3c14:
    // 0x3e3c14: 0xc0fe71e  jal         func_3F9C78
label_3e3c18:
    if (ctx->pc == 0x3E3C18u) {
        ctx->pc = 0x3E3C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3C14u;
        // 0x3e3c18: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3C1Cu;
        goto label_3e3c1c;
    }
    ctx->pc = 0x3E3C14u;
    SET_GPR_U32(ctx, 31, 0x3E3C1Cu);
    ctx->pc = 0x3E3C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3C14u;
    // 0x3e3c18: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9C78u, 0x3E3C14u, 0x3E3C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3C1Cu;
label_3e3c1c:
    // 0x3e3c1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e3c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e3c20:
    // 0x3e3c20: 0x2785ac40  addiu       $a1, $gp, -0x53C0
    ctx->pc = 0x3e3c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945856));
label_3e3c24:
    // 0x3e3c24: 0xc0bb752  jal         func_2EDD48
label_3e3c28:
    if (ctx->pc == 0x3E3C28u) {
        ctx->pc = 0x3E3C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3C24u;
        // 0x3e3c28: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3C2Cu;
        goto label_3e3c2c;
    }
    ctx->pc = 0x3E3C24u;
    SET_GPR_U32(ctx, 31, 0x3E3C2Cu);
    ctx->pc = 0x3E3C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3C24u;
    // 0x3e3c28: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3E3C24u, 0x3E3C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3C2Cu;
label_3e3c2c:
    // 0x3e3c2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3e3c30:
    if (ctx->pc == 0x3E3C30u) {
        ctx->pc = 0x3E3C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3C2Cu;
        // 0x3e3c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3C34u;
        goto label_3e3c34;
    }
    ctx->pc = 0x3E3C2Cu;
    {
        const bool branch_taken_0x3e3c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3C2Cu;
        // 0x3e3c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3c2c) {
            ctx->pc = 0x3E3C3Cu;
            goto label_3e3c3c;
        }
    }
    ctx->pc = 0x3E3C34u;
label_3e3c34:
    // 0x3e3c34: 0xc0f86f2  jal         func_3E1BC8
label_3e3c38:
    if (ctx->pc == 0x3E3C38u) {
        ctx->pc = 0x3E3C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3C34u;
        // 0x3e3c38: 0x2665e630  addiu       $a1, $s3, -0x19D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294960688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3C3Cu;
        goto label_3e3c3c;
    }
    ctx->pc = 0x3E3C34u;
    SET_GPR_U32(ctx, 31, 0x3E3C3Cu);
    ctx->pc = 0x3E3C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3C34u;
    // 0x3e3c38: 0x2665e630  addiu       $a1, $s3, -0x19D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294960688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E3C34u, 0x3E3C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3C3Cu;
label_3e3c3c:
    // 0x3e3c3c: 0xde0201e8  ld          $v0, 0x1E8($s0)
    ctx->pc = 0x3e3c3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 488)));
label_3e3c40:
    // 0x3e3c40: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
label_3e3c44:
    if (ctx->pc == 0x3E3C44u) {
        ctx->pc = 0x3E3C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3C40u;
        // 0x3e3c44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3C48u;
        goto label_3e3c48;
    }
    ctx->pc = 0x3E3C40u;
    {
        const bool branch_taken_0x3e3c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3C40u;
        // 0x3e3c44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3c40) {
            ctx->pc = 0x3E3BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3be0;
        }
    }
    ctx->pc = 0x3E3C48u;
label_3e3c48:
    // 0x3e3c48: 0x8e05015c  lw          $a1, 0x15C($s0)
    ctx->pc = 0x3e3c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
label_3e3c4c:
    // 0x3e3c4c: 0x8e040158  lw          $a0, 0x158($s0)
    ctx->pc = 0x3e3c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
label_3e3c50:
    // 0x3e3c50: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x3e3c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_3e3c54:
    // 0x3e3c54: 0xde0301e8  ld          $v1, 0x1E8($s0)
    ctx->pc = 0x3e3c54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 488)));
label_3e3c58:
    // 0x3e3c58: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3e3c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_3e3c5c:
    // 0x3e3c5c: 0xae040110  sw          $a0, 0x110($s0)
    ctx->pc = 0x3e3c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 4));
label_3e3c60:
    // 0x3e3c60: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x3e3c60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3e3c64:
    // 0x3e3c64: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3e3c68:
    if (ctx->pc == 0x3E3C68u) {
        ctx->pc = 0x3E3C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3C64u;
        // 0x3e3c68: 0xae050114  sw          $a1, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3C6Cu;
        goto label_3e3c6c;
    }
    ctx->pc = 0x3E3C64u;
    {
        const bool branch_taken_0x3e3c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3C64u;
        // 0x3e3c68: 0xae050114  sw          $a1, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3c64) {
            ctx->pc = 0x3E3C74u;
            goto label_3e3c74;
        }
    }
    ctx->pc = 0x3E3C6Cu;
label_3e3c6c:
    // 0x3e3c6c: 0x8e0201e8  lw          $v0, 0x1E8($s0)
    ctx->pc = 0x3e3c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
label_3e3c70:
    // 0x3e3c70: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x3e3c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
label_3e3c74:
    // 0x3e3c74: 0x8e050158  lw          $a1, 0x158($s0)
    ctx->pc = 0x3e3c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
label_3e3c78:
    // 0x3e3c78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3c7c:
    // 0x3e3c7c: 0xc0fe71e  jal         func_3F9C78
label_3e3c80:
    if (ctx->pc == 0x3E3C80u) {
        ctx->pc = 0x3E3C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3C7Cu;
        // 0x3e3c80: 0x8e060114  lw          $a2, 0x114($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3C84u;
        goto label_3e3c84;
    }
    ctx->pc = 0x3E3C7Cu;
    SET_GPR_U32(ctx, 31, 0x3E3C84u);
    ctx->pc = 0x3E3C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3C7Cu;
    // 0x3e3c80: 0x8e060114  lw          $a2, 0x114($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9C78u, 0x3E3C7Cu, 0x3E3C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3C84u;
label_3e3c84:
    // 0x3e3c84: 0xde0201e8  ld          $v0, 0x1E8($s0)
    ctx->pc = 0x3e3c84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 488)));
label_3e3c88:
    // 0x3e3c88: 0x9e030114  lwu         $v1, 0x114($s0)
    ctx->pc = 0x3e3c88u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_3e3c8c:
    // 0x3e3c8c: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x3e3c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
label_3e3c90:
    // 0x3e3c90: 0xfe0201e8  sd          $v0, 0x1E8($s0)
    ctx->pc = 0x3e3c90u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 488), GPR_U64(ctx, 2));
label_3e3c94:
    // 0x3e3c94: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3e3c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3e3c98:
    // 0x3e3c98: 0xc0f71f0  jal         func_3DC7C0
label_3e3c9c:
    if (ctx->pc == 0x3E3C9Cu) {
        ctx->pc = 0x3E3C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3C98u;
        // 0x3e3c9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3CA0u;
        goto label_3e3ca0;
    }
    ctx->pc = 0x3E3C98u;
    SET_GPR_U32(ctx, 31, 0x3E3CA0u);
    ctx->pc = 0x3E3C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3C98u;
    // 0x3e3c9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC7C0u, 0x3E3C98u, 0x3E3CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3CA0u;
label_3e3ca0:
    // 0x3e3ca0: 0x14570015  bne         $v0, $s7, . + 4 + (0x15 << 2)
label_3e3ca4:
    if (ctx->pc == 0x3E3CA4u) {
        ctx->pc = 0x3E3CA8u;
        goto label_3e3ca8;
    }
    ctx->pc = 0x3E3CA0u;
    {
        const bool branch_taken_0x3e3ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x3e3ca0) {
            ctx->pc = 0x3E3CF8u;
            goto label_3e3cf8;
        }
    }
    ctx->pc = 0x3E3CA8u;
label_3e3ca8:
    // 0x3e3ca8: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x3e3ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
label_3e3cac:
    // 0x3e3cac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3e3cb0:
    if (ctx->pc == 0x3E3CB0u) {
        ctx->pc = 0x3E3CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3CACu;
        // 0x3e3cb0: 0x27c5e648  addiu       $a1, $fp, -0x19B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294960712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3CB4u;
        goto label_3e3cb4;
    }
    ctx->pc = 0x3E3CACu;
    {
        const bool branch_taken_0x3e3cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3CACu;
        // 0x3e3cb0: 0x27c5e648  addiu       $a1, $fp, -0x19B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294960712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3cac) {
            ctx->pc = 0x3E3CCCu;
            goto label_3e3ccc;
        }
    }
    ctx->pc = 0x3E3CB4u;
label_3e3cb4:
    // 0x3e3cb4: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x3e3cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_3e3cb8:
    // 0x3e3cb8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3e3cbc:
    if (ctx->pc == 0x3E3CBCu) {
        ctx->pc = 0x3E3CC0u;
        goto label_3e3cc0;
    }
    ctx->pc = 0x3E3CB8u;
    {
        const bool branch_taken_0x3e3cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e3cb8) {
            ctx->pc = 0x3E3CCCu;
            goto label_3e3ccc;
        }
    }
    ctx->pc = 0x3E3CC0u;
label_3e3cc0:
    // 0x3e3cc0: 0xde0201e8  ld          $v0, 0x1E8($s0)
    ctx->pc = 0x3e3cc0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 488)));
label_3e3cc4:
    // 0x3e3cc4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3e3cc8:
    if (ctx->pc == 0x3E3CC8u) {
        ctx->pc = 0x3E3CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3CC4u;
        // 0x3e3cc8: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3CCCu;
        goto label_3e3ccc;
    }
    ctx->pc = 0x3E3CC4u;
    {
        const bool branch_taken_0x3e3cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3cc4) {
            ctx->pc = 0x3E3CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3CC4u;
            // 0x3e3cc8: 0xde0200f8  ld          $v0, 0xF8($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3CD8u;
            goto label_3e3cd8;
        }
    }
    ctx->pc = 0x3E3CCCu;
label_3e3ccc:
    // 0x3e3ccc: 0xc0f86f2  jal         func_3E1BC8
label_3e3cd0:
    if (ctx->pc == 0x3E3CD0u) {
        ctx->pc = 0x3E3CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3CCCu;
        // 0x3e3cd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3CD4u;
        goto label_3e3cd4;
    }
    ctx->pc = 0x3E3CCCu;
    SET_GPR_U32(ctx, 31, 0x3E3CD4u);
    ctx->pc = 0x3E3CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3CCCu;
    // 0x3e3cd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E3CCCu, 0x3E3CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3CD4u;
label_3e3cd4:
    // 0x3e3cd4: 0xde0200f8  ld          $v0, 0xF8($s0)
    ctx->pc = 0x3e3cd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
label_3e3cd8:
    // 0x3e3cd8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3e3cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e3cdc:
    // 0x3e3cdc: 0xde030100  ld          $v1, 0x100($s0)
    ctx->pc = 0x3e3cdcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 256)));
label_3e3ce0:
    // 0x3e3ce0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3e3ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_3e3ce4:
    // 0x3e3ce4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3e3ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3e3ce8:
    // 0x3e3ce8: 0xfe0200f8  sd          $v0, 0xF8($s0)
    ctx->pc = 0x3e3ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 248), GPR_U64(ctx, 2));
label_3e3cec:
    // 0x3e3cec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3e3cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3e3cf0:
    // 0x3e3cf0: 0x1000000a  b           . + 4 + (0xA << 2)
label_3e3cf4:
    if (ctx->pc == 0x3E3CF4u) {
        ctx->pc = 0x3E3CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3CF0u;
        // 0x3e3cf4: 0xfe030100  sd          $v1, 0x100($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 256), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3CF8u;
        goto label_3e3cf8;
    }
    ctx->pc = 0x3E3CF0u;
    {
        const bool branch_taken_0x3e3cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3CF0u;
        // 0x3e3cf4: 0xfe030100  sd          $v1, 0x100($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 256), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3cf0) {
            ctx->pc = 0x3E3D1Cu;
            goto label_3e3d1c;
        }
    }
    ctx->pc = 0x3E3CF8u;
label_3e3cf8:
    // 0x3e3cf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3e3cfc:
    if (ctx->pc == 0x3E3CFCu) {
        ctx->pc = 0x3E3CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3CF8u;
        // 0x3e3cfc: 0x26c2e660  addiu       $v0, $s6, -0x19A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3D00u;
        goto label_3e3d00;
    }
    ctx->pc = 0x3E3CF8u;
    {
        const bool branch_taken_0x3e3cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3CF8u;
        // 0x3e3cfc: 0x26c2e660  addiu       $v0, $s6, -0x19A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3cf8) {
            ctx->pc = 0x3E3D10u;
            goto label_3e3d10;
        }
    }
    ctx->pc = 0x3E3D00u;
label_3e3d00:
    // 0x3e3d00: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x3e3d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_3e3d04:
    // 0x3e3d04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3d08:
    // 0x3e3d08: 0xc0f86f2  jal         func_3E1BC8
label_3e3d0c:
    if (ctx->pc == 0x3E3D0Cu) {
        ctx->pc = 0x3E3D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3D08u;
        // 0x3e3d0c: 0x45280a  movz        $a1, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3D10u;
        goto label_3e3d10;
    }
    ctx->pc = 0x3E3D08u;
    SET_GPR_U32(ctx, 31, 0x3E3D10u);
    ctx->pc = 0x3E3D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3D08u;
    // 0x3e3d0c: 0x45280a  movz        $a1, $v0, $a1 (Delay Slot)
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E3D08u, 0x3E3D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3D10u;
label_3e3d10:
    // 0x3e3d10: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x3e3d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
label_3e3d14:
    // 0x3e3d14: 0x5440ffaa  bnel        $v0, $zero, . + 4 + (-0x56 << 2)
label_3e3d18:
    if (ctx->pc == 0x3E3D18u) {
        ctx->pc = 0x3E3D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3D14u;
        // 0x3e3d18: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3D1Cu;
        goto label_3e3d1c;
    }
    ctx->pc = 0x3E3D14u;
    {
        const bool branch_taken_0x3e3d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e3d14) {
            ctx->pc = 0x3E3D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3D14u;
            // 0x3e3d18: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3bc0;
        }
    }
    ctx->pc = 0x3E3D1Cu;
label_3e3d1c:
    // 0x3e3d1c: 0x9202020d  lbu         $v0, 0x20D($s0)
    ctx->pc = 0x3e3d1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 525)));
label_3e3d20:
    // 0x3e3d20: 0xde0701a8  ld          $a3, 0x1A8($s0)
    ctx->pc = 0x3e3d20u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 424)));
label_3e3d24:
    // 0x3e3d24: 0xa20201e3  sb          $v0, 0x1E3($s0)
    ctx->pc = 0x3e3d24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 483), (uint8_t)GPR_U32(ctx, 2));
label_3e3d28:
    // 0x3e3d28: 0x9206020a  lbu         $a2, 0x20A($s0)
    ctx->pc = 0x3e3d28u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 522)));
label_3e3d2c:
    // 0x3e3d2c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3e3d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3e3d30:
    // 0x3e3d30: 0x9202020e  lbu         $v0, 0x20E($s0)
    ctx->pc = 0x3e3d30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 526)));
label_3e3d34:
    // 0x3e3d34: 0x9203020b  lbu         $v1, 0x20B($s0)
    ctx->pc = 0x3e3d34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 523)));
label_3e3d38:
    // 0x3e3d38: 0x920501e3  lbu         $a1, 0x1E3($s0)
    ctx->pc = 0x3e3d38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 483)));
label_3e3d3c:
    // 0x3e3d3c: 0xa20601e0  sb          $a2, 0x1E0($s0)
    ctx->pc = 0x3e3d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 480), (uint8_t)GPR_U32(ctx, 6));
label_3e3d40:
    // 0x3e3d40: 0xa20201e2  sb          $v0, 0x1E2($s0)
    ctx->pc = 0x3e3d40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 482), (uint8_t)GPR_U32(ctx, 2));
label_3e3d44:
    // 0x3e3d44: 0xa20301e1  sb          $v1, 0x1E1($s0)
    ctx->pc = 0x3e3d44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 481), (uint8_t)GPR_U32(ctx, 3));
label_3e3d48:
    // 0x3e3d48: 0xc0be4b8  jal         func_2F92E0
label_3e3d4c:
    if (ctx->pc == 0x3E3D4Cu) {
        ctx->pc = 0x3E3D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3D48u;
        // 0x3e3d4c: 0xfe0701d0  sd          $a3, 0x1D0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 464), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3D50u;
        goto label_3e3d50;
    }
    ctx->pc = 0x3E3D48u;
    SET_GPR_U32(ctx, 31, 0x3E3D50u);
    ctx->pc = 0x3E3D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3D48u;
    // 0x3e3d4c: 0xfe0701d0  sd          $a3, 0x1D0($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 464), GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3E3D48u, 0x3E3D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3D50u;
label_3e3d50:
    // 0x3e3d50: 0x64420007  daddiu      $v0, $v0, 0x7
    ctx->pc = 0x3e3d50u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)7);
label_3e3d54:
    // 0x3e3d54: 0x8e0601bc  lw          $a2, 0x1BC($s0)
    ctx->pc = 0x3e3d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3e3d58:
    // 0x3e3d58: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x3e3d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
label_3e3d5c:
    // 0x3e3d5c: 0xfe0201d8  sd          $v0, 0x1D8($s0)
    ctx->pc = 0x3e3d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 472), GPR_U64(ctx, 2));
label_3e3d60:
    // 0x3e3d60: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e3d60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3e3d64:
    // 0x3e3d64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3e3d68:
    if (ctx->pc == 0x3E3D68u) {
        ctx->pc = 0x3E3D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3D64u;
        // 0x3e3d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3D6Cu;
        goto label_3e3d6c;
    }
    ctx->pc = 0x3E3D64u;
    {
        const bool branch_taken_0x3e3d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3D64u;
        // 0x3e3d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3d64) {
            ctx->pc = 0x3E3D84u;
            goto label_3e3d84;
        }
    }
    ctx->pc = 0x3E3D6Cu;
label_3e3d6c:
    // 0x3e3d6c: 0x8e0701b8  lw          $a3, 0x1B8($s0)
    ctx->pc = 0x3e3d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_3e3d70:
    // 0x3e3d70: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3e3d70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e3d74:
    // 0x3e3d74: 0x260501d0  addiu       $a1, $s0, 0x1D0
    ctx->pc = 0x3e3d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
label_3e3d78:
    // 0x3e3d78: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3e3d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3e3d7c:
    // 0x3e3d7c: 0xc0fe336  jal         func_3F8CD8
label_3e3d80:
    if (ctx->pc == 0x3E3D80u) {
        ctx->pc = 0x3E3D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3D7Cu;
        // 0x3e3d80: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3D84u;
        goto label_3e3d84;
    }
    ctx->pc = 0x3E3D7Cu;
    SET_GPR_U32(ctx, 31, 0x3E3D84u);
    ctx->pc = 0x3E3D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3D7Cu;
    // 0x3e3d80: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F8CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F8CD8u, 0x3E3D7Cu, 0x3E3D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3D84u;
label_3e3d84:
    // 0x3e3d84: 0xde070198  ld          $a3, 0x198($s0)
    ctx->pc = 0x3e3d84u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 408)));
label_3e3d88:
    // 0x3e3d88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3d8c:
    // 0x3e3d8c: 0x8e0501b8  lw          $a1, 0x1B8($s0)
    ctx->pc = 0x3e3d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_3e3d90:
    // 0x3e3d90: 0x8e0601bc  lw          $a2, 0x1BC($s0)
    ctx->pc = 0x3e3d90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3e3d94:
    // 0x3e3d94: 0xc0f8b34  jal         func_3E2CD0
label_3e3d98:
    if (ctx->pc == 0x3E3D98u) {
        ctx->pc = 0x3E3D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3D94u;
        // 0x3e3d98: 0x64e70001  daddiu      $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3D9Cu;
        goto label_3e3d9c;
    }
    ctx->pc = 0x3E3D94u;
    SET_GPR_U32(ctx, 31, 0x3E3D9Cu);
    ctx->pc = 0x3E3D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3D94u;
    // 0x3e3d98: 0x64e70001  daddiu      $a3, $a3, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2CD0u, 0x3E3D94u, 0x3E3D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3D9Cu;
label_3e3d9c:
    // 0x3e3d9c: 0xde030108  ld          $v1, 0x108($s0)
    ctx->pc = 0x3e3d9cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3e3da0:
    // 0x3e3da0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_3e3da4:
    if (ctx->pc == 0x3E3DA4u) {
        ctx->pc = 0x3E3DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3DA0u;
        // 0x3e3da4: 0x92020207  lbu         $v0, 0x207($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 519)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3DA8u;
        goto label_3e3da8;
    }
    ctx->pc = 0x3E3DA0u;
    {
        const bool branch_taken_0x3e3da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3da0) {
            ctx->pc = 0x3E3DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3DA0u;
            // 0x3e3da4: 0x92020207  lbu         $v0, 0x207($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 519)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3DB4u;
            goto label_3e3db4;
        }
    }
    ctx->pc = 0x3E3DA8u;
label_3e3da8:
    // 0x3e3da8: 0xc0f9eba  jal         func_3E7AE8
label_3e3dac:
    if (ctx->pc == 0x3E3DACu) {
        ctx->pc = 0x3E3DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3DA8u;
        // 0x3e3dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3DB0u;
        goto label_3e3db0;
    }
    ctx->pc = 0x3E3DA8u;
    SET_GPR_U32(ctx, 31, 0x3E3DB0u);
    ctx->pc = 0x3E3DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3DA8u;
    // 0x3e3dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7AE8u, 0x3E3DA8u, 0x3E3DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3DB0u;
label_3e3db0:
    // 0x3e3db0: 0x92020207  lbu         $v0, 0x207($s0)
    ctx->pc = 0x3e3db0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 519)));
label_3e3db4:
    // 0x3e3db4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_3e3db8:
    if (ctx->pc == 0x3E3DB8u) {
        ctx->pc = 0x3E3DBCu;
        goto label_3e3dbc;
    }
    ctx->pc = 0x3E3DB4u;
    {
        const bool branch_taken_0x3e3db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3db4) {
            ctx->pc = 0x3E3E3Cu;
            goto label_3e3e3c;
        }
    }
    ctx->pc = 0x3E3DBCu;
label_3e3dbc:
    // 0x3e3dbc: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3e3dbcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3e3dc0:
    // 0x3e3dc0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3e3dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3e3dc4:
    // 0x3e3dc4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_3e3dc8:
    if (ctx->pc == 0x3E3DC8u) {
        ctx->pc = 0x3E3DCCu;
        goto label_3e3dcc;
    }
    ctx->pc = 0x3E3DC4u;
    {
        const bool branch_taken_0x3e3dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3dc4) {
            ctx->pc = 0x3E3E3Cu;
            goto label_3e3e3c;
        }
    }
    ctx->pc = 0x3E3DCCu;
label_3e3dcc:
    // 0x3e3dcc: 0x92020208  lbu         $v0, 0x208($s0)
    ctx->pc = 0x3e3dccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 520)));
label_3e3dd0:
    // 0x3e3dd0: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x3e3dd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3e3dd4:
    // 0x3e3dd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3e3dd8:
    if (ctx->pc == 0x3E3DD8u) {
        ctx->pc = 0x3E3DDCu;
        goto label_3e3ddc;
    }
    ctx->pc = 0x3E3DD4u;
    {
        const bool branch_taken_0x3e3dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3dd4) {
            ctx->pc = 0x3E3DE4u;
            goto label_3e3de4;
        }
    }
    ctx->pc = 0x3E3DDCu;
label_3e3ddc:
    // 0x3e3ddc: 0xc0fe07c  jal         func_3F81F0
label_3e3de0:
    if (ctx->pc == 0x3E3DE0u) {
        ctx->pc = 0x3E3DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3DDCu;
        // 0x3e3de0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3DE4u;
        goto label_3e3de4;
    }
    ctx->pc = 0x3E3DDCu;
    SET_GPR_U32(ctx, 31, 0x3E3DE4u);
    ctx->pc = 0x3E3DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3DDCu;
    // 0x3e3de0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F81F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F81F0u, 0x3E3DDCu, 0x3E3DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3DE4u;
label_3e3de4:
    // 0x3e3de4: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_3e3de8:
    if (ctx->pc == 0x3E3DE8u) {
        ctx->pc = 0x3E3DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3DE4u;
        // 0x3e3de8: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3DECu;
        goto label_3e3dec;
    }
    ctx->pc = 0x3E3DE4u;
    {
        const bool branch_taken_0x3e3de4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3DE4u;
        // 0x3e3de8: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3de4) {
            ctx->pc = 0x3E3E0Cu;
            goto label_3e3e0c;
        }
    }
    ctx->pc = 0x3E3DECu;
label_3e3dec:
    // 0x3e3dec: 0x92020208  lbu         $v0, 0x208($s0)
    ctx->pc = 0x3e3decu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 520)));
label_3e3df0:
    // 0x3e3df0: 0x2463e158  addiu       $v1, $v1, -0x1EA8
    ctx->pc = 0x3e3df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959448));
label_3e3df4:
    // 0x3e3df4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e3df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e3df8:
    // 0x3e3df8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e3df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e3dfc:
    // 0x3e3dfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3e00:
    // 0x3e3e00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e3e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e3e04:
    // 0x3e3e04: 0xc0fde96  jal         func_3F7A58
label_3e3e08:
    if (ctx->pc == 0x3E3E08u) {
        ctx->pc = 0x3E3E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3E04u;
        // 0x3e3e08: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3E0Cu;
        goto label_3e3e0c;
    }
    ctx->pc = 0x3E3E04u;
    SET_GPR_U32(ctx, 31, 0x3E3E0Cu);
    ctx->pc = 0x3E3E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3E04u;
    // 0x3e3e08: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F7A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F7A58u, 0x3E3E04u, 0x3E3E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3E0Cu;
label_3e3e0c:
    // 0x3e3e0c: 0x12800015  beqz        $s4, . + 4 + (0x15 << 2)
label_3e3e10:
    if (ctx->pc == 0x3E3E10u) {
        ctx->pc = 0x3E3E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3E0Cu;
        // 0x3e3e10: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3E14u;
        goto label_3e3e14;
    }
    ctx->pc = 0x3E3E0Cu;
    {
        const bool branch_taken_0x3e3e0c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3E0Cu;
        // 0x3e3e10: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3e0c) {
            ctx->pc = 0x3E3E64u;
            goto label_3e3e64;
        }
    }
    ctx->pc = 0x3E3E14u;
label_3e3e14:
    // 0x3e3e14: 0x92020208  lbu         $v0, 0x208($s0)
    ctx->pc = 0x3e3e14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 520)));
label_3e3e18:
    // 0x3e3e18: 0x2463e138  addiu       $v1, $v1, -0x1EC8
    ctx->pc = 0x3e3e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959416));
label_3e3e1c:
    // 0x3e3e1c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3e3e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e3e20:
    // 0x3e3e20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e3e24:
    // 0x3e3e24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3e28:
    // 0x3e3e28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e3e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e3e2c:
    // 0x3e3e2c: 0xc0fde96  jal         func_3F7A58
label_3e3e30:
    if (ctx->pc == 0x3E3E30u) {
        ctx->pc = 0x3E3E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3E2Cu;
        // 0x3e3e30: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3E34u;
        goto label_3e3e34;
    }
    ctx->pc = 0x3E3E2Cu;
    SET_GPR_U32(ctx, 31, 0x3E3E34u);
    ctx->pc = 0x3E3E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3E2Cu;
    // 0x3e3e30: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F7A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F7A58u, 0x3E3E2Cu, 0x3E3E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3E34u;
label_3e3e34:
    // 0x3e3e34: 0x1000000b  b           . + 4 + (0xB << 2)
label_3e3e38:
    if (ctx->pc == 0x3E3E38u) {
        ctx->pc = 0x3E3E3Cu;
        goto label_3e3e3c;
    }
    ctx->pc = 0x3E3E34u;
    {
        const bool branch_taken_0x3e3e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3e34) {
            ctx->pc = 0x3E3E64u;
            goto label_3e3e64;
        }
    }
    ctx->pc = 0x3E3E3Cu;
label_3e3e3c:
    // 0x3e3e3c: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_3e3e40:
    if (ctx->pc == 0x3E3E40u) {
        ctx->pc = 0x3E3E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3E3Cu;
        // 0x3e3e40: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3E44u;
        goto label_3e3e44;
    }
    ctx->pc = 0x3E3E3Cu;
    {
        const bool branch_taken_0x3e3e3c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3E3Cu;
        // 0x3e3e40: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3e3c) {
            ctx->pc = 0x3E3E50u;
            goto label_3e3e50;
        }
    }
    ctx->pc = 0x3E3E44u;
label_3e3e44:
    // 0x3e3e44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3e48:
    // 0x3e3e48: 0xc0fde96  jal         func_3F7A58
label_3e3e4c:
    if (ctx->pc == 0x3E3E4Cu) {
        ctx->pc = 0x3E3E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3E48u;
        // 0x3e3e4c: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3E50u;
        goto label_3e3e50;
    }
    ctx->pc = 0x3E3E48u;
    SET_GPR_U32(ctx, 31, 0x3E3E50u);
    ctx->pc = 0x3E3E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3E48u;
    // 0x3e3e4c: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F7A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F7A58u, 0x3E3E48u, 0x3E3E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3E50u;
label_3e3e50:
    // 0x3e3e50: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_3e3e54:
    if (ctx->pc == 0x3E3E54u) {
        ctx->pc = 0x3E3E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3E50u;
        // 0x3e3e54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3E58u;
        goto label_3e3e58;
    }
    ctx->pc = 0x3E3E50u;
    {
        const bool branch_taken_0x3e3e50 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3E50u;
        // 0x3e3e54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3e50) {
            ctx->pc = 0x3E3E64u;
            goto label_3e3e64;
        }
    }
    ctx->pc = 0x3E3E58u;
label_3e3e58:
    // 0x3e3e58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e3e5c:
    // 0x3e3e5c: 0xc0fde96  jal         func_3F7A58
label_3e3e60:
    if (ctx->pc == 0x3E3E60u) {
        ctx->pc = 0x3E3E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3E5Cu;
        // 0x3e3e60: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3E64u;
        goto label_3e3e64;
    }
    ctx->pc = 0x3E3E5Cu;
    SET_GPR_U32(ctx, 31, 0x3E3E64u);
    ctx->pc = 0x3E3E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3E5Cu;
    // 0x3e3e60: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F7A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F7A58u, 0x3E3E5Cu, 0x3E3E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3E64u;
label_3e3e64:
    // 0x3e3e64: 0xc0fe534  jal         func_3F94D0
label_3e3e68:
    if (ctx->pc == 0x3E3E68u) {
        ctx->pc = 0x3E3E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3E64u;
        // 0x3e3e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3E6Cu;
        goto label_3e3e6c;
    }
    ctx->pc = 0x3E3E64u;
    SET_GPR_U32(ctx, 31, 0x3E3E6Cu);
    ctx->pc = 0x3E3E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3E64u;
    // 0x3e3e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F94D0u, 0x3E3E64u, 0x3E3E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3E6Cu;
label_3e3e6c:
    // 0x3e3e6c: 0x8e020288  lw          $v0, 0x288($s0)
    ctx->pc = 0x3e3e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 648)));
label_3e3e70:
    // 0x3e3e70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3e3e74:
    if (ctx->pc == 0x3E3E74u) {
        ctx->pc = 0x3E3E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3E70u;
        // 0x3e3e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3E78u;
        goto label_3e3e78;
    }
    ctx->pc = 0x3E3E70u;
    {
        const bool branch_taken_0x3e3e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3E70u;
        // 0x3e3e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3e70) {
            ctx->pc = 0x3E3E84u;
            goto label_3e3e84;
        }
    }
    ctx->pc = 0x3E3E78u;
label_3e3e78:
    // 0x3e3e78: 0xdc8501b0  ld          $a1, 0x1B0($a0)
    ctx->pc = 0x3e3e78u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 432)));
label_3e3e7c:
    // 0x3e3e7c: 0x40f809  jalr        $v0
label_3e3e80:
    if (ctx->pc == 0x3E3E80u) {
        ctx->pc = 0x3E3E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3E7Cu;
        // 0x3e3e80: 0x90860208  lbu         $a2, 0x208($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3E84u;
        goto label_3e3e84;
    }
    ctx->pc = 0x3E3E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E3E84u);
        ctx->pc = 0x3E3E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3E7Cu;
        // 0x3e3e80: 0x90860208  lbu         $a2, 0x208($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 520)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3E7Cu, 0x3E3E84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E3E84u;
label_3e3e84:
    // 0x3e3e84: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3e3e84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3e3e88:
    // 0x3e3e88: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3e3e88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3e3e8c:
    // 0x3e3e8c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3e3e8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3e3e90:
    // 0x3e3e90: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3e3e90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e3e94:
    // 0x3e3e94: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3e3e94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e3e98:
    // 0x3e3e98: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3e3e98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e3e9c:
    // 0x3e3e9c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3e3e9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e3ea0:
    // 0x3e3ea0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3e3ea0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e3ea4:
    // 0x3e3ea4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3e3ea4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e3ea8:
    // 0x3e3ea8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e3ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3e3eac:
    // 0x3e3eac: 0x3e00008  jr          $ra
label_3e3eb0:
    if (ctx->pc == 0x3E3EB0u) {
        ctx->pc = 0x3E3EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3EACu;
        // 0x3e3eb0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3EB4u;
        goto label_3e3eb4;
    }
    ctx->pc = 0x3E3EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3EACu;
        // 0x3e3eb0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E3EB4u;
label_3e3eb4:
    // 0x3e3eb4: 0x0  nop
    ctx->pc = 0x3e3eb4u;
    // NOP
    ctx->pc = 0x3e3eb8u;
}
