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

// Function: sub_003B89A8
// Address: 0x3b89a8 - 0x3b8e80
void sub_003B89A8_0x3b89a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B89A8_0x3b89a8");
#endif

    switch (ctx->pc) {
        case 0x3b89a8u: goto label_3b89a8;
        case 0x3b89acu: goto label_3b89ac;
        case 0x3b89b0u: goto label_3b89b0;
        case 0x3b89b4u: goto label_3b89b4;
        case 0x3b89b8u: goto label_3b89b8;
        case 0x3b89bcu: goto label_3b89bc;
        case 0x3b89c0u: goto label_3b89c0;
        case 0x3b89c4u: goto label_3b89c4;
        case 0x3b89c8u: goto label_3b89c8;
        case 0x3b89ccu: goto label_3b89cc;
        case 0x3b89d0u: goto label_3b89d0;
        case 0x3b89d4u: goto label_3b89d4;
        case 0x3b89d8u: goto label_3b89d8;
        case 0x3b89dcu: goto label_3b89dc;
        case 0x3b89e0u: goto label_3b89e0;
        case 0x3b89e4u: goto label_3b89e4;
        case 0x3b89e8u: goto label_3b89e8;
        case 0x3b89ecu: goto label_3b89ec;
        case 0x3b89f0u: goto label_3b89f0;
        case 0x3b89f4u: goto label_3b89f4;
        case 0x3b89f8u: goto label_3b89f8;
        case 0x3b89fcu: goto label_3b89fc;
        case 0x3b8a00u: goto label_3b8a00;
        case 0x3b8a04u: goto label_3b8a04;
        case 0x3b8a08u: goto label_3b8a08;
        case 0x3b8a0cu: goto label_3b8a0c;
        case 0x3b8a10u: goto label_3b8a10;
        case 0x3b8a14u: goto label_3b8a14;
        case 0x3b8a18u: goto label_3b8a18;
        case 0x3b8a1cu: goto label_3b8a1c;
        case 0x3b8a20u: goto label_3b8a20;
        case 0x3b8a24u: goto label_3b8a24;
        case 0x3b8a28u: goto label_3b8a28;
        case 0x3b8a2cu: goto label_3b8a2c;
        case 0x3b8a30u: goto label_3b8a30;
        case 0x3b8a34u: goto label_3b8a34;
        case 0x3b8a38u: goto label_3b8a38;
        case 0x3b8a3cu: goto label_3b8a3c;
        case 0x3b8a40u: goto label_3b8a40;
        case 0x3b8a44u: goto label_3b8a44;
        case 0x3b8a48u: goto label_3b8a48;
        case 0x3b8a4cu: goto label_3b8a4c;
        case 0x3b8a50u: goto label_3b8a50;
        case 0x3b8a54u: goto label_3b8a54;
        case 0x3b8a58u: goto label_3b8a58;
        case 0x3b8a5cu: goto label_3b8a5c;
        case 0x3b8a60u: goto label_3b8a60;
        case 0x3b8a64u: goto label_3b8a64;
        case 0x3b8a68u: goto label_3b8a68;
        case 0x3b8a6cu: goto label_3b8a6c;
        case 0x3b8a70u: goto label_3b8a70;
        case 0x3b8a74u: goto label_3b8a74;
        case 0x3b8a78u: goto label_3b8a78;
        case 0x3b8a7cu: goto label_3b8a7c;
        case 0x3b8a80u: goto label_3b8a80;
        case 0x3b8a84u: goto label_3b8a84;
        case 0x3b8a88u: goto label_3b8a88;
        case 0x3b8a8cu: goto label_3b8a8c;
        case 0x3b8a90u: goto label_3b8a90;
        case 0x3b8a94u: goto label_3b8a94;
        case 0x3b8a98u: goto label_3b8a98;
        case 0x3b8a9cu: goto label_3b8a9c;
        case 0x3b8aa0u: goto label_3b8aa0;
        case 0x3b8aa4u: goto label_3b8aa4;
        case 0x3b8aa8u: goto label_3b8aa8;
        case 0x3b8aacu: goto label_3b8aac;
        case 0x3b8ab0u: goto label_3b8ab0;
        case 0x3b8ab4u: goto label_3b8ab4;
        case 0x3b8ab8u: goto label_3b8ab8;
        case 0x3b8abcu: goto label_3b8abc;
        case 0x3b8ac0u: goto label_3b8ac0;
        case 0x3b8ac4u: goto label_3b8ac4;
        case 0x3b8ac8u: goto label_3b8ac8;
        case 0x3b8accu: goto label_3b8acc;
        case 0x3b8ad0u: goto label_3b8ad0;
        case 0x3b8ad4u: goto label_3b8ad4;
        case 0x3b8ad8u: goto label_3b8ad8;
        case 0x3b8adcu: goto label_3b8adc;
        case 0x3b8ae0u: goto label_3b8ae0;
        case 0x3b8ae4u: goto label_3b8ae4;
        case 0x3b8ae8u: goto label_3b8ae8;
        case 0x3b8aecu: goto label_3b8aec;
        case 0x3b8af0u: goto label_3b8af0;
        case 0x3b8af4u: goto label_3b8af4;
        case 0x3b8af8u: goto label_3b8af8;
        case 0x3b8afcu: goto label_3b8afc;
        case 0x3b8b00u: goto label_3b8b00;
        case 0x3b8b04u: goto label_3b8b04;
        case 0x3b8b08u: goto label_3b8b08;
        case 0x3b8b0cu: goto label_3b8b0c;
        case 0x3b8b10u: goto label_3b8b10;
        case 0x3b8b14u: goto label_3b8b14;
        case 0x3b8b18u: goto label_3b8b18;
        case 0x3b8b1cu: goto label_3b8b1c;
        case 0x3b8b20u: goto label_3b8b20;
        case 0x3b8b24u: goto label_3b8b24;
        case 0x3b8b28u: goto label_3b8b28;
        case 0x3b8b2cu: goto label_3b8b2c;
        case 0x3b8b30u: goto label_3b8b30;
        case 0x3b8b34u: goto label_3b8b34;
        case 0x3b8b38u: goto label_3b8b38;
        case 0x3b8b3cu: goto label_3b8b3c;
        case 0x3b8b40u: goto label_3b8b40;
        case 0x3b8b44u: goto label_3b8b44;
        case 0x3b8b48u: goto label_3b8b48;
        case 0x3b8b4cu: goto label_3b8b4c;
        case 0x3b8b50u: goto label_3b8b50;
        case 0x3b8b54u: goto label_3b8b54;
        case 0x3b8b58u: goto label_3b8b58;
        case 0x3b8b5cu: goto label_3b8b5c;
        case 0x3b8b60u: goto label_3b8b60;
        case 0x3b8b64u: goto label_3b8b64;
        case 0x3b8b68u: goto label_3b8b68;
        case 0x3b8b6cu: goto label_3b8b6c;
        case 0x3b8b70u: goto label_3b8b70;
        case 0x3b8b74u: goto label_3b8b74;
        case 0x3b8b78u: goto label_3b8b78;
        case 0x3b8b7cu: goto label_3b8b7c;
        case 0x3b8b80u: goto label_3b8b80;
        case 0x3b8b84u: goto label_3b8b84;
        case 0x3b8b88u: goto label_3b8b88;
        case 0x3b8b8cu: goto label_3b8b8c;
        case 0x3b8b90u: goto label_3b8b90;
        case 0x3b8b94u: goto label_3b8b94;
        case 0x3b8b98u: goto label_3b8b98;
        case 0x3b8b9cu: goto label_3b8b9c;
        case 0x3b8ba0u: goto label_3b8ba0;
        case 0x3b8ba4u: goto label_3b8ba4;
        case 0x3b8ba8u: goto label_3b8ba8;
        case 0x3b8bacu: goto label_3b8bac;
        case 0x3b8bb0u: goto label_3b8bb0;
        case 0x3b8bb4u: goto label_3b8bb4;
        case 0x3b8bb8u: goto label_3b8bb8;
        case 0x3b8bbcu: goto label_3b8bbc;
        case 0x3b8bc0u: goto label_3b8bc0;
        case 0x3b8bc4u: goto label_3b8bc4;
        case 0x3b8bc8u: goto label_3b8bc8;
        case 0x3b8bccu: goto label_3b8bcc;
        case 0x3b8bd0u: goto label_3b8bd0;
        case 0x3b8bd4u: goto label_3b8bd4;
        case 0x3b8bd8u: goto label_3b8bd8;
        case 0x3b8bdcu: goto label_3b8bdc;
        case 0x3b8be0u: goto label_3b8be0;
        case 0x3b8be4u: goto label_3b8be4;
        case 0x3b8be8u: goto label_3b8be8;
        case 0x3b8becu: goto label_3b8bec;
        case 0x3b8bf0u: goto label_3b8bf0;
        case 0x3b8bf4u: goto label_3b8bf4;
        case 0x3b8bf8u: goto label_3b8bf8;
        case 0x3b8bfcu: goto label_3b8bfc;
        case 0x3b8c00u: goto label_3b8c00;
        case 0x3b8c04u: goto label_3b8c04;
        case 0x3b8c08u: goto label_3b8c08;
        case 0x3b8c0cu: goto label_3b8c0c;
        case 0x3b8c10u: goto label_3b8c10;
        case 0x3b8c14u: goto label_3b8c14;
        case 0x3b8c18u: goto label_3b8c18;
        case 0x3b8c1cu: goto label_3b8c1c;
        case 0x3b8c20u: goto label_3b8c20;
        case 0x3b8c24u: goto label_3b8c24;
        case 0x3b8c28u: goto label_3b8c28;
        case 0x3b8c2cu: goto label_3b8c2c;
        case 0x3b8c30u: goto label_3b8c30;
        case 0x3b8c34u: goto label_3b8c34;
        case 0x3b8c38u: goto label_3b8c38;
        case 0x3b8c3cu: goto label_3b8c3c;
        case 0x3b8c40u: goto label_3b8c40;
        case 0x3b8c44u: goto label_3b8c44;
        case 0x3b8c48u: goto label_3b8c48;
        case 0x3b8c4cu: goto label_3b8c4c;
        case 0x3b8c50u: goto label_3b8c50;
        case 0x3b8c54u: goto label_3b8c54;
        case 0x3b8c58u: goto label_3b8c58;
        case 0x3b8c5cu: goto label_3b8c5c;
        case 0x3b8c60u: goto label_3b8c60;
        case 0x3b8c64u: goto label_3b8c64;
        case 0x3b8c68u: goto label_3b8c68;
        case 0x3b8c6cu: goto label_3b8c6c;
        case 0x3b8c70u: goto label_3b8c70;
        case 0x3b8c74u: goto label_3b8c74;
        case 0x3b8c78u: goto label_3b8c78;
        case 0x3b8c7cu: goto label_3b8c7c;
        case 0x3b8c80u: goto label_3b8c80;
        case 0x3b8c84u: goto label_3b8c84;
        case 0x3b8c88u: goto label_3b8c88;
        case 0x3b8c8cu: goto label_3b8c8c;
        case 0x3b8c90u: goto label_3b8c90;
        case 0x3b8c94u: goto label_3b8c94;
        case 0x3b8c98u: goto label_3b8c98;
        case 0x3b8c9cu: goto label_3b8c9c;
        case 0x3b8ca0u: goto label_3b8ca0;
        case 0x3b8ca4u: goto label_3b8ca4;
        case 0x3b8ca8u: goto label_3b8ca8;
        case 0x3b8cacu: goto label_3b8cac;
        case 0x3b8cb0u: goto label_3b8cb0;
        case 0x3b8cb4u: goto label_3b8cb4;
        case 0x3b8cb8u: goto label_3b8cb8;
        case 0x3b8cbcu: goto label_3b8cbc;
        case 0x3b8cc0u: goto label_3b8cc0;
        case 0x3b8cc4u: goto label_3b8cc4;
        case 0x3b8cc8u: goto label_3b8cc8;
        case 0x3b8cccu: goto label_3b8ccc;
        case 0x3b8cd0u: goto label_3b8cd0;
        case 0x3b8cd4u: goto label_3b8cd4;
        case 0x3b8cd8u: goto label_3b8cd8;
        case 0x3b8cdcu: goto label_3b8cdc;
        case 0x3b8ce0u: goto label_3b8ce0;
        case 0x3b8ce4u: goto label_3b8ce4;
        case 0x3b8ce8u: goto label_3b8ce8;
        case 0x3b8cecu: goto label_3b8cec;
        case 0x3b8cf0u: goto label_3b8cf0;
        case 0x3b8cf4u: goto label_3b8cf4;
        case 0x3b8cf8u: goto label_3b8cf8;
        case 0x3b8cfcu: goto label_3b8cfc;
        case 0x3b8d00u: goto label_3b8d00;
        case 0x3b8d04u: goto label_3b8d04;
        case 0x3b8d08u: goto label_3b8d08;
        case 0x3b8d0cu: goto label_3b8d0c;
        case 0x3b8d10u: goto label_3b8d10;
        case 0x3b8d14u: goto label_3b8d14;
        case 0x3b8d18u: goto label_3b8d18;
        case 0x3b8d1cu: goto label_3b8d1c;
        case 0x3b8d20u: goto label_3b8d20;
        case 0x3b8d24u: goto label_3b8d24;
        case 0x3b8d28u: goto label_3b8d28;
        case 0x3b8d2cu: goto label_3b8d2c;
        case 0x3b8d30u: goto label_3b8d30;
        case 0x3b8d34u: goto label_3b8d34;
        case 0x3b8d38u: goto label_3b8d38;
        case 0x3b8d3cu: goto label_3b8d3c;
        case 0x3b8d40u: goto label_3b8d40;
        case 0x3b8d44u: goto label_3b8d44;
        case 0x3b8d48u: goto label_3b8d48;
        case 0x3b8d4cu: goto label_3b8d4c;
        case 0x3b8d50u: goto label_3b8d50;
        case 0x3b8d54u: goto label_3b8d54;
        case 0x3b8d58u: goto label_3b8d58;
        case 0x3b8d5cu: goto label_3b8d5c;
        case 0x3b8d60u: goto label_3b8d60;
        case 0x3b8d64u: goto label_3b8d64;
        case 0x3b8d68u: goto label_3b8d68;
        case 0x3b8d6cu: goto label_3b8d6c;
        case 0x3b8d70u: goto label_3b8d70;
        case 0x3b8d74u: goto label_3b8d74;
        case 0x3b8d78u: goto label_3b8d78;
        case 0x3b8d7cu: goto label_3b8d7c;
        case 0x3b8d80u: goto label_3b8d80;
        case 0x3b8d84u: goto label_3b8d84;
        case 0x3b8d88u: goto label_3b8d88;
        case 0x3b8d8cu: goto label_3b8d8c;
        case 0x3b8d90u: goto label_3b8d90;
        case 0x3b8d94u: goto label_3b8d94;
        case 0x3b8d98u: goto label_3b8d98;
        case 0x3b8d9cu: goto label_3b8d9c;
        case 0x3b8da0u: goto label_3b8da0;
        case 0x3b8da4u: goto label_3b8da4;
        case 0x3b8da8u: goto label_3b8da8;
        case 0x3b8dacu: goto label_3b8dac;
        case 0x3b8db0u: goto label_3b8db0;
        case 0x3b8db4u: goto label_3b8db4;
        case 0x3b8db8u: goto label_3b8db8;
        case 0x3b8dbcu: goto label_3b8dbc;
        case 0x3b8dc0u: goto label_3b8dc0;
        case 0x3b8dc4u: goto label_3b8dc4;
        case 0x3b8dc8u: goto label_3b8dc8;
        case 0x3b8dccu: goto label_3b8dcc;
        case 0x3b8dd0u: goto label_3b8dd0;
        case 0x3b8dd4u: goto label_3b8dd4;
        case 0x3b8dd8u: goto label_3b8dd8;
        case 0x3b8ddcu: goto label_3b8ddc;
        case 0x3b8de0u: goto label_3b8de0;
        case 0x3b8de4u: goto label_3b8de4;
        case 0x3b8de8u: goto label_3b8de8;
        case 0x3b8decu: goto label_3b8dec;
        case 0x3b8df0u: goto label_3b8df0;
        case 0x3b8df4u: goto label_3b8df4;
        case 0x3b8df8u: goto label_3b8df8;
        case 0x3b8dfcu: goto label_3b8dfc;
        case 0x3b8e00u: goto label_3b8e00;
        case 0x3b8e04u: goto label_3b8e04;
        case 0x3b8e08u: goto label_3b8e08;
        case 0x3b8e0cu: goto label_3b8e0c;
        case 0x3b8e10u: goto label_3b8e10;
        case 0x3b8e14u: goto label_3b8e14;
        case 0x3b8e18u: goto label_3b8e18;
        case 0x3b8e1cu: goto label_3b8e1c;
        case 0x3b8e20u: goto label_3b8e20;
        case 0x3b8e24u: goto label_3b8e24;
        case 0x3b8e28u: goto label_3b8e28;
        case 0x3b8e2cu: goto label_3b8e2c;
        case 0x3b8e30u: goto label_3b8e30;
        case 0x3b8e34u: goto label_3b8e34;
        case 0x3b8e38u: goto label_3b8e38;
        case 0x3b8e3cu: goto label_3b8e3c;
        case 0x3b8e40u: goto label_3b8e40;
        case 0x3b8e44u: goto label_3b8e44;
        case 0x3b8e48u: goto label_3b8e48;
        case 0x3b8e4cu: goto label_3b8e4c;
        case 0x3b8e50u: goto label_3b8e50;
        case 0x3b8e54u: goto label_3b8e54;
        case 0x3b8e58u: goto label_3b8e58;
        case 0x3b8e5cu: goto label_3b8e5c;
        case 0x3b8e60u: goto label_3b8e60;
        case 0x3b8e64u: goto label_3b8e64;
        case 0x3b8e68u: goto label_3b8e68;
        case 0x3b8e6cu: goto label_3b8e6c;
        case 0x3b8e70u: goto label_3b8e70;
        case 0x3b8e74u: goto label_3b8e74;
        case 0x3b8e78u: goto label_3b8e78;
        case 0x3b8e7cu: goto label_3b8e7c;
        default: break;
    }

    ctx->pc = 0x3b89a8u;

