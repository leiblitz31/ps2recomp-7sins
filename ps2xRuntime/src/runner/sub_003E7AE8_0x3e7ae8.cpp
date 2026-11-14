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

// Function: sub_003E7AE8
// Address: 0x3e7ae8 - 0x3e7f38
void sub_003E7AE8_0x3e7ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7AE8_0x3e7ae8");
#endif

    switch (ctx->pc) {
        case 0x3e7ae8u: goto label_3e7ae8;
        case 0x3e7aecu: goto label_3e7aec;
        case 0x3e7af0u: goto label_3e7af0;
        case 0x3e7af4u: goto label_3e7af4;
        case 0x3e7af8u: goto label_3e7af8;
        case 0x3e7afcu: goto label_3e7afc;
        case 0x3e7b00u: goto label_3e7b00;
        case 0x3e7b04u: goto label_3e7b04;
        case 0x3e7b08u: goto label_3e7b08;
        case 0x3e7b0cu: goto label_3e7b0c;
        case 0x3e7b10u: goto label_3e7b10;
        case 0x3e7b14u: goto label_3e7b14;
        case 0x3e7b18u: goto label_3e7b18;
        case 0x3e7b1cu: goto label_3e7b1c;
        case 0x3e7b20u: goto label_3e7b20;
        case 0x3e7b24u: goto label_3e7b24;
        case 0x3e7b28u: goto label_3e7b28;
        case 0x3e7b2cu: goto label_3e7b2c;
        case 0x3e7b30u: goto label_3e7b30;
        case 0x3e7b34u: goto label_3e7b34;
        case 0x3e7b38u: goto label_3e7b38;
        case 0x3e7b3cu: goto label_3e7b3c;
        case 0x3e7b40u: goto label_3e7b40;
        case 0x3e7b44u: goto label_3e7b44;
        case 0x3e7b48u: goto label_3e7b48;
        case 0x3e7b4cu: goto label_3e7b4c;
        case 0x3e7b50u: goto label_3e7b50;
        case 0x3e7b54u: goto label_3e7b54;
        case 0x3e7b58u: goto label_3e7b58;
        case 0x3e7b5cu: goto label_3e7b5c;
        case 0x3e7b60u: goto label_3e7b60;
        case 0x3e7b64u: goto label_3e7b64;
        case 0x3e7b68u: goto label_3e7b68;
        case 0x3e7b6cu: goto label_3e7b6c;
        case 0x3e7b70u: goto label_3e7b70;
        case 0x3e7b74u: goto label_3e7b74;
        case 0x3e7b78u: goto label_3e7b78;
        case 0x3e7b7cu: goto label_3e7b7c;
        case 0x3e7b80u: goto label_3e7b80;
        case 0x3e7b84u: goto label_3e7b84;
        case 0x3e7b88u: goto label_3e7b88;
        case 0x3e7b8cu: goto label_3e7b8c;
        case 0x3e7b90u: goto label_3e7b90;
        case 0x3e7b94u: goto label_3e7b94;
        case 0x3e7b98u: goto label_3e7b98;
        case 0x3e7b9cu: goto label_3e7b9c;
        case 0x3e7ba0u: goto label_3e7ba0;
        case 0x3e7ba4u: goto label_3e7ba4;
        case 0x3e7ba8u: goto label_3e7ba8;
        case 0x3e7bacu: goto label_3e7bac;
        case 0x3e7bb0u: goto label_3e7bb0;
        case 0x3e7bb4u: goto label_3e7bb4;
        case 0x3e7bb8u: goto label_3e7bb8;
        case 0x3e7bbcu: goto label_3e7bbc;
        case 0x3e7bc0u: goto label_3e7bc0;
        case 0x3e7bc4u: goto label_3e7bc4;
        case 0x3e7bc8u: goto label_3e7bc8;
        case 0x3e7bccu: goto label_3e7bcc;
        case 0x3e7bd0u: goto label_3e7bd0;
        case 0x3e7bd4u: goto label_3e7bd4;
        case 0x3e7bd8u: goto label_3e7bd8;
        case 0x3e7bdcu: goto label_3e7bdc;
        case 0x3e7be0u: goto label_3e7be0;
        case 0x3e7be4u: goto label_3e7be4;
        case 0x3e7be8u: goto label_3e7be8;
        case 0x3e7becu: goto label_3e7bec;
        case 0x3e7bf0u: goto label_3e7bf0;
        case 0x3e7bf4u: goto label_3e7bf4;
        case 0x3e7bf8u: goto label_3e7bf8;
        case 0x3e7bfcu: goto label_3e7bfc;
        case 0x3e7c00u: goto label_3e7c00;
        case 0x3e7c04u: goto label_3e7c04;
        case 0x3e7c08u: goto label_3e7c08;
        case 0x3e7c0cu: goto label_3e7c0c;
        case 0x3e7c10u: goto label_3e7c10;
        case 0x3e7c14u: goto label_3e7c14;
        case 0x3e7c18u: goto label_3e7c18;
        case 0x3e7c1cu: goto label_3e7c1c;
        case 0x3e7c20u: goto label_3e7c20;
        case 0x3e7c24u: goto label_3e7c24;
        case 0x3e7c28u: goto label_3e7c28;
        case 0x3e7c2cu: goto label_3e7c2c;
        case 0x3e7c30u: goto label_3e7c30;
        case 0x3e7c34u: goto label_3e7c34;
        case 0x3e7c38u: goto label_3e7c38;
        case 0x3e7c3cu: goto label_3e7c3c;
        case 0x3e7c40u: goto label_3e7c40;
        case 0x3e7c44u: goto label_3e7c44;
        case 0x3e7c48u: goto label_3e7c48;
        case 0x3e7c4cu: goto label_3e7c4c;
        case 0x3e7c50u: goto label_3e7c50;
        case 0x3e7c54u: goto label_3e7c54;
        case 0x3e7c58u: goto label_3e7c58;
        case 0x3e7c5cu: goto label_3e7c5c;
        case 0x3e7c60u: goto label_3e7c60;
        case 0x3e7c64u: goto label_3e7c64;
        case 0x3e7c68u: goto label_3e7c68;
        case 0x3e7c6cu: goto label_3e7c6c;
        case 0x3e7c70u: goto label_3e7c70;
        case 0x3e7c74u: goto label_3e7c74;
        case 0x3e7c78u: goto label_3e7c78;
        case 0x3e7c7cu: goto label_3e7c7c;
        case 0x3e7c80u: goto label_3e7c80;
        case 0x3e7c84u: goto label_3e7c84;
        case 0x3e7c88u: goto label_3e7c88;
        case 0x3e7c8cu: goto label_3e7c8c;
        case 0x3e7c90u: goto label_3e7c90;
        case 0x3e7c94u: goto label_3e7c94;
        case 0x3e7c98u: goto label_3e7c98;
        case 0x3e7c9cu: goto label_3e7c9c;
        case 0x3e7ca0u: goto label_3e7ca0;
        case 0x3e7ca4u: goto label_3e7ca4;
        case 0x3e7ca8u: goto label_3e7ca8;
        case 0x3e7cacu: goto label_3e7cac;
        case 0x3e7cb0u: goto label_3e7cb0;
        case 0x3e7cb4u: goto label_3e7cb4;
        case 0x3e7cb8u: goto label_3e7cb8;
        case 0x3e7cbcu: goto label_3e7cbc;
        case 0x3e7cc0u: goto label_3e7cc0;
        case 0x3e7cc4u: goto label_3e7cc4;
        case 0x3e7cc8u: goto label_3e7cc8;
        case 0x3e7cccu: goto label_3e7ccc;
        case 0x3e7cd0u: goto label_3e7cd0;
        case 0x3e7cd4u: goto label_3e7cd4;
        case 0x3e7cd8u: goto label_3e7cd8;
        case 0x3e7cdcu: goto label_3e7cdc;
        case 0x3e7ce0u: goto label_3e7ce0;
        case 0x3e7ce4u: goto label_3e7ce4;
        case 0x3e7ce8u: goto label_3e7ce8;
        case 0x3e7cecu: goto label_3e7cec;
        case 0x3e7cf0u: goto label_3e7cf0;
        case 0x3e7cf4u: goto label_3e7cf4;
        case 0x3e7cf8u: goto label_3e7cf8;
        case 0x3e7cfcu: goto label_3e7cfc;
        case 0x3e7d00u: goto label_3e7d00;
        case 0x3e7d04u: goto label_3e7d04;
        case 0x3e7d08u: goto label_3e7d08;
        case 0x3e7d0cu: goto label_3e7d0c;
        case 0x3e7d10u: goto label_3e7d10;
        case 0x3e7d14u: goto label_3e7d14;
        case 0x3e7d18u: goto label_3e7d18;
        case 0x3e7d1cu: goto label_3e7d1c;
        case 0x3e7d20u: goto label_3e7d20;
        case 0x3e7d24u: goto label_3e7d24;
        case 0x3e7d28u: goto label_3e7d28;
        case 0x3e7d2cu: goto label_3e7d2c;
        case 0x3e7d30u: goto label_3e7d30;
        case 0x3e7d34u: goto label_3e7d34;
        case 0x3e7d38u: goto label_3e7d38;
        case 0x3e7d3cu: goto label_3e7d3c;
        case 0x3e7d40u: goto label_3e7d40;
        case 0x3e7d44u: goto label_3e7d44;
        case 0x3e7d48u: goto label_3e7d48;
        case 0x3e7d4cu: goto label_3e7d4c;
        case 0x3e7d50u: goto label_3e7d50;
        case 0x3e7d54u: goto label_3e7d54;
        case 0x3e7d58u: goto label_3e7d58;
        case 0x3e7d5cu: goto label_3e7d5c;
        case 0x3e7d60u: goto label_3e7d60;
        case 0x3e7d64u: goto label_3e7d64;
        case 0x3e7d68u: goto label_3e7d68;
        case 0x3e7d6cu: goto label_3e7d6c;
        case 0x3e7d70u: goto label_3e7d70;
        case 0x3e7d74u: goto label_3e7d74;
        case 0x3e7d78u: goto label_3e7d78;
        case 0x3e7d7cu: goto label_3e7d7c;
        case 0x3e7d80u: goto label_3e7d80;
        case 0x3e7d84u: goto label_3e7d84;
        case 0x3e7d88u: goto label_3e7d88;
        case 0x3e7d8cu: goto label_3e7d8c;
        case 0x3e7d90u: goto label_3e7d90;
        case 0x3e7d94u: goto label_3e7d94;
        case 0x3e7d98u: goto label_3e7d98;
        case 0x3e7d9cu: goto label_3e7d9c;
        case 0x3e7da0u: goto label_3e7da0;
        case 0x3e7da4u: goto label_3e7da4;
        case 0x3e7da8u: goto label_3e7da8;
        case 0x3e7dacu: goto label_3e7dac;
        case 0x3e7db0u: goto label_3e7db0;
        case 0x3e7db4u: goto label_3e7db4;
        case 0x3e7db8u: goto label_3e7db8;
        case 0x3e7dbcu: goto label_3e7dbc;
        case 0x3e7dc0u: goto label_3e7dc0;
        case 0x3e7dc4u: goto label_3e7dc4;
        case 0x3e7dc8u: goto label_3e7dc8;
        case 0x3e7dccu: goto label_3e7dcc;
        case 0x3e7dd0u: goto label_3e7dd0;
        case 0x3e7dd4u: goto label_3e7dd4;
        case 0x3e7dd8u: goto label_3e7dd8;
        case 0x3e7ddcu: goto label_3e7ddc;
        case 0x3e7de0u: goto label_3e7de0;
        case 0x3e7de4u: goto label_3e7de4;
        case 0x3e7de8u: goto label_3e7de8;
        case 0x3e7decu: goto label_3e7dec;
        case 0x3e7df0u: goto label_3e7df0;
        case 0x3e7df4u: goto label_3e7df4;
        case 0x3e7df8u: goto label_3e7df8;
        case 0x3e7dfcu: goto label_3e7dfc;
        case 0x3e7e00u: goto label_3e7e00;
        case 0x3e7e04u: goto label_3e7e04;
        case 0x3e7e08u: goto label_3e7e08;
        case 0x3e7e0cu: goto label_3e7e0c;
        case 0x3e7e10u: goto label_3e7e10;
        case 0x3e7e14u: goto label_3e7e14;
        case 0x3e7e18u: goto label_3e7e18;
        case 0x3e7e1cu: goto label_3e7e1c;
        case 0x3e7e20u: goto label_3e7e20;
        case 0x3e7e24u: goto label_3e7e24;
        case 0x3e7e28u: goto label_3e7e28;
        case 0x3e7e2cu: goto label_3e7e2c;
        case 0x3e7e30u: goto label_3e7e30;
        case 0x3e7e34u: goto label_3e7e34;
        case 0x3e7e38u: goto label_3e7e38;
        case 0x3e7e3cu: goto label_3e7e3c;
        case 0x3e7e40u: goto label_3e7e40;
        case 0x3e7e44u: goto label_3e7e44;
        case 0x3e7e48u: goto label_3e7e48;
        case 0x3e7e4cu: goto label_3e7e4c;
        case 0x3e7e50u: goto label_3e7e50;
        case 0x3e7e54u: goto label_3e7e54;
        case 0x3e7e58u: goto label_3e7e58;
        case 0x3e7e5cu: goto label_3e7e5c;
        case 0x3e7e60u: goto label_3e7e60;
        case 0x3e7e64u: goto label_3e7e64;
        case 0x3e7e68u: goto label_3e7e68;
        case 0x3e7e6cu: goto label_3e7e6c;
        case 0x3e7e70u: goto label_3e7e70;
        case 0x3e7e74u: goto label_3e7e74;
        case 0x3e7e78u: goto label_3e7e78;
        case 0x3e7e7cu: goto label_3e7e7c;
        case 0x3e7e80u: goto label_3e7e80;
        case 0x3e7e84u: goto label_3e7e84;
        case 0x3e7e88u: goto label_3e7e88;
        case 0x3e7e8cu: goto label_3e7e8c;
        case 0x3e7e90u: goto label_3e7e90;
        case 0x3e7e94u: goto label_3e7e94;
        case 0x3e7e98u: goto label_3e7e98;
        case 0x3e7e9cu: goto label_3e7e9c;
        case 0x3e7ea0u: goto label_3e7ea0;
        case 0x3e7ea4u: goto label_3e7ea4;
        case 0x3e7ea8u: goto label_3e7ea8;
        case 0x3e7eacu: goto label_3e7eac;
        case 0x3e7eb0u: goto label_3e7eb0;
        case 0x3e7eb4u: goto label_3e7eb4;
        case 0x3e7eb8u: goto label_3e7eb8;
        case 0x3e7ebcu: goto label_3e7ebc;
        case 0x3e7ec0u: goto label_3e7ec0;
        case 0x3e7ec4u: goto label_3e7ec4;
        case 0x3e7ec8u: goto label_3e7ec8;
        case 0x3e7eccu: goto label_3e7ecc;
        case 0x3e7ed0u: goto label_3e7ed0;
        case 0x3e7ed4u: goto label_3e7ed4;
        case 0x3e7ed8u: goto label_3e7ed8;
        case 0x3e7edcu: goto label_3e7edc;
        case 0x3e7ee0u: goto label_3e7ee0;
        case 0x3e7ee4u: goto label_3e7ee4;
        case 0x3e7ee8u: goto label_3e7ee8;
        case 0x3e7eecu: goto label_3e7eec;
        case 0x3e7ef0u: goto label_3e7ef0;
        case 0x3e7ef4u: goto label_3e7ef4;
        case 0x3e7ef8u: goto label_3e7ef8;
        case 0x3e7efcu: goto label_3e7efc;
        case 0x3e7f00u: goto label_3e7f00;
        case 0x3e7f04u: goto label_3e7f04;
        case 0x3e7f08u: goto label_3e7f08;
        case 0x3e7f0cu: goto label_3e7f0c;
        case 0x3e7f10u: goto label_3e7f10;
        case 0x3e7f14u: goto label_3e7f14;
        case 0x3e7f18u: goto label_3e7f18;
        case 0x3e7f1cu: goto label_3e7f1c;
        case 0x3e7f20u: goto label_3e7f20;
        case 0x3e7f24u: goto label_3e7f24;
        case 0x3e7f28u: goto label_3e7f28;
        case 0x3e7f2cu: goto label_3e7f2c;
        case 0x3e7f30u: goto label_3e7f30;
        case 0x3e7f34u: goto label_3e7f34;
        default: break;
    }

    ctx->pc = 0x3e7ae8u;

