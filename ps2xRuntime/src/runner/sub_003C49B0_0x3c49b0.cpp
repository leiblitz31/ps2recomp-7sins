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

// Function: sub_003C49B0
// Address: 0x3c49b0 - 0x3c4e50
void sub_003C49B0_0x3c49b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C49B0_0x3c49b0");
#endif

    switch (ctx->pc) {
        case 0x3c49b0u: goto label_3c49b0;
        case 0x3c49b4u: goto label_3c49b4;
        case 0x3c49b8u: goto label_3c49b8;
        case 0x3c49bcu: goto label_3c49bc;
        case 0x3c49c0u: goto label_3c49c0;
        case 0x3c49c4u: goto label_3c49c4;
        case 0x3c49c8u: goto label_3c49c8;
        case 0x3c49ccu: goto label_3c49cc;
        case 0x3c49d0u: goto label_3c49d0;
        case 0x3c49d4u: goto label_3c49d4;
        case 0x3c49d8u: goto label_3c49d8;
        case 0x3c49dcu: goto label_3c49dc;
        case 0x3c49e0u: goto label_3c49e0;
        case 0x3c49e4u: goto label_3c49e4;
        case 0x3c49e8u: goto label_3c49e8;
        case 0x3c49ecu: goto label_3c49ec;
        case 0x3c49f0u: goto label_3c49f0;
        case 0x3c49f4u: goto label_3c49f4;
        case 0x3c49f8u: goto label_3c49f8;
        case 0x3c49fcu: goto label_3c49fc;
        case 0x3c4a00u: goto label_3c4a00;
        case 0x3c4a04u: goto label_3c4a04;
        case 0x3c4a08u: goto label_3c4a08;
        case 0x3c4a0cu: goto label_3c4a0c;
        case 0x3c4a10u: goto label_3c4a10;
        case 0x3c4a14u: goto label_3c4a14;
        case 0x3c4a18u: goto label_3c4a18;
        case 0x3c4a1cu: goto label_3c4a1c;
        case 0x3c4a20u: goto label_3c4a20;
        case 0x3c4a24u: goto label_3c4a24;
        case 0x3c4a28u: goto label_3c4a28;
        case 0x3c4a2cu: goto label_3c4a2c;
        case 0x3c4a30u: goto label_3c4a30;
        case 0x3c4a34u: goto label_3c4a34;
        case 0x3c4a38u: goto label_3c4a38;
        case 0x3c4a3cu: goto label_3c4a3c;
        case 0x3c4a40u: goto label_3c4a40;
        case 0x3c4a44u: goto label_3c4a44;
        case 0x3c4a48u: goto label_3c4a48;
        case 0x3c4a4cu: goto label_3c4a4c;
        case 0x3c4a50u: goto label_3c4a50;
        case 0x3c4a54u: goto label_3c4a54;
        case 0x3c4a58u: goto label_3c4a58;
        case 0x3c4a5cu: goto label_3c4a5c;
        case 0x3c4a60u: goto label_3c4a60;
        case 0x3c4a64u: goto label_3c4a64;
        case 0x3c4a68u: goto label_3c4a68;
        case 0x3c4a6cu: goto label_3c4a6c;
        case 0x3c4a70u: goto label_3c4a70;
        case 0x3c4a74u: goto label_3c4a74;
        case 0x3c4a78u: goto label_3c4a78;
        case 0x3c4a7cu: goto label_3c4a7c;
        case 0x3c4a80u: goto label_3c4a80;
        case 0x3c4a84u: goto label_3c4a84;
        case 0x3c4a88u: goto label_3c4a88;
        case 0x3c4a8cu: goto label_3c4a8c;
        case 0x3c4a90u: goto label_3c4a90;
        case 0x3c4a94u: goto label_3c4a94;
        case 0x3c4a98u: goto label_3c4a98;
        case 0x3c4a9cu: goto label_3c4a9c;
        case 0x3c4aa0u: goto label_3c4aa0;
        case 0x3c4aa4u: goto label_3c4aa4;
        case 0x3c4aa8u: goto label_3c4aa8;
        case 0x3c4aacu: goto label_3c4aac;
        case 0x3c4ab0u: goto label_3c4ab0;
        case 0x3c4ab4u: goto label_3c4ab4;
        case 0x3c4ab8u: goto label_3c4ab8;
        case 0x3c4abcu: goto label_3c4abc;
        case 0x3c4ac0u: goto label_3c4ac0;
        case 0x3c4ac4u: goto label_3c4ac4;
        case 0x3c4ac8u: goto label_3c4ac8;
        case 0x3c4accu: goto label_3c4acc;
        case 0x3c4ad0u: goto label_3c4ad0;
        case 0x3c4ad4u: goto label_3c4ad4;
        case 0x3c4ad8u: goto label_3c4ad8;
        case 0x3c4adcu: goto label_3c4adc;
        case 0x3c4ae0u: goto label_3c4ae0;
        case 0x3c4ae4u: goto label_3c4ae4;
        case 0x3c4ae8u: goto label_3c4ae8;
        case 0x3c4aecu: goto label_3c4aec;
        case 0x3c4af0u: goto label_3c4af0;
        case 0x3c4af4u: goto label_3c4af4;
        case 0x3c4af8u: goto label_3c4af8;
        case 0x3c4afcu: goto label_3c4afc;
        case 0x3c4b00u: goto label_3c4b00;
        case 0x3c4b04u: goto label_3c4b04;
        case 0x3c4b08u: goto label_3c4b08;
        case 0x3c4b0cu: goto label_3c4b0c;
        case 0x3c4b10u: goto label_3c4b10;
        case 0x3c4b14u: goto label_3c4b14;
        case 0x3c4b18u: goto label_3c4b18;
        case 0x3c4b1cu: goto label_3c4b1c;
        case 0x3c4b20u: goto label_3c4b20;
        case 0x3c4b24u: goto label_3c4b24;
        case 0x3c4b28u: goto label_3c4b28;
        case 0x3c4b2cu: goto label_3c4b2c;
        case 0x3c4b30u: goto label_3c4b30;
        case 0x3c4b34u: goto label_3c4b34;
        case 0x3c4b38u: goto label_3c4b38;
        case 0x3c4b3cu: goto label_3c4b3c;
        case 0x3c4b40u: goto label_3c4b40;
        case 0x3c4b44u: goto label_3c4b44;
        case 0x3c4b48u: goto label_3c4b48;
        case 0x3c4b4cu: goto label_3c4b4c;
        case 0x3c4b50u: goto label_3c4b50;
        case 0x3c4b54u: goto label_3c4b54;
        case 0x3c4b58u: goto label_3c4b58;
        case 0x3c4b5cu: goto label_3c4b5c;
        case 0x3c4b60u: goto label_3c4b60;
        case 0x3c4b64u: goto label_3c4b64;
        case 0x3c4b68u: goto label_3c4b68;
        case 0x3c4b6cu: goto label_3c4b6c;
        case 0x3c4b70u: goto label_3c4b70;
        case 0x3c4b74u: goto label_3c4b74;
        case 0x3c4b78u: goto label_3c4b78;
        case 0x3c4b7cu: goto label_3c4b7c;
        case 0x3c4b80u: goto label_3c4b80;
        case 0x3c4b84u: goto label_3c4b84;
        case 0x3c4b88u: goto label_3c4b88;
        case 0x3c4b8cu: goto label_3c4b8c;
        case 0x3c4b90u: goto label_3c4b90;
        case 0x3c4b94u: goto label_3c4b94;
        case 0x3c4b98u: goto label_3c4b98;
        case 0x3c4b9cu: goto label_3c4b9c;
        case 0x3c4ba0u: goto label_3c4ba0;
        case 0x3c4ba4u: goto label_3c4ba4;
        case 0x3c4ba8u: goto label_3c4ba8;
        case 0x3c4bacu: goto label_3c4bac;
        case 0x3c4bb0u: goto label_3c4bb0;
        case 0x3c4bb4u: goto label_3c4bb4;
        case 0x3c4bb8u: goto label_3c4bb8;
        case 0x3c4bbcu: goto label_3c4bbc;
        case 0x3c4bc0u: goto label_3c4bc0;
        case 0x3c4bc4u: goto label_3c4bc4;
        case 0x3c4bc8u: goto label_3c4bc8;
        case 0x3c4bccu: goto label_3c4bcc;
        case 0x3c4bd0u: goto label_3c4bd0;
        case 0x3c4bd4u: goto label_3c4bd4;
        case 0x3c4bd8u: goto label_3c4bd8;
        case 0x3c4bdcu: goto label_3c4bdc;
        case 0x3c4be0u: goto label_3c4be0;
        case 0x3c4be4u: goto label_3c4be4;
        case 0x3c4be8u: goto label_3c4be8;
        case 0x3c4becu: goto label_3c4bec;
        case 0x3c4bf0u: goto label_3c4bf0;
        case 0x3c4bf4u: goto label_3c4bf4;
        case 0x3c4bf8u: goto label_3c4bf8;
        case 0x3c4bfcu: goto label_3c4bfc;
        case 0x3c4c00u: goto label_3c4c00;
        case 0x3c4c04u: goto label_3c4c04;
        case 0x3c4c08u: goto label_3c4c08;
        case 0x3c4c0cu: goto label_3c4c0c;
        case 0x3c4c10u: goto label_3c4c10;
        case 0x3c4c14u: goto label_3c4c14;
        case 0x3c4c18u: goto label_3c4c18;
        case 0x3c4c1cu: goto label_3c4c1c;
        case 0x3c4c20u: goto label_3c4c20;
        case 0x3c4c24u: goto label_3c4c24;
        case 0x3c4c28u: goto label_3c4c28;
        case 0x3c4c2cu: goto label_3c4c2c;
        case 0x3c4c30u: goto label_3c4c30;
        case 0x3c4c34u: goto label_3c4c34;
        case 0x3c4c38u: goto label_3c4c38;
        case 0x3c4c3cu: goto label_3c4c3c;
        case 0x3c4c40u: goto label_3c4c40;
        case 0x3c4c44u: goto label_3c4c44;
        case 0x3c4c48u: goto label_3c4c48;
        case 0x3c4c4cu: goto label_3c4c4c;
        case 0x3c4c50u: goto label_3c4c50;
        case 0x3c4c54u: goto label_3c4c54;
        case 0x3c4c58u: goto label_3c4c58;
        case 0x3c4c5cu: goto label_3c4c5c;
        case 0x3c4c60u: goto label_3c4c60;
        case 0x3c4c64u: goto label_3c4c64;
        case 0x3c4c68u: goto label_3c4c68;
        case 0x3c4c6cu: goto label_3c4c6c;
        case 0x3c4c70u: goto label_3c4c70;
        case 0x3c4c74u: goto label_3c4c74;
        case 0x3c4c78u: goto label_3c4c78;
        case 0x3c4c7cu: goto label_3c4c7c;
        case 0x3c4c80u: goto label_3c4c80;
        case 0x3c4c84u: goto label_3c4c84;
        case 0x3c4c88u: goto label_3c4c88;
        case 0x3c4c8cu: goto label_3c4c8c;
        case 0x3c4c90u: goto label_3c4c90;
        case 0x3c4c94u: goto label_3c4c94;
        case 0x3c4c98u: goto label_3c4c98;
        case 0x3c4c9cu: goto label_3c4c9c;
        case 0x3c4ca0u: goto label_3c4ca0;
        case 0x3c4ca4u: goto label_3c4ca4;
        case 0x3c4ca8u: goto label_3c4ca8;
        case 0x3c4cacu: goto label_3c4cac;
        case 0x3c4cb0u: goto label_3c4cb0;
        case 0x3c4cb4u: goto label_3c4cb4;
        case 0x3c4cb8u: goto label_3c4cb8;
        case 0x3c4cbcu: goto label_3c4cbc;
        case 0x3c4cc0u: goto label_3c4cc0;
        case 0x3c4cc4u: goto label_3c4cc4;
        case 0x3c4cc8u: goto label_3c4cc8;
        case 0x3c4cccu: goto label_3c4ccc;
        case 0x3c4cd0u: goto label_3c4cd0;
        case 0x3c4cd4u: goto label_3c4cd4;
        case 0x3c4cd8u: goto label_3c4cd8;
        case 0x3c4cdcu: goto label_3c4cdc;
        case 0x3c4ce0u: goto label_3c4ce0;
        case 0x3c4ce4u: goto label_3c4ce4;
        case 0x3c4ce8u: goto label_3c4ce8;
        case 0x3c4cecu: goto label_3c4cec;
        case 0x3c4cf0u: goto label_3c4cf0;
        case 0x3c4cf4u: goto label_3c4cf4;
        case 0x3c4cf8u: goto label_3c4cf8;
        case 0x3c4cfcu: goto label_3c4cfc;
        case 0x3c4d00u: goto label_3c4d00;
        case 0x3c4d04u: goto label_3c4d04;
        case 0x3c4d08u: goto label_3c4d08;
        case 0x3c4d0cu: goto label_3c4d0c;
        case 0x3c4d10u: goto label_3c4d10;
        case 0x3c4d14u: goto label_3c4d14;
        case 0x3c4d18u: goto label_3c4d18;
        case 0x3c4d1cu: goto label_3c4d1c;
        case 0x3c4d20u: goto label_3c4d20;
        case 0x3c4d24u: goto label_3c4d24;
        case 0x3c4d28u: goto label_3c4d28;
        case 0x3c4d2cu: goto label_3c4d2c;
        case 0x3c4d30u: goto label_3c4d30;
        case 0x3c4d34u: goto label_3c4d34;
        case 0x3c4d38u: goto label_3c4d38;
        case 0x3c4d3cu: goto label_3c4d3c;
        case 0x3c4d40u: goto label_3c4d40;
        case 0x3c4d44u: goto label_3c4d44;
        case 0x3c4d48u: goto label_3c4d48;
        case 0x3c4d4cu: goto label_3c4d4c;
        case 0x3c4d50u: goto label_3c4d50;
        case 0x3c4d54u: goto label_3c4d54;
        case 0x3c4d58u: goto label_3c4d58;
        case 0x3c4d5cu: goto label_3c4d5c;
        case 0x3c4d60u: goto label_3c4d60;
        case 0x3c4d64u: goto label_3c4d64;
        case 0x3c4d68u: goto label_3c4d68;
        case 0x3c4d6cu: goto label_3c4d6c;
        case 0x3c4d70u: goto label_3c4d70;
        case 0x3c4d74u: goto label_3c4d74;
        case 0x3c4d78u: goto label_3c4d78;
        case 0x3c4d7cu: goto label_3c4d7c;
        case 0x3c4d80u: goto label_3c4d80;
        case 0x3c4d84u: goto label_3c4d84;
        case 0x3c4d88u: goto label_3c4d88;
        case 0x3c4d8cu: goto label_3c4d8c;
        case 0x3c4d90u: goto label_3c4d90;
        case 0x3c4d94u: goto label_3c4d94;
        case 0x3c4d98u: goto label_3c4d98;
        case 0x3c4d9cu: goto label_3c4d9c;
        case 0x3c4da0u: goto label_3c4da0;
        case 0x3c4da4u: goto label_3c4da4;
        case 0x3c4da8u: goto label_3c4da8;
        case 0x3c4dacu: goto label_3c4dac;
        case 0x3c4db0u: goto label_3c4db0;
        case 0x3c4db4u: goto label_3c4db4;
        case 0x3c4db8u: goto label_3c4db8;
        case 0x3c4dbcu: goto label_3c4dbc;
        case 0x3c4dc0u: goto label_3c4dc0;
        case 0x3c4dc4u: goto label_3c4dc4;
        case 0x3c4dc8u: goto label_3c4dc8;
        case 0x3c4dccu: goto label_3c4dcc;
        case 0x3c4dd0u: goto label_3c4dd0;
        case 0x3c4dd4u: goto label_3c4dd4;
        case 0x3c4dd8u: goto label_3c4dd8;
        case 0x3c4ddcu: goto label_3c4ddc;
        case 0x3c4de0u: goto label_3c4de0;
        case 0x3c4de4u: goto label_3c4de4;
        case 0x3c4de8u: goto label_3c4de8;
        case 0x3c4decu: goto label_3c4dec;
        case 0x3c4df0u: goto label_3c4df0;
        case 0x3c4df4u: goto label_3c4df4;
        case 0x3c4df8u: goto label_3c4df8;
        case 0x3c4dfcu: goto label_3c4dfc;
        case 0x3c4e00u: goto label_3c4e00;
        case 0x3c4e04u: goto label_3c4e04;
        case 0x3c4e08u: goto label_3c4e08;
        case 0x3c4e0cu: goto label_3c4e0c;
        case 0x3c4e10u: goto label_3c4e10;
        case 0x3c4e14u: goto label_3c4e14;
        case 0x3c4e18u: goto label_3c4e18;
        case 0x3c4e1cu: goto label_3c4e1c;
        case 0x3c4e20u: goto label_3c4e20;
        case 0x3c4e24u: goto label_3c4e24;
        case 0x3c4e28u: goto label_3c4e28;
        case 0x3c4e2cu: goto label_3c4e2c;
        case 0x3c4e30u: goto label_3c4e30;
        case 0x3c4e34u: goto label_3c4e34;
        case 0x3c4e38u: goto label_3c4e38;
        case 0x3c4e3cu: goto label_3c4e3c;
        case 0x3c4e40u: goto label_3c4e40;
        case 0x3c4e44u: goto label_3c4e44;
        case 0x3c4e48u: goto label_3c4e48;
        case 0x3c4e4cu: goto label_3c4e4c;
        default: break;
    }

    ctx->pc = 0x3c49b0u;

