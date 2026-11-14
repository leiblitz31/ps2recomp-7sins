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

// Function: sub_004A89E8
// Address: 0x4a89e8 - 0x4a8e20
void sub_004A89E8_0x4a89e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A89E8_0x4a89e8");
#endif

    switch (ctx->pc) {
        case 0x4a89e8u: goto label_4a89e8;
        case 0x4a89ecu: goto label_4a89ec;
        case 0x4a89f0u: goto label_4a89f0;
        case 0x4a89f4u: goto label_4a89f4;
        case 0x4a89f8u: goto label_4a89f8;
        case 0x4a89fcu: goto label_4a89fc;
        case 0x4a8a00u: goto label_4a8a00;
        case 0x4a8a04u: goto label_4a8a04;
        case 0x4a8a08u: goto label_4a8a08;
        case 0x4a8a0cu: goto label_4a8a0c;
        case 0x4a8a10u: goto label_4a8a10;
        case 0x4a8a14u: goto label_4a8a14;
        case 0x4a8a18u: goto label_4a8a18;
        case 0x4a8a1cu: goto label_4a8a1c;
        case 0x4a8a20u: goto label_4a8a20;
        case 0x4a8a24u: goto label_4a8a24;
        case 0x4a8a28u: goto label_4a8a28;
        case 0x4a8a2cu: goto label_4a8a2c;
        case 0x4a8a30u: goto label_4a8a30;
        case 0x4a8a34u: goto label_4a8a34;
        case 0x4a8a38u: goto label_4a8a38;
        case 0x4a8a3cu: goto label_4a8a3c;
        case 0x4a8a40u: goto label_4a8a40;
        case 0x4a8a44u: goto label_4a8a44;
        case 0x4a8a48u: goto label_4a8a48;
        case 0x4a8a4cu: goto label_4a8a4c;
        case 0x4a8a50u: goto label_4a8a50;
        case 0x4a8a54u: goto label_4a8a54;
        case 0x4a8a58u: goto label_4a8a58;
        case 0x4a8a5cu: goto label_4a8a5c;
        case 0x4a8a60u: goto label_4a8a60;
        case 0x4a8a64u: goto label_4a8a64;
        case 0x4a8a68u: goto label_4a8a68;
        case 0x4a8a6cu: goto label_4a8a6c;
        case 0x4a8a70u: goto label_4a8a70;
        case 0x4a8a74u: goto label_4a8a74;
        case 0x4a8a78u: goto label_4a8a78;
        case 0x4a8a7cu: goto label_4a8a7c;
        case 0x4a8a80u: goto label_4a8a80;
        case 0x4a8a84u: goto label_4a8a84;
        case 0x4a8a88u: goto label_4a8a88;
        case 0x4a8a8cu: goto label_4a8a8c;
        case 0x4a8a90u: goto label_4a8a90;
        case 0x4a8a94u: goto label_4a8a94;
        case 0x4a8a98u: goto label_4a8a98;
        case 0x4a8a9cu: goto label_4a8a9c;
        case 0x4a8aa0u: goto label_4a8aa0;
        case 0x4a8aa4u: goto label_4a8aa4;
        case 0x4a8aa8u: goto label_4a8aa8;
        case 0x4a8aacu: goto label_4a8aac;
        case 0x4a8ab0u: goto label_4a8ab0;
        case 0x4a8ab4u: goto label_4a8ab4;
        case 0x4a8ab8u: goto label_4a8ab8;
        case 0x4a8abcu: goto label_4a8abc;
        case 0x4a8ac0u: goto label_4a8ac0;
        case 0x4a8ac4u: goto label_4a8ac4;
        case 0x4a8ac8u: goto label_4a8ac8;
        case 0x4a8accu: goto label_4a8acc;
        case 0x4a8ad0u: goto label_4a8ad0;
        case 0x4a8ad4u: goto label_4a8ad4;
        case 0x4a8ad8u: goto label_4a8ad8;
        case 0x4a8adcu: goto label_4a8adc;
        case 0x4a8ae0u: goto label_4a8ae0;
        case 0x4a8ae4u: goto label_4a8ae4;
        case 0x4a8ae8u: goto label_4a8ae8;
        case 0x4a8aecu: goto label_4a8aec;
        case 0x4a8af0u: goto label_4a8af0;
        case 0x4a8af4u: goto label_4a8af4;
        case 0x4a8af8u: goto label_4a8af8;
        case 0x4a8afcu: goto label_4a8afc;
        case 0x4a8b00u: goto label_4a8b00;
        case 0x4a8b04u: goto label_4a8b04;
        case 0x4a8b08u: goto label_4a8b08;
        case 0x4a8b0cu: goto label_4a8b0c;
        case 0x4a8b10u: goto label_4a8b10;
        case 0x4a8b14u: goto label_4a8b14;
        case 0x4a8b18u: goto label_4a8b18;
        case 0x4a8b1cu: goto label_4a8b1c;
        case 0x4a8b20u: goto label_4a8b20;
        case 0x4a8b24u: goto label_4a8b24;
        case 0x4a8b28u: goto label_4a8b28;
        case 0x4a8b2cu: goto label_4a8b2c;
        case 0x4a8b30u: goto label_4a8b30;
        case 0x4a8b34u: goto label_4a8b34;
        case 0x4a8b38u: goto label_4a8b38;
        case 0x4a8b3cu: goto label_4a8b3c;
        case 0x4a8b40u: goto label_4a8b40;
        case 0x4a8b44u: goto label_4a8b44;
        case 0x4a8b48u: goto label_4a8b48;
        case 0x4a8b4cu: goto label_4a8b4c;
        case 0x4a8b50u: goto label_4a8b50;
        case 0x4a8b54u: goto label_4a8b54;
        case 0x4a8b58u: goto label_4a8b58;
        case 0x4a8b5cu: goto label_4a8b5c;
        case 0x4a8b60u: goto label_4a8b60;
        case 0x4a8b64u: goto label_4a8b64;
        case 0x4a8b68u: goto label_4a8b68;
        case 0x4a8b6cu: goto label_4a8b6c;
        case 0x4a8b70u: goto label_4a8b70;
        case 0x4a8b74u: goto label_4a8b74;
        case 0x4a8b78u: goto label_4a8b78;
        case 0x4a8b7cu: goto label_4a8b7c;
        case 0x4a8b80u: goto label_4a8b80;
        case 0x4a8b84u: goto label_4a8b84;
        case 0x4a8b88u: goto label_4a8b88;
        case 0x4a8b8cu: goto label_4a8b8c;
        case 0x4a8b90u: goto label_4a8b90;
        case 0x4a8b94u: goto label_4a8b94;
        case 0x4a8b98u: goto label_4a8b98;
        case 0x4a8b9cu: goto label_4a8b9c;
        case 0x4a8ba0u: goto label_4a8ba0;
        case 0x4a8ba4u: goto label_4a8ba4;
        case 0x4a8ba8u: goto label_4a8ba8;
        case 0x4a8bacu: goto label_4a8bac;
        case 0x4a8bb0u: goto label_4a8bb0;
        case 0x4a8bb4u: goto label_4a8bb4;
        case 0x4a8bb8u: goto label_4a8bb8;
        case 0x4a8bbcu: goto label_4a8bbc;
        case 0x4a8bc0u: goto label_4a8bc0;
        case 0x4a8bc4u: goto label_4a8bc4;
        case 0x4a8bc8u: goto label_4a8bc8;
        case 0x4a8bccu: goto label_4a8bcc;
        case 0x4a8bd0u: goto label_4a8bd0;
        case 0x4a8bd4u: goto label_4a8bd4;
        case 0x4a8bd8u: goto label_4a8bd8;
        case 0x4a8bdcu: goto label_4a8bdc;
        case 0x4a8be0u: goto label_4a8be0;
        case 0x4a8be4u: goto label_4a8be4;
        case 0x4a8be8u: goto label_4a8be8;
        case 0x4a8becu: goto label_4a8bec;
        case 0x4a8bf0u: goto label_4a8bf0;
        case 0x4a8bf4u: goto label_4a8bf4;
        case 0x4a8bf8u: goto label_4a8bf8;
        case 0x4a8bfcu: goto label_4a8bfc;
        case 0x4a8c00u: goto label_4a8c00;
        case 0x4a8c04u: goto label_4a8c04;
        case 0x4a8c08u: goto label_4a8c08;
        case 0x4a8c0cu: goto label_4a8c0c;
        case 0x4a8c10u: goto label_4a8c10;
        case 0x4a8c14u: goto label_4a8c14;
        case 0x4a8c18u: goto label_4a8c18;
        case 0x4a8c1cu: goto label_4a8c1c;
        case 0x4a8c20u: goto label_4a8c20;
        case 0x4a8c24u: goto label_4a8c24;
        case 0x4a8c28u: goto label_4a8c28;
        case 0x4a8c2cu: goto label_4a8c2c;
        case 0x4a8c30u: goto label_4a8c30;
        case 0x4a8c34u: goto label_4a8c34;
        case 0x4a8c38u: goto label_4a8c38;
        case 0x4a8c3cu: goto label_4a8c3c;
        case 0x4a8c40u: goto label_4a8c40;
        case 0x4a8c44u: goto label_4a8c44;
        case 0x4a8c48u: goto label_4a8c48;
        case 0x4a8c4cu: goto label_4a8c4c;
        case 0x4a8c50u: goto label_4a8c50;
        case 0x4a8c54u: goto label_4a8c54;
        case 0x4a8c58u: goto label_4a8c58;
        case 0x4a8c5cu: goto label_4a8c5c;
        case 0x4a8c60u: goto label_4a8c60;
        case 0x4a8c64u: goto label_4a8c64;
        case 0x4a8c68u: goto label_4a8c68;
        case 0x4a8c6cu: goto label_4a8c6c;
        case 0x4a8c70u: goto label_4a8c70;
        case 0x4a8c74u: goto label_4a8c74;
        case 0x4a8c78u: goto label_4a8c78;
        case 0x4a8c7cu: goto label_4a8c7c;
        case 0x4a8c80u: goto label_4a8c80;
        case 0x4a8c84u: goto label_4a8c84;
        case 0x4a8c88u: goto label_4a8c88;
        case 0x4a8c8cu: goto label_4a8c8c;
        case 0x4a8c90u: goto label_4a8c90;
        case 0x4a8c94u: goto label_4a8c94;
        case 0x4a8c98u: goto label_4a8c98;
        case 0x4a8c9cu: goto label_4a8c9c;
        case 0x4a8ca0u: goto label_4a8ca0;
        case 0x4a8ca4u: goto label_4a8ca4;
        case 0x4a8ca8u: goto label_4a8ca8;
        case 0x4a8cacu: goto label_4a8cac;
        case 0x4a8cb0u: goto label_4a8cb0;
        case 0x4a8cb4u: goto label_4a8cb4;
        case 0x4a8cb8u: goto label_4a8cb8;
        case 0x4a8cbcu: goto label_4a8cbc;
        case 0x4a8cc0u: goto label_4a8cc0;
        case 0x4a8cc4u: goto label_4a8cc4;
        case 0x4a8cc8u: goto label_4a8cc8;
        case 0x4a8cccu: goto label_4a8ccc;
        case 0x4a8cd0u: goto label_4a8cd0;
        case 0x4a8cd4u: goto label_4a8cd4;
        case 0x4a8cd8u: goto label_4a8cd8;
        case 0x4a8cdcu: goto label_4a8cdc;
        case 0x4a8ce0u: goto label_4a8ce0;
        case 0x4a8ce4u: goto label_4a8ce4;
        case 0x4a8ce8u: goto label_4a8ce8;
        case 0x4a8cecu: goto label_4a8cec;
        case 0x4a8cf0u: goto label_4a8cf0;
        case 0x4a8cf4u: goto label_4a8cf4;
        case 0x4a8cf8u: goto label_4a8cf8;
        case 0x4a8cfcu: goto label_4a8cfc;
        case 0x4a8d00u: goto label_4a8d00;
        case 0x4a8d04u: goto label_4a8d04;
        case 0x4a8d08u: goto label_4a8d08;
        case 0x4a8d0cu: goto label_4a8d0c;
        case 0x4a8d10u: goto label_4a8d10;
        case 0x4a8d14u: goto label_4a8d14;
        case 0x4a8d18u: goto label_4a8d18;
        case 0x4a8d1cu: goto label_4a8d1c;
        case 0x4a8d20u: goto label_4a8d20;
        case 0x4a8d24u: goto label_4a8d24;
        case 0x4a8d28u: goto label_4a8d28;
        case 0x4a8d2cu: goto label_4a8d2c;
        case 0x4a8d30u: goto label_4a8d30;
        case 0x4a8d34u: goto label_4a8d34;
        case 0x4a8d38u: goto label_4a8d38;
        case 0x4a8d3cu: goto label_4a8d3c;
        case 0x4a8d40u: goto label_4a8d40;
        case 0x4a8d44u: goto label_4a8d44;
        case 0x4a8d48u: goto label_4a8d48;
        case 0x4a8d4cu: goto label_4a8d4c;
        case 0x4a8d50u: goto label_4a8d50;
        case 0x4a8d54u: goto label_4a8d54;
        case 0x4a8d58u: goto label_4a8d58;
        case 0x4a8d5cu: goto label_4a8d5c;
        case 0x4a8d60u: goto label_4a8d60;
        case 0x4a8d64u: goto label_4a8d64;
        case 0x4a8d68u: goto label_4a8d68;
        case 0x4a8d6cu: goto label_4a8d6c;
        case 0x4a8d70u: goto label_4a8d70;
        case 0x4a8d74u: goto label_4a8d74;
        case 0x4a8d78u: goto label_4a8d78;
        case 0x4a8d7cu: goto label_4a8d7c;
        case 0x4a8d80u: goto label_4a8d80;
        case 0x4a8d84u: goto label_4a8d84;
        case 0x4a8d88u: goto label_4a8d88;
        case 0x4a8d8cu: goto label_4a8d8c;
        case 0x4a8d90u: goto label_4a8d90;
        case 0x4a8d94u: goto label_4a8d94;
        case 0x4a8d98u: goto label_4a8d98;
        case 0x4a8d9cu: goto label_4a8d9c;
        case 0x4a8da0u: goto label_4a8da0;
        case 0x4a8da4u: goto label_4a8da4;
        case 0x4a8da8u: goto label_4a8da8;
        case 0x4a8dacu: goto label_4a8dac;
        case 0x4a8db0u: goto label_4a8db0;
        case 0x4a8db4u: goto label_4a8db4;
        case 0x4a8db8u: goto label_4a8db8;
        case 0x4a8dbcu: goto label_4a8dbc;
        case 0x4a8dc0u: goto label_4a8dc0;
        case 0x4a8dc4u: goto label_4a8dc4;
        case 0x4a8dc8u: goto label_4a8dc8;
        case 0x4a8dccu: goto label_4a8dcc;
        case 0x4a8dd0u: goto label_4a8dd0;
        case 0x4a8dd4u: goto label_4a8dd4;
        case 0x4a8dd8u: goto label_4a8dd8;
        case 0x4a8ddcu: goto label_4a8ddc;
        case 0x4a8de0u: goto label_4a8de0;
        case 0x4a8de4u: goto label_4a8de4;
        case 0x4a8de8u: goto label_4a8de8;
        case 0x4a8decu: goto label_4a8dec;
        case 0x4a8df0u: goto label_4a8df0;
        case 0x4a8df4u: goto label_4a8df4;
        case 0x4a8df8u: goto label_4a8df8;
        case 0x4a8dfcu: goto label_4a8dfc;
        case 0x4a8e00u: goto label_4a8e00;
        case 0x4a8e04u: goto label_4a8e04;
        case 0x4a8e08u: goto label_4a8e08;
        case 0x4a8e0cu: goto label_4a8e0c;
        case 0x4a8e10u: goto label_4a8e10;
        case 0x4a8e14u: goto label_4a8e14;
        case 0x4a8e18u: goto label_4a8e18;
        case 0x4a8e1cu: goto label_4a8e1c;
        default: break;
    }

    ctx->pc = 0x4a89e8u;