label_3e7ae8:
    // 0x3e7ae8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e7ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3e7aec:
    // 0x3e7aec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3e7aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3e7af0:
    // 0x3e7af0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e7af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3e7af4:
    // 0x3e7af4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e7af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e7af8:
    // 0x3e7af8: 0x8e0201bc  lw          $v0, 0x1BC($s0)
    ctx->pc = 0x3e7af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3e7afc:
    // 0x3e7afc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_3e7b00:
    if (ctx->pc == 0x3E7B00u) {
        ctx->pc = 0x3E7B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7AFCu;
        // 0x3e7b00: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7B04u;
        goto label_3e7b04;
    }
    ctx->pc = 0x3E7AFCu;
    {
        const bool branch_taken_0x3e7afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7afc) {
            ctx->pc = 0x3E7B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7AFCu;
            // 0x3e7b00: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7B14u;
            goto label_3e7b14;
        }
    }
    ctx->pc = 0x3E7B04u;
label_3e7b04:
    // 0x3e7b04: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3e7b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3e7b08:
    // 0x3e7b08: 0xc0f86f2  jal         func_3E1BC8
label_3e7b0c:
    if (ctx->pc == 0x3E7B0Cu) {
        ctx->pc = 0x3E7B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7B08u;
        // 0x3e7b0c: 0x24a5e868  addiu       $a1, $a1, -0x1798 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7B10u;
        goto label_3e7b10;
    }
    ctx->pc = 0x3E7B08u;
    SET_GPR_U32(ctx, 31, 0x3E7B10u);
    ctx->pc = 0x3E7B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7B08u;
    // 0x3e7b0c: 0x24a5e868  addiu       $a1, $a1, -0x1798 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E7B08u, 0x3E7B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7B10u;