label_3c49b0:
    // 0x3c49b0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3c49b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3c49b4:
    // 0x3c49b4: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x3c49b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_3c49b8:
    // 0x3c49b8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3c49b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3c49bc:
    // 0x3c49bc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3c49bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c49c0:
    // 0x3c49c0: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x3c49c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_3c49c4:
    // 0x3c49c4: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x3c49c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3c49c8:
    // 0x3c49c8: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x3c49c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_3c49cc:
    // 0x3c49cc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3c49ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3c49d0:
    // 0x3c49d0: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x3c49d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_3c49d4:
    // 0x3c49d4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3c49d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c49d8:
    // 0x3c49d8: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x3c49d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_3c49dc:
    // 0x3c49dc: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x3c49dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3c49e0:
    // 0x3c49e0: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x3c49e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_3c49e4:
    // 0x3c49e4: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x3c49e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3c49e8:
    // 0x3c49e8: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x3c49e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_3c49ec:
    // 0x3c49ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3c49ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3c49f0:
    // 0x3c49f0: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x3c49f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_3c49f4:
    // 0x3c49f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3c49f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3c49f8:
    // 0x3c49f8: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x3c49f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_3c49fc:
    // 0x3c49fc: 0xc0f0c30  jal         func_3C30C0
label_3c4a00:
    if (ctx->pc == 0x3C4A00u) {
        ctx->pc = 0x3C4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C49FCu;
        // 0x3c4a00: 0xafab0034  sw          $t3, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4A04u;
        goto label_3c4a04;
    }
    ctx->pc = 0x3C49FCu;
    SET_GPR_U32(ctx, 31, 0x3C4A04u);
    ctx->pc = 0x3C4A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C49FCu;
    // 0x3c4a00: 0xafab0034  sw          $t3, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C30C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C30C0u, 0x3C49FCu, 0x3C4A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4A04u;