label_4a89e8:
    // 0x4a89e8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4a89e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a89ec:
    // 0x4a89ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4a89ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a89f0:
    // 0x4a89f0: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4a89f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4a89f4:
    // 0x4a89f4: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x4a89f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4a89f8:
    // 0x4a89f8: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_4a89fc:
    if (ctx->pc == 0x4A89FCu) {
        ctx->pc = 0x4A89FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A89F8u;
        // 0x4a89fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8A00u;
        goto label_4a8a00;
    }
    ctx->pc = 0x4A89F8u;
    {
        const bool branch_taken_0x4a89f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A89FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A89F8u;
        // 0x4a89fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a89f8) {
            ctx->pc = 0x4A8B08u;
            goto label_4a8b08;
        }
    }
    ctx->pc = 0x4A8A00u;
label_4a8a00:
    // 0x4a8a00: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x4a8a00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4a8a04:
    // 0x4a8a04: 0x0  nop
    ctx->pc = 0x4a8a04u;
    // NOP
label_4a8a08:
    // 0x4a8a08: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x4a8a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_4a8a0c:
    // 0x4a8a0c: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
label_4a8a10:
    if (ctx->pc == 0x4A8A10u) {
        ctx->pc = 0x4A8A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A0Cu;
        // 0x4a8a10: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8A14u;
        goto label_4a8a14;
    }
    ctx->pc = 0x4A8A0Cu;
    {
        const bool branch_taken_0x4a8a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A8A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A0Cu;
        // 0x4a8a10: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8a0c) {
            ctx->pc = 0x4A8AE4u;
            goto label_4a8ae4;
        }
    }
    ctx->pc = 0x4A8A14u;