label_3b89a8:
    // 0x3b89a8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3b89a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3b89ac:
    // 0x3b89ac: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x3b89acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_3b89b0:
    // 0x3b89b0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x3b89b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_3b89b4:
    // 0x3b89b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b89b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b89b8:
    // 0x3b89b8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x3b89b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_3b89bc:
    // 0x3b89bc: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x3b89bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_3b89c0:
    // 0x3b89c0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x3b89c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_3b89c4:
    // 0x3b89c4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3b89c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3b89c8:
    // 0x3b89c8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3b89c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3b89cc:
    // 0x3b89cc: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3b89ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_3b89d0:
    // 0x3b89d0: 0x10400123  beqz        $v0, . + 4 + (0x123 << 2)
label_3b89d4:
    if (ctx->pc == 0x3B89D4u) {
        ctx->pc = 0x3B89D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B89D0u;
        // 0x3b89d4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B89D8u;
        goto label_3b89d8;
    }
    ctx->pc = 0x3B89D0u;
    {
        const bool branch_taken_0x3b89d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B89D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B89D0u;
        // 0x3b89d4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b89d0) {
            ctx->pc = 0x3B8E60u;
            goto label_3b8e60;
        }
    }
    ctx->pc = 0x3B89D8u;
label_3b89d8:
    // 0x3b89d8: 0xc4ab000c  lwc1        $f11, 0xC($a1)
    ctx->pc = 0x3b89d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_3b89dc:
    // 0x3b89dc: 0xc6420090  lwc1        $f2, 0x90($s2)
    ctx->pc = 0x3b89dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b89e0:
    // 0x3b89e0: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x3b89e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3b89e4:
    // 0x3b89e4: 0xc6430094  lwc1        $f3, 0x94($s2)
    ctx->pc = 0x3b89e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b89e8:
    // 0x3b89e8: 0xc4a90004  lwc1        $f9, 0x4($a1)
    ctx->pc = 0x3b89e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_3b89ec:
    // 0x3b89ec: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x3b89ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_3b89f0:
    // 0x3b89f0: 0xc6410098  lwc1        $f1, 0x98($s2)
    ctx->pc = 0x3b89f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b89f4:
    // 0x3b89f4: 0xc4aa0008  lwc1        $f10, 0x8($a1)
    ctx->pc = 0x3b89f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_3b89f8:
    // 0x3b89f8: 0x460918c2  mul.s       $f3, $f3, $f9
    ctx->pc = 0x3b89f8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