label_3c4a04:
    // 0x3c4a04: 0x14400105  bnez        $v0, . + 4 + (0x105 << 2)
label_3c4a08:
    if (ctx->pc == 0x3C4A08u) {
        ctx->pc = 0x3C4A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4A04u;
        // 0x3c4a08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4A0Cu;
        goto label_3c4a0c;
    }
    ctx->pc = 0x3C4A04u;
    {
        const bool branch_taken_0x3c4a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4A04u;
        // 0x3c4a08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4a04) {
            ctx->pc = 0x3C4E1Cu;
            goto label_3c4e1c;
        }
    }
    ctx->pc = 0x3C4A0Cu;
label_3c4a0c:
    // 0x3c4a0c: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x3c4a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_3c4a10:
    // 0x3c4a10: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x3c4a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_3c4a14:
    // 0x3c4a14: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x3c4a14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_3c4a18:
    // 0x3c4a18: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x3c4a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_3c4a1c:
    // 0x3c4a1c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x3c4a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_3c4a20:
    // 0x3c4a20: 0x40f809  jalr        $v0
label_3c4a24:
    if (ctx->pc == 0x3C4A24u) {
        ctx->pc = 0x3C4A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4A20u;
        // 0x3c4a24: 0x34a501be  ori         $a1, $a1, 0x1BE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)446);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4A28u;
        goto label_3c4a28;
    }
    ctx->pc = 0x3C4A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C4A28u);
        ctx->pc = 0x3C4A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4A20u;
        // 0x3c4a24: 0x34a501be  ori         $a1, $a1, 0x1BE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)446);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4A20u, 0x3C4A28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C4A28u;
label_3c4a28:
    // 0x3c4a28: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x3c4a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_3c4a2c:
    // 0x3c4a2c: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x3c4a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
label_3c4a30:
    // 0x3c4a30: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c4a30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c4a34:
    // 0x3c4a34: 0x24845060  addiu       $a0, $a0, 0x5060
    ctx->pc = 0x3c4a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20576));
label_3c4a38:
    // 0x3c4a38: 0x24a55050  addiu       $a1, $a1, 0x5050
    ctx->pc = 0x3c4a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20560));
label_3c4a3c:
    // 0x3c4a3c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x3c4a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_3c4a40:
    // 0x3c4a40: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x3c4a40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
label_3c4a44:
    // 0x3c4a44: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x3c4a44u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
label_3c4a48:
    // 0x3c4a48: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x3c4a48u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
label_3c4a4c:
    // 0x3c4a4c: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x3c4a4cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
label_3c4a50:
    // 0x3c4a50: 0x3c0b003c  lui         $t3, 0x3C
    ctx->pc = 0x3c4a50u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)60 << 16));
label_3c4a54:
    // 0x3c4a54: 0x3c0c003c  lui         $t4, 0x3C
    ctx->pc = 0x3c4a54u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)60 << 16));
label_3c4a58:
    // 0x3c4a58: 0x3c0d003c  lui         $t5, 0x3C
    ctx->pc = 0x3c4a58u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)60 << 16));
label_3c4a5c:
    // 0x3c4a5c: 0x3c0e003c  lui         $t6, 0x3C
    ctx->pc = 0x3c4a5cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)60 << 16));
label_3c4a60:
    // 0x3c4a60: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x3c4a60u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
label_3c4a64:
    // 0x3c4a64: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x3c4a64u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
label_3c4a68:
    // 0x3c4a68: 0x24634e50  addiu       $v1, $v1, 0x4E50
    ctx->pc = 0x3c4a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20048));
label_3c4a6c:
    // 0x3c4a6c: 0x24e73fb0  addiu       $a3, $a3, 0x3FB0
    ctx->pc = 0x3c4a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16304));
label_3c4a70:
    // 0x3c4a70: 0x25084e78  addiu       $t0, $t0, 0x4E78
    ctx->pc = 0x3c4a70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20088));
label_3c4a74:
    // 0x3c4a74: 0x252941b0  addiu       $t1, $t1, 0x41B0
    ctx->pc = 0x3c4a74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16816));
label_3c4a78:
    // 0x3c4a78: 0x254a4ef0  addiu       $t2, $t2, 0x4EF0
    ctx->pc = 0x3c4a78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 20208));
label_3c4a7c:
    // 0x3c4a7c: 0x256b4638  addiu       $t3, $t3, 0x4638
    ctx->pc = 0x3c4a7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 17976));
label_3c4a80:
    // 0x3c4a80: 0x258c4f00  addiu       $t4, $t4, 0x4F00
    ctx->pc = 0x3c4a80u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 20224));
label_3c4a84:
    // 0x3c4a84: 0x25ad4f80  addiu       $t5, $t5, 0x4F80
    ctx->pc = 0x3c4a84u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 20352));
label_3c4a88:
    // 0x3c4a88: 0x25ce22d8  addiu       $t6, $t6, 0x22D8
    ctx->pc = 0x3c4a88u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8920));
label_3c4a8c:
    // 0x3c4a8c: 0x25ef5048  addiu       $t7, $t7, 0x5048
    ctx->pc = 0x3c4a8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 20552));