label_4a8a14:
    // 0x4a8a14: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x4a8a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_4a8a18:
    // 0x4a8a18: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x4a8a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_4a8a1c:
    // 0x4a8a1c: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x4a8a1cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
label_4a8a20:
    // 0x4a8a20: 0x2c830017  sltiu       $v1, $a0, 0x17
    ctx->pc = 0x4a8a20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
label_4a8a24:
    // 0x4a8a24: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
label_4a8a28:
    if (ctx->pc == 0x4A8A28u) {
        ctx->pc = 0x4A8A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A24u;
        // 0x4a8a28: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8A2Cu;
        goto label_4a8a2c;
    }
    ctx->pc = 0x4A8A24u;
    {
        const bool branch_taken_0x4a8a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A24u;
        // 0x4a8a28: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8a24) {
            ctx->pc = 0x4A8AC0u;
            goto label_4a8ac0;
        }
    }
    ctx->pc = 0x4A8A2Cu;
label_4a8a2c:
    // 0x4a8a2c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4a8a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4a8a30:
    // 0x4a8a30: 0x244226d0  addiu       $v0, $v0, 0x26D0
    ctx->pc = 0x4a8a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9936));
label_4a8a34:
    // 0x4a8a34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a8a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4a8a38:
    // 0x4a8a38: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4a8a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4a8a3c:
    // 0x4a8a3c: 0x800008  jr          $a0
label_4a8a40:
    if (ctx->pc == 0x4A8A40u) {
        ctx->pc = 0x4A8A44u;
        goto label_4a8a44;
    }
    ctx->pc = 0x4A8A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4A8A48u: goto label_4a8a48;
            case 0x4A8A50u: goto label_4a8a50;
            case 0x4A8A58u: goto label_4a8a58;
            case 0x4A8A60u: goto label_4a8a60;
            case 0x4A8A68u: goto label_4a8a68;
            case 0x4A8A70u: goto label_4a8a70;
            case 0x4A8A78u: goto label_4a8a78;
            case 0x4A8A80u: goto label_4a8a80;
            case 0x4A8A88u: goto label_4a8a88;
            case 0x4A8A90u: goto label_4a8a90;
            case 0x4A8A98u: goto label_4a8a98;
            case 0x4A8AA0u: goto label_4a8aa0;
            case 0x4A8AA8u: goto label_4a8aa8;
            case 0x4A8AB0u: goto label_4a8ab0;
            case 0x4A8AB8u: goto label_4a8ab8;
            case 0x4A8AC0u: goto label_4a8ac0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8A3Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4A8A44u;
label_4a8a44:
    // 0x4a8a44: 0x0  nop
    ctx->pc = 0x4a8a44u;
    // NOP
label_4a8a48:
    // 0x4a8a48: 0x1000001e  b           . + 4 + (0x1E << 2)
label_4a8a4c:
    if (ctx->pc == 0x4A8A4Cu) {
        ctx->pc = 0x4A8A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A48u;
        // 0x4a8a4c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8A50u;
        goto label_4a8a50;
    }
    ctx->pc = 0x4A8A48u;
    {
        const bool branch_taken_0x4a8a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A48u;
        // 0x4a8a4c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8a48) {
            ctx->pc = 0x4A8AC4u;
            goto label_4a8ac4;
        }
    }
    ctx->pc = 0x4A8A50u;
label_4a8a50:
    // 0x4a8a50: 0x1000001c  b           . + 4 + (0x1C << 2)
label_4a8a54:
    if (ctx->pc == 0x4A8A54u) {
        ctx->pc = 0x4A8A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A50u;
        // 0x4a8a54: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8A58u;
        goto label_4a8a58;
    }
    ctx->pc = 0x4A8A50u;
    {
        const bool branch_taken_0x4a8a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A50u;
        // 0x4a8a54: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8a50) {
            ctx->pc = 0x4A8AC4u;
            goto label_4a8ac4;
        }
    }
    ctx->pc = 0x4A8A58u;
label_4a8a58:
    // 0x4a8a58: 0x1000001a  b           . + 4 + (0x1A << 2)
label_4a8a5c:
    if (ctx->pc == 0x4A8A5Cu) {
        ctx->pc = 0x4A8A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A58u;
        // 0x4a8a5c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8A60u;
        goto label_4a8a60;
    }
    ctx->pc = 0x4A8A58u;
    {
        const bool branch_taken_0x4a8a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A58u;
        // 0x4a8a5c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8a58) {
            ctx->pc = 0x4A8AC4u;
            goto label_4a8ac4;
        }
    }
    ctx->pc = 0x4A8A60u;
label_4a8a60:
    // 0x4a8a60: 0x10000018  b           . + 4 + (0x18 << 2)
label_4a8a64:
    if (ctx->pc == 0x4A8A64u) {
        ctx->pc = 0x4A8A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A60u;
        // 0x4a8a64: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8A68u;
        goto label_4a8a68;
    }
    ctx->pc = 0x4A8A60u;
    {
        const bool branch_taken_0x4a8a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A60u;
        // 0x4a8a64: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8a60) {
            ctx->pc = 0x4A8AC4u;
            goto label_4a8ac4;
        }
    }
    ctx->pc = 0x4A8A68u;
label_4a8a68:
    // 0x4a8a68: 0x10000016  b           . + 4 + (0x16 << 2)
label_4a8a6c:
    if (ctx->pc == 0x4A8A6Cu) {
        ctx->pc = 0x4A8A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A68u;
        // 0x4a8a6c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8A70u;
        goto label_4a8a70;
    }
    ctx->pc = 0x4A8A68u;
    {
        const bool branch_taken_0x4a8a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A68u;
        // 0x4a8a6c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8a68) {
            ctx->pc = 0x4A8AC4u;
            goto label_4a8ac4;
        }
    }
    ctx->pc = 0x4A8A70u;