label_3b89fc:
    // 0x3b89fc: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x3b89fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8a00:
    // 0x3b8a00: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x3b8a00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
label_3b8a04:
    // 0x3b8a04: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x3b8a04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3b8a08:
    // 0x3b8a08: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x3b8a08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
label_3b8a0c:
    // 0x3b8a0c: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x3b8a0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3b8a10:
    // 0x3b8a10: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x3b8a10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3b8a14:
    // 0x3b8a14: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x3b8a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3b8a18:
    // 0x3b8a18: 0xc64700a0  lwc1        $f7, 0xA0($s2)
    ctx->pc = 0x3b8a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3b8a1c:
    // 0x3b8a1c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x3b8a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_3b8a20:
    // 0x3b8a20: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3b8a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3b8a24:
    // 0x3b8a24: 0x460539c2  mul.s       $f7, $f7, $f5
    ctx->pc = 0x3b8a24u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
label_3b8a28:
    // 0x3b8a28: 0xc4c8000c  lwc1        $f8, 0xC($a2)
    ctx->pc = 0x3b8a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_3b8a2c:
    // 0x3b8a2c: 0xc4c60000  lwc1        $f6, 0x0($a2)
    ctx->pc = 0x3b8a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3b8a30:
    // 0x3b8a30: 0xc64500a4  lwc1        $f5, 0xA4($s2)
    ctx->pc = 0x3b8a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3b8a34:
    // 0x3b8a34: 0x46044202  mul.s       $f8, $f8, $f4
    ctx->pc = 0x3b8a34u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
label_3b8a38:
    // 0x3b8a38: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x3b8a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b8a3c:
    // 0x3b8a3c: 0x46043182  mul.s       $f6, $f6, $f4
    ctx->pc = 0x3b8a3cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
label_3b8a40:
    // 0x3b8a40: 0xc64200a8  lwc1        $f2, 0xA8($s2)
    ctx->pc = 0x3b8a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b8a44:
    // 0x3b8a44: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x3b8a44u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
label_3b8a48:
    // 0x3b8a48: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3b8a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b8a4c:
    // 0x3b8a4c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3b8a4cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_3b8a50:
    // 0x3b8a50: 0xc64000ac  lwc1        $f0, 0xAC($s2)
    ctx->pc = 0x3b8a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b8a54:
    // 0x3b8a54: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x3b8a54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
label_3b8a58:
    // 0x3b8a58: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3b8a58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_3b8a5c:
    // 0x3b8a5c: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x3b8a5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
label_3b8a60:
    // 0x3b8a60: 0x460639c0  add.s       $f7, $f7, $f6
    ctx->pc = 0x3b8a60u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
label_3b8a64:
    // 0x3b8a64: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x3b8a64u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
label_3b8a68:
    // 0x3b8a68: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3b8a68u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3b8a6c:
    // 0x3b8a6c: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x3b8a6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