label_3e7b10:
    // 0x3e7b10: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3e7b10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3e7b14:
    // 0x3e7b14: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x3e7b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_3e7b18:
    // 0x3e7b18: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_3e7b1c:
    if (ctx->pc == 0x3E7B1Cu) {
        ctx->pc = 0x3E7B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7B18u;
        // 0x3e7b1c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7B20u;
        goto label_3e7b20;
    }
    ctx->pc = 0x3E7B18u;
    {
        const bool branch_taken_0x3e7b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7B18u;
        // 0x3e7b1c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7b18) {
            ctx->pc = 0x3E7B80u;
            goto label_3e7b80;
        }
    }
    ctx->pc = 0x3E7B20u;
label_3e7b20:
    // 0x3e7b20: 0x920301e0  lbu         $v1, 0x1E0($s0)
    ctx->pc = 0x3e7b20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 480)));
label_3e7b24:
    // 0x3e7b24: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_3e7b28:
    if (ctx->pc == 0x3E7B28u) {
        ctx->pc = 0x3E7B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7B24u;
        // 0x3e7b28: 0x960201fe  lhu         $v0, 0x1FE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 510)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7B2Cu;
        goto label_3e7b2c;
    }
    ctx->pc = 0x3E7B24u;
    {
        const bool branch_taken_0x3e7b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e7b24) {
            ctx->pc = 0x3E7B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7B24u;
            // 0x3e7b28: 0x960201fe  lhu         $v0, 0x1FE($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 510)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7B50u;
            goto label_3e7b50;
        }
    }
    ctx->pc = 0x3E7B2Cu;
label_3e7b2c:
    // 0x3e7b2c: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3e7b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3e7b30:
    // 0x3e7b30: 0x260401d0  addiu       $a0, $s0, 0x1D0
    ctx->pc = 0x3e7b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
label_3e7b34:
    // 0x3e7b34: 0x8e0601f8  lw          $a2, 0x1F8($s0)
    ctx->pc = 0x3e7b34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 504)));
label_3e7b38:
    // 0x3e7b38: 0x8e070278  lw          $a3, 0x278($s0)
    ctx->pc = 0x3e7b38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_3e7b3c:
    // 0x3e7b3c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3e7b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3e7b40:
    // 0x3e7b40: 0xc0fbbf2  jal         func_3EEFC8
label_3e7b44:
    if (ctx->pc == 0x3E7B44u) {
        ctx->pc = 0x3E7B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7B40u;
        // 0x3e7b44: 0x960801fe  lhu         $t0, 0x1FE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 510)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7B48u;
        goto label_3e7b48;
    }
    ctx->pc = 0x3E7B40u;
    SET_GPR_U32(ctx, 31, 0x3E7B48u);
    ctx->pc = 0x3E7B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7B40u;
    // 0x3e7b44: 0x960801fe  lhu         $t0, 0x1FE($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 510)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EEFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EEFC8u, 0x3E7B40u, 0x3E7B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7B48u;
label_3e7b48:
    // 0x3e7b48: 0x1000000e  b           . + 4 + (0xE << 2)
label_3e7b4c:
    if (ctx->pc == 0x3E7B4Cu) {
        ctx->pc = 0x3E7B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7B48u;
        // 0x3e7b4c: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7B50u;
        goto label_3e7b50;
    }
    ctx->pc = 0x3E7B48u;
    {
        const bool branch_taken_0x3e7b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7B48u;
        // 0x3e7b4c: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7b48) {
            ctx->pc = 0x3E7B84u;
            goto label_3e7b84;
        }
    }
    ctx->pc = 0x3E7B50u;
label_3e7b50:
    // 0x3e7b50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3e7b54:
    if (ctx->pc == 0x3E7B54u) {
        ctx->pc = 0x3E7B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7B50u;
        // 0x3e7b54: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7B58u;
        goto label_3e7b58;
    }
    ctx->pc = 0x3E7B50u;
    {
        const bool branch_taken_0x3e7b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7B50u;
        // 0x3e7b54: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7b50) {
            ctx->pc = 0x3E7B70u;
            goto label_3e7b70;
        }
    }
    ctx->pc = 0x3E7B58u;
label_3e7b58:
    // 0x3e7b58: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3e7b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3e7b5c:
    // 0x3e7b5c: 0x2606027c  addiu       $a2, $s0, 0x27C
    ctx->pc = 0x3e7b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 636));
label_3e7b60:
    // 0x3e7b60: 0xc0fbe36  jal         func_3EF8D8
label_3e7b64:
    if (ctx->pc == 0x3E7B64u) {
        ctx->pc = 0x3E7B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7B60u;
        // 0x3e7b64: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7B68u;
        goto label_3e7b68;
    }
    ctx->pc = 0x3E7B60u;
    SET_GPR_U32(ctx, 31, 0x3E7B68u);
    ctx->pc = 0x3E7B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7B60u;
    // 0x3e7b64: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF8D8u, 0x3E7B60u, 0x3E7B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7B68u;
label_3e7b68:
    // 0x3e7b68: 0x10000006  b           . + 4 + (0x6 << 2)
label_3e7b6c:
    if (ctx->pc == 0x3E7B6Cu) {
        ctx->pc = 0x3E7B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7B68u;
        // 0x3e7b6c: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7B70u;
        goto label_3e7b70;
    }
    ctx->pc = 0x3E7B68u;
    {
        const bool branch_taken_0x3e7b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7B68u;
        // 0x3e7b6c: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7b68) {
            ctx->pc = 0x3E7B84u;
            goto label_3e7b84;
        }
    }
    ctx->pc = 0x3E7B70u;
label_3e7b70:
    // 0x3e7b70: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3e7b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3e7b74:
    // 0x3e7b74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e7b74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e7b78:
    // 0x3e7b78: 0xc0fbe36  jal         func_3EF8D8
label_3e7b7c:
    if (ctx->pc == 0x3E7B7Cu) {
        ctx->pc = 0x3E7B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7B78u;
        // 0x3e7b7c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7B80u;
        goto label_3e7b80;
    }
    ctx->pc = 0x3E7B78u;
    SET_GPR_U32(ctx, 31, 0x3E7B80u);
    ctx->pc = 0x3E7B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7B78u;
    // 0x3e7b7c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF8D8u, 0x3E7B78u, 0x3E7B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7B80u;
label_3e7b80:
    // 0x3e7b80: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3e7b80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3e7b84:
    // 0x3e7b84: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x3e7b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_3e7b88:
    // 0x3e7b88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e7b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3e7b8c:
    // 0x3e7b8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3e7b90:
    if (ctx->pc == 0x3E7B90u) {
        ctx->pc = 0x3E7B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7B8Cu;
        // 0x3e7b90: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7B94u;
        goto label_3e7b94;
    }
    ctx->pc = 0x3E7B8Cu;
    {
        const bool branch_taken_0x3e7b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7B8Cu;
        // 0x3e7b90: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7b8c) {
            ctx->pc = 0x3E7BA4u;
            goto label_3e7ba4;
        }
    }
    ctx->pc = 0x3E7B94u;
label_3e7b94:
    // 0x3e7b94: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3e7b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3e7b98:
    // 0x3e7b98: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x3e7b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3e7b9c:
    // 0x3e7b9c: 0xc0fefaa  jal         func_3FBEA8
label_3e7ba0:
    if (ctx->pc == 0x3E7BA0u) {
        ctx->pc = 0x3E7BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7B9Cu;
        // 0x3e7ba0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7BA4u;
        goto label_3e7ba4;
    }
    ctx->pc = 0x3E7B9Cu;
    SET_GPR_U32(ctx, 31, 0x3E7BA4u);
    ctx->pc = 0x3E7BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7B9Cu;
    // 0x3e7ba0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FBEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FBEA8u, 0x3E7B9Cu, 0x3E7BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7BA4u;
label_3e7ba4:
    // 0x3e7ba4: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3e7ba4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3e7ba8:
    // 0x3e7ba8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3e7ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_3e7bac:
    // 0x3e7bac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e7bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3e7bb0:
    // 0x3e7bb0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_3e7bb4:
    if (ctx->pc == 0x3E7BB4u) {
        ctx->pc = 0x3E7BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7BB0u;
        // 0x3e7bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7BB8u;
        goto label_3e7bb8;
    }
    ctx->pc = 0x3E7BB0u;
    {
        const bool branch_taken_0x3e7bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7BB0u;
        // 0x3e7bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7bb0) {
            ctx->pc = 0x3E7C10u;
            goto label_3e7c10;
        }
    }
    ctx->pc = 0x3E7BB8u;