label_4a8a70:
    // 0x4a8a70: 0x10000014  b           . + 4 + (0x14 << 2)
label_4a8a74:
    if (ctx->pc == 0x4A8A74u) {
        ctx->pc = 0x4A8A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A70u;
        // 0x4a8a74: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8A78u;
        goto label_4a8a78;
    }
    ctx->pc = 0x4A8A70u;
    {
        const bool branch_taken_0x4a8a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A70u;
        // 0x4a8a74: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8a70) {
            ctx->pc = 0x4A8AC4u;
            goto label_4a8ac4;
        }
    }
    ctx->pc = 0x4A8A78u;
label_4a8a78:
    // 0x4a8a78: 0x10000012  b           . + 4 + (0x12 << 2)
label_4a8a7c:
    if (ctx->pc == 0x4A8A7Cu) {
        ctx->pc = 0x4A8A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A78u;
        // 0x4a8a7c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8A80u;
        goto label_4a8a80;
    }
    ctx->pc = 0x4A8A78u;
    {
        const bool branch_taken_0x4a8a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A78u;
        // 0x4a8a7c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8a78) {
            ctx->pc = 0x4A8AC4u;
            goto label_4a8ac4;
        }
    }
    ctx->pc = 0x4A8A80u;
label_4a8a80:
    // 0x4a8a80: 0x10000010  b           . + 4 + (0x10 << 2)
label_4a8a84:
    if (ctx->pc == 0x4A8A84u) {
        ctx->pc = 0x4A8A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A80u;
        // 0x4a8a84: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8A88u;
        goto label_4a8a88;
    }
    ctx->pc = 0x4A8A80u;
    {
        const bool branch_taken_0x4a8a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A80u;
        // 0x4a8a84: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8a80) {
            ctx->pc = 0x4A8AC4u;
            goto label_4a8ac4;
        }
    }
    ctx->pc = 0x4A8A88u;
label_4a8a88:
    // 0x4a8a88: 0x1000000e  b           . + 4 + (0xE << 2)
label_4a8a8c:
    if (ctx->pc == 0x4A8A8Cu) {
        ctx->pc = 0x4A8A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A88u;
        // 0x4a8a8c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8A90u;
        goto label_4a8a90;
    }
    ctx->pc = 0x4A8A88u;
    {
        const bool branch_taken_0x4a8a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A88u;
        // 0x4a8a8c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8a88) {
            ctx->pc = 0x4A8AC4u;
            goto label_4a8ac4;
        }
    }
    ctx->pc = 0x4A8A90u;
label_4a8a90:
    // 0x4a8a90: 0x1000000c  b           . + 4 + (0xC << 2)
label_4a8a94:
    if (ctx->pc == 0x4A8A94u) {
        ctx->pc = 0x4A8A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A90u;
        // 0x4a8a94: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8A98u;
        goto label_4a8a98;
    }
    ctx->pc = 0x4A8A90u;
    {
        const bool branch_taken_0x4a8a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A90u;
        // 0x4a8a94: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8a90) {
            ctx->pc = 0x4A8AC4u;
            goto label_4a8ac4;
        }
    }
    ctx->pc = 0x4A8A98u;
label_4a8a98:
    // 0x4a8a98: 0x1000000a  b           . + 4 + (0xA << 2)
label_4a8a9c:
    if (ctx->pc == 0x4A8A9Cu) {
        ctx->pc = 0x4A8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A98u;
        // 0x4a8a9c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8AA0u;
        goto label_4a8aa0;
    }
    ctx->pc = 0x4A8A98u;
    {
        const bool branch_taken_0x4a8a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8A98u;
        // 0x4a8a9c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8a98) {
            ctx->pc = 0x4A8AC4u;
            goto label_4a8ac4;
        }
    }
    ctx->pc = 0x4A8AA0u;
label_4a8aa0:
    // 0x4a8aa0: 0x10000008  b           . + 4 + (0x8 << 2)
label_4a8aa4:
    if (ctx->pc == 0x4A8AA4u) {
        ctx->pc = 0x4A8AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8AA0u;
        // 0x4a8aa4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8AA8u;
        goto label_4a8aa8;
    }
    ctx->pc = 0x4A8AA0u;
    {
        const bool branch_taken_0x4a8aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8AA0u;
        // 0x4a8aa4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8aa0) {
            ctx->pc = 0x4A8AC4u;
            goto label_4a8ac4;
        }
    }
    ctx->pc = 0x4A8AA8u;
label_4a8aa8:
    // 0x4a8aa8: 0x10000006  b           . + 4 + (0x6 << 2)
label_4a8aac:
    if (ctx->pc == 0x4A8AACu) {
        ctx->pc = 0x4A8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8AA8u;
        // 0x4a8aac: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8AB0u;
        goto label_4a8ab0;
    }
    ctx->pc = 0x4A8AA8u;
    {
        const bool branch_taken_0x4a8aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8AA8u;
        // 0x4a8aac: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8aa8) {
            ctx->pc = 0x4A8AC4u;
            goto label_4a8ac4;
        }
    }
    ctx->pc = 0x4A8AB0u;
label_4a8ab0:
    // 0x4a8ab0: 0x10000004  b           . + 4 + (0x4 << 2)
label_4a8ab4:
    if (ctx->pc == 0x4A8AB4u) {
        ctx->pc = 0x4A8AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8AB0u;
        // 0x4a8ab4: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8AB8u;
        goto label_4a8ab8;
    }
    ctx->pc = 0x4A8AB0u;
    {
        const bool branch_taken_0x4a8ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8AB0u;
        // 0x4a8ab4: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8ab0) {
            ctx->pc = 0x4A8AC4u;
            goto label_4a8ac4;
        }
    }
    ctx->pc = 0x4A8AB8u;
label_4a8ab8:
    // 0x4a8ab8: 0x10000002  b           . + 4 + (0x2 << 2)
label_4a8abc:
    if (ctx->pc == 0x4A8ABCu) {
        ctx->pc = 0x4A8ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8AB8u;
        // 0x4a8abc: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8AC0u;
        goto label_4a8ac0;
    }
    ctx->pc = 0x4A8AB8u;
    {
        const bool branch_taken_0x4a8ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8AB8u;
        // 0x4a8abc: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8ab8) {
            ctx->pc = 0x4A8AC4u;
            goto label_4a8ac4;
        }
    }
    ctx->pc = 0x4A8AC0u;
label_4a8ac0:
    // 0x4a8ac0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4a8ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a8ac4:
    // 0x4a8ac4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a8ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a8ac8:
    // 0x4a8ac8: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x4a8ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4a8acc:
    // 0x4a8acc: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4a8accu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_4a8ad0:
    // 0x4a8ad0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4a8ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4a8ad4:
    // 0x4a8ad4: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x4a8ad4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4a8ad8:
    // 0x4a8ad8: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x4a8ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_4a8adc:
    // 0x4a8adc: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x4a8adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_4a8ae0:
    // 0x4a8ae0: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x4a8ae0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4a8ae4:
    // 0x4a8ae4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4a8ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4a8ae8:
    // 0x4a8ae8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x4a8ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4a8aec:
    // 0x4a8aec: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4a8aecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_4a8af0:
    // 0x4a8af0: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x4a8af0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_4a8af4:
    // 0x4a8af4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4a8af8:
    if (ctx->pc == 0x4A8AF8u) {
        ctx->pc = 0x4A8AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8AF4u;
        // 0x4a8af8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8AFCu;
        goto label_4a8afc;
    }
    ctx->pc = 0x4A8AF4u;
    {
        const bool branch_taken_0x4a8af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8AF4u;
        // 0x4a8af8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8af4) {
            ctx->pc = 0x4A8B08u;
            goto label_4a8b08;
        }
    }
    ctx->pc = 0x4A8AFCu;