label_3c4a90:
    // 0x3c4a90: 0x26315028  addiu       $s1, $s1, 0x5028
    ctx->pc = 0x3c4a90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20520));
label_3c4a94:
    // 0x3c4a94: 0xae640018  sw          $a0, 0x18($s3)
    ctx->pc = 0x3c4a94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 4));
label_3c4a98:
    // 0x3c4a98: 0xae65001c  sw          $a1, 0x1C($s3)
    ctx->pc = 0x3c4a98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 5));
label_3c4a9c:
    // 0x3c4a9c: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x3c4a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
label_3c4aa0:
    // 0x3c4aa0: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x3c4aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_3c4aa4:
    // 0x3c4aa4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c4aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c4aa8:
    // 0x3c4aa8: 0xae630014  sw          $v1, 0x14($s3)
    ctx->pc = 0x3c4aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 3));
label_3c4aac:
    // 0x3c4aac: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x3c4aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3c4ab0:
    // 0x3c4ab0: 0xae670028  sw          $a3, 0x28($s3)
    ctx->pc = 0x3c4ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 7));
label_3c4ab4:
    // 0x3c4ab4: 0x34c601be  ori         $a2, $a2, 0x1BE
    ctx->pc = 0x3c4ab4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)446);
label_3c4ab8:
    // 0x3c4ab8: 0xae68002c  sw          $t0, 0x2C($s3)
    ctx->pc = 0x3c4ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 8));
label_3c4abc:
    // 0x3c4abc: 0xae690030  sw          $t1, 0x30($s3)
    ctx->pc = 0x3c4abcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 9));
label_3c4ac0:
    // 0x3c4ac0: 0xae6a0034  sw          $t2, 0x34($s3)
    ctx->pc = 0x3c4ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 10));
label_3c4ac4:
    // 0x3c4ac4: 0xae6b0038  sw          $t3, 0x38($s3)
    ctx->pc = 0x3c4ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 11));
label_3c4ac8:
    // 0x3c4ac8: 0xae6c003c  sw          $t4, 0x3C($s3)
    ctx->pc = 0x3c4ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 12));
label_3c4acc:
    // 0x3c4acc: 0xae6d0040  sw          $t5, 0x40($s3)
    ctx->pc = 0x3c4accu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 13));
label_3c4ad0:
    // 0x3c4ad0: 0xae6e0044  sw          $t6, 0x44($s3)
    ctx->pc = 0x3c4ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 14));
label_3c4ad4:
    // 0x3c4ad4: 0xae6f0048  sw          $t7, 0x48($s3)
    ctx->pc = 0x3c4ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 15));
label_3c4ad8:
    // 0x3c4ad8: 0x40f809  jalr        $v0
label_3c4adc:
    if (ctx->pc == 0x3C4ADCu) {
        ctx->pc = 0x3C4ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4AD8u;
        // 0x3c4adc: 0xae71004c  sw          $s1, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4AE0u;
        goto label_3c4ae0;
    }
    ctx->pc = 0x3C4AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C4AE0u);
        ctx->pc = 0x3C4ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4AD8u;
        // 0x3c4adc: 0xae71004c  sw          $s1, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4AD8u, 0x3C4AE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C4AE0u;
label_3c4ae0:
    // 0x3c4ae0: 0x1a800041  blez        $s4, . + 4 + (0x41 << 2)
label_3c4ae4:
    if (ctx->pc == 0x3C4AE4u) {
        ctx->pc = 0x3C4AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4AE0u;
        // 0x3c4ae4: 0xae620058  sw          $v0, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4AE8u;
        goto label_3c4ae8;
    }
    ctx->pc = 0x3C4AE0u;
    {
        const bool branch_taken_0x3c4ae0 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x3C4AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4AE0u;
        // 0x3c4ae4: 0xae620058  sw          $v0, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4ae0) {
            ctx->pc = 0x3C4BE8u;
            goto label_3c4be8;
        }
    }
    ctx->pc = 0x3C4AE8u;
label_3c4ae8:
    // 0x3c4ae8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c4ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c4aec:
    // 0x3c4aec: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3c4aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c4af0:
    // 0x3c4af0: 0x141023  negu        $v0, $s4
    ctx->pc = 0x3c4af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
label_3c4af4:
    // 0x3c4af4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3c4af4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c4af8:
    // 0x3c4af8: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x3c4af8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3c4afc:
    // 0x3c4afc: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
label_3c4b00:
    if (ctx->pc == 0x3C4B00u) {
        ctx->pc = 0x3C4B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4AFCu;
        // 0x3c4b00: 0x24a30068  addiu       $v1, $a1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4B04u;
        goto label_3c4b04;
    }
    ctx->pc = 0x3C4AFCu;
    {
        const bool branch_taken_0x3c4afc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4AFCu;
        // 0x3c4b00: 0x24a30068  addiu       $v1, $a1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4afc) {
            ctx->pc = 0x3C4B70u;
            goto label_3c4b70;
        }
    }
    ctx->pc = 0x3C4B04u;
label_3c4b04:
    // 0x3c4b04: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x3c4b04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_3c4b08:
    // 0x3c4b08: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3c4b0c:
    if (ctx->pc == 0x3C4B0Cu) {
        ctx->pc = 0x3C4B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4B08u;
        // 0x3c4b0c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4B10u;
        goto label_3c4b10;
    }
    ctx->pc = 0x3C4B08u;
    {
        const bool branch_taken_0x3c4b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4B08u;
        // 0x3c4b0c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4b08) {
            ctx->pc = 0x3C4B50u;
            goto label_3c4b50;
        }
    }
    ctx->pc = 0x3C4B10u;
label_3c4b10:
    // 0x3c4b10: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_3c4b14:
    if (ctx->pc == 0x3C4B14u) {
        ctx->pc = 0x3C4B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4B10u;
        // 0x3c4b14: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4B18u;
        goto label_3c4b18;
    }
    ctx->pc = 0x3C4B10u;
    {
        const bool branch_taken_0x3c4b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4b10) {
            ctx->pc = 0x3C4B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4B10u;
            // 0x3c4b14: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4B38u;
            goto label_3c4b38;
        }
    }
    ctx->pc = 0x3C4B18u;
label_3c4b18:
    // 0x3c4b18: 0xac72000c  sw          $s2, 0xC($v1)
    ctx->pc = 0x3c4b18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 18));
label_3c4b1c:
    // 0x3c4b1c: 0x2687ffff  addiu       $a3, $s4, -0x1
    ctx->pc = 0x3c4b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3c4b20:
    // 0x3c4b20: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x3c4b20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_3c4b24:
    // 0x3c4b24: 0xac73ffe8  sw          $s3, -0x18($v1)
    ctx->pc = 0x3c4b24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967272), GPR_U32(ctx, 19));
label_3c4b28:
    // 0x3c4b28: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x3c4b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_3c4b2c:
    // 0x3c4b2c: 0xaca00068  sw          $zero, 0x68($a1)
    ctx->pc = 0x3c4b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 0));
label_3c4b30:
    // 0x3c4b30: 0x24a300e8  addiu       $v1, $a1, 0xE8
    ctx->pc = 0x3c4b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 232));
label_3c4b34:
    // 0x3c4b34: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x3c4b34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_3c4b38:
    // 0x3c4b38: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3c4b38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_3c4b3c:
    // 0x3c4b3c: 0xac73ffe8  sw          $s3, -0x18($v1)
    ctx->pc = 0x3c4b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967272), GPR_U32(ctx, 19));
label_3c4b40:
    // 0x3c4b40: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x3c4b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_3c4b44:
    // 0x3c4b44: 0xac72000c  sw          $s2, 0xC($v1)
    ctx->pc = 0x3c4b44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 18));
label_3c4b48:
    // 0x3c4b48: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3c4b48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3c4b4c:
    // 0x3c4b4c: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x3c4b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_3c4b50:
    // 0x3c4b50: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x3c4b50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_3c4b54:
    // 0x3c4b54: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3c4b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_3c4b58:
    // 0x3c4b58: 0xac73ffe8  sw          $s3, -0x18($v1)
    ctx->pc = 0x3c4b58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967272), GPR_U32(ctx, 19));