label_3b8a70:
    // 0x3b8a70: 0xe7a70010  swc1        $f7, 0x10($sp)
    ctx->pc = 0x3b8a70u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3b8a74:
    // 0x3b8a74: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x3b8a74u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3b8a78:
    // 0x3b8a78: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x3b8a78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3b8a7c:
    // 0x3b8a7c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x3b8a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_3b8a80:
    // 0x3b8a80: 0x8e4200b8  lw          $v0, 0xB8($s2)
    ctx->pc = 0x3b8a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_3b8a84:
    // 0x3b8a84: 0x5440007e  bnel        $v0, $zero, . + 4 + (0x7E << 2)
label_3b8a88:
    if (ctx->pc == 0x3B8A88u) {
        ctx->pc = 0x3B8A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8A84u;
        // 0x3b8a88: 0x8e4200b0  lw          $v0, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8A8Cu;
        goto label_3b8a8c;
    }
    ctx->pc = 0x3B8A84u;
    {
        const bool branch_taken_0x3b8a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b8a84) {
            ctx->pc = 0x3B8A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B8A84u;
            // 0x3b8a88: 0x8e4200b0  lw          $v0, 0xB0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B8C80u;
            goto label_3b8c80;
        }
    }
    ctx->pc = 0x3B8A8Cu;
label_3b8a8c:
    // 0x3b8a8c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3b8a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_3b8a90:
    // 0x3b8a90: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_3b8a94:
    if (ctx->pc == 0x3B8A94u) {
        ctx->pc = 0x3B8A98u;
        goto label_3b8a98;
    }
    ctx->pc = 0x3B8A90u;
    {
        const bool branch_taken_0x3b8a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8a90) {
            ctx->pc = 0x3B8AE0u;
            goto label_3b8ae0;
        }
    }
    ctx->pc = 0x3B8A98u;
label_3b8a98:
    // 0x3b8a98: 0xc0eb816  jal         func_3AE058
label_3b8a9c:
    if (ctx->pc == 0x3B8A9Cu) {
        ctx->pc = 0x3B8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8A98u;
        // 0x3b8a9c: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8AA0u;
        goto label_3b8aa0;
    }
    ctx->pc = 0x3B8A98u;
    SET_GPR_U32(ctx, 31, 0x3B8AA0u);
    ctx->pc = 0x3B8A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8A98u;
    // 0x3b8a9c: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE058u, 0x3B8A98u, 0x3B8AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8AA0u;
label_3b8aa0:
    // 0x3b8aa0: 0xc0eb9f8  jal         func_3AE7E0
label_3b8aa4:
    if (ctx->pc == 0x3B8AA4u) {
        ctx->pc = 0x3B8AA8u;
        goto label_3b8aa8;
    }
    ctx->pc = 0x3B8AA0u;
    SET_GPR_U32(ctx, 31, 0x3B8AA8u);
    ctx->pc = 0x3AE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE7E0u, 0x3B8AA0u, 0x3B8AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8AA8u;
label_3b8aa8:
    // 0x3b8aa8: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x3b8aa8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3b8aac:
    // 0x3b8aac: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x3b8aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3b8ab0:
    // 0x3b8ab0: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x3b8ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3b8ab4:
    // 0x3b8ab4: 0x7e440050  sq          $a0, 0x50($s2)
    ctx->pc = 0x3b8ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 4));
label_3b8ab8:
    // 0x3b8ab8: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x3b8ab8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_3b8abc:
    // 0x3b8abc: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x3b8abcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_3b8ac0:
    // 0x3b8ac0: 0x7e430060  sq          $v1, 0x60($s2)
    ctx->pc = 0x3b8ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 96), GPR_VEC(ctx, 3));
label_3b8ac4:
    // 0x3b8ac4: 0x78440020  lq          $a0, 0x20($v0)
    ctx->pc = 0x3b8ac4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_3b8ac8:
    // 0x3b8ac8: 0x7e440070  sq          $a0, 0x70($s2)
    ctx->pc = 0x3b8ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 112), GPR_VEC(ctx, 4));
label_3b8acc:
    // 0x3b8acc: 0x78430030  lq          $v1, 0x30($v0)
    ctx->pc = 0x3b8accu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_3b8ad0:
    // 0x3b8ad0: 0xae450008  sw          $a1, 0x8($s2)
    ctx->pc = 0x3b8ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 5));
label_3b8ad4:
    // 0x3b8ad4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3b8ad8:
    if (ctx->pc == 0x3B8AD8u) {
        ctx->pc = 0x3B8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8AD4u;
        // 0x3b8ad8: 0x7e430080  sq          $v1, 0x80($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 128), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8ADCu;
        goto label_3b8adc;
    }
    ctx->pc = 0x3B8AD4u;
    {
        const bool branch_taken_0x3b8ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8AD4u;
        // 0x3b8ad8: 0x7e430080  sq          $v1, 0x80($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 128), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8ad4) {
            ctx->pc = 0x3B8AE8u;
            goto label_3b8ae8;
        }
    }
    ctx->pc = 0x3B8ADCu;
label_3b8adc:
    // 0x3b8adc: 0x0  nop
    ctx->pc = 0x3b8adcu;
    // NOP
label_3b8ae0:
    // 0x3b8ae0: 0xc0eb9c4  jal         func_3AE710
label_3b8ae4:
    if (ctx->pc == 0x3B8AE4u) {
        ctx->pc = 0x3B8AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8AE0u;
        // 0x3b8ae4: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8AE8u;
        goto label_3b8ae8;
    }
    ctx->pc = 0x3B8AE0u;
    SET_GPR_U32(ctx, 31, 0x3B8AE8u);
    ctx->pc = 0x3B8AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8AE0u;
    // 0x3b8ae4: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE710u, 0x3B8AE0u, 0x3B8AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8AE8u;
label_3b8ae8:
    // 0x3b8ae8: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x3b8ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_3b8aec:
    // 0x3b8aec: 0xc1036d2  jal         func_40DB48
label_3b8af0:
    if (ctx->pc == 0x3B8AF0u) {
        ctx->pc = 0x3B8AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8AECu;
        // 0x3b8af0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8AF4u;
        goto label_3b8af4;
    }
    ctx->pc = 0x3B8AECu;
    SET_GPR_U32(ctx, 31, 0x3B8AF4u);
    ctx->pc = 0x3B8AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8AECu;
    // 0x3b8af0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B8AECu, 0x3B8AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8AF4u;
label_3b8af4:
    // 0x3b8af4: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x3b8af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_3b8af8:
    // 0x3b8af8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3b8af8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b8afc:
    // 0x3b8afc: 0xc10376a  jal         func_40DDA8
label_3b8b00:
    if (ctx->pc == 0x3B8B00u) {
        ctx->pc = 0x3B8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8AFCu;
        // 0x3b8b00: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8B04u;
        goto label_3b8b04;
    }
    ctx->pc = 0x3B8AFCu;
    SET_GPR_U32(ctx, 31, 0x3B8B04u);
    ctx->pc = 0x3B8B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8AFCu;
    // 0x3b8b00: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B8AFCu, 0x3B8B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8B04u;
label_3b8b04:
    // 0x3b8b04: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3b8b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3b8b08:
    // 0x3b8b08: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3b8b08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3b8b0c:
    // 0x3b8b0c: 0x262a021  addu        $s4, $s3, $v0
    ctx->pc = 0x3b8b0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3b8b10:
    // 0x3b8b10: 0x127400d0  beq         $s3, $s4, . + 4 + (0xD0 << 2)
label_3b8b14:
    if (ctx->pc == 0x3B8B14u) {
        ctx->pc = 0x3B8B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8B10u;
        // 0x3b8b14: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8B18u;
        goto label_3b8b18;
    }
    ctx->pc = 0x3B8B10u;
    {
        const bool branch_taken_0x3b8b10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        ctx->pc = 0x3B8B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8B10u;
        // 0x3b8b14: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8b10) {
            ctx->pc = 0x3B8E54u;
            goto label_3b8e54;
        }
    }
    ctx->pc = 0x3B8B18u;