label_4a8afc:
    // 0x4a8afc: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x4a8afcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_4a8b00:
    // 0x4a8b00: 0x5440ffc1  bnel        $v0, $zero, . + 4 + (-0x3F << 2)
label_4a8b04:
    if (ctx->pc == 0x4A8B04u) {
        ctx->pc = 0x4A8B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8B00u;
        // 0x4a8b04: 0x80a30000  lb          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8B08u;
        goto label_4a8b08;
    }
    ctx->pc = 0x4A8B00u;
    {
        const bool branch_taken_0x4a8b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a8b00) {
            ctx->pc = 0x4A8B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8B00u;
            // 0x4a8b04: 0x80a30000  lb          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8a08;
        }
    }
    ctx->pc = 0x4A8B08u;
label_4a8b08:
    // 0x4a8b08: 0x3e00008  jr          $ra
label_4a8b0c:
    if (ctx->pc == 0x4A8B0Cu) {
        ctx->pc = 0x4A8B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8B08u;
        // 0x4a8b0c: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8B10u;
        goto label_4a8b10;
    }
    ctx->pc = 0x4A8B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8B08u;
        // 0x4a8b0c: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8B10u;
label_4a8b10:
    // 0x4a8b10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4a8b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4a8b14:
    // 0x4a8b14: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4a8b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4a8b18:
    // 0x4a8b18: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4a8b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4a8b1c:
    // 0x4a8b1c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x4a8b1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a8b20:
    // 0x4a8b20: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4a8b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4a8b24:
    // 0x4a8b24: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x4a8b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a8b28:
    // 0x4a8b28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4a8b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4a8b2c:
    // 0x4a8b2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a8b2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a8b30:
    // 0x4a8b30: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4a8b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4a8b34:
    // 0x4a8b34: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4a8b34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a8b38:
    // 0x4a8b38: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4a8b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4a8b3c:
    // 0x4a8b3c: 0x10e00018  beqz        $a3, . + 4 + (0x18 << 2)
label_4a8b40:
    if (ctx->pc == 0x4A8B40u) {
        ctx->pc = 0x4A8B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8B3Cu;
        // 0x4a8b40: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8B44u;
        goto label_4a8b44;
    }
    ctx->pc = 0x4A8B3Cu;
    {
        const bool branch_taken_0x4a8b3c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8B3Cu;
        // 0x4a8b40: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8b3c) {
            ctx->pc = 0x4A8BA0u;
            goto label_4a8ba0;
        }
    }
    ctx->pc = 0x4A8B44u;
label_4a8b44:
    // 0x4a8b44: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
label_4a8b48:
    if (ctx->pc == 0x4A8B48u) {
        ctx->pc = 0x4A8B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8B44u;
        // 0x4a8b48: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8B4Cu;
        goto label_4a8b4c;
    }
    ctx->pc = 0x4A8B44u;
    {
        const bool branch_taken_0x4a8b44 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8B44u;
        // 0x4a8b48: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8b44) {
            ctx->pc = 0x4A8B7Cu;
            goto label_4a8b7c;
        }
    }
    ctx->pc = 0x4A8B4Cu;
label_4a8b4c:
    // 0x4a8b4c: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x4a8b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
label_4a8b50:
    // 0x4a8b50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a8b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a8b54:
    // 0x4a8b54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a8b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a8b58:
    // 0x4a8b58: 0xc12acd0  jal         func_4AB340
label_4a8b5c:
    if (ctx->pc == 0x4A8B5Cu) {
        ctx->pc = 0x4A8B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8B58u;
        // 0x4a8b5c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8B60u;
        goto label_4a8b60;
    }
    ctx->pc = 0x4A8B58u;
    SET_GPR_U32(ctx, 31, 0x4A8B60u);
    ctx->pc = 0x4A8B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8B58u;
    // 0x4a8b5c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A8B58u, 0x4A8B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8B60u;
label_4a8b60:
    // 0x4a8b60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a8b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a8b64:
    // 0x4a8b64: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x4a8b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4a8b68:
    // 0x4a8b68: 0xc12acd0  jal         func_4AB340
label_4a8b6c:
    if (ctx->pc == 0x4A8B6Cu) {
        ctx->pc = 0x4A8B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8B68u;
        // 0x4a8b6c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8B70u;
        goto label_4a8b70;
    }
    ctx->pc = 0x4A8B68u;
    SET_GPR_U32(ctx, 31, 0x4A8B70u);
    ctx->pc = 0x4A8B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8B68u;
    // 0x4a8b6c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A8B68u, 0x4A8B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8B70u;
label_4a8b70:
    // 0x4a8b70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a8b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a8b74:
    // 0x4a8b74: 0x10000017  b           . + 4 + (0x17 << 2)
label_4a8b78:
    if (ctx->pc == 0x4A8B78u) {
        ctx->pc = 0x4A8B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8B74u;
        // 0x4a8b78: 0x26450008  addiu       $a1, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8B7Cu;
        goto label_4a8b7c;
    }
    ctx->pc = 0x4A8B74u;
    {
        const bool branch_taken_0x4a8b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8B74u;
        // 0x4a8b78: 0x26450008  addiu       $a1, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8b74) {
            ctx->pc = 0x4A8BD4u;
            goto label_4a8bd4;
        }
    }
    ctx->pc = 0x4A8B7Cu;
label_4a8b7c:
    // 0x4a8b7c: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x4a8b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4a8b80:
    // 0x4a8b80: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x4a8b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4a8b84:
    // 0x4a8b84: 0x8a43000b  lwl         $v1, 0xB($s2)
    ctx->pc = 0x4a8b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_4a8b88:
    // 0x4a8b88: 0x9a430008  lwr         $v1, 0x8($s2)
    ctx->pc = 0x4a8b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_4a8b8c:
    // 0x4a8b8c: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x4a8b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a8b90:
    // 0x4a8b90: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x4a8b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a8b94:
    // 0x4a8b94: 0xaa23000b  swl         $v1, 0xB($s1)
    ctx->pc = 0x4a8b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_4a8b98:
    // 0x4a8b98: 0x1000001a  b           . + 4 + (0x1A << 2)
label_4a8b9c:
    if (ctx->pc == 0x4A8B9Cu) {
        ctx->pc = 0x4A8B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8B98u;
        // 0x4a8b9c: 0xba230008  swr         $v1, 0x8($s1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8BA0u;
        goto label_4a8ba0;
    }
    ctx->pc = 0x4A8B98u;
    {
        const bool branch_taken_0x4a8b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8B98u;
        // 0x4a8b9c: 0xba230008  swr         $v1, 0x8($s1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8b98) {
            ctx->pc = 0x4A8C04u;
            goto label_4a8c04;
        }
    }
    ctx->pc = 0x4A8BA0u;
label_4a8ba0:
    // 0x4a8ba0: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
label_4a8ba4:
    if (ctx->pc == 0x4A8BA4u) {
        ctx->pc = 0x4A8BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8BA0u;
        // 0x4a8ba4: 0x27b00014  addiu       $s0, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8BA8u;
        goto label_4a8ba8;
    }
    ctx->pc = 0x4A8BA0u;
    {
        const bool branch_taken_0x4a8ba0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8BA0u;
        // 0x4a8ba4: 0x27b00014  addiu       $s0, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8ba0) {
            ctx->pc = 0x4A8BE4u;
            goto label_4a8be4;
        }
    }
    ctx->pc = 0x4A8BA8u;
label_4a8ba8:
    // 0x4a8ba8: 0xafb20014  sw          $s2, 0x14($sp)
    ctx->pc = 0x4a8ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 18));
label_4a8bac:
    // 0x4a8bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a8bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a8bb0:
    // 0x4a8bb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a8bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a8bb4:
    // 0x4a8bb4: 0xc12acd0  jal         func_4AB340