label_3c4b5c:
    // 0x3c4b5c: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x3c4b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_3c4b60:
    // 0x3c4b60: 0xac72000c  sw          $s2, 0xC($v1)
    ctx->pc = 0x3c4b60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 18));
label_3c4b64:
    // 0x3c4b64: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3c4b64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3c4b68:
    // 0x3c4b68: 0x10e0001f  beqz        $a3, . + 4 + (0x1F << 2)
label_3c4b6c:
    if (ctx->pc == 0x3C4B6Cu) {
        ctx->pc = 0x3C4B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4B68u;
        // 0x3c4b6c: 0x24630080  addiu       $v1, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4B70u;
        goto label_3c4b70;
    }
    ctx->pc = 0x3C4B68u;
    {
        const bool branch_taken_0x3c4b68 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4B68u;
        // 0x3c4b6c: 0x24630080  addiu       $v1, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4b68) {
            ctx->pc = 0x3C4BE8u;
            goto label_3c4be8;
        }
    }
    ctx->pc = 0x3C4B70u;
label_3c4b70:
    // 0x3c4b70: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3c4b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3c4b74:
    // 0x3c4b74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c4b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c4b78:
    // 0x3c4b78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c4b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c4b7c:
    // 0x3c4b7c: 0x0  nop
    ctx->pc = 0x3c4b7cu;
    // NOP
label_3c4b80:
    // 0x3c4b80: 0xacb2000c  sw          $s2, 0xC($a1)
    ctx->pc = 0x3c4b80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 18));
label_3c4b84:
    // 0x3c4b84: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x3c4b84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_3c4b88:
    // 0x3c4b88: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3c4b88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_3c4b8c:
    // 0x3c4b8c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x3c4b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_3c4b90:
    // 0x3c4b90: 0xacb2008c  sw          $s2, 0x8C($a1)
    ctx->pc = 0x3c4b90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 18));
label_3c4b94:
    // 0x3c4b94: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x3c4b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_3c4b98:
    // 0x3c4b98: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x3c4b98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
label_3c4b9c:
    // 0x3c4b9c: 0xac860088  sw          $a2, 0x88($a0)
    ctx->pc = 0x3c4b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 6));
label_3c4ba0:
    // 0x3c4ba0: 0xacb2010c  sw          $s2, 0x10C($a1)
    ctx->pc = 0x3c4ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 268), GPR_U32(ctx, 18));
label_3c4ba4:
    // 0x3c4ba4: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x3c4ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_3c4ba8:
    // 0x3c4ba8: 0xac860108  sw          $a2, 0x108($a0)
    ctx->pc = 0x3c4ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 264), GPR_U32(ctx, 6));
label_3c4bac:
    // 0x3c4bac: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x3c4bacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
label_3c4bb0:
    // 0x3c4bb0: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x3c4bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_3c4bb4:
    // 0x3c4bb4: 0xacb2018c  sw          $s2, 0x18C($a1)
    ctx->pc = 0x3c4bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 396), GPR_U32(ctx, 18));
label_3c4bb8:
    // 0x3c4bb8: 0xac860188  sw          $a2, 0x188($a0)
    ctx->pc = 0x3c4bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 392), GPR_U32(ctx, 6));
label_3c4bbc:
    // 0x3c4bbc: 0x24a50200  addiu       $a1, $a1, 0x200
    ctx->pc = 0x3c4bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
label_3c4bc0:
    // 0x3c4bc0: 0xac73ffe8  sw          $s3, -0x18($v1)
    ctx->pc = 0x3c4bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967272), GPR_U32(ctx, 19));
label_3c4bc4:
    // 0x3c4bc4: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x3c4bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_3c4bc8:
    // 0x3c4bc8: 0xac730068  sw          $s3, 0x68($v1)
    ctx->pc = 0x3c4bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 19));
label_3c4bcc:
    // 0x3c4bcc: 0x24840200  addiu       $a0, $a0, 0x200
    ctx->pc = 0x3c4bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
label_3c4bd0:
    // 0x3c4bd0: 0xac7300e8  sw          $s3, 0xE8($v1)
    ctx->pc = 0x3c4bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 19));
label_3c4bd4:
    // 0x3c4bd4: 0xac730168  sw          $s3, 0x168($v1)
    ctx->pc = 0x3c4bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 360), GPR_U32(ctx, 19));
label_3c4bd8:
    // 0x3c4bd8: 0xac400180  sw          $zero, 0x180($v0)
    ctx->pc = 0x3c4bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 384), GPR_U32(ctx, 0));
label_3c4bdc:
    // 0x3c4bdc: 0x24630200  addiu       $v1, $v1, 0x200
    ctx->pc = 0x3c4bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
label_3c4be0:
    // 0x3c4be0: 0x14e0ffe7  bnez        $a3, . + 4 + (-0x19 << 2)
label_3c4be4:
    if (ctx->pc == 0x3C4BE4u) {
        ctx->pc = 0x3C4BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4BE0u;
        // 0x3c4be4: 0x24420200  addiu       $v0, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4BE8u;
        goto label_3c4be8;
    }
    ctx->pc = 0x3C4BE0u;
    {
        const bool branch_taken_0x3c4be0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4BE0u;
        // 0x3c4be4: 0x24420200  addiu       $v0, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4be0) {
            ctx->pc = 0x3C4B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4b80;
        }
    }
    ctx->pc = 0x3C4BE8u;
label_3c4be8:
    // 0x3c4be8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3c4be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3c4bec:
    // 0x3c4bec: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x3c4becu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c4bf0:
    // 0x3c4bf0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c4bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c4bf4:
    // 0x3c4bf4: 0xc0f079a  jal         func_3C1E68
label_3c4bf8:
    if (ctx->pc == 0x3C4BF8u) {
        ctx->pc = 0x3C4BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4BF4u;
        // 0x3c4bf8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4BFCu;
        goto label_3c4bfc;
    }
    ctx->pc = 0x3C4BF4u;
    SET_GPR_U32(ctx, 31, 0x3C4BFCu);
    ctx->pc = 0x3C4BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4BF4u;
    // 0x3c4bf8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1E68u, 0x3C4BF4u, 0x3C4BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4BFCu;
label_3c4bfc:
    // 0x3c4bfc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3c4bfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c4c00:
    // 0x3c4c00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c4c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c4c04:
    // 0x3c4c04: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_3c4c08:
    if (ctx->pc == 0x3C4C08u) {
        ctx->pc = 0x3C4C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C04u;
        // 0x3c4c08: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4C0Cu;
        goto label_3c4c0c;
    }
    ctx->pc = 0x3C4C04u;
    {
        const bool branch_taken_0x3c4c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C4C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C04u;
        // 0x3c4c08: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4c04) {
            ctx->pc = 0x3C4C1Cu;
            goto label_3c4c1c;
        }
    }
    ctx->pc = 0x3C4C0Cu;
label_3c4c0c:
    // 0x3c4c0c: 0x8e640058  lw          $a0, 0x58($s3)
    ctx->pc = 0x3c4c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_3c4c10:
    // 0x3c4c10: 0x2450e880  addiu       $s0, $v0, -0x1780
    ctx->pc = 0x3c4c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3c4c14:
    // 0x3c4c14: 0x1000007b  b           . + 4 + (0x7B << 2)
label_3c4c18:
    if (ctx->pc == 0x3C4C18u) {
        ctx->pc = 0x3C4C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C14u;
        // 0x3c4c18: 0x8e02010c  lw          $v0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4C1Cu;
        goto label_3c4c1c;
    }
    ctx->pc = 0x3C4C14u;
    {
        const bool branch_taken_0x3c4c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C14u;
        // 0x3c4c18: 0x8e02010c  lw          $v0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4c14) {
            ctx->pc = 0x3C4E04u;
            goto label_3c4e04;
        }
    }
    ctx->pc = 0x3C4C1Cu;
label_3c4c1c:
    // 0x3c4c1c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x3c4c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_3c4c20:
    // 0x3c4c20: 0x3c150062  lui         $s5, 0x62
    ctx->pc = 0x3c4c20u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)98 << 16));
label_3c4c24:
    // 0x3c4c24: 0x3c160062  lui         $s6, 0x62
    ctx->pc = 0x3c4c24u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)98 << 16));