label_3e7bb8:
    // 0x3e7bb8: 0x8e0601bc  lw          $a2, 0x1BC($s0)
    ctx->pc = 0x3e7bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3e7bbc:
    // 0x3e7bbc: 0x260501d0  addiu       $a1, $s0, 0x1D0
    ctx->pc = 0x3e7bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
label_3e7bc0:
    // 0x3e7bc0: 0xc0faad4  jal         func_3EAB50
label_3e7bc4:
    if (ctx->pc == 0x3E7BC4u) {
        ctx->pc = 0x3E7BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7BC0u;
        // 0x3e7bc4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7BC8u;
        goto label_3e7bc8;
    }
    ctx->pc = 0x3E7BC0u;
    SET_GPR_U32(ctx, 31, 0x3E7BC8u);
    ctx->pc = 0x3E7BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7BC0u;
    // 0x3e7bc4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EAB50u, 0x3E7BC0u, 0x3E7BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7BC8u;
label_3e7bc8:
    // 0x3e7bc8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3e7bcc:
    if (ctx->pc == 0x3E7BCCu) {
        ctx->pc = 0x3E7BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7BC8u;
        // 0x3e7bcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7BD0u;
        goto label_3e7bd0;
    }
    ctx->pc = 0x3E7BC8u;
    {
        const bool branch_taken_0x3e7bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7BC8u;
        // 0x3e7bcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7bc8) {
            ctx->pc = 0x3E7C10u;
            goto label_3e7c10;
        }
    }
    ctx->pc = 0x3E7BD0u;
label_3e7bd0:
    // 0x3e7bd0: 0xde040108  ld          $a0, 0x108($s0)
    ctx->pc = 0x3e7bd0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3e7bd4:
    // 0x3e7bd4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3e7bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_3e7bd8:
    // 0x3e7bd8: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_3e7bdc:
    if (ctx->pc == 0x3E7BDCu) {
        ctx->pc = 0x3E7BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7BD8u;
        // 0x3e7bdc: 0xa20202d0  sb          $v0, 0x2D0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 720), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7BE0u;
        goto label_3e7be0;
    }
    ctx->pc = 0x3E7BD8u;
    {
        const bool branch_taken_0x3e7bd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E7BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7BD8u;
        // 0x3e7bdc: 0xa20202d0  sb          $v0, 0x2D0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 720), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7bd8) {
            ctx->pc = 0x3E7BF0u;
            goto label_3e7bf0;
        }
    }
    ctx->pc = 0x3E7BE0u;
label_3e7be0:
    // 0x3e7be0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3e7be0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3e7be4:
    // 0x3e7be4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e7be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e7be8:
    // 0x3e7be8: 0xc0f8782  jal         func_3E1E08
label_3e7bec:
    if (ctx->pc == 0x3E7BECu) {
        ctx->pc = 0x3E7BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7BE8u;
        // 0x3e7bec: 0x24a5e878  addiu       $a1, $a1, -0x1788 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7BF0u;
        goto label_3e7bf0;
    }
    ctx->pc = 0x3E7BE8u;
    SET_GPR_U32(ctx, 31, 0x3E7BF0u);
    ctx->pc = 0x3E7BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7BE8u;
    // 0x3e7bec: 0x24a5e878  addiu       $a1, $a1, -0x1788 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3E7BE8u, 0x3E7BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7BF0u;
label_3e7bf0:
    // 0x3e7bf0: 0xde030108  ld          $v1, 0x108($s0)
    ctx->pc = 0x3e7bf0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3e7bf4:
    // 0x3e7bf4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x3e7bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_3e7bf8:
    // 0x3e7bf8: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_3e7bfc:
    if (ctx->pc == 0x3E7BFCu) {
        ctx->pc = 0x3E7BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7BF8u;
        // 0x3e7bfc: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7C00u;
        goto label_3e7c00;
    }
    ctx->pc = 0x3E7BF8u;
    {
        const bool branch_taken_0x3e7bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e7bf8) {
            ctx->pc = 0x3E7BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7BF8u;
            // 0x3e7bfc: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7C14u;
            goto label_3e7c14;
        }
    }
    ctx->pc = 0x3E7C00u;
label_3e7c00:
    // 0x3e7c00: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3e7c00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3e7c04:
    // 0x3e7c04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e7c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e7c08:
    // 0x3e7c08: 0xc0f86f2  jal         func_3E1BC8
label_3e7c0c:
    if (ctx->pc == 0x3E7C0Cu) {
        ctx->pc = 0x3E7C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C08u;
        // 0x3e7c0c: 0x24a5e878  addiu       $a1, $a1, -0x1788 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7C10u;
        goto label_3e7c10;
    }
    ctx->pc = 0x3E7C08u;
    SET_GPR_U32(ctx, 31, 0x3E7C10u);
    ctx->pc = 0x3E7C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7C08u;
    // 0x3e7c0c: 0x24a5e878  addiu       $a1, $a1, -0x1788 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E7C08u, 0x3E7C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7C10u;
label_3e7c10:
    // 0x3e7c10: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3e7c10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3e7c14:
    // 0x3e7c14: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x3e7c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_3e7c18:
    // 0x3e7c18: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_3e7c1c:
    if (ctx->pc == 0x3E7C1Cu) {
        ctx->pc = 0x3E7C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C18u;
        // 0x3e7c1c: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7C20u;
        goto label_3e7c20;
    }
    ctx->pc = 0x3E7C18u;
    {
        const bool branch_taken_0x3e7c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7c18) {
            ctx->pc = 0x3E7C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7C18u;
            // 0x3e7c1c: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7C44u;
            goto label_3e7c44;
        }
    }
    ctx->pc = 0x3E7C20u;
label_3e7c20:
    // 0x3e7c20: 0xde0200f8  ld          $v0, 0xF8($s0)
    ctx->pc = 0x3e7c20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
label_3e7c24:
    // 0x3e7c24: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x3e7c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_3e7c28:
    // 0x3e7c28: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_3e7c2c:
    if (ctx->pc == 0x3E7C2Cu) {
        ctx->pc = 0x3E7C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C28u;
        // 0x3e7c2c: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7C30u;
        goto label_3e7c30;
    }
    ctx->pc = 0x3E7C28u;
    {
        const bool branch_taken_0x3e7c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7c28) {
            ctx->pc = 0x3E7C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7C28u;
            // 0x3e7c2c: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7C44u;
            goto label_3e7c44;
        }
    }
    ctx->pc = 0x3E7C30u;
label_3e7c30:
    // 0x3e7c30: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3e7c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3e7c34:
    // 0x3e7c34: 0x260401d0  addiu       $a0, $s0, 0x1D0
    ctx->pc = 0x3e7c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
label_3e7c38:
    // 0x3e7c38: 0xc0fa936  jal         func_3EA4D8
label_3e7c3c:
    if (ctx->pc == 0x3E7C3Cu) {
        ctx->pc = 0x3E7C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C38u;
        // 0x3e7c3c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7C40u;
        goto label_3e7c40;
    }
    ctx->pc = 0x3E7C38u;
    SET_GPR_U32(ctx, 31, 0x3E7C40u);
    ctx->pc = 0x3E7C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7C38u;
    // 0x3e7c3c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EA4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EA4D8u, 0x3E7C38u, 0x3E7C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7C40u;
label_3e7c40:
    // 0x3e7c40: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3e7c40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3e7c44:
    // 0x3e7c44: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3e7c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_3e7c48:
    // 0x3e7c48: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_3e7c4c:
    if (ctx->pc == 0x3E7C4Cu) {
        ctx->pc = 0x3E7C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C48u;
        // 0x3e7c4c: 0xde030108  ld          $v1, 0x108($s0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7C50u;
        goto label_3e7c50;
    }
    ctx->pc = 0x3E7C48u;
    {
        const bool branch_taken_0x3e7c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7c48) {
            ctx->pc = 0x3E7C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7C48u;
            // 0x3e7c4c: 0xde030108  ld          $v1, 0x108($s0) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7CB8u;
            goto label_3e7cb8;
        }
    }
    ctx->pc = 0x3E7C50u;
label_3e7c50:
    // 0x3e7c50: 0x960201fe  lhu         $v0, 0x1FE($s0)
    ctx->pc = 0x3e7c50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 510)));
label_3e7c54:
    // 0x3e7c54: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_3e7c58:
    if (ctx->pc == 0x3E7C58u) {
        ctx->pc = 0x3E7C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C54u;
        // 0x3e7c58: 0x8e0501bc  lw          $a1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7C5Cu;
        goto label_3e7c5c;
    }
    ctx->pc = 0x3E7C54u;
    {
        const bool branch_taken_0x3e7c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7c54) {
            ctx->pc = 0x3E7C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7C54u;
            // 0x3e7c58: 0x8e0501bc  lw          $a1, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7C70u;
            goto label_3e7c70;
        }
    }
    ctx->pc = 0x3E7C5Cu;