label_4a8bb8:
    if (ctx->pc == 0x4A8BB8u) {
        ctx->pc = 0x4A8BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8BB4u;
        // 0x4a8bb8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8BBCu;
        goto label_4a8bbc;
    }
    ctx->pc = 0x4A8BB4u;
    SET_GPR_U32(ctx, 31, 0x4A8BBCu);
    ctx->pc = 0x4A8BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8BB4u;
    // 0x4a8bb8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A8BB4u, 0x4A8BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8BBCu;
label_4a8bbc:
    // 0x4a8bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a8bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a8bc0:
    // 0x4a8bc0: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x4a8bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_4a8bc4:
    // 0x4a8bc4: 0xc12acd0  jal         func_4AB340
label_4a8bc8:
    if (ctx->pc == 0x4A8BC8u) {
        ctx->pc = 0x4A8BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8BC4u;
        // 0x4a8bc8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8BCCu;
        goto label_4a8bcc;
    }
    ctx->pc = 0x4A8BC4u;
    SET_GPR_U32(ctx, 31, 0x4A8BCCu);
    ctx->pc = 0x4A8BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8BC4u;
    // 0x4a8bc8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A8BC4u, 0x4A8BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8BCCu;
label_4a8bcc:
    // 0x4a8bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a8bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a8bd0:
    // 0x4a8bd0: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x4a8bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_4a8bd4:
    // 0x4a8bd4: 0xc12acd0  jal         func_4AB340
label_4a8bd8:
    if (ctx->pc == 0x4A8BD8u) {
        ctx->pc = 0x4A8BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8BD4u;
        // 0x4a8bd8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8BDCu;
        goto label_4a8bdc;
    }
    ctx->pc = 0x4A8BD4u;
    SET_GPR_U32(ctx, 31, 0x4A8BDCu);
    ctx->pc = 0x4A8BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8BD4u;
    // 0x4a8bd8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A8BD4u, 0x4A8BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8BDCu;
label_4a8bdc:
    // 0x4a8bdc: 0x1000000a  b           . + 4 + (0xA << 2)
label_4a8be0:
    if (ctx->pc == 0x4A8BE0u) {
        ctx->pc = 0x4A8BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8BDCu;
        // 0x4a8be0: 0x8e530000  lw          $s3, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8BE4u;
        goto label_4a8be4;
    }
    ctx->pc = 0x4A8BDCu;
    {
        const bool branch_taken_0x4a8bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8BDCu;
        // 0x4a8be0: 0x8e530000  lw          $s3, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8bdc) {
            ctx->pc = 0x4A8C08u;
            goto label_4a8c08;
        }
    }
    ctx->pc = 0x4A8BE4u;
label_4a8be4:
    // 0x4a8be4: 0x6a260007  ldl         $a2, 0x7($s1)
    ctx->pc = 0x4a8be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_4a8be8:
    // 0x4a8be8: 0x6e260000  ldr         $a2, 0x0($s1)
    ctx->pc = 0x4a8be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_4a8bec:
    // 0x4a8bec: 0x8a22000b  lwl         $v0, 0xB($s1)
    ctx->pc = 0x4a8becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_4a8bf0:
    // 0x4a8bf0: 0x9a220008  lwr         $v0, 0x8($s1)
    ctx->pc = 0x4a8bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_4a8bf4:
    // 0x4a8bf4: 0xb2460007  sdl         $a2, 0x7($s2)
    ctx->pc = 0x4a8bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a8bf8:
    // 0x4a8bf8: 0xb6460000  sdr         $a2, 0x0($s2)
    ctx->pc = 0x4a8bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a8bfc:
    // 0x4a8bfc: 0xaa42000b  swl         $v0, 0xB($s2)
    ctx->pc = 0x4a8bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_4a8c00:
    // 0x4a8c00: 0xba420008  swr         $v0, 0x8($s2)
    ctx->pc = 0x4a8c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_4a8c04:
    // 0x4a8c04: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x4a8c04u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a8c08:
    // 0x4a8c08: 0x12600030  beqz        $s3, . + 4 + (0x30 << 2)
label_4a8c0c:
    if (ctx->pc == 0x4A8C0Cu) {
        ctx->pc = 0x4A8C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8C08u;
        // 0x4a8c0c: 0x26b1000c  addiu       $s1, $s5, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8C10u;
        goto label_4a8c10;
    }
    ctx->pc = 0x4A8C08u;
    {
        const bool branch_taken_0x4a8c08 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8C08u;
        // 0x4a8c0c: 0x26b1000c  addiu       $s1, $s5, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8c08) {
            ctx->pc = 0x4A8CCCu;
            goto label_4a8ccc;
        }
    }
    ctx->pc = 0x4A8C10u;
label_4a8c10:
    // 0x4a8c10: 0x1280001d  beqz        $s4, . + 4 + (0x1D << 2)
label_4a8c14:
    if (ctx->pc == 0x4A8C14u) {
        ctx->pc = 0x4A8C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8C10u;
        // 0x4a8c14: 0x27b00018  addiu       $s0, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8C18u;
        goto label_4a8c18;
    }
    ctx->pc = 0x4A8C10u;
    {
        const bool branch_taken_0x4a8c10 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8C10u;
        // 0x4a8c14: 0x27b00018  addiu       $s0, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8c10) {
            ctx->pc = 0x4A8C88u;
            goto label_4a8c88;
        }
    }
    ctx->pc = 0x4A8C18u;
label_4a8c18:
    // 0x4a8c18: 0xafbd0018  sw          $sp, 0x18($sp)
    ctx->pc = 0x4a8c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 29));
label_4a8c1c:
    // 0x4a8c1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a8c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a8c20:
    // 0x4a8c20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4a8c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a8c24:
    // 0x4a8c24: 0xc12acd0  jal         func_4AB340
label_4a8c28:
    if (ctx->pc == 0x4A8C28u) {
        ctx->pc = 0x4A8C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8C24u;
        // 0x4a8c28: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8C2Cu;
        goto label_4a8c2c;
    }
    ctx->pc = 0x4A8C24u;
    SET_GPR_U32(ctx, 31, 0x4A8C2Cu);
    ctx->pc = 0x4A8C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8C24u;
    // 0x4a8c28: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A8C24u, 0x4A8C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8C2Cu;
label_4a8c2c:
    // 0x4a8c2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a8c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a8c30:
    // 0x4a8c30: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x4a8c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_4a8c34:
    // 0x4a8c34: 0xc12acd0  jal         func_4AB340
label_4a8c38:
    if (ctx->pc == 0x4A8C38u) {
        ctx->pc = 0x4A8C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8C34u;
        // 0x4a8c38: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8C3Cu;
        goto label_4a8c3c;
    }
    ctx->pc = 0x4A8C34u;
    SET_GPR_U32(ctx, 31, 0x4A8C3Cu);
    ctx->pc = 0x4A8C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8C34u;
    // 0x4a8c38: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A8C34u, 0x4A8C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8C3Cu;
label_4a8c3c:
    // 0x4a8c3c: 0x26650006  addiu       $a1, $s3, 0x6
    ctx->pc = 0x4a8c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
label_4a8c40:
    // 0x4a8c40: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4a8c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4a8c44:
    // 0x4a8c44: 0xc12acd0  jal         func_4AB340
label_4a8c48:
    if (ctx->pc == 0x4A8C48u) {
        ctx->pc = 0x4A8C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8C44u;
        // 0x4a8c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8C4Cu;
        goto label_4a8c4c;
    }
    ctx->pc = 0x4A8C44u;
    SET_GPR_U32(ctx, 31, 0x4A8C4Cu);
    ctx->pc = 0x4A8C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8C44u;
    // 0x4a8c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A8C44u, 0x4A8C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8C4Cu;