label_3b8b18:
    // 0x3b8b18: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x3b8b18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3b8b1c:
    // 0x3b8b1c: 0x6a020037  ldl         $v0, 0x37($s0)
    ctx->pc = 0x3b8b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3b8b20:
    // 0x3b8b20: 0x6e020030  ldr         $v0, 0x30($s0)
    ctx->pc = 0x3b8b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3b8b24:
    // 0x3b8b24: 0x6a03003f  ldl         $v1, 0x3F($s0)
    ctx->pc = 0x3b8b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3b8b28:
    // 0x3b8b28: 0x6e030038  ldr         $v1, 0x38($s0)
    ctx->pc = 0x3b8b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3b8b2c:
    // 0x3b8b2c: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x3b8b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8b30:
    // 0x3b8b30: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x3b8b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8b34:
    // 0x3b8b34: 0xb3a3002f  sdl         $v1, 0x2F($sp)
    ctx->pc = 0x3b8b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8b38:
    // 0x3b8b38: 0xb7a30028  sdr         $v1, 0x28($sp)
    ctx->pc = 0x3b8b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8b3c:
    // 0x3b8b3c: 0x6a06004f  ldl         $a2, 0x4F($s0)
    ctx->pc = 0x3b8b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3b8b40:
    // 0x3b8b40: 0x6e060048  ldr         $a2, 0x48($s0)
    ctx->pc = 0x3b8b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3b8b44:
    // 0x3b8b44: 0x6a070057  ldl         $a3, 0x57($s0)
    ctx->pc = 0x3b8b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_3b8b48:
    // 0x3b8b48: 0x6e070050  ldr         $a3, 0x50($s0)
    ctx->pc = 0x3b8b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_3b8b4c:
    // 0x3b8b4c: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x3b8b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8b50:
    // 0x3b8b50: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x3b8b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8b54:
    // 0x3b8b54: 0xb3a7003f  sdl         $a3, 0x3F($sp)
    ctx->pc = 0x3b8b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8b58:
    // 0x3b8b58: 0xb7a70038  sdr         $a3, 0x38($sp)
    ctx->pc = 0x3b8b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8b5c:
    // 0x3b8b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b8b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b8b60:
    // 0x3b8b60: 0x6a02001f  ldl         $v0, 0x1F($s0)
    ctx->pc = 0x3b8b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3b8b64:
    // 0x3b8b64: 0x6e020018  ldr         $v0, 0x18($s0)
    ctx->pc = 0x3b8b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3b8b68:
    // 0x3b8b68: 0x6a030027  ldl         $v1, 0x27($s0)
    ctx->pc = 0x3b8b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3b8b6c:
    // 0x3b8b6c: 0x6e030020  ldr         $v1, 0x20($s0)
    ctx->pc = 0x3b8b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3b8b70:
    // 0x3b8b70: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x3b8b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8b74:
    // 0x3b8b74: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x3b8b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8b78:
    // 0x3b8b78: 0xb3a3004f  sdl         $v1, 0x4F($sp)
    ctx->pc = 0x3b8b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8b7c:
    // 0x3b8b7c: 0xb7a30048  sdr         $v1, 0x48($sp)
    ctx->pc = 0x3b8b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8b80:
    // 0x3b8b80: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x3b8b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3b8b84:
    // 0x3b8b84: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3b8b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b8b88:
    // 0x3b8b88: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3b8b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b8b8c:
    // 0x3b8b8c: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x3b8b8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3b8b90:
    // 0x3b8b90: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x3b8b90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b8b94:
    // 0x3b8b94: 0x6a0b0007  ldl         $t3, 0x7($s0)
    ctx->pc = 0x3b8b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3b8b98:
    // 0x3b8b98: 0x6e0b0000  ldr         $t3, 0x0($s0)
    ctx->pc = 0x3b8b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3b8b9c:
    // 0x3b8b9c: 0x6a0c000f  ldl         $t4, 0xF($s0)
    ctx->pc = 0x3b8b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_3b8ba0:
    // 0x3b8ba0: 0x6e0c0008  ldr         $t4, 0x8($s0)
    ctx->pc = 0x3b8ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3b8ba4:
    // 0x3b8ba4: 0xb3ab0057  sdl         $t3, 0x57($sp)
    ctx->pc = 0x3b8ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8ba8:
    // 0x3b8ba8: 0xb7ab0050  sdr         $t3, 0x50($sp)
    ctx->pc = 0x3b8ba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8bac:
    // 0x3b8bac: 0xb3ac005f  sdl         $t4, 0x5F($sp)
    ctx->pc = 0x3b8bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8bb0:
    // 0x3b8bb0: 0xb7ac0058  sdr         $t4, 0x58($sp)
    ctx->pc = 0x3b8bb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8bb4:
    // 0x3b8bb4: 0xc0e9c46  jal         func_3A7118
label_3b8bb8:
    if (ctx->pc == 0x3B8BB8u) {
        ctx->pc = 0x3B8BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8BB4u;
        // 0x3b8bb8: 0x27aa0010  addiu       $t2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8BBCu;
        goto label_3b8bbc;
    }
    ctx->pc = 0x3B8BB4u;
    SET_GPR_U32(ctx, 31, 0x3B8BBCu);
    ctx->pc = 0x3B8BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8BB4u;
    // 0x3b8bb8: 0x27aa0010  addiu       $t2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7118u, 0x3B8BB4u, 0x3B8BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8BBCu;
label_3b8bbc:
    // 0x3b8bbc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3b8bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b8bc0:
    // 0x3b8bc0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3b8bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3b8bc4:
    // 0x3b8bc4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_3b8bc8:
    if (ctx->pc == 0x3B8BC8u) {
        ctx->pc = 0x3B8BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8BC4u;
        // 0x3b8bc8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8BCCu;
        goto label_3b8bcc;
    }
    ctx->pc = 0x3B8BC4u;
    {
        const bool branch_taken_0x3b8bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8BC4u;
        // 0x3b8bc8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8bc4) {
            ctx->pc = 0x3B8BE0u;
            goto label_3b8be0;
        }
    }
    ctx->pc = 0x3B8BCCu;
label_3b8bcc:
    // 0x3b8bcc: 0xc0ea490  jal         func_3A9240
label_3b8bd0:
    if (ctx->pc == 0x3B8BD0u) {
        ctx->pc = 0x3B8BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8BCCu;
        // 0x3b8bd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8BD4u;
        goto label_3b8bd4;
    }
    ctx->pc = 0x3B8BCCu;
    SET_GPR_U32(ctx, 31, 0x3B8BD4u);
    ctx->pc = 0x3B8BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8BCCu;
    // 0x3b8bd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9240u, 0x3B8BCCu, 0x3B8BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8BD4u;
label_3b8bd4:
    // 0x3b8bd4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3b8bd8:
    if (ctx->pc == 0x3B8BD8u) {
        ctx->pc = 0x3B8BDCu;
        goto label_3b8bdc;
    }
    ctx->pc = 0x3B8BD4u;
    {
        const bool branch_taken_0x3b8bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8bd4) {
            ctx->pc = 0x3B8BE8u;
            goto label_3b8be8;
        }
    }
    ctx->pc = 0x3B8BDCu;
label_3b8bdc:
    // 0x3b8bdc: 0x0  nop
    ctx->pc = 0x3b8bdcu;
    // NOP
label_3b8be0:
    // 0x3b8be0: 0xc0ecd28  jal         func_3B34A0
label_3b8be4:
    if (ctx->pc == 0x3B8BE4u) {
        ctx->pc = 0x3B8BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8BE0u;
        // 0x3b8be4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8BE8u;
        goto label_3b8be8;
    }
    ctx->pc = 0x3B8BE0u;
    SET_GPR_U32(ctx, 31, 0x3B8BE8u);
    ctx->pc = 0x3B8BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8BE0u;
    // 0x3b8be4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B34A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B34A0u, 0x3B8BE0u, 0x3B8BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8BE8u;