label_3e7c5c:
    // 0x3e7c5c: 0x9202020a  lbu         $v0, 0x20A($s0)
    ctx->pc = 0x3e7c5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 522)));
label_3e7c60:
    // 0x3e7c60: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3e7c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3e7c64:
    // 0x3e7c64: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_3e7c68:
    if (ctx->pc == 0x3E7C68u) {
        ctx->pc = 0x3E7C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7C64u;
        // 0x3e7c68: 0xde030108  ld          $v1, 0x108($s0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7C6Cu;
        goto label_3e7c6c;
    }
    ctx->pc = 0x3E7C64u;
    {
        const bool branch_taken_0x3e7c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7c64) {
            ctx->pc = 0x3E7C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7C64u;
            // 0x3e7c68: 0xde030108  ld          $v1, 0x108($s0) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7CB8u;
            goto label_3e7cb8;
        }
    }
    ctx->pc = 0x3E7C6Cu;
label_3e7c6c:
    // 0x3e7c6c: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3e7c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3e7c70:
    // 0x3e7c70: 0x260401d0  addiu       $a0, $s0, 0x1D0
    ctx->pc = 0x3e7c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
label_3e7c74:
    // 0x3e7c74: 0x8e0d0260  lw          $t5, 0x260($s0)
    ctx->pc = 0x3e7c74u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_3e7c78:
    // 0x3e7c78: 0x2606027c  addiu       $a2, $s0, 0x27C
    ctx->pc = 0x3e7c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 636));
label_3e7c7c:
    // 0x3e7c7c: 0x8e0c0264  lw          $t4, 0x264($s0)
    ctx->pc = 0x3e7c7cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_3e7c80:
    // 0x3e7c80: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3e7c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3e7c84:
    // 0x3e7c84: 0x8e030268  lw          $v1, 0x268($s0)
    ctx->pc = 0x3e7c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
label_3e7c88:
    // 0x3e7c88: 0x2607021c  addiu       $a3, $s0, 0x21C
    ctx->pc = 0x3e7c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 540));
label_3e7c8c:
    // 0x3e7c8c: 0x8e020248  lw          $v0, 0x248($s0)
    ctx->pc = 0x3e7c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 584)));
label_3e7c90:
    // 0x3e7c90: 0x26080226  addiu       $t0, $s0, 0x226
    ctx->pc = 0x3e7c90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 550));
label_3e7c94:
    // 0x3e7c94: 0x8e090254  lw          $t1, 0x254($s0)
    ctx->pc = 0x3e7c94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
label_3e7c98:
    // 0x3e7c98: 0x8e0a0258  lw          $t2, 0x258($s0)
    ctx->pc = 0x3e7c98u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
label_3e7c9c:
    // 0x3e7c9c: 0x8e0b025c  lw          $t3, 0x25C($s0)
    ctx->pc = 0x3e7c9cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
label_3e7ca0:
    // 0x3e7ca0: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x3e7ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
label_3e7ca4:
    // 0x3e7ca4: 0xafac0008  sw          $t4, 0x8($sp)
    ctx->pc = 0x3e7ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 12));
label_3e7ca8:
    // 0x3e7ca8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x3e7ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_3e7cac:
    // 0x3e7cac: 0xc0faeae  jal         func_3EBAB8
label_3e7cb0:
    if (ctx->pc == 0x3E7CB0u) {
        ctx->pc = 0x3E7CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7CACu;
        // 0x3e7cb0: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7CB4u;
        goto label_3e7cb4;
    }
    ctx->pc = 0x3E7CACu;
    SET_GPR_U32(ctx, 31, 0x3E7CB4u);
    ctx->pc = 0x3E7CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7CACu;
    // 0x3e7cb0: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBAB8u, 0x3E7CACu, 0x3E7CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7CB4u;
label_3e7cb4:
    // 0x3e7cb4: 0xde030108  ld          $v1, 0x108($s0)
    ctx->pc = 0x3e7cb4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3e7cb8:
    // 0x3e7cb8: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x3e7cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_3e7cbc:
    // 0x3e7cbc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_3e7cc0:
    if (ctx->pc == 0x3E7CC0u) {
        ctx->pc = 0x3E7CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7CBCu;
        // 0x3e7cc0: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7CC4u;
        goto label_3e7cc4;
    }
    ctx->pc = 0x3E7CBCu;
    {
        const bool branch_taken_0x3e7cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7CBCu;
        // 0x3e7cc0: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7cbc) {
            ctx->pc = 0x3E7D10u;
            goto label_3e7d10;
        }
    }
    ctx->pc = 0x3E7CC4u;
label_3e7cc4:
    // 0x3e7cc4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_3e7cc8:
    if (ctx->pc == 0x3E7CC8u) {
        ctx->pc = 0x3E7CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7CC4u;
        // 0x3e7cc8: 0x9203020a  lbu         $v1, 0x20A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 522)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7CCCu;
        goto label_3e7ccc;
    }
    ctx->pc = 0x3E7CC4u;
    {
        const bool branch_taken_0x3e7cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7cc4) {
            ctx->pc = 0x3E7CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7CC4u;
            // 0x3e7cc8: 0x9203020a  lbu         $v1, 0x20A($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 522)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7CECu;
            goto label_3e7cec;
        }
    }
    ctx->pc = 0x3E7CCCu;
label_3e7ccc:
    // 0x3e7ccc: 0x960201fe  lhu         $v0, 0x1FE($s0)
    ctx->pc = 0x3e7cccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 510)));
label_3e7cd0:
    // 0x3e7cd0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_3e7cd4:
    if (ctx->pc == 0x3E7CD4u) {
        ctx->pc = 0x3E7CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7CD0u;
        // 0x3e7cd4: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7CD8u;
        goto label_3e7cd8;
    }
    ctx->pc = 0x3E7CD0u;
    {
        const bool branch_taken_0x3e7cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7cd0) {
            ctx->pc = 0x3E7CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7CD0u;
            // 0x3e7cd4: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7D14u;
            goto label_3e7d14;
        }
    }
    ctx->pc = 0x3E7CD8u;
label_3e7cd8:
    // 0x3e7cd8: 0x9202020a  lbu         $v0, 0x20A($s0)
    ctx->pc = 0x3e7cd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 522)));
label_3e7cdc:
    // 0x3e7cdc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3e7cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3e7ce0:
    // 0x3e7ce0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_3e7ce4:
    if (ctx->pc == 0x3E7CE4u) {
        ctx->pc = 0x3E7CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7CE0u;
        // 0x3e7ce4: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7CE8u;
        goto label_3e7ce8;
    }
    ctx->pc = 0x3E7CE0u;
    {
        const bool branch_taken_0x3e7ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7ce0) {
            ctx->pc = 0x3E7CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7CE0u;
            // 0x3e7ce4: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7D14u;
            goto label_3e7d14;
        }
    }
    ctx->pc = 0x3E7CE8u;
label_3e7ce8:
    // 0x3e7ce8: 0x9203020a  lbu         $v1, 0x20A($s0)
    ctx->pc = 0x3e7ce8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 522)));
label_3e7cec:
    // 0x3e7cec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3e7cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e7cf0:
    // 0x3e7cf0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_3e7cf4:
    if (ctx->pc == 0x3E7CF4u) {
        ctx->pc = 0x3E7CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7CF0u;
        // 0x3e7cf4: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7CF8u;
        goto label_3e7cf8;
    }
    ctx->pc = 0x3E7CF0u;
    {
        const bool branch_taken_0x3e7cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E7CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7CF0u;
        // 0x3e7cf4: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7cf0) {
            ctx->pc = 0x3E7D10u;
            goto label_3e7d10;
        }
    }
    ctx->pc = 0x3E7CF8u;
label_3e7cf8:
    // 0x3e7cf8: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3e7cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3e7cfc:
    // 0x3e7cfc: 0x8e060254  lw          $a2, 0x254($s0)
    ctx->pc = 0x3e7cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
label_3e7d00:
    // 0x3e7d00: 0x8e070260  lw          $a3, 0x260($s0)
    ctx->pc = 0x3e7d00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_3e7d04:
    // 0x3e7d04: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3e7d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3e7d08:
    // 0x3e7d08: 0xc0fb794  jal         func_3EDE50
label_3e7d0c:
    if (ctx->pc == 0x3E7D0Cu) {
        ctx->pc = 0x3E7D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D08u;
        // 0x3e7d0c: 0x8e080248  lw          $t0, 0x248($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7D10u;
        goto label_3e7d10;
    }
    ctx->pc = 0x3E7D08u;
    SET_GPR_U32(ctx, 31, 0x3E7D10u);
    ctx->pc = 0x3E7D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7D08u;
    // 0x3e7d0c: 0x8e080248  lw          $t0, 0x248($s0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDE50u, 0x3E7D08u, 0x3E7D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7D10u;