label_4a8c4c:
    // 0x4a8c4c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x4a8c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_4a8c50:
    // 0x4a8c50: 0x6a65000f  ldl         $a1, 0xF($s3)
    ctx->pc = 0x4a8c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_4a8c54:
    // 0x4a8c54: 0x6e650008  ldr         $a1, 0x8($s3)
    ctx->pc = 0x4a8c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4a8c58:
    // 0x4a8c58: 0xb0450007  sdl         $a1, 0x7($v0)
    ctx->pc = 0x4a8c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a8c5c:
    // 0x4a8c5c: 0xb4450000  sdr         $a1, 0x0($v0)
    ctx->pc = 0x4a8c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a8c60:
    // 0x4a8c60: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x4a8c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_4a8c64:
    // 0x4a8c64: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x4a8c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4a8c68:
    // 0x4a8c68: 0x6ba6000f  ldl         $a2, 0xF($sp)
    ctx->pc = 0x4a8c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_4a8c6c:
    // 0x4a8c6c: 0x6fa60008  ldr         $a2, 0x8($sp)
    ctx->pc = 0x4a8c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_4a8c70:
    // 0x4a8c70: 0xb2a50013  sdl         $a1, 0x13($s5)
    ctx->pc = 0x4a8c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a8c74:
    // 0x4a8c74: 0xb6a5000c  sdr         $a1, 0xC($s5)
    ctx->pc = 0x4a8c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a8c78:
    // 0x4a8c78: 0xb2a6001b  sdl         $a2, 0x1B($s5)
    ctx->pc = 0x4a8c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a8c7c:
    // 0x4a8c7c: 0xb6a60014  sdr         $a2, 0x14($s5)
    ctx->pc = 0x4a8c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a8c80:
    // 0x4a8c80: 0x10000009  b           . + 4 + (0x9 << 2)
label_4a8c84:
    if (ctx->pc == 0x4A8C84u) {
        ctx->pc = 0x4A8C88u;
        goto label_4a8c88;
    }
    ctx->pc = 0x4A8C80u;
    {
        const bool branch_taken_0x4a8c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a8c80) {
            ctx->pc = 0x4A8CA8u;
            goto label_4a8ca8;
        }
    }
    ctx->pc = 0x4A8C88u;
label_4a8c88:
    // 0x4a8c88: 0x6a640007  ldl         $a0, 0x7($s3)
    ctx->pc = 0x4a8c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4a8c8c:
    // 0x4a8c8c: 0x6e640000  ldr         $a0, 0x0($s3)
    ctx->pc = 0x4a8c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_4a8c90:
    // 0x4a8c90: 0x6a65000f  ldl         $a1, 0xF($s3)
    ctx->pc = 0x4a8c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_4a8c94:
    // 0x4a8c94: 0x6e650008  ldr         $a1, 0x8($s3)
    ctx->pc = 0x4a8c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4a8c98:
    // 0x4a8c98: 0xb2a40013  sdl         $a0, 0x13($s5)
    ctx->pc = 0x4a8c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a8c9c:
    // 0x4a8c9c: 0xb6a4000c  sdr         $a0, 0xC($s5)
    ctx->pc = 0x4a8c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a8ca0:
    // 0x4a8ca0: 0xb2a5001b  sdl         $a1, 0x1B($s5)
    ctx->pc = 0x4a8ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a8ca4:
    // 0x4a8ca4: 0xb6a50014  sdr         $a1, 0x14($s5)
    ctx->pc = 0x4a8ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a8ca8:
    // 0x4a8ca8: 0xc12a4b6  jal         func_4A92D8
label_4a8cac:
    if (ctx->pc == 0x4A8CACu) {
        ctx->pc = 0x4A8CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8CA8u;
        // 0x4a8cac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8CB0u;
        goto label_4a8cb0;
    }
    ctx->pc = 0x4A8CA8u;
    SET_GPR_U32(ctx, 31, 0x4A8CB0u);
    ctx->pc = 0x4A8CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8CA8u;
    // 0x4a8cac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A92D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A92D8u, 0x4A8CA8u, 0x4A8CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8CB0u;
label_4a8cb0:
    // 0x4a8cb0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4a8cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a8cb4:
    // 0x4a8cb4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a8cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4a8cb8:
    // 0x4a8cb8: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x4a8cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_4a8cbc:
    // 0x4a8cbc: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x4a8cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_4a8cc0:
    // 0x4a8cc0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a8cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a8cc4:
    // 0x4a8cc4: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x4a8cc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4a8cc8:
    // 0x4a8cc8: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x4a8cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_4a8ccc:
    // 0x4a8ccc: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x4a8cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4a8cd0:
    // 0x4a8cd0: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
label_4a8cd4:
    if (ctx->pc == 0x4A8CD4u) {
        ctx->pc = 0x4A8CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8CD0u;
        // 0x4a8cd4: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8CD8u;
        goto label_4a8cd8;
    }
    ctx->pc = 0x4A8CD0u;
    {
        const bool branch_taken_0x4a8cd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8CD0u;
        // 0x4a8cd4: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8cd0) {
            ctx->pc = 0x4A8D28u;
            goto label_4a8d28;
        }
    }
    ctx->pc = 0x4A8CD8u;
label_4a8cd8:
    // 0x4a8cd8: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x4a8cd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_4a8cdc:
    // 0x4a8cdc: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x4a8cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_4a8ce0:
    // 0x4a8ce0: 0x40f809  jalr        $v0
label_4a8ce4:
    if (ctx->pc == 0x4A8CE4u) {
        ctx->pc = 0x4A8CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8CE0u;
        // 0x4a8ce4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8CE8u;
        goto label_4a8ce8;
    }
    ctx->pc = 0x4A8CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A8CE8u);
        ctx->pc = 0x4A8CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8CE0u;
        // 0x4a8ce4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8CE0u, 0x4A8CE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A8CE8u;
label_4a8ce8:
    // 0x4a8ce8: 0xc12a49e  jal         func_4A9278
label_4a8cec:
    if (ctx->pc == 0x4A8CECu) {
        ctx->pc = 0x4A8CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8CE8u;
        // 0x4a8cec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8CF0u;
        goto label_4a8cf0;
    }
    ctx->pc = 0x4A8CE8u;
    SET_GPR_U32(ctx, 31, 0x4A8CF0u);
    ctx->pc = 0x4A8CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8CE8u;
    // 0x4a8cec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9278u, 0x4A8CE8u, 0x4A8CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8CF0u;
label_4a8cf0:
    // 0x4a8cf0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4a8cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a8cf4:
    // 0x4a8cf4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a8cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4a8cf8:
    // 0x4a8cf8: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x4a8cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_4a8cfc:
    // 0x4a8cfc: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x4a8cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
label_4a8d00:
    // 0x4a8d00: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a8d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a8d04:
    // 0x4a8d04: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x4a8d04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_4a8d08:
    // 0x4a8d08: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x4a8d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_4a8d0c:
    // 0x4a8d0c: 0x40f809  jalr        $v0
label_4a8d10:
    if (ctx->pc == 0x4A8D10u) {
        ctx->pc = 0x4A8D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8D0Cu;
        // 0x4a8d10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8D14u;
        goto label_4a8d14;
    }
    ctx->pc = 0x4A8D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A8D14u);
        ctx->pc = 0x4A8D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8D0Cu;
        // 0x4a8d10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8D0Cu, 0x4A8D14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A8D14u;
label_4a8d14:
    // 0x4a8d14: 0x8f83c1e8  lw          $v1, -0x3E18($gp)
    ctx->pc = 0x4a8d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951400)));
label_4a8d18:
    // 0x4a8d18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a8d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a8d1c:
    // 0x4a8d1c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4a8d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_4a8d20:
    // 0x4a8d20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a8d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4a8d24:
    // 0x4a8d24: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x4a8d24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4a8d28:
    // 0x4a8d28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4a8d28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a8d2c:
    // 0x4a8d2c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4a8d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4a8d30:
    // 0x4a8d30: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4a8d30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4a8d34:
    // 0x4a8d34: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4a8d34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a8d38:
    // 0x4a8d38: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4a8d38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a8d3c:
    // 0x4a8d3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4a8d3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a8d40:
    // 0x4a8d40: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4a8d40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a8d44:
    // 0x4a8d44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a8d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4a8d48:
    // 0x4a8d48: 0x3e00008  jr          $ra