label_3c4c28:
    // 0x3c4c28: 0x3c170062  lui         $s7, 0x62
    ctx->pc = 0x3c4c28u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)98 << 16));
label_3c4c2c:
    // 0x3c4c2c: 0x8e720058  lw          $s2, 0x58($s3)
    ctx->pc = 0x3c4c2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_3c4c30:
    // 0x3c4c30: 0x1a80002a  blez        $s4, . + 4 + (0x2A << 2)
label_3c4c34:
    if (ctx->pc == 0x3C4C34u) {
        ctx->pc = 0x3C4C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C30u;
        // 0x3c4c34: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4C38u;
        goto label_3c4c38;
    }
    ctx->pc = 0x3C4C30u;
    {
        const bool branch_taken_0x3c4c30 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x3C4C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C30u;
        // 0x3c4c34: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4c30) {
            ctx->pc = 0x3C4CDCu;
            goto label_3c4cdc;
        }
    }
    ctx->pc = 0x3C4C38u;
label_3c4c38:
    // 0x3c4c38: 0x141023  negu        $v0, $s4
    ctx->pc = 0x3c4c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
label_3c4c3c:
    // 0x3c4c3c: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x3c4c3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c4c40:
    // 0x3c4c40: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3c4c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3c4c44:
    // 0x3c4c44: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_3c4c48:
    if (ctx->pc == 0x3C4C48u) {
        ctx->pc = 0x3C4C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C44u;
        // 0x3c4c48: 0x26500060  addiu       $s0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4C4Cu;
        goto label_3c4c4c;
    }
    ctx->pc = 0x3C4C44u;
    {
        const bool branch_taken_0x3c4c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C44u;
        // 0x3c4c48: 0x26500060  addiu       $s0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4c44) {
            ctx->pc = 0x3C4CA0u;
            goto label_3c4ca0;
        }
    }
    ctx->pc = 0x3C4C4Cu;
label_3c4c4c:
    // 0x3c4c4c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3c4c4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3c4c50:
    // 0x3c4c50: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3c4c54:
    if (ctx->pc == 0x3C4C54u) {
        ctx->pc = 0x3C4C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C50u;
        // 0x3c4c54: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4C58u;
        goto label_3c4c58;
    }
    ctx->pc = 0x3C4C50u;
    {
        const bool branch_taken_0x3c4c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C50u;
        // 0x3c4c54: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4c50) {
            ctx->pc = 0x3C4C84u;
            goto label_3c4c84;
        }
    }
    ctx->pc = 0x3C4C58u;
label_3c4c58:
    // 0x3c4c58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3c4c5c:
    if (ctx->pc == 0x3C4C5Cu) {
        ctx->pc = 0x3C4C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C58u;
        // 0x3c4c5c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4C60u;
        goto label_3c4c60;
    }
    ctx->pc = 0x3C4C58u;
    {
        const bool branch_taken_0x3c4c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C58u;
        // 0x3c4c5c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4c58) {
            ctx->pc = 0x3C4C70u;
            goto label_3c4c70;
        }
    }
    ctx->pc = 0x3C4C60u;
label_3c4c60:
    // 0x3c4c60: 0xc0bf6d8  jal         func_2FDB60
label_3c4c64:
    if (ctx->pc == 0x3C4C64u) {
        ctx->pc = 0x3C4C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C60u;
        // 0x3c4c64: 0x265000e0  addiu       $s0, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4C68u;
        goto label_3c4c68;
    }
    ctx->pc = 0x3C4C60u;
    SET_GPR_U32(ctx, 31, 0x3C4C68u);
    ctx->pc = 0x3C4C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4C60u;
    // 0x3c4c64: 0x265000e0  addiu       $s0, $s2, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x3C4C60u, 0x3C4C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4C68u;
label_3c4c68:
    // 0x3c4c68: 0x2691ffff  addiu       $s1, $s4, -0x1
    ctx->pc = 0x3c4c68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3c4c6c:
    // 0x3c4c6c: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x3c4c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
label_3c4c70:
    // 0x3c4c70: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3c4c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c4c74:
    // 0x3c4c74: 0xc0bf6d8  jal         func_2FDB60
label_3c4c78:
    if (ctx->pc == 0x3C4C78u) {
        ctx->pc = 0x3C4C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C74u;
        // 0x3c4c78: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4C7Cu;
        goto label_3c4c7c;
    }
    ctx->pc = 0x3C4C74u;
    SET_GPR_U32(ctx, 31, 0x3C4C7Cu);
    ctx->pc = 0x3C4C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4C74u;
    // 0x3c4c78: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x3C4C74u, 0x3C4C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4C7Cu;
label_3c4c7c:
    // 0x3c4c7c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3c4c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3c4c80:
    // 0x3c4c80: 0x26100080  addiu       $s0, $s0, 0x80
    ctx->pc = 0x3c4c80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_3c4c84:
    // 0x3c4c84: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3c4c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c4c88:
    // 0x3c4c88: 0xc0bf6d8  jal         func_2FDB60
label_3c4c8c:
    if (ctx->pc == 0x3C4C8Cu) {
        ctx->pc = 0x3C4C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C88u;
        // 0x3c4c8c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4C90u;
        goto label_3c4c90;
    }
    ctx->pc = 0x3C4C88u;
    SET_GPR_U32(ctx, 31, 0x3C4C90u);
    ctx->pc = 0x3C4C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4C88u;
    // 0x3c4c8c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x3C4C88u, 0x3C4C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4C90u;
label_3c4c90:
    // 0x3c4c90: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3c4c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3c4c94:
    // 0x3c4c94: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_3c4c98:
    if (ctx->pc == 0x3C4C98u) {
        ctx->pc = 0x3C4C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C94u;
        // 0x3c4c98: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4C9Cu;
        goto label_3c4c9c;
    }
    ctx->pc = 0x3C4C94u;
    {
        const bool branch_taken_0x3c4c94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4C94u;
        // 0x3c4c98: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4c94) {
            ctx->pc = 0x3C4CDCu;
            goto label_3c4cdc;
        }
    }
    ctx->pc = 0x3C4C9Cu;
label_3c4c9c:
    // 0x3c4c9c: 0x0  nop
    ctx->pc = 0x3c4c9cu;
    // NOP
label_3c4ca0:
    // 0x3c4ca0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3c4ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c4ca4:
    // 0x3c4ca4: 0xc0bf6d8  jal         func_2FDB60
label_3c4ca8:
    if (ctx->pc == 0x3C4CA8u) {
        ctx->pc = 0x3C4CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4CA4u;
        // 0x3c4ca8: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4CACu;
        goto label_3c4cac;
    }
    ctx->pc = 0x3C4CA4u;
    SET_GPR_U32(ctx, 31, 0x3C4CACu);
    ctx->pc = 0x3C4CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4CA4u;
    // 0x3c4ca8: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x3C4CA4u, 0x3C4CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4CACu;
label_3c4cac:
    // 0x3c4cac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3c4cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c4cb0:
    // 0x3c4cb0: 0xc0bf6d8  jal         func_2FDB60
label_3c4cb4:
    if (ctx->pc == 0x3C4CB4u) {
        ctx->pc = 0x3C4CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4CB0u;
        // 0x3c4cb4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4CB8u;
        goto label_3c4cb8;
    }
    ctx->pc = 0x3C4CB0u;
    SET_GPR_U32(ctx, 31, 0x3C4CB8u);
    ctx->pc = 0x3C4CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4CB0u;
    // 0x3c4cb4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x3C4CB0u, 0x3C4CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4CB8u;
label_3c4cb8:
    // 0x3c4cb8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3c4cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c4cbc:
    // 0x3c4cbc: 0xc0bf6d8  jal         func_2FDB60
label_3c4cc0:
    if (ctx->pc == 0x3C4CC0u) {
        ctx->pc = 0x3C4CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4CBCu;
        // 0x3c4cc0: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4CC4u;
        goto label_3c4cc4;
    }
    ctx->pc = 0x3C4CBCu;
    SET_GPR_U32(ctx, 31, 0x3C4CC4u);
    ctx->pc = 0x3C4CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4CBCu;
    // 0x3c4cc0: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x3C4CBCu, 0x3C4CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4CC4u;
label_3c4cc4:
    // 0x3c4cc4: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x3c4cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