label_3e7d10:
    // 0x3e7d10: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3e7d10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3e7d14:
    // 0x3e7d14: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3e7d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_3e7d18:
    // 0x3e7d18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3e7d1c:
    if (ctx->pc == 0x3E7D1Cu) {
        ctx->pc = 0x3E7D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D18u;
        // 0x3e7d1c: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7D20u;
        goto label_3e7d20;
    }
    ctx->pc = 0x3E7D18u;
    {
        const bool branch_taken_0x3e7d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D18u;
        // 0x3e7d1c: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7d18) {
            ctx->pc = 0x3E7D2Cu;
            goto label_3e7d2c;
        }
    }
    ctx->pc = 0x3E7D20u;
label_3e7d20:
    // 0x3e7d20: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3e7d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3e7d24:
    // 0x3e7d24: 0xc0fc844  jal         func_3F2110
label_3e7d28:
    if (ctx->pc == 0x3E7D28u) {
        ctx->pc = 0x3E7D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D24u;
        // 0x3e7d28: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7D2Cu;
        goto label_3e7d2c;
    }
    ctx->pc = 0x3E7D24u;
    SET_GPR_U32(ctx, 31, 0x3E7D2Cu);
    ctx->pc = 0x3E7D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7D24u;
    // 0x3e7d28: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F2110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F2110u, 0x3E7D24u, 0x3E7D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7D2Cu;
label_3e7d2c:
    // 0x3e7d2c: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3e7d2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3e7d30:
    // 0x3e7d30: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3e7d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_3e7d34:
    // 0x3e7d34: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3e7d38:
    if (ctx->pc == 0x3E7D38u) {
        ctx->pc = 0x3E7D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D34u;
        // 0x3e7d38: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7D3Cu;
        goto label_3e7d3c;
    }
    ctx->pc = 0x3E7D34u;
    {
        const bool branch_taken_0x3e7d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D34u;
        // 0x3e7d38: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7d34) {
            ctx->pc = 0x3E7D6Cu;
            goto label_3e7d6c;
        }
    }
    ctx->pc = 0x3E7D3Cu;
label_3e7d3c:
    // 0x3e7d3c: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3e7d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3e7d40:
    // 0x3e7d40: 0x8e060290  lw          $a2, 0x290($s0)
    ctx->pc = 0x3e7d40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
label_3e7d44:
    // 0x3e7d44: 0x8e070294  lw          $a3, 0x294($s0)
    ctx->pc = 0x3e7d44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
label_3e7d48:
    // 0x3e7d48: 0xc0fc16a  jal         func_3F05A8
label_3e7d4c:
    if (ctx->pc == 0x3E7D4Cu) {
        ctx->pc = 0x3E7D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D48u;
        // 0x3e7d4c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7D50u;
        goto label_3e7d50;
    }
    ctx->pc = 0x3E7D48u;
    SET_GPR_U32(ctx, 31, 0x3E7D50u);
    ctx->pc = 0x3E7D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7D48u;
    // 0x3e7d4c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F05A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F05A8u, 0x3E7D48u, 0x3E7D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7D50u;
label_3e7d50:
    // 0x3e7d50: 0xde0201d8  ld          $v0, 0x1D8($s0)
    ctx->pc = 0x3e7d50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 472)));
label_3e7d54:
    // 0x3e7d54: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_3e7d58:
    if (ctx->pc == 0x3E7D58u) {
        ctx->pc = 0x3E7D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D54u;
        // 0x3e7d58: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7D5Cu;
        goto label_3e7d5c;
    }
    ctx->pc = 0x3E7D54u;
    {
        const bool branch_taken_0x3e7d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7d54) {
            ctx->pc = 0x3E7D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7D54u;
            // 0x3e7d58: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7D70u;
            goto label_3e7d70;
        }
    }
    ctx->pc = 0x3E7D5Cu;
label_3e7d5c:
    // 0x3e7d5c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3e7d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3e7d60:
    // 0x3e7d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e7d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e7d64:
    // 0x3e7d64: 0xc0f86f2  jal         func_3E1BC8
label_3e7d68:
    if (ctx->pc == 0x3E7D68u) {
        ctx->pc = 0x3E7D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D64u;
        // 0x3e7d68: 0x24a5e8a0  addiu       $a1, $a1, -0x1760 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7D6Cu;
        goto label_3e7d6c;
    }
    ctx->pc = 0x3E7D64u;
    SET_GPR_U32(ctx, 31, 0x3E7D6Cu);
    ctx->pc = 0x3E7D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7D64u;
    // 0x3e7d68: 0x24a5e8a0  addiu       $a1, $a1, -0x1760 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E7D64u, 0x3E7D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7D6Cu;
label_3e7d6c:
    // 0x3e7d6c: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3e7d6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3e7d70:
    // 0x3e7d70: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3e7d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_3e7d74:
    // 0x3e7d74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3e7d78:
    if (ctx->pc == 0x3E7D78u) {
        ctx->pc = 0x3E7D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D74u;
        // 0x3e7d78: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7D7Cu;
        goto label_3e7d7c;
    }
    ctx->pc = 0x3E7D74u;
    {
        const bool branch_taken_0x3e7d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D74u;
        // 0x3e7d78: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7d74) {
            ctx->pc = 0x3E7D88u;
            goto label_3e7d88;
        }
    }
    ctx->pc = 0x3E7D7Cu;
label_3e7d7c:
    // 0x3e7d7c: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3e7d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3e7d80:
    // 0x3e7d80: 0xc0ff46c  jal         func_3FD1B0
label_3e7d84:
    if (ctx->pc == 0x3E7D84u) {
        ctx->pc = 0x3E7D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D80u;
        // 0x3e7d84: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7D88u;
        goto label_3e7d88;
    }
    ctx->pc = 0x3E7D80u;
    SET_GPR_U32(ctx, 31, 0x3E7D88u);
    ctx->pc = 0x3E7D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7D80u;
    // 0x3e7d84: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD1B0u, 0x3E7D80u, 0x3E7D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7D88u;
label_3e7d88:
    // 0x3e7d88: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3e7d88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3e7d8c:
    // 0x3e7d8c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3e7d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_3e7d90:
    // 0x3e7d90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3e7d94:
    if (ctx->pc == 0x3E7D94u) {
        ctx->pc = 0x3E7D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D90u;
        // 0x3e7d94: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7D98u;
        goto label_3e7d98;
    }
    ctx->pc = 0x3E7D90u;
    {
        const bool branch_taken_0x3e7d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7D90u;
        // 0x3e7d94: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7d90) {
            ctx->pc = 0x3E7DA8u;
            goto label_3e7da8;
        }
    }
    ctx->pc = 0x3E7D98u;
label_3e7d98:
    // 0x3e7d98: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3e7d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3e7d9c:
    // 0x3e7d9c: 0x26060271  addiu       $a2, $s0, 0x271
    ctx->pc = 0x3e7d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 625));
label_3e7da0:
    // 0x3e7da0: 0xc0fa156  jal         func_3E8558
label_3e7da4:
    if (ctx->pc == 0x3E7DA4u) {
        ctx->pc = 0x3E7DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7DA0u;
        // 0x3e7da4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7DA8u;
        goto label_3e7da8;
    }
    ctx->pc = 0x3E7DA0u;
    SET_GPR_U32(ctx, 31, 0x3E7DA8u);
    ctx->pc = 0x3E7DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7DA0u;
    // 0x3e7da4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E8558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8558u, 0x3E7DA0u, 0x3E7DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7DA8u;
label_3e7da8:
    // 0x3e7da8: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3e7da8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3e7dac:
    // 0x3e7dac: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3e7dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3e7db0:
    // 0x3e7db0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3e7db4:
    if (ctx->pc == 0x3E7DB4u) {
        ctx->pc = 0x3E7DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7DB0u;
        // 0x3e7db4: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7DB8u;
        goto label_3e7db8;
    }
    ctx->pc = 0x3E7DB0u;
    {
        const bool branch_taken_0x3e7db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7DB0u;
        // 0x3e7db4: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7db0) {
            ctx->pc = 0x3E7DC4u;
            goto label_3e7dc4;
        }
    }
    ctx->pc = 0x3E7DB8u;
label_3e7db8:
    // 0x3e7db8: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3e7db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3e7dbc:
    // 0x3e7dbc: 0xc0f9fce  jal         func_3E7F38
label_3e7dc0:
    if (ctx->pc == 0x3E7DC0u) {
        ctx->pc = 0x3E7DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7DBCu;
        // 0x3e7dc0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7DC4u;
        goto label_3e7dc4;
    }
    ctx->pc = 0x3E7DBCu;
    SET_GPR_U32(ctx, 31, 0x3E7DC4u);
    ctx->pc = 0x3E7DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7DBCu;
    // 0x3e7dc0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7F38u, 0x3E7DBCu, 0x3E7DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7DC4u;