label_3b8be8:
    // 0x3b8be8: 0x6ba40027  ldl         $a0, 0x27($sp)
    ctx->pc = 0x3b8be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3b8bec:
    // 0x3b8bec: 0x6fa40020  ldr         $a0, 0x20($sp)
    ctx->pc = 0x3b8becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3b8bf0:
    // 0x3b8bf0: 0x6ba5002f  ldl         $a1, 0x2F($sp)
    ctx->pc = 0x3b8bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_3b8bf4:
    // 0x3b8bf4: 0x6fa50028  ldr         $a1, 0x28($sp)
    ctx->pc = 0x3b8bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3b8bf8:
    // 0x3b8bf8: 0xb2040037  sdl         $a0, 0x37($s0)
    ctx->pc = 0x3b8bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8bfc:
    // 0x3b8bfc: 0xb6040030  sdr         $a0, 0x30($s0)
    ctx->pc = 0x3b8bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8c00:
    // 0x3b8c00: 0xb205003f  sdl         $a1, 0x3F($s0)
    ctx->pc = 0x3b8c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8c04:
    // 0x3b8c04: 0xb6050038  sdr         $a1, 0x38($s0)
    ctx->pc = 0x3b8c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8c08:
    // 0x3b8c08: 0x6bab0037  ldl         $t3, 0x37($sp)
    ctx->pc = 0x3b8c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3b8c0c:
    // 0x3b8c0c: 0x6fab0030  ldr         $t3, 0x30($sp)
    ctx->pc = 0x3b8c0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3b8c10:
    // 0x3b8c10: 0x6bac003f  ldl         $t4, 0x3F($sp)
    ctx->pc = 0x3b8c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_3b8c14:
    // 0x3b8c14: 0x6fac0038  ldr         $t4, 0x38($sp)
    ctx->pc = 0x3b8c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3b8c18:
    // 0x3b8c18: 0xb20b004f  sdl         $t3, 0x4F($s0)
    ctx->pc = 0x3b8c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8c1c:
    // 0x3b8c1c: 0xb60b0048  sdr         $t3, 0x48($s0)
    ctx->pc = 0x3b8c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8c20:
    // 0x3b8c20: 0xb20c0057  sdl         $t4, 0x57($s0)
    ctx->pc = 0x3b8c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8c24:
    // 0x3b8c24: 0xb60c0050  sdr         $t4, 0x50($s0)
    ctx->pc = 0x3b8c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8c28:
    // 0x3b8c28: 0x6ba40047  ldl         $a0, 0x47($sp)
    ctx->pc = 0x3b8c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3b8c2c:
    // 0x3b8c2c: 0x6fa40040  ldr         $a0, 0x40($sp)
    ctx->pc = 0x3b8c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3b8c30:
    // 0x3b8c30: 0x6ba5004f  ldl         $a1, 0x4F($sp)
    ctx->pc = 0x3b8c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_3b8c34:
    // 0x3b8c34: 0x6fa50048  ldr         $a1, 0x48($sp)
    ctx->pc = 0x3b8c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3b8c38:
    // 0x3b8c38: 0xb204001f  sdl         $a0, 0x1F($s0)
    ctx->pc = 0x3b8c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8c3c:
    // 0x3b8c3c: 0xb6040018  sdr         $a0, 0x18($s0)
    ctx->pc = 0x3b8c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8c40:
    // 0x3b8c40: 0xb2050027  sdl         $a1, 0x27($s0)
    ctx->pc = 0x3b8c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8c44:
    // 0x3b8c44: 0xb6050020  sdr         $a1, 0x20($s0)
    ctx->pc = 0x3b8c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8c48:
    // 0x3b8c48: 0x6bab0057  ldl         $t3, 0x57($sp)
    ctx->pc = 0x3b8c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3b8c4c:
    // 0x3b8c4c: 0x6fab0050  ldr         $t3, 0x50($sp)
    ctx->pc = 0x3b8c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3b8c50:
    // 0x3b8c50: 0x6bac005f  ldl         $t4, 0x5F($sp)
    ctx->pc = 0x3b8c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_3b8c54:
    // 0x3b8c54: 0x6fac0058  ldr         $t4, 0x58($sp)
    ctx->pc = 0x3b8c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_3b8c58:
    // 0x3b8c58: 0xb20b0007  sdl         $t3, 0x7($s0)
    ctx->pc = 0x3b8c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8c5c:
    // 0x3b8c5c: 0xb60b0000  sdr         $t3, 0x0($s0)
    ctx->pc = 0x3b8c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8c60:
    // 0x3b8c60: 0xb20c000f  sdl         $t4, 0xF($s0)
    ctx->pc = 0x3b8c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8c64:
    // 0x3b8c64: 0xb60c0008  sdr         $t4, 0x8($s0)
    ctx->pc = 0x3b8c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b8c68:
    // 0x3b8c68: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x3b8c68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_3b8c6c:
    // 0x3b8c6c: 0x1674ffaa  bne         $s3, $s4, . + 4 + (-0x56 << 2)
label_3b8c70:
    if (ctx->pc == 0x3B8C70u) {
        ctx->pc = 0x3B8C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8C6Cu;
        // 0x3b8c70: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8C74u;
        goto label_3b8c74;
    }
    ctx->pc = 0x3B8C6Cu;
    {
        const bool branch_taken_0x3b8c6c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        ctx->pc = 0x3B8C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8C6Cu;
        // 0x3b8c70: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8c6c) {
            ctx->pc = 0x3B8B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b8b18;
        }
    }
    ctx->pc = 0x3B8C74u;
label_3b8c74:
    // 0x3b8c74: 0x10000077  b           . + 4 + (0x77 << 2)
label_3b8c78:
    if (ctx->pc == 0x3B8C78u) {
        ctx->pc = 0x3B8C7Cu;
        goto label_3b8c7c;
    }
    ctx->pc = 0x3B8C74u;
    {
        const bool branch_taken_0x3b8c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8c74) {
            ctx->pc = 0x3B8E54u;
            goto label_3b8e54;
        }
    }
    ctx->pc = 0x3B8C7Cu;
label_3b8c7c:
    // 0x3b8c7c: 0x0  nop
    ctx->pc = 0x3b8c7cu;
    // NOP
label_3b8c80:
    // 0x3b8c80: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x3b8c80u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3b8c84:
    // 0x3b8c84: 0x8e710024  lw          $s1, 0x24($s3)
    ctx->pc = 0x3b8c84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_3b8c88:
    // 0x3b8c88: 0x1220004f  beqz        $s1, . + 4 + (0x4F << 2)
label_3b8c8c:
    if (ctx->pc == 0x3B8C8Cu) {
        ctx->pc = 0x3B8C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8C88u;
        // 0x3b8c8c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8C90u;
        goto label_3b8c90;
    }
    ctx->pc = 0x3B8C88u;
    {
        const bool branch_taken_0x3b8c88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8C88u;
        // 0x3b8c8c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8c88) {
            ctx->pc = 0x3B8DC8u;
            goto label_3b8dc8;
        }
    }
    ctx->pc = 0x3B8C90u;