label_4a8d4c:
    if (ctx->pc == 0x4A8D4Cu) {
        ctx->pc = 0x4A8D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8D48u;
        // 0x4a8d4c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8D50u;
        goto label_4a8d50;
    }
    ctx->pc = 0x4A8D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8D48u;
        // 0x4a8d4c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8D50u;
label_4a8d50:
    // 0x4a8d50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4a8d50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a8d54:
    // 0x4a8d54: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4a8d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a8d58:
    // 0x4a8d58: 0x8f82b864  lw          $v0, -0x479C($gp)
    ctx->pc = 0x4a8d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948964)));
label_4a8d5c:
    // 0x4a8d5c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4a8d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4a8d60:
    // 0x4a8d60: 0x2cc30004  sltiu       $v1, $a2, 0x4
    ctx->pc = 0x4a8d60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_4a8d64:
    // 0x4a8d64: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a8d64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4a8d68:
    // 0x4a8d68: 0x0  nop
    ctx->pc = 0x4a8d68u;
    // NOP
label_4a8d6c:
    // 0x4a8d6c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_4a8d70:
    if (ctx->pc == 0x4A8D70u) {
        ctx->pc = 0x4A8D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8D6Cu;
        // 0x4a8d70: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8D74u;
        goto label_4a8d74;
    }
    ctx->pc = 0x4A8D6Cu;
    {
        const bool branch_taken_0x4a8d6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A8D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8D6Cu;
        // 0x4a8d70: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8d6c) {
            ctx->pc = 0x4A8D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8d58;
        }
    }
    ctx->pc = 0x4A8D74u;
label_4a8d74:
    // 0x4a8d74: 0x8f82b864  lw          $v0, -0x479C($gp)
    ctx->pc = 0x4a8d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948964)));
label_4a8d78:
    // 0x4a8d78: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x4a8d78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_4a8d7c:
    // 0x4a8d7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a8d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4a8d80:
    // 0x4a8d80: 0xaf82b864  sw          $v0, -0x479C($gp)
    ctx->pc = 0x4a8d80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948964), GPR_U32(ctx, 2));
label_4a8d84:
    // 0x4a8d84: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x4a8d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_4a8d88:
    // 0x4a8d88: 0x34633000  ori         $v1, $v1, 0x3000
    ctx->pc = 0x4a8d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12288);
label_4a8d8c:
    // 0x4a8d8c: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x4a8d8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
label_4a8d90:
    // 0x4a8d90: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x4a8d90u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_4a8d94:
    // 0x4a8d94: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x4a8d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_4a8d98:
    // 0x4a8d98: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x4a8d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_4a8d9c:
    // 0x4a8d9c: 0x3e00008  jr          $ra
label_4a8da0:
    if (ctx->pc == 0x4A8DA0u) {
        ctx->pc = 0x4A8DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8D9Cu;
        // 0x4a8da0: 0xa0820008  sb          $v0, 0x8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8DA4u;
        goto label_4a8da4;
    }
    ctx->pc = 0x4A8D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8D9Cu;
        // 0x4a8da0: 0xa0820008  sb          $v0, 0x8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8DA4u;
label_4a8da4:
    // 0x4a8da4: 0x0  nop
    ctx->pc = 0x4a8da4u;
    // NOP
label_4a8da8:
    // 0x4a8da8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a8da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4a8dac:
    // 0x4a8dac: 0x8f88b864  lw          $t0, -0x479C($gp)
    ctx->pc = 0x4a8dacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948964)));
label_4a8db0:
    // 0x4a8db0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a8db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4a8db4:
    // 0x4a8db4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x4a8db4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a8db8:
    // 0x4a8db8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4a8db8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a8dbc:
    // 0x4a8dbc: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x4a8dbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a8dc0:
    // 0x4a8dc0: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x4a8dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
label_4a8dc4:
    // 0x4a8dc4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4a8dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4a8dc8:
    // 0x4a8dc8: 0x2cc20004  sltiu       $v0, $a2, 0x4
    ctx->pc = 0x4a8dc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_4a8dcc:
    // 0x4a8dcc: 0x0  nop
    ctx->pc = 0x4a8dccu;
    // NOP
label_4a8dd0:
    // 0x4a8dd0: 0x0  nop
    ctx->pc = 0x4a8dd0u;
    // NOP
label_4a8dd4:
    // 0x4a8dd4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_4a8dd8:
    if (ctx->pc == 0x4A8DD8u) {
        ctx->pc = 0x4A8DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8DD4u;
        // 0x4a8dd8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8DDCu;
        goto label_4a8ddc;
    }
    ctx->pc = 0x4A8DD4u;
    {
        const bool branch_taken_0x4a8dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A8DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8DD4u;
        // 0x4a8dd8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8dd4) {
            ctx->pc = 0x4A8DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8dc0;
        }
    }
    ctx->pc = 0x4A8DDCu;
label_4a8ddc:
    // 0x4a8ddc: 0x90e30008  lbu         $v1, 0x8($a3)
    ctx->pc = 0x4a8ddcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
label_4a8de0:
    // 0x4a8de0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4a8de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a8de4:
    // 0x4a8de4: 0x94e20006  lhu         $v0, 0x6($a3)
    ctx->pc = 0x4a8de4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
label_4a8de8:
    // 0x4a8de8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a8de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a8dec:
    // 0x4a8dec: 0x8f86b864  lw          $a2, -0x479C($gp)
    ctx->pc = 0x4a8decu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948964)));
label_4a8df0:
    // 0x4a8df0: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x4a8df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_4a8df4:
    // 0x4a8df4: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x4a8df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_4a8df8:
    // 0x4a8df8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x4a8df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_4a8dfc:
    // 0x4a8dfc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4a8dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4a8e00:
    // 0x4a8e00: 0xa0e30008  sb          $v1, 0x8($a3)
    ctx->pc = 0x4a8e00u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 8), (uint8_t)GPR_U32(ctx, 3));
label_4a8e04:
    // 0x4a8e04: 0x34423000  ori         $v0, $v0, 0x3000
    ctx->pc = 0x4a8e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
label_4a8e08:
    // 0x4a8e08: 0xaf86b864  sw          $a2, -0x479C($gp)
    ctx->pc = 0x4a8e08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948964), GPR_U32(ctx, 6));
label_4a8e0c:
    // 0x4a8e0c: 0xc12a388  jal         func_4A8E20
label_4a8e10:
    if (ctx->pc == 0x4A8E10u) {
        ctx->pc = 0x4A8E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8E0Cu;
        // 0x4a8e10: 0xa4e20006  sh          $v0, 0x6($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8E14u;
        goto label_4a8e14;
    }
    ctx->pc = 0x4A8E0Cu;
    SET_GPR_U32(ctx, 31, 0x4A8E14u);
    ctx->pc = 0x4A8E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8E0Cu;
    // 0x4a8e10: 0xa4e20006  sh          $v0, 0x6($a3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 7), 6), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8E20u, 0x4A8E0Cu, 0x4A8E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8E14u;
label_4a8e14:
    // 0x4a8e14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a8e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a8e18:
    // 0x4a8e18: 0x3e00008  jr          $ra
label_4a8e1c:
    if (ctx->pc == 0x4A8E1Cu) {
        ctx->pc = 0x4A8E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8E18u;
        // 0x4a8e1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8E20u;
        goto label_fallthrough_0x4a8e18;
    }
    ctx->pc = 0x4A8E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8E18u;
        // 0x4a8e1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4a8e18:
    ctx->pc = 0x4A8E20u;
}