label_3e7dc4:
    // 0x3e7dc4: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3e7dc4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3e7dc8:
    // 0x3e7dc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3e7dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3e7dcc:
    // 0x3e7dcc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3e7dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3e7dd0:
    // 0x3e7dd0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e7dd0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3e7dd4:
    // 0x3e7dd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3e7dd8:
    if (ctx->pc == 0x3E7DD8u) {
        ctx->pc = 0x3E7DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7DD4u;
        // 0x3e7dd8: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7DDCu;
        goto label_3e7ddc;
    }
    ctx->pc = 0x3E7DD4u;
    {
        const bool branch_taken_0x3e7dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7DD4u;
        // 0x3e7dd8: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7dd4) {
            ctx->pc = 0x3E7DE8u;
            goto label_3e7de8;
        }
    }
    ctx->pc = 0x3E7DDCu;
label_3e7ddc:
    // 0x3e7ddc: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3e7ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3e7de0:
    // 0x3e7de0: 0xc0ff21a  jal         func_3FC868
label_3e7de4:
    if (ctx->pc == 0x3E7DE4u) {
        ctx->pc = 0x3E7DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7DE0u;
        // 0x3e7de4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7DE8u;
        goto label_3e7de8;
    }
    ctx->pc = 0x3E7DE0u;
    SET_GPR_U32(ctx, 31, 0x3E7DE8u);
    ctx->pc = 0x3E7DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7DE0u;
    // 0x3e7de4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FC868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FC868u, 0x3E7DE0u, 0x3E7DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7DE8u;
label_3e7de8:
    // 0x3e7de8: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3e7de8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3e7dec:
    // 0x3e7dec: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3e7decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3e7df0:
    // 0x3e7df0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e7df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3e7df4:
    // 0x3e7df4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3e7df8:
    if (ctx->pc == 0x3E7DF8u) {
        ctx->pc = 0x3E7DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7DF4u;
        // 0x3e7df8: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7DFCu;
        goto label_3e7dfc;
    }
    ctx->pc = 0x3E7DF4u;
    {
        const bool branch_taken_0x3e7df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7DF4u;
        // 0x3e7df8: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7df4) {
            ctx->pc = 0x3E7E08u;
            goto label_3e7e08;
        }
    }
    ctx->pc = 0x3E7DFCu;
label_3e7dfc:
    // 0x3e7dfc: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3e7dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3e7e00:
    // 0x3e7e00: 0xc0ff41e  jal         func_3FD078
label_3e7e04:
    if (ctx->pc == 0x3E7E04u) {
        ctx->pc = 0x3E7E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E00u;
        // 0x3e7e04: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7E08u;
        goto label_3e7e08;
    }
    ctx->pc = 0x3E7E00u;
    SET_GPR_U32(ctx, 31, 0x3E7E08u);
    ctx->pc = 0x3E7E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7E00u;
    // 0x3e7e04: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD078u, 0x3E7E00u, 0x3E7E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7E08u;
label_3e7e08:
    // 0x3e7e08: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3e7e08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3e7e0c:
    // 0x3e7e0c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x3e7e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_3e7e10:
    // 0x3e7e10: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_3e7e14:
    if (ctx->pc == 0x3E7E14u) {
        ctx->pc = 0x3E7E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E10u;
        // 0x3e7e14: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7E18u;
        goto label_3e7e18;
    }
    ctx->pc = 0x3E7E10u;
    {
        const bool branch_taken_0x3e7e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7e10) {
            ctx->pc = 0x3E7E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7E10u;
            // 0x3e7e14: 0xde020108  ld          $v0, 0x108($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7E38u;
            goto label_3e7e38;
        }
    }
    ctx->pc = 0x3E7E18u;
label_3e7e18:
    // 0x3e7e18: 0xde0200f8  ld          $v0, 0xF8($s0)
    ctx->pc = 0x3e7e18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
label_3e7e1c:
    // 0x3e7e1c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x3e7e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_3e7e20:
    // 0x3e7e20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3e7e24:
    if (ctx->pc == 0x3E7E24u) {
        ctx->pc = 0x3E7E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E20u;
        // 0x3e7e24: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7E28u;
        goto label_3e7e28;
    }
    ctx->pc = 0x3E7E20u;
    {
        const bool branch_taken_0x3e7e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E20u;
        // 0x3e7e24: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7e20) {
            ctx->pc = 0x3E7E34u;
            goto label_3e7e34;
        }
    }
    ctx->pc = 0x3E7E28u;
label_3e7e28:
    // 0x3e7e28: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3e7e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3e7e2c:
    // 0x3e7e2c: 0xc0fa936  jal         func_3EA4D8
label_3e7e30:
    if (ctx->pc == 0x3E7E30u) {
        ctx->pc = 0x3E7E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E2Cu;
        // 0x3e7e30: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7E34u;
        goto label_3e7e34;
    }
    ctx->pc = 0x3E7E2Cu;
    SET_GPR_U32(ctx, 31, 0x3E7E34u);
    ctx->pc = 0x3E7E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7E2Cu;
    // 0x3e7e30: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EA4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EA4D8u, 0x3E7E2Cu, 0x3E7E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7E34u;
label_3e7e34:
    // 0x3e7e34: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3e7e34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3e7e38:
    // 0x3e7e38: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x3e7e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_3e7e3c:
    // 0x3e7e3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3e7e40:
    if (ctx->pc == 0x3E7E40u) {
        ctx->pc = 0x3E7E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E3Cu;
        // 0x3e7e40: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7E44u;
        goto label_3e7e44;
    }
    ctx->pc = 0x3E7E3Cu;
    {
        const bool branch_taken_0x3e7e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E3Cu;
        // 0x3e7e40: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7e3c) {
            ctx->pc = 0x3E7E58u;
            goto label_3e7e58;
        }
    }
    ctx->pc = 0x3E7E44u;
label_3e7e44:
    // 0x3e7e44: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3e7e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3e7e48:
    // 0x3e7e48: 0x96060212  lhu         $a2, 0x212($s0)
    ctx->pc = 0x3e7e48u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 530)));
label_3e7e4c:
    // 0x3e7e4c: 0xde070100  ld          $a3, 0x100($s0)
    ctx->pc = 0x3e7e4cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 256)));
label_3e7e50:
    // 0x3e7e50: 0xc0fa606  jal         func_3E9818
label_3e7e54:
    if (ctx->pc == 0x3E7E54u) {
        ctx->pc = 0x3E7E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E50u;
        // 0x3e7e54: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7E58u;
        goto label_3e7e58;
    }
    ctx->pc = 0x3E7E50u;
    SET_GPR_U32(ctx, 31, 0x3E7E58u);
    ctx->pc = 0x3E7E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7E50u;
    // 0x3e7e54: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9818u, 0x3E7E50u, 0x3E7E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7E58u;
label_3e7e58:
    // 0x3e7e58: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3e7e58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3e7e5c:
    // 0x3e7e5c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x3e7e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_3e7e60:
    // 0x3e7e60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e7e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3e7e64:
    // 0x3e7e64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3e7e68:
    if (ctx->pc == 0x3E7E68u) {
        ctx->pc = 0x3E7E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E64u;
        // 0x3e7e68: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7E6Cu;
        goto label_3e7e6c;
    }
    ctx->pc = 0x3E7E64u;
    {
        const bool branch_taken_0x3e7e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E64u;
        // 0x3e7e68: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7e64) {
            ctx->pc = 0x3E7E78u;
            goto label_3e7e78;
        }
    }
    ctx->pc = 0x3E7E6Cu;
label_3e7e6c:
    // 0x3e7e6c: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3e7e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3e7e70:
    // 0x3e7e70: 0xc0fa4be  jal         func_3E92F8
label_3e7e74:
    if (ctx->pc == 0x3E7E74u) {
        ctx->pc = 0x3E7E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E70u;
        // 0x3e7e74: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7E78u;
        goto label_3e7e78;
    }
    ctx->pc = 0x3E7E70u;
    SET_GPR_U32(ctx, 31, 0x3E7E78u);
    ctx->pc = 0x3E7E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7E70u;
    // 0x3e7e74: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E92F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E92F8u, 0x3E7E70u, 0x3E7E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7E78u;
label_3e7e78:
    // 0x3e7e78: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3e7e78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3e7e7c:
    // 0x3e7e7c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3e7e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_3e7e80:
    // 0x3e7e80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e7e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3e7e84:
    // 0x3e7e84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3e7e88:
    if (ctx->pc == 0x3E7E88u) {
        ctx->pc = 0x3E7E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E84u;
        // 0x3e7e88: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7E8Cu;
        goto label_3e7e8c;
    }
    ctx->pc = 0x3E7E84u;
    {
        const bool branch_taken_0x3e7e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E84u;
        // 0x3e7e88: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7e84) {
            ctx->pc = 0x3E7E98u;
            goto label_3e7e98;
        }
    }
    ctx->pc = 0x3E7E8Cu;