label_3b8c90:
    // 0x3b8c90: 0x240e00ff  addiu       $t6, $zero, 0xFF
    ctx->pc = 0x3b8c90u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3b8c94:
    // 0x3b8c94: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x3b8c94u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b8c98:
    // 0x3b8c98: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3b8c98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b8c9c:
    // 0x3b8c9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3b8c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b8ca0:
    // 0x3b8ca0: 0x8e4200b4  lw          $v0, 0xB4($s2)
    ctx->pc = 0x3b8ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_3b8ca4:
    // 0x3b8ca4: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x3b8ca4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_3b8ca8:
    // 0x3b8ca8: 0xc7a60000  lwc1        $f6, 0x0($sp)
    ctx->pc = 0x3b8ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3b8cac:
    // 0x3b8cac: 0x1c0582d  daddu       $t3, $t6, $zero
    ctx->pc = 0x3b8cacu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_3b8cb0:
    // 0x3b8cb0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3b8cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3b8cb4:
    // 0x3b8cb4: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x3b8cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3b8cb8:
    // 0x3b8cb8: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x3b8cb8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3b8cbc:
    // 0x3b8cbc: 0x1c0502d  daddu       $t2, $t6, $zero
    ctx->pc = 0x3b8cbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_3b8cc0:
    // 0x3b8cc0: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x3b8cc0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_3b8cc4:
    // 0x3b8cc4: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x3b8cc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_3b8cc8:
    // 0x3b8cc8: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x3b8cc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_3b8ccc:
    // 0x3b8ccc: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x3b8cccu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b8cd0:
    // 0x3b8cd0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3b8cd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3b8cd4:
    // 0x3b8cd4: 0x90450003  lbu         $a1, 0x3($v0)
    ctx->pc = 0x3b8cd4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_3b8cd8:
    // 0x3b8cd8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b8cd8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b8cdc:
    // 0x3b8cdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b8cdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b8ce0:
    // 0x3b8ce0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3b8ce0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3b8ce4:
    // 0x3b8ce4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3b8ce4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3b8ce8:
    // 0x3b8ce8: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x3b8ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3b8cec:
    // 0x3b8cec: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x3b8cecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3b8cf0:
    // 0x3b8cf0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3b8cf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3b8cf4:
    // 0x3b8cf4: 0xc7a7000c  lwc1        $f7, 0xC($sp)
    ctx->pc = 0x3b8cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3b8cf8:
    // 0x3b8cf8: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x3b8cf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_3b8cfc:
    // 0x3b8cfc: 0xc7a80010  lwc1        $f8, 0x10($sp)
    ctx->pc = 0x3b8cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_3b8d00:
    // 0x3b8d00: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x3b8d00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_3b8d04:
    // 0x3b8d04: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x3b8d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3b8d08:
    // 0x3b8d08: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3b8d08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_3b8d0c:
    // 0x3b8d0c: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x3b8d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3b8d10:
    // 0x3b8d10: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x3b8d10u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
label_3b8d14:
    // 0x3b8d14: 0xc7a4001c  lwc1        $f4, 0x1C($sp)
    ctx->pc = 0x3b8d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3b8d18:
    // 0x3b8d18: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x3b8d18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
label_3b8d1c:
    // 0x3b8d1c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3b8d1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_3b8d20:
    // 0x3b8d20: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x3b8d20u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_3b8d24:
    // 0x3b8d24: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x3b8d24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
label_3b8d28:
    // 0x3b8d28: 0x46000924  .word       0x46000924                   # cvt.w.s     $f4, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b8d28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
label_3b8d2c:
    // 0x3b8d2c: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x3b8d2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3b8d30:
    // 0x3b8d30: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b8d30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3b8d34:
    // 0x3b8d34: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x3b8d34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_3b8d38:
    // 0x3b8d38: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b8d38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3b8d3c:
    // 0x3b8d3c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x3b8d3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3b8d40:
    // 0x3b8d40: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b8d40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b8d44:
    // 0x3b8d44: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x3b8d44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_3b8d48:
    // 0x3b8d48: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x3b8d48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_3b8d4c:
    // 0x3b8d4c: 0x28e50100  slti        $a1, $a3, 0x100
    ctx->pc = 0x3b8d4cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
label_3b8d50:
    // 0x3b8d50: 0x62600b  movn        $t4, $v1, $v0
    ctx->pc = 0x3b8d50u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 3));
label_3b8d54:
    // 0x3b8d54: 0x28c40100  slti        $a0, $a2, 0x100
    ctx->pc = 0x3b8d54u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
label_3b8d58:
    // 0x3b8d58: 0x29020100  slti        $v0, $t0, 0x100
    ctx->pc = 0x3b8d58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)256) ? 1 : 0);
label_3b8d5c:
    // 0x3b8d5c: 0xc4580b  movn        $t3, $a2, $a0
    ctx->pc = 0x3b8d5cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 6));
label_3b8d60:
    // 0x3b8d60: 0xe5500b  movn        $t2, $a3, $a1
    ctx->pc = 0x3b8d60u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 7));
label_3b8d64:
    // 0x3b8d64: 0x102480b  movn        $t1, $t0, $v0
    ctx->pc = 0x3b8d64u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 8));
label_3b8d68:
    // 0x3b8d68: 0x1ac182a  slt         $v1, $t5, $t4
    ctx->pc = 0x3b8d68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_3b8d6c:
    // 0x3b8d6c: 0x1ab102a  slt         $v0, $t5, $t3
    ctx->pc = 0x3b8d6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_3b8d70:
    // 0x3b8d70: 0x1aa202a  slt         $a0, $t5, $t2
    ctx->pc = 0x3b8d70u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_3b8d74:
    // 0x3b8d74: 0x1a9282a  slt         $a1, $t5, $t1
    ctx->pc = 0x3b8d74u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3b8d78:
    // 0x3b8d78: 0x3600a  movz        $t4, $zero, $v1
    ctx->pc = 0x3b8d78u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_3b8d7c:
    // 0x3b8d7c: 0x2580a  movz        $t3, $zero, $v0
    ctx->pc = 0x3b8d7cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
label_3b8d80:
    // 0x3b8d80: 0x4500a  movz        $t2, $zero, $a0
    ctx->pc = 0x3b8d80u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_3b8d84:
    // 0x3b8d84: 0x5480a  movz        $t1, $zero, $a1
    ctx->pc = 0x3b8d84u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_3b8d88:
    // 0x3b8d88: 0xa3ac0060  sb          $t4, 0x60($sp)
    ctx->pc = 0x3b8d88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 12));
label_3b8d8c:
    // 0x3b8d8c: 0xa3ab0061  sb          $t3, 0x61($sp)
    ctx->pc = 0x3b8d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 97), (uint8_t)GPR_U32(ctx, 11));
label_3b8d90:
    // 0x3b8d90: 0xa3aa0062  sb          $t2, 0x62($sp)
    ctx->pc = 0x3b8d90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 98), (uint8_t)GPR_U32(ctx, 10));
label_3b8d94:
    // 0x3b8d94: 0xa3a90063  sb          $t1, 0x63($sp)
    ctx->pc = 0x3b8d94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 99), (uint8_t)GPR_U32(ctx, 9));
label_3b8d98:
    // 0x3b8d98: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x3b8d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_3b8d9c:
    // 0x3b8d9c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x3b8d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3b8da0:
    // 0x3b8da0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x3b8da0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_3b8da4:
    // 0x3b8da4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3b8da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b8da8:
    // 0x3b8da8: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x3b8da8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_3b8dac:
    // 0x3b8dac: 0x1f1102b  sltu        $v0, $t7, $s1
    ctx->pc = 0x3b8dacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3b8db0:
    // 0x3b8db0: 0x8ba40063  lwl         $a0, 0x63($sp)
    ctx->pc = 0x3b8db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 99); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_3b8db4:
    // 0x3b8db4: 0x9ba40060  lwr         $a0, 0x60($sp)
    ctx->pc = 0x3b8db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_3b8db8:
    // 0x3b8db8: 0xa8640007  swl         $a0, 0x7($v1)
    ctx->pc = 0x3b8db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b8dbc:
    // 0x3b8dbc: 0xb8640004  swr         $a0, 0x4($v1)
    ctx->pc = 0x3b8dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b8dc0:
    // 0x3b8dc0: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
label_3b8dc4:
    if (ctx->pc == 0x3B8DC4u) {
        ctx->pc = 0x3B8DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8DC0u;
        // 0x3b8dc4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8DC8u;
        goto label_3b8dc8;
    }
    ctx->pc = 0x3B8DC0u;
    {
        const bool branch_taken_0x3b8dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8DC0u;
        // 0x3b8dc4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8dc0) {
            ctx->pc = 0x3B8CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b8ca0;
        }
    }
    ctx->pc = 0x3B8DC8u;