label_3c4cc8:
    // 0x3c4cc8: 0xc0bf6d8  jal         func_2FDB60
label_3c4ccc:
    if (ctx->pc == 0x3C4CCCu) {
        ctx->pc = 0x3C4CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4CC8u;
        // 0x3c4ccc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4CD0u;
        goto label_3c4cd0;
    }
    ctx->pc = 0x3C4CC8u;
    SET_GPR_U32(ctx, 31, 0x3C4CD0u);
    ctx->pc = 0x3C4CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4CC8u;
    // 0x3c4ccc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x3C4CC8u, 0x3C4CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4CD0u;
label_3c4cd0:
    // 0x3c4cd0: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x3c4cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
label_3c4cd4:
    // 0x3c4cd4: 0x1620fff2  bnez        $s1, . + 4 + (-0xE << 2)
label_3c4cd8:
    if (ctx->pc == 0x3C4CD8u) {
        ctx->pc = 0x3C4CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4CD4u;
        // 0x3c4cd8: 0x26100200  addiu       $s0, $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4CDCu;
        goto label_3c4cdc;
    }
    ctx->pc = 0x3C4CD4u;
    {
        const bool branch_taken_0x3c4cd4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4CD4u;
        // 0x3c4cd8: 0x26100200  addiu       $s0, $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4cd4) {
            ctx->pc = 0x3C4CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4ca0;
        }
    }
    ctx->pc = 0x3C4CDCu;
label_3c4cdc:
    // 0x3c4cdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c4cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c4ce0:
    // 0x3c4ce0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3c4ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c4ce4:
    // 0x3c4ce4: 0xc0bf6d8  jal         func_2FDB60
label_3c4ce8:
    if (ctx->pc == 0x3C4CE8u) {
        ctx->pc = 0x3C4CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4CE4u;
        // 0x3c4ce8: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4CECu;
        goto label_3c4cec;
    }
    ctx->pc = 0x3C4CE4u;
    SET_GPR_U32(ctx, 31, 0x3C4CECu);
    ctx->pc = 0x3C4CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4CE4u;
    // 0x3c4ce8: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x3C4CE4u, 0x3C4CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4CECu;
label_3c4cec:
    // 0x3c4cec: 0xaf82bd94  sw          $v0, -0x426C($gp)
    ctx->pc = 0x3c4cecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950292), GPR_U32(ctx, 2));
label_3c4cf0:
    // 0x3c4cf0: 0xc0c1f08  jal         func_307C20
label_3c4cf4:
    if (ctx->pc == 0x3C4CF4u) {
        ctx->pc = 0x3C4CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4CF0u;
        // 0x3c4cf4: 0xaf80bd90  sw          $zero, -0x4270($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4CF8u;
        goto label_3c4cf8;
    }
    ctx->pc = 0x3C4CF0u;
    SET_GPR_U32(ctx, 31, 0x3C4CF8u);
    ctx->pc = 0x3C4CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4CF0u;
    // 0x3c4cf4: 0xaf80bd90  sw          $zero, -0x4270($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950288), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x3C4CF0u, 0x3C4CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4CF8u;
label_3c4cf8:
    // 0x3c4cf8: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
label_3c4cfc:
    if (ctx->pc == 0x3C4CFCu) {
        ctx->pc = 0x3C4CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4CF8u;
        // 0x3c4cfc: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4D00u;
        goto label_3c4d00;
    }
    ctx->pc = 0x3C4CF8u;
    {
        const bool branch_taken_0x3c4cf8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4CF8u;
        // 0x3c4cfc: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4cf8) {
            ctx->pc = 0x3C4D0Cu;
            goto label_3c4d0c;
        }
    }
    ctx->pc = 0x3C4D00u;
label_3c4d00:
    // 0x3c4d00: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3c4d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3c4d04:
    // 0x3c4d04: 0xc0c031e  jal         func_300C78
label_3c4d08:
    if (ctx->pc == 0x3C4D08u) {
        ctx->pc = 0x3C4D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4D04u;
        // 0x3c4d08: 0x2484e040  addiu       $a0, $a0, -0x1FC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4D0Cu;
        goto label_3c4d0c;
    }
    ctx->pc = 0x3C4D04u;
    SET_GPR_U32(ctx, 31, 0x3C4D0Cu);
    ctx->pc = 0x3C4D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4D04u;
    // 0x3c4d08: 0x2484e040  addiu       $a0, $a0, -0x1FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300C78u, 0x3C4D04u, 0x3C4D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4D0Cu;
label_3c4d0c:
    // 0x3c4d0c: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x3c4d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
label_3c4d10:
    // 0x3c4d10: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3c4d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c4d14:
    // 0x3c4d14: 0x24a55150  addiu       $a1, $a1, 0x5150
    ctx->pc = 0x3c4d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20816));
label_3c4d18:
    // 0x3c4d18: 0xc0c032a  jal         func_300CA8
label_3c4d1c:
    if (ctx->pc == 0x3C4D1Cu) {
        ctx->pc = 0x3C4D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4D18u;
        // 0x3c4d1c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4D20u;
        goto label_3c4d20;
    }
    ctx->pc = 0x3C4D18u;
    SET_GPR_U32(ctx, 31, 0x3C4D20u);
    ctx->pc = 0x3C4D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4D18u;
    // 0x3c4d1c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300CA8u, 0x3C4D18u, 0x3C4D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4D20u;
label_3c4d20:
    // 0x3c4d20: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x3c4d20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
label_3c4d24:
    // 0x3c4d24: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3c4d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3c4d28:
    // 0x3c4d28: 0x24a55228  addiu       $a1, $a1, 0x5228
    ctx->pc = 0x3c4d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21032));
label_3c4d2c:
    // 0x3c4d2c: 0xc0c032a  jal         func_300CA8
label_3c4d30:
    if (ctx->pc == 0x3C4D30u) {
        ctx->pc = 0x3C4D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4D2Cu;
        // 0x3c4d30: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4D34u;
        goto label_3c4d34;
    }
    ctx->pc = 0x3C4D2Cu;
    SET_GPR_U32(ctx, 31, 0x3C4D34u);
    ctx->pc = 0x3C4D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4D2Cu;
    // 0x3c4d30: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300CA8u, 0x3C4D2Cu, 0x3C4D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4D34u;
label_3c4d34:
    // 0x3c4d34: 0xc0c1f1c  jal         func_307C70
label_3c4d38:
    if (ctx->pc == 0x3C4D38u) {
        ctx->pc = 0x3C4D3Cu;
        goto label_3c4d3c;
    }
    ctx->pc = 0x3C4D34u;
    SET_GPR_U32(ctx, 31, 0x3C4D3Cu);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x3C4D34u, 0x3C4D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4D3Cu;
label_3c4d3c:
    // 0x3c4d3c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3c4d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3c4d40:
    // 0x3c4d40: 0x2470e088  addiu       $s0, $v1, -0x1F78
    ctx->pc = 0x3c4d40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959240));
label_3c4d44:
    // 0x3c4d44: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x3c4d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
label_3c4d48:
    // 0x3c4d48: 0x26a4e088  addiu       $a0, $s5, -0x1F78
    ctx->pc = 0x3c4d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294959240));
label_3c4d4c:
    // 0x3c4d4c: 0x34a55446  ori         $a1, $a1, 0x5446
    ctx->pc = 0x3c4d4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21574);
label_3c4d50:
    // 0x3c4d50: 0xc0c0632  jal         func_3018C8
label_3c4d54:
    if (ctx->pc == 0x3C4D54u) {
        ctx->pc = 0x3C4D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4D50u;
        // 0x3c4d54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4D58u;
        goto label_3c4d58;
    }
    ctx->pc = 0x3C4D50u;
    SET_GPR_U32(ctx, 31, 0x3C4D58u);
    ctx->pc = 0x3C4D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4D50u;
    // 0x3c4d54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3018C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3018C8u, 0x3C4D50u, 0x3C4D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4D58u;
label_3c4d58:
    // 0x3c4d58: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x3c4d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_3c4d5c:
    // 0x3c4d5c: 0x0  nop
    ctx->pc = 0x3c4d5cu;
    // NOP
label_3c4d60:
    // 0x3c4d60: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3c4d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3c4d64:
    // 0x3c4d64: 0x0  nop
    ctx->pc = 0x3c4d64u;
    // NOP