label_3e7e8c:
    // 0x3e7e8c: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3e7e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3e7e90:
    // 0x3e7e90: 0xc0fa34c  jal         func_3E8D30
label_3e7e94:
    if (ctx->pc == 0x3E7E94u) {
        ctx->pc = 0x3E7E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E90u;
        // 0x3e7e94: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7E98u;
        goto label_3e7e98;
    }
    ctx->pc = 0x3E7E90u;
    SET_GPR_U32(ctx, 31, 0x3E7E98u);
    ctx->pc = 0x3E7E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7E90u;
    // 0x3e7e94: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E8D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8D30u, 0x3E7E90u, 0x3E7E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7E98u;
label_3e7e98:
    // 0x3e7e98: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3e7e98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3e7e9c:
    // 0x3e7e9c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3e7e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_3e7ea0:
    // 0x3e7ea0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3e7ea4:
    if (ctx->pc == 0x3E7EA4u) {
        ctx->pc = 0x3E7EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7EA0u;
        // 0x3e7ea4: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7EA8u;
        goto label_3e7ea8;
    }
    ctx->pc = 0x3E7EA0u;
    {
        const bool branch_taken_0x3e7ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7EA0u;
        // 0x3e7ea4: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7ea0) {
            ctx->pc = 0x3E7EB4u;
            goto label_3e7eb4;
        }
    }
    ctx->pc = 0x3E7EA8u;
label_3e7ea8:
    // 0x3e7ea8: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x3e7ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3e7eac:
    // 0x3e7eac: 0xc0ff3d6  jal         func_3FCF58
label_3e7eb0:
    if (ctx->pc == 0x3E7EB0u) {
        ctx->pc = 0x3E7EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7EACu;
        // 0x3e7eb0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7EB4u;
        goto label_3e7eb4;
    }
    ctx->pc = 0x3E7EACu;
    SET_GPR_U32(ctx, 31, 0x3E7EB4u);
    ctx->pc = 0x3E7EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7EACu;
    // 0x3e7eb0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FCF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FCF58u, 0x3E7EACu, 0x3E7EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7EB4u;
label_3e7eb4:
    // 0x3e7eb4: 0xde020108  ld          $v0, 0x108($s0)
    ctx->pc = 0x3e7eb4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 264)));
label_3e7eb8:
    // 0x3e7eb8: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x3e7eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_3e7ebc:
    // 0x3e7ebc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e7ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3e7ec0:
    // 0x3e7ec0: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_3e7ec4:
    if (ctx->pc == 0x3E7EC4u) {
        ctx->pc = 0x3E7EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7EC0u;
        // 0x3e7ec4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7EC8u;
        goto label_3e7ec8;
    }
    ctx->pc = 0x3E7EC0u;
    {
        const bool branch_taken_0x3e7ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7ec0) {
            ctx->pc = 0x3E7EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7EC0u;
            // 0x3e7ec4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7F28u;
            goto label_3e7f28;
        }
    }
    ctx->pc = 0x3E7EC8u;
label_3e7ec8:
    // 0x3e7ec8: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x3e7ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_3e7ecc:
    // 0x3e7ecc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3e7ed0:
    if (ctx->pc == 0x3E7ED0u) {
        ctx->pc = 0x3E7ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7ECCu;
        // 0x3e7ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7ED4u;
        goto label_3e7ed4;
    }
    ctx->pc = 0x3E7ECCu;
    {
        const bool branch_taken_0x3e7ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7ECCu;
        // 0x3e7ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7ecc) {
            ctx->pc = 0x3E7EE4u;
            goto label_3e7ee4;
        }
    }
    ctx->pc = 0x3E7ED4u;
label_3e7ed4:
    // 0x3e7ed4: 0x8e0601bc  lw          $a2, 0x1BC($s0)
    ctx->pc = 0x3e7ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3e7ed8:
    // 0x3e7ed8: 0x260501d0  addiu       $a1, $s0, 0x1D0
    ctx->pc = 0x3e7ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
label_3e7edc:
    // 0x3e7edc: 0x40f809  jalr        $v0
label_3e7ee0:
    if (ctx->pc == 0x3E7EE0u) {
        ctx->pc = 0x3E7EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7EDCu;
        // 0x3e7ee0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7EE4u;
        goto label_3e7ee4;
    }
    ctx->pc = 0x3E7EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E7EE4u);
        ctx->pc = 0x3E7EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7EDCu;
        // 0x3e7ee0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7EDCu, 0x3E7EE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E7EE4u;
label_3e7ee4:
    // 0x3e7ee4: 0x920200f4  lbu         $v0, 0xF4($s0)
    ctx->pc = 0x3e7ee4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 244)));
label_3e7ee8:
    // 0x3e7ee8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_3e7eec:
    if (ctx->pc == 0x3E7EECu) {
        ctx->pc = 0x3E7EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7EE8u;
        // 0x3e7eec: 0xa20201e1  sb          $v0, 0x1E1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 481), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7EF0u;
        goto label_3e7ef0;
    }
    ctx->pc = 0x3E7EE8u;
    {
        const bool branch_taken_0x3e7ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7ee8) {
            ctx->pc = 0x3E7EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7EE8u;
            // 0x3e7eec: 0xa20201e1  sb          $v0, 0x1E1($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 481), (uint8_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7EF0u;
            goto label_3e7ef0;
        }
    }
    ctx->pc = 0x3E7EF0u;
label_3e7ef0:
    // 0x3e7ef0: 0x920200f5  lbu         $v0, 0xF5($s0)
    ctx->pc = 0x3e7ef0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 245)));
label_3e7ef4:
    // 0x3e7ef4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_3e7ef8:
    if (ctx->pc == 0x3E7EF8u) {
        ctx->pc = 0x3E7EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7EF4u;
        // 0x3e7ef8: 0xa20201e2  sb          $v0, 0x1E2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 482), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7EFCu;
        goto label_3e7efc;
    }
    ctx->pc = 0x3E7EF4u;
    {
        const bool branch_taken_0x3e7ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7ef4) {
            ctx->pc = 0x3E7EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7EF4u;
            // 0x3e7ef8: 0xa20201e2  sb          $v0, 0x1E2($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 482), (uint8_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7EFCu;
            goto label_3e7efc;
        }
    }
    ctx->pc = 0x3E7EFCu;
label_3e7efc:
    // 0x3e7efc: 0x920301e2  lbu         $v1, 0x1E2($s0)
    ctx->pc = 0x3e7efcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 482)));
label_3e7f00:
    // 0x3e7f00: 0x920201e1  lbu         $v0, 0x1E1($s0)
    ctx->pc = 0x3e7f00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 481)));
label_3e7f04:
    // 0x3e7f04: 0xde0401d0  ld          $a0, 0x1D0($s0)
    ctx->pc = 0x3e7f04u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 464)));
label_3e7f08:
    // 0x3e7f08: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3e7f08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3e7f0c:
    // 0x3e7f0c: 0xa20201e3  sb          $v0, 0x1E3($s0)
    ctx->pc = 0x3e7f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 483), (uint8_t)GPR_U32(ctx, 2));
label_3e7f10:
    // 0x3e7f10: 0xc0be4b8  jal         func_2F92E0
label_3e7f14:
    if (ctx->pc == 0x3E7F14u) {
        ctx->pc = 0x3E7F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7F10u;
        // 0x3e7f14: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7F18u;
        goto label_3e7f18;
    }
    ctx->pc = 0x3E7F10u;
    SET_GPR_U32(ctx, 31, 0x3E7F18u);
    ctx->pc = 0x3E7F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7F10u;
    // 0x3e7f14: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3E7F10u, 0x3E7F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7F18u;
label_3e7f18:
    // 0x3e7f18: 0x64420007  daddiu      $v0, $v0, 0x7
    ctx->pc = 0x3e7f18u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)7);
label_3e7f1c:
    // 0x3e7f1c: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x3e7f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
label_3e7f20:
    // 0x3e7f20: 0xfe0201d8  sd          $v0, 0x1D8($s0)
    ctx->pc = 0x3e7f20u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 472), GPR_U64(ctx, 2));
label_3e7f24:
    // 0x3e7f24: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3e7f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e7f28:
    // 0x3e7f28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e7f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3e7f2c:
    // 0x3e7f2c: 0x3e00008  jr          $ra
label_3e7f30:
    if (ctx->pc == 0x3E7F30u) {
        ctx->pc = 0x3E7F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7F2Cu;
        // 0x3e7f30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7F34u;
        goto label_3e7f34;
    }
    ctx->pc = 0x3E7F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7F2Cu;
        // 0x3e7f30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E7F34u;
label_3e7f34:
    // 0x3e7f34: 0x0  nop
    ctx->pc = 0x3e7f34u;
    // NOP
    ctx->pc = 0x3e7f38u;
}