label_3b8dc8:
    // 0x3b8dc8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3b8dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3b8dcc:
    // 0x3b8dcc: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x3b8dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_3b8dd0:
    // 0x3b8dd0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3b8dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3b8dd4:
    // 0x3b8dd4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3b8dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_3b8dd8:
    // 0x3b8dd8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_3b8ddc:
    if (ctx->pc == 0x3B8DDCu) {
        ctx->pc = 0x3B8DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8DD8u;
        // 0x3b8ddc: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8DE0u;
        goto label_3b8de0;
    }
    ctx->pc = 0x3B8DD8u;
    {
        const bool branch_taken_0x3b8dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8DD8u;
        // 0x3b8ddc: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8dd8) {
            ctx->pc = 0x3B8E24u;
            goto label_3b8e24;
        }
    }
    ctx->pc = 0x3B8DE0u;
label_3b8de0:
    // 0x3b8de0: 0xc0eb816  jal         func_3AE058
label_3b8de4:
    if (ctx->pc == 0x3B8DE4u) {
        ctx->pc = 0x3B8DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8DE0u;
        // 0x3b8de4: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8DE8u;
        goto label_3b8de8;
    }
    ctx->pc = 0x3B8DE0u;
    SET_GPR_U32(ctx, 31, 0x3B8DE8u);
    ctx->pc = 0x3B8DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8DE0u;
    // 0x3b8de4: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE058u, 0x3B8DE0u, 0x3B8DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8DE8u;
label_3b8de8:
    // 0x3b8de8: 0xc0eb9f8  jal         func_3AE7E0
label_3b8dec:
    if (ctx->pc == 0x3B8DECu) {
        ctx->pc = 0x3B8DF0u;
        goto label_3b8df0;
    }
    ctx->pc = 0x3B8DE8u;
    SET_GPR_U32(ctx, 31, 0x3B8DF0u);
    ctx->pc = 0x3AE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE7E0u, 0x3B8DE8u, 0x3B8DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8DF0u;
label_3b8df0:
    // 0x3b8df0: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x3b8df0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3b8df4:
    // 0x3b8df4: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x3b8df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3b8df8:
    // 0x3b8df8: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x3b8df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3b8dfc:
    // 0x3b8dfc: 0x7e440050  sq          $a0, 0x50($s2)
    ctx->pc = 0x3b8dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 4));
label_3b8e00:
    // 0x3b8e00: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x3b8e00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_3b8e04:
    // 0x3b8e04: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x3b8e04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_3b8e08:
    // 0x3b8e08: 0x7e430060  sq          $v1, 0x60($s2)
    ctx->pc = 0x3b8e08u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 96), GPR_VEC(ctx, 3));
label_3b8e0c:
    // 0x3b8e0c: 0x78440020  lq          $a0, 0x20($v0)
    ctx->pc = 0x3b8e0cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_3b8e10:
    // 0x3b8e10: 0x7e440070  sq          $a0, 0x70($s2)
    ctx->pc = 0x3b8e10u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 112), GPR_VEC(ctx, 4));
label_3b8e14:
    // 0x3b8e14: 0x78430030  lq          $v1, 0x30($v0)
    ctx->pc = 0x3b8e14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_3b8e18:
    // 0x3b8e18: 0xae450008  sw          $a1, 0x8($s2)
    ctx->pc = 0x3b8e18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 5));
label_3b8e1c:
    // 0x3b8e1c: 0x10000003  b           . + 4 + (0x3 << 2)
label_3b8e20:
    if (ctx->pc == 0x3B8E20u) {
        ctx->pc = 0x3B8E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8E1Cu;
        // 0x3b8e20: 0x7e430080  sq          $v1, 0x80($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 128), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8E24u;
        goto label_3b8e24;
    }
    ctx->pc = 0x3B8E1Cu;
    {
        const bool branch_taken_0x3b8e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8E1Cu;
        // 0x3b8e20: 0x7e430080  sq          $v1, 0x80($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 128), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8e1c) {
            ctx->pc = 0x3B8E2Cu;
            goto label_3b8e2c;
        }
    }
    ctx->pc = 0x3B8E24u;
label_3b8e24:
    // 0x3b8e24: 0xc0eb9c4  jal         func_3AE710
label_3b8e28:
    if (ctx->pc == 0x3B8E28u) {
        ctx->pc = 0x3B8E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8E24u;
        // 0x3b8e28: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8E2Cu;
        goto label_3b8e2c;
    }
    ctx->pc = 0x3B8E24u;
    SET_GPR_U32(ctx, 31, 0x3B8E2Cu);
    ctx->pc = 0x3B8E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8E24u;
    // 0x3b8e28: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE710u, 0x3B8E24u, 0x3B8E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8E2Cu;
label_3b8e2c:
    // 0x3b8e2c: 0xc0eb85a  jal         func_3AE168
label_3b8e30:
    if (ctx->pc == 0x3B8E30u) {
        ctx->pc = 0x3B8E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8E2Cu;
        // 0x3b8e30: 0x8e5000b8  lw          $s0, 0xB8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8E34u;
        goto label_3b8e34;
    }
    ctx->pc = 0x3B8E2Cu;
    SET_GPR_U32(ctx, 31, 0x3B8E34u);
    ctx->pc = 0x3B8E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8E2Cu;
    // 0x3b8e30: 0x8e5000b8  lw          $s0, 0xB8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE168u, 0x3B8E2Cu, 0x3B8E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8E34u;
label_3b8e34:
    // 0x3b8e34: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3b8e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b8e38:
    // 0x3b8e38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b8e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b8e3c:
    // 0x3b8e3c: 0xc1065f8  jal         func_4197E0
label_3b8e40:
    if (ctx->pc == 0x3B8E40u) {
        ctx->pc = 0x3B8E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8E3Cu;
        // 0x3b8e40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8E44u;
        goto label_3b8e44;
    }
    ctx->pc = 0x3B8E3Cu;
    SET_GPR_U32(ctx, 31, 0x3B8E44u);
    ctx->pc = 0x3B8E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8E3Cu;
    // 0x3b8e40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4197E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4197E0u, 0x3B8E3Cu, 0x3B8E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8E44u;
label_3b8e44:
    // 0x3b8e44: 0x8e4400b8  lw          $a0, 0xB8($s2)
    ctx->pc = 0x3b8e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_3b8e48:
    // 0x3b8e48: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x3b8e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3b8e4c:
    // 0x3b8e4c: 0x40f809  jalr        $v0
label_3b8e50:
    if (ctx->pc == 0x3B8E50u) {
        ctx->pc = 0x3B8E54u;
        goto label_3b8e54;
    }
    ctx->pc = 0x3B8E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B8E54u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B8E4Cu, 0x3B8E54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B8E54u;
label_3b8e54:
    // 0x3b8e54: 0xc0eb8ec  jal         func_3AE3B0
label_3b8e58:
    if (ctx->pc == 0x3B8E58u) {
        ctx->pc = 0x3B8E5Cu;
        goto label_3b8e5c;
    }
    ctx->pc = 0x3B8E54u;
    SET_GPR_U32(ctx, 31, 0x3B8E5Cu);
    ctx->pc = 0x3AE3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE3B0u, 0x3B8E54u, 0x3B8E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8E5Cu;
label_3b8e5c:
    // 0x3b8e5c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3b8e5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b8e60:
    // 0x3b8e60: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x3b8e60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3b8e64:
    // 0x3b8e64: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x3b8e64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3b8e68:
    // 0x3b8e68: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x3b8e68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b8e6c:
    // 0x3b8e6c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x3b8e6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b8e70:
    // 0x3b8e70: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x3b8e70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b8e74:
    // 0x3b8e74: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3b8e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3b8e78:
    // 0x3b8e78: 0x3e00008  jr          $ra
label_3b8e7c:
    if (ctx->pc == 0x3B8E7Cu) {
        ctx->pc = 0x3B8E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8E78u;
        // 0x3b8e7c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8E80u;
        goto label_fallthrough_0x3b8e78;
    }
    ctx->pc = 0x3B8E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B8E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8E78u;
        // 0x3b8e7c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B8E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b8e78:
    ctx->pc = 0x3B8E80u;
}