label_3c4d68:
    // 0x3c4d68: 0x0  nop
    ctx->pc = 0x3c4d68u;
    // NOP
label_3c4d6c:
    // 0x3c4d6c: 0x0  nop
    ctx->pc = 0x3c4d6cu;
    // NOP
label_3c4d70:
    // 0x3c4d70: 0x0  nop
    ctx->pc = 0x3c4d70u;
    // NOP
label_3c4d74:
    // 0x3c4d74: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3c4d78:
    if (ctx->pc == 0x3C4D78u) {
        ctx->pc = 0x3C4D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4D74u;
        // 0x3c4d78: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4D7Cu;
        goto label_3c4d7c;
    }
    ctx->pc = 0x3C4D74u;
    {
        const bool branch_taken_0x3c4d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4D74u;
        // 0x3c4d78: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4d74) {
            ctx->pc = 0x3C4D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4d60;
        }
    }
    ctx->pc = 0x3C4D7Cu;
label_3c4d7c:
    // 0x3c4d7c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3c4d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3c4d80:
    // 0x3c4d80: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
label_3c4d84:
    if (ctx->pc == 0x3C4D84u) {
        ctx->pc = 0x3C4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4D80u;
        // 0x3c4d84: 0x3c050052  lui         $a1, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4D88u;
        goto label_3c4d88;
    }
    ctx->pc = 0x3C4D80u;
    {
        const bool branch_taken_0x3c4d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4D80u;
        // 0x3c4d84: 0x3c050052  lui         $a1, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4d80) {
            ctx->pc = 0x3C4D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4d48;
        }
    }
    ctx->pc = 0x3C4D88u;
label_3c4d88:
    // 0x3c4d88: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x3c4d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3c4d8c:
    // 0x3c4d8c: 0x26d0e0c0  addiu       $s0, $s6, -0x1F40
    ctx->pc = 0x3c4d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294959296));
label_3c4d90:
    // 0x3c4d90: 0xaed4e0c0  sw          $s4, -0x1F40($s6)
    ctx->pc = 0x3c4d90u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294959296), GPR_U32(ctx, 20));
label_3c4d94:
    // 0x3c4d94: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3c4d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3c4d98:
    // 0x3c4d98: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x3c4d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_3c4d9c:
    // 0x3c4d9c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3c4d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3c4da0:
    // 0x3c4da0: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x3c4da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_3c4da4:
    // 0x3c4da4: 0xae1e0010  sw          $fp, 0x10($s0)
    ctx->pc = 0x3c4da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 30));
label_3c4da8:
    // 0x3c4da8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3c4da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c4dac:
    // 0x3c4dac: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3c4dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3c4db0:
    // 0x3c4db0: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x3c4db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_3c4db4:
    // 0x3c4db4: 0xaf82bd98  sw          $v0, -0x4268($gp)
    ctx->pc = 0x3c4db4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950296), GPR_U32(ctx, 2));
label_3c4db8:
    // 0x3c4db8: 0xc0bf778  jal         func_2FDDE0
label_3c4dbc:
    if (ctx->pc == 0x3C4DBCu) {
        ctx->pc = 0x3C4DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4DB8u;
        // 0x3c4dbc: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4DC0u;
        goto label_3c4dc0;
    }
    ctx->pc = 0x3C4DB8u;
    SET_GPR_U32(ctx, 31, 0x3C4DC0u);
    ctx->pc = 0x3C4DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4DB8u;
    // 0x3c4dbc: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x3C4DB8u, 0x3C4DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4DC0u;
label_3c4dc0:
    // 0x3c4dc0: 0x26a4e088  addiu       $a0, $s5, -0x1F78
    ctx->pc = 0x3c4dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294959240));
label_3c4dc4:
    // 0x3c4dc4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3c4dc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4dc8:
    // 0x3c4dc8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3c4dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3c4dcc:
    // 0x3c4dcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c4dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c4dd0:
    // 0x3c4dd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c4dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c4dd4:
    // 0x3c4dd4: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x3c4dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3c4dd8:
    // 0x3c4dd8: 0x26e9e100  addiu       $t1, $s7, -0x1F00
    ctx->pc = 0x3c4dd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959360));
label_3c4ddc:
    // 0x3c4ddc: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x3c4ddcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3c4de0:
    // 0x3c4de0: 0xc0c06aa  jal         func_301AA8
label_3c4de4:
    if (ctx->pc == 0x3C4DE4u) {
        ctx->pc = 0x3C4DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4DE0u;
        // 0x3c4de4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4DE8u;
        goto label_3c4de8;
    }
    ctx->pc = 0x3C4DE0u;
    SET_GPR_U32(ctx, 31, 0x3C4DE8u);
    ctx->pc = 0x3C4DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4DE0u;
    // 0x3c4de4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x3C4DE0u, 0x3C4DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4DE8u;
label_3c4de8:
    // 0x3c4de8: 0x8ee3e100  lw          $v1, -0x1F00($s7)
    ctx->pc = 0x3c4de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294959360)));
label_3c4dec:
    // 0x3c4dec: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_3c4df0:
    if (ctx->pc == 0x3C4DF0u) {
        ctx->pc = 0x3C4DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4DECu;
        // 0x3c4df0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4DF4u;
        goto label_3c4df4;
    }
    ctx->pc = 0x3C4DECu;
    {
        const bool branch_taken_0x3c4dec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4DECu;
        // 0x3c4df0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4dec) {
            ctx->pc = 0x3C4E1Cu;
            goto label_3c4e1c;
        }
    }
    ctx->pc = 0x3C4DF4u;
label_3c4df4:
    // 0x3c4df4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3c4df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_3c4df8:
    // 0x3c4df8: 0x2490e880  addiu       $s0, $a0, -0x1780
    ctx->pc = 0x3c4df8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_3c4dfc:
    // 0x3c4dfc: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x3c4dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3c4e00:
    // 0x3c4e00: 0x8e640058  lw          $a0, 0x58($s3)
    ctx->pc = 0x3c4e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_3c4e04:
    // 0x3c4e04: 0x40f809  jalr        $v0
label_3c4e08:
    if (ctx->pc == 0x3C4E08u) {
        ctx->pc = 0x3C4E0Cu;
        goto label_3c4e0c;
    }
    ctx->pc = 0x3C4E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C4E0Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4E04u, 0x3C4E0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C4E0Cu;
label_3c4e0c:
    // 0x3c4e0c: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x3c4e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3c4e10:
    // 0x3c4e10: 0x60f809  jalr        $v1
label_3c4e14:
    if (ctx->pc == 0x3C4E14u) {
        ctx->pc = 0x3C4E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4E10u;
        // 0x3c4e14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4E18u;
        goto label_3c4e18;
    }
    ctx->pc = 0x3C4E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C4E18u);
        ctx->pc = 0x3C4E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4E10u;
        // 0x3c4e14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4E10u, 0x3C4E18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C4E18u;
label_3c4e18:
    // 0x3c4e18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c4e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c4e1c:
    // 0x3c4e1c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x3c4e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3c4e20:
    // 0x3c4e20: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x3c4e20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3c4e24:
    // 0x3c4e24: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x3c4e24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3c4e28:
    // 0x3c4e28: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x3c4e28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3c4e2c:
    // 0x3c4e2c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x3c4e2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3c4e30:
    // 0x3c4e30: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x3c4e30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c4e34:
    // 0x3c4e34: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3c4e34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c4e38:
    // 0x3c4e38: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x3c4e38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c4e3c:
    // 0x3c4e3c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x3c4e3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c4e40:
    // 0x3c4e40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3c4e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3c4e44:
    // 0x3c4e44: 0x3e00008  jr          $ra
label_3c4e48:
    if (ctx->pc == 0x3C4E48u) {
        ctx->pc = 0x3C4E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4E44u;
        // 0x3c4e48: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4E4Cu;
        goto label_3c4e4c;
    }
    ctx->pc = 0x3C4E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C4E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4E44u;
        // 0x3c4e48: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C4E4Cu;
label_3c4e4c:
    // 0x3c4e4c: 0x0  nop
    ctx->pc = 0x3c4e4cu;
    // NOP
    ctx->pc = 0x3c4e50u;
}
