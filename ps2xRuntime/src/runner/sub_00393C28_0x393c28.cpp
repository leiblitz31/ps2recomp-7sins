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

// Function: sub_00393C28
// Address: 0x393c28 - 0x393f18
void sub_00393C28_0x393c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00393C28_0x393c28");
#endif

    switch (ctx->pc) {
        case 0x393c28u: goto label_393c28;
        case 0x393c2cu: goto label_393c2c;
        case 0x393c30u: goto label_393c30;
        case 0x393c34u: goto label_393c34;
        case 0x393c38u: goto label_393c38;
        case 0x393c3cu: goto label_393c3c;
        case 0x393c40u: goto label_393c40;
        case 0x393c44u: goto label_393c44;
        case 0x393c48u: goto label_393c48;
        case 0x393c4cu: goto label_393c4c;
        case 0x393c50u: goto label_393c50;
        case 0x393c54u: goto label_393c54;
        case 0x393c58u: goto label_393c58;
        case 0x393c5cu: goto label_393c5c;
        case 0x393c60u: goto label_393c60;
        case 0x393c64u: goto label_393c64;
        case 0x393c68u: goto label_393c68;
        case 0x393c6cu: goto label_393c6c;
        case 0x393c70u: goto label_393c70;
        case 0x393c74u: goto label_393c74;
        case 0x393c78u: goto label_393c78;
        case 0x393c7cu: goto label_393c7c;
        case 0x393c80u: goto label_393c80;
        case 0x393c84u: goto label_393c84;
        case 0x393c88u: goto label_393c88;
        case 0x393c8cu: goto label_393c8c;
        case 0x393c90u: goto label_393c90;
        case 0x393c94u: goto label_393c94;
        case 0x393c98u: goto label_393c98;
        case 0x393c9cu: goto label_393c9c;
        case 0x393ca0u: goto label_393ca0;
        case 0x393ca4u: goto label_393ca4;
        case 0x393ca8u: goto label_393ca8;
        case 0x393cacu: goto label_393cac;
        case 0x393cb0u: goto label_393cb0;
        case 0x393cb4u: goto label_393cb4;
        case 0x393cb8u: goto label_393cb8;
        case 0x393cbcu: goto label_393cbc;
        case 0x393cc0u: goto label_393cc0;
        case 0x393cc4u: goto label_393cc4;
        case 0x393cc8u: goto label_393cc8;
        case 0x393cccu: goto label_393ccc;
        case 0x393cd0u: goto label_393cd0;
        case 0x393cd4u: goto label_393cd4;
        case 0x393cd8u: goto label_393cd8;
        case 0x393cdcu: goto label_393cdc;
        case 0x393ce0u: goto label_393ce0;
        case 0x393ce4u: goto label_393ce4;
        case 0x393ce8u: goto label_393ce8;
        case 0x393cecu: goto label_393cec;
        case 0x393cf0u: goto label_393cf0;
        case 0x393cf4u: goto label_393cf4;
        case 0x393cf8u: goto label_393cf8;
        case 0x393cfcu: goto label_393cfc;
        case 0x393d00u: goto label_393d00;
        case 0x393d04u: goto label_393d04;
        case 0x393d08u: goto label_393d08;
        case 0x393d0cu: goto label_393d0c;
        case 0x393d10u: goto label_393d10;
        case 0x393d14u: goto label_393d14;
        case 0x393d18u: goto label_393d18;
        case 0x393d1cu: goto label_393d1c;
        case 0x393d20u: goto label_393d20;
        case 0x393d24u: goto label_393d24;
        case 0x393d28u: goto label_393d28;
        case 0x393d2cu: goto label_393d2c;
        case 0x393d30u: goto label_393d30;
        case 0x393d34u: goto label_393d34;
        case 0x393d38u: goto label_393d38;
        case 0x393d3cu: goto label_393d3c;
        case 0x393d40u: goto label_393d40;
        case 0x393d44u: goto label_393d44;
        case 0x393d48u: goto label_393d48;
        case 0x393d4cu: goto label_393d4c;
        case 0x393d50u: goto label_393d50;
        case 0x393d54u: goto label_393d54;
        case 0x393d58u: goto label_393d58;
        case 0x393d5cu: goto label_393d5c;
        case 0x393d60u: goto label_393d60;
        case 0x393d64u: goto label_393d64;
        case 0x393d68u: goto label_393d68;
        case 0x393d6cu: goto label_393d6c;
        case 0x393d70u: goto label_393d70;
        case 0x393d74u: goto label_393d74;
        case 0x393d78u: goto label_393d78;
        case 0x393d7cu: goto label_393d7c;
        case 0x393d80u: goto label_393d80;
        case 0x393d84u: goto label_393d84;
        case 0x393d88u: goto label_393d88;
        case 0x393d8cu: goto label_393d8c;
        case 0x393d90u: goto label_393d90;
        case 0x393d94u: goto label_393d94;
        case 0x393d98u: goto label_393d98;
        case 0x393d9cu: goto label_393d9c;
        case 0x393da0u: goto label_393da0;
        case 0x393da4u: goto label_393da4;
        case 0x393da8u: goto label_393da8;
        case 0x393dacu: goto label_393dac;
        case 0x393db0u: goto label_393db0;
        case 0x393db4u: goto label_393db4;
        case 0x393db8u: goto label_393db8;
        case 0x393dbcu: goto label_393dbc;
        case 0x393dc0u: goto label_393dc0;
        case 0x393dc4u: goto label_393dc4;
        case 0x393dc8u: goto label_393dc8;
        case 0x393dccu: goto label_393dcc;
        case 0x393dd0u: goto label_393dd0;
        case 0x393dd4u: goto label_393dd4;
        case 0x393dd8u: goto label_393dd8;
        case 0x393ddcu: goto label_393ddc;
        case 0x393de0u: goto label_393de0;
        case 0x393de4u: goto label_393de4;
        case 0x393de8u: goto label_393de8;
        case 0x393decu: goto label_393dec;
        case 0x393df0u: goto label_393df0;
        case 0x393df4u: goto label_393df4;
        case 0x393df8u: goto label_393df8;
        case 0x393dfcu: goto label_393dfc;
        case 0x393e00u: goto label_393e00;
        case 0x393e04u: goto label_393e04;
        case 0x393e08u: goto label_393e08;
        case 0x393e0cu: goto label_393e0c;
        case 0x393e10u: goto label_393e10;
        case 0x393e14u: goto label_393e14;
        case 0x393e18u: goto label_393e18;
        case 0x393e1cu: goto label_393e1c;
        case 0x393e20u: goto label_393e20;
        case 0x393e24u: goto label_393e24;
        case 0x393e28u: goto label_393e28;
        case 0x393e2cu: goto label_393e2c;
        case 0x393e30u: goto label_393e30;
        case 0x393e34u: goto label_393e34;
        case 0x393e38u: goto label_393e38;
        case 0x393e3cu: goto label_393e3c;
        case 0x393e40u: goto label_393e40;
        case 0x393e44u: goto label_393e44;
        case 0x393e48u: goto label_393e48;
        case 0x393e4cu: goto label_393e4c;
        case 0x393e50u: goto label_393e50;
        case 0x393e54u: goto label_393e54;
        case 0x393e58u: goto label_393e58;
        case 0x393e5cu: goto label_393e5c;
        case 0x393e60u: goto label_393e60;
        case 0x393e64u: goto label_393e64;
        case 0x393e68u: goto label_393e68;
        case 0x393e6cu: goto label_393e6c;
        case 0x393e70u: goto label_393e70;
        case 0x393e74u: goto label_393e74;
        case 0x393e78u: goto label_393e78;
        case 0x393e7cu: goto label_393e7c;
        case 0x393e80u: goto label_393e80;
        case 0x393e84u: goto label_393e84;
        case 0x393e88u: goto label_393e88;
        case 0x393e8cu: goto label_393e8c;
        case 0x393e90u: goto label_393e90;
        case 0x393e94u: goto label_393e94;
        case 0x393e98u: goto label_393e98;
        case 0x393e9cu: goto label_393e9c;
        case 0x393ea0u: goto label_393ea0;
        case 0x393ea4u: goto label_393ea4;
        case 0x393ea8u: goto label_393ea8;
        case 0x393eacu: goto label_393eac;
        case 0x393eb0u: goto label_393eb0;
        case 0x393eb4u: goto label_393eb4;
        case 0x393eb8u: goto label_393eb8;
        case 0x393ebcu: goto label_393ebc;
        case 0x393ec0u: goto label_393ec0;
        case 0x393ec4u: goto label_393ec4;
        case 0x393ec8u: goto label_393ec8;
        case 0x393eccu: goto label_393ecc;
        case 0x393ed0u: goto label_393ed0;
        case 0x393ed4u: goto label_393ed4;
        case 0x393ed8u: goto label_393ed8;
        case 0x393edcu: goto label_393edc;
        case 0x393ee0u: goto label_393ee0;
        case 0x393ee4u: goto label_393ee4;
        case 0x393ee8u: goto label_393ee8;
        case 0x393eecu: goto label_393eec;
        case 0x393ef0u: goto label_393ef0;
        case 0x393ef4u: goto label_393ef4;
        case 0x393ef8u: goto label_393ef8;
        case 0x393efcu: goto label_393efc;
        case 0x393f00u: goto label_393f00;
        case 0x393f04u: goto label_393f04;
        case 0x393f08u: goto label_393f08;
        case 0x393f0cu: goto label_393f0c;
        case 0x393f10u: goto label_393f10;
        case 0x393f14u: goto label_393f14;
        default: break;
    }

    ctx->pc = 0x393c28u;

label_393c28:
    // 0x393c28: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x393c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_393c2c:
    // 0x393c2c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x393c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_393c30:
    // 0x393c30: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x393c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_393c34:
    // 0x393c34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x393c34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_393c38:
    // 0x393c38: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x393c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_393c3c:
    // 0x393c3c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x393c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_393c40:
    // 0x393c40: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x393c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_393c44:
    // 0x393c44: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x393c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_393c48:
    // 0x393c48: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x393c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_393c4c:
    // 0x393c4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x393c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_393c50:
    // 0x393c50: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x393c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_393c54:
    // 0x393c54: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x393c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_393c58:
    // 0x393c58: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_393c5c:
    if (ctx->pc == 0x393C5Cu) {
        ctx->pc = 0x393C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C58u;
        // 0x393c5c: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393C60u;
        goto label_393c60;
    }
    ctx->pc = 0x393C58u;
    {
        const bool branch_taken_0x393c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C58u;
        // 0x393c5c: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393c58) {
            ctx->pc = 0x393C8Cu;
            goto label_393c8c;
        }
    }
    ctx->pc = 0x393C60u;
label_393c60:
    // 0x393c60: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x393c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_393c64:
    // 0x393c64: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x393c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_393c68:
    // 0x393c68: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x393c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_393c6c:
    // 0x393c6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x393c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_393c70:
    // 0x393c70: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x393c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_393c74:
    // 0x393c74: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
label_393c78:
    if (ctx->pc == 0x393C78u) {
        ctx->pc = 0x393C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C74u;
        // 0x393c78: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393C7Cu;
        goto label_393c7c;
    }
    ctx->pc = 0x393C74u;
    {
        const bool branch_taken_0x393c74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x393c74) {
            ctx->pc = 0x393C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393C74u;
            // 0x393c78: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393C90u;
            goto label_393c90;
        }
    }
    ctx->pc = 0x393C7Cu;
label_393c7c:
    // 0x393c7c: 0x1000009c  b           . + 4 + (0x9C << 2)
label_393c80:
    if (ctx->pc == 0x393C80u) {
        ctx->pc = 0x393C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C7Cu;
        // 0x393c80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393C84u;
        goto label_393c84;
    }
    ctx->pc = 0x393C7Cu;
    {
        const bool branch_taken_0x393c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C7Cu;
        // 0x393c80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393c7c) {
            ctx->pc = 0x393EF0u;
            goto label_393ef0;
        }
    }
    ctx->pc = 0x393C84u;
label_393c84:
    // 0x393c84: 0x1000002f  b           . + 4 + (0x2F << 2)
label_393c88:
    if (ctx->pc == 0x393C88u) {
        ctx->pc = 0x393C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C84u;
        // 0x393c88: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393C8Cu;
        goto label_393c8c;
    }
    ctx->pc = 0x393C84u;
    {
        const bool branch_taken_0x393c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C84u;
        // 0x393c88: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393c84) {
            ctx->pc = 0x393D44u;
            goto label_393d44;
        }
    }
    ctx->pc = 0x393C8Cu;
label_393c8c:
    // 0x393c8c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x393c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_393c90:
    // 0x393c90: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_393c94:
    if (ctx->pc == 0x393C94u) {
        ctx->pc = 0x393C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C90u;
        // 0x393c94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393C98u;
        goto label_393c98;
    }
    ctx->pc = 0x393C90u;
    {
        const bool branch_taken_0x393c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C90u;
        // 0x393c94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393c90) {
            ctx->pc = 0x393CC4u;
            goto label_393cc4;
        }
    }
    ctx->pc = 0x393C98u;
label_393c98:
    // 0x393c98: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x393c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_393c9c:
    // 0x393c9c: 0x0  nop
    ctx->pc = 0x393c9cu;
    // NOP
label_393ca0:
    // 0x393ca0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x393ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_393ca4:
    // 0x393ca4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x393ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_393ca8:
    // 0x393ca8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x393ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_393cac:
    // 0x393cac: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x393cacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_393cb0:
    // 0x393cb0: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x393cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_393cb4:
    // 0x393cb4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x393cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_393cb8:
    // 0x393cb8: 0xc4202b  sltu        $a0, $a2, $a0
    ctx->pc = 0x393cb8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_393cbc:
    // 0x393cbc: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
label_393cc0:
    if (ctx->pc == 0x393CC0u) {
        ctx->pc = 0x393CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393CBCu;
        // 0x393cc0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393CC4u;
        goto label_393cc4;
    }
    ctx->pc = 0x393CBCu;
    {
        const bool branch_taken_0x393cbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x393CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393CBCu;
        // 0x393cc0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393cbc) {
            ctx->pc = 0x393CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393ca0;
        }
    }
    ctx->pc = 0x393CC4u;
label_393cc4:
    // 0x393cc4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x393cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_393cc8:
    // 0x393cc8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x393cc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_393ccc:
    // 0x393ccc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_393cd0:
    if (ctx->pc == 0x393CD0u) {
        ctx->pc = 0x393CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393CCCu;
        // 0x393cd0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393CD4u;
        goto label_393cd4;
    }
    ctx->pc = 0x393CCCu;
    {
        const bool branch_taken_0x393ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393CCCu;
        // 0x393cd0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393ccc) {
            ctx->pc = 0x393D40u;
            goto label_393d40;
        }
    }
    ctx->pc = 0x393CD4u;
label_393cd4:
    // 0x393cd4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x393cd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_393cd8:
    // 0x393cd8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x393cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_393cdc:
    // 0x393cdc: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x393cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_393ce0:
    // 0x393ce0: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x393ce0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_393ce4:
    // 0x393ce4: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x393ce4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_393ce8:
    // 0x393ce8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x393ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_393cec:
    // 0x393cec: 0xc0e61f4  jal         func_3987D0
label_393cf0:
    if (ctx->pc == 0x393CF0u) {
        ctx->pc = 0x393CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393CECu;
        // 0x393cf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393CF4u;
        goto label_393cf4;
    }
    ctx->pc = 0x393CECu;
    SET_GPR_U32(ctx, 31, 0x393CF4u);
    ctx->pc = 0x393CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393CECu;
    // 0x393cf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3987D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3987D0u, 0x393CECu, 0x393CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393CF4u;
label_393cf4:
    // 0x393cf4: 0x10000006  b           . + 4 + (0x6 << 2)
label_393cf8:
    if (ctx->pc == 0x393CF8u) {
        ctx->pc = 0x393CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393CF4u;
        // 0x393cf8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393CFCu;
        goto label_393cfc;
    }
    ctx->pc = 0x393CF4u;
    {
        const bool branch_taken_0x393cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393CF4u;
        // 0x393cf8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393cf4) {
            ctx->pc = 0x393D10u;
            goto label_393d10;
        }
    }
    ctx->pc = 0x393CFCu;
label_393cfc:
    // 0x393cfc: 0x0  nop
    ctx->pc = 0x393cfcu;
    // NOP
label_393d00:
    // 0x393d00: 0xc0e61f4  jal         func_3987D0
label_393d04:
    if (ctx->pc == 0x393D04u) {
        ctx->pc = 0x393D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D00u;
        // 0x393d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393D08u;
        goto label_393d08;
    }
    ctx->pc = 0x393D00u;
    SET_GPR_U32(ctx, 31, 0x393D08u);
    ctx->pc = 0x393D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393D00u;
    // 0x393d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3987D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3987D0u, 0x393D00u, 0x393D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393D08u;
label_393d08:
    // 0x393d08: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x393d08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_393d0c:
    // 0x393d0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x393d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_393d10:
    // 0x393d10: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
label_393d14:
    if (ctx->pc == 0x393D14u) {
        ctx->pc = 0x393D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D10u;
        // 0x393d14: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393D18u;
        goto label_393d18;
    }
    ctx->pc = 0x393D10u;
    {
        const bool branch_taken_0x393d10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x393d10) {
            ctx->pc = 0x393D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393D10u;
            // 0x393d14: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393D2Cu;
            goto label_393d2c;
        }
    }
    ctx->pc = 0x393D18u;
label_393d18:
    // 0x393d18: 0x1650fff9  bne         $s2, $s0, . + 4 + (-0x7 << 2)
label_393d1c:
    if (ctx->pc == 0x393D1Cu) {
        ctx->pc = 0x393D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D18u;
        // 0x393d1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393D20u;
        goto label_393d20;
    }
    ctx->pc = 0x393D18u;
    {
        const bool branch_taken_0x393d18 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x393D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D18u;
        // 0x393d1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393d18) {
            ctx->pc = 0x393D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393d00;
        }
    }
    ctx->pc = 0x393D20u;
label_393d20:
    // 0x393d20: 0x1600ffd8  bnez        $s0, . + 4 + (-0x28 << 2)
label_393d24:
    if (ctx->pc == 0x393D24u) {
        ctx->pc = 0x393D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D20u;
        // 0x393d24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393D28u;
        goto label_393d28;
    }
    ctx->pc = 0x393D20u;
    {
        const bool branch_taken_0x393d20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x393D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D20u;
        // 0x393d24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393d20) {
            ctx->pc = 0x393C84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393c84;
        }
    }
    ctx->pc = 0x393D28u;
label_393d28:
    // 0x393d28: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x393d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_393d2c:
    // 0x393d2c: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x393d2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
label_393d30:
    // 0x393d30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x393d30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_393d34:
    // 0x393d34: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x393d34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_393d38:
    // 0x393d38: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_393d3c:
    if (ctx->pc == 0x393D3Cu) {
        ctx->pc = 0x393D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D38u;
        // 0x393d3c: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393D40u;
        goto label_393d40;
    }
    ctx->pc = 0x393D38u;
    {
        const bool branch_taken_0x393d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x393D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D38u;
        // 0x393d3c: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393d38) {
            ctx->pc = 0x393CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393cd8;
        }
    }
    ctx->pc = 0x393D40u;
label_393d40:
    // 0x393d40: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x393d40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_393d44:
    // 0x393d44: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_393d48:
    if (ctx->pc == 0x393D48u) {
        ctx->pc = 0x393D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D44u;
        // 0x393d48: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x393D4Cu;
        goto label_393d4c;
    }
    ctx->pc = 0x393D44u;
    {
        const bool branch_taken_0x393d44 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x393D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D44u;
        // 0x393d48: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x393d44) {
            ctx->pc = 0x393D54u;
            goto label_393d54;
        }
    }
    ctx->pc = 0x393D4Cu;
label_393d4c:
    // 0x393d4c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_393d50:
    if (ctx->pc == 0x393D50u) {
        ctx->pc = 0x393D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D4Cu;
        // 0x393d50: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393D54u;
        goto label_393d54;
    }
    ctx->pc = 0x393D4Cu;
    {
        const bool branch_taken_0x393d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x393d4c) {
            ctx->pc = 0x393D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393D4Cu;
            // 0x393d50: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393D8Cu;
            goto label_393d8c;
        }
    }
    ctx->pc = 0x393D54u;
label_393d54:
    // 0x393d54: 0x10600065  beqz        $v1, . + 4 + (0x65 << 2)
label_393d58:
    if (ctx->pc == 0x393D58u) {
        ctx->pc = 0x393D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D54u;
        // 0x393d58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393D5Cu;
        goto label_393d5c;
    }
    ctx->pc = 0x393D54u;
    {
        const bool branch_taken_0x393d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x393D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D54u;
        // 0x393d58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393d54) {
            ctx->pc = 0x393EECu;
            goto label_393eec;
        }
    }
    ctx->pc = 0x393D5Cu;
label_393d5c:
    // 0x393d5c: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x393d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_393d60:
    // 0x393d60: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x393d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_393d64:
    // 0x393d64: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x393d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_393d68:
    // 0x393d68: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x393d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_393d6c:
    // 0x393d6c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x393d6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_393d70:
    // 0x393d70: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x393d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_393d74:
    // 0x393d74: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x393d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_393d78:
    // 0x393d78: 0xc4202b  sltu        $a0, $a2, $a0
    ctx->pc = 0x393d78u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_393d7c:
    // 0x393d7c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
label_393d80:
    if (ctx->pc == 0x393D80u) {
        ctx->pc = 0x393D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D7Cu;
        // 0x393d80: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393D84u;
        goto label_393d84;
    }
    ctx->pc = 0x393D7Cu;
    {
        const bool branch_taken_0x393d7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x393D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D7Cu;
        // 0x393d80: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393d7c) {
            ctx->pc = 0x393D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393d60;
        }
    }
    ctx->pc = 0x393D84u;
label_393d84:
    // 0x393d84: 0x1000005a  b           . + 4 + (0x5A << 2)
label_393d88:
    if (ctx->pc == 0x393D88u) {
        ctx->pc = 0x393D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D84u;
        // 0x393d88: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393D8Cu;
        goto label_393d8c;
    }
    ctx->pc = 0x393D84u;
    {
        const bool branch_taken_0x393d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D84u;
        // 0x393d88: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393d84) {
            ctx->pc = 0x393EF0u;
            goto label_393ef0;
        }
    }
    ctx->pc = 0x393D8Cu;
label_393d8c:
    // 0x393d8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x393d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_393d90:
    // 0x393d90: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x393d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_393d94:
    // 0x393d94: 0x0  nop
    ctx->pc = 0x393d94u;
    // NOP
label_393d98:
    // 0x393d98: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x393d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_393d9c:
    // 0x393d9c: 0x8f84a9d4  lw          $a0, -0x562C($gp)
    ctx->pc = 0x393d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945236)));
label_393da0:
    // 0x393da0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x393da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_393da4:
    // 0x393da4: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x393da4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_393da8:
    // 0x393da8: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x393da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_393dac:
    // 0x393dac: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
label_393db0:
    if (ctx->pc == 0x393DB0u) {
        ctx->pc = 0x393DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393DACu;
        // 0x393db0: 0x24b20001  addiu       $s2, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393DB4u;
        goto label_393db4;
    }
    ctx->pc = 0x393DACu;
    {
        const bool branch_taken_0x393dac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x393DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393DACu;
        // 0x393db0: 0x24b20001  addiu       $s2, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393dac) {
            ctx->pc = 0x393E00u;
            goto label_393e00;
        }
    }
    ctx->pc = 0x393DB4u;
label_393db4:
    // 0x393db4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x393db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_393db8:
    // 0x393db8: 0xc0e61f4  jal         func_3987D0
label_393dbc:
    if (ctx->pc == 0x393DBCu) {
        ctx->pc = 0x393DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393DB8u;
        // 0x393dbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393DC0u;
        goto label_393dc0;
    }
    ctx->pc = 0x393DB8u;
    SET_GPR_U32(ctx, 31, 0x393DC0u);
    ctx->pc = 0x393DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393DB8u;
    // 0x393dbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3987D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3987D0u, 0x393DB8u, 0x393DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393DC0u;
label_393dc0:
    // 0x393dc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x393dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_393dc4:
    // 0x393dc4: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_393dc8:
    if (ctx->pc == 0x393DC8u) {
        ctx->pc = 0x393DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393DC4u;
        // 0x393dc8: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393DCCu;
        goto label_393dcc;
    }
    ctx->pc = 0x393DC4u;
    {
        const bool branch_taken_0x393dc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x393dc4) {
            ctx->pc = 0x393DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393DC4u;
            // 0x393dc8: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393DECu;
            goto label_393dec;
        }
    }
    ctx->pc = 0x393DCCu;
label_393dcc:
    // 0x393dcc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x393dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_393dd0:
    // 0x393dd0: 0xc0e61f4  jal         func_3987D0
label_393dd4:
    if (ctx->pc == 0x393DD4u) {
        ctx->pc = 0x393DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393DD0u;
        // 0x393dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393DD8u;
        goto label_393dd8;
    }
    ctx->pc = 0x393DD0u;
    SET_GPR_U32(ctx, 31, 0x393DD8u);
    ctx->pc = 0x393DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393DD0u;
    // 0x393dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3987D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3987D0u, 0x393DD0u, 0x393DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393DD8u;
label_393dd8:
    // 0x393dd8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x393dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_393ddc:
    // 0x393ddc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x393ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_393de0:
    // 0x393de0: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
label_393de4:
    if (ctx->pc == 0x393DE4u) {
        ctx->pc = 0x393DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393DE0u;
        // 0x393de4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393DE8u;
        goto label_393de8;
    }
    ctx->pc = 0x393DE0u;
    {
        const bool branch_taken_0x393de0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x393DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393DE0u;
        // 0x393de4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393de0) {
            ctx->pc = 0x393DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393dd0;
        }
    }
    ctx->pc = 0x393DE8u;
label_393de8:
    // 0x393de8: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x393de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_393dec:
    // 0x393dec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x393decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_393df0:
    // 0x393df0: 0x8f85a9d4  lw          $a1, -0x562C($gp)
    ctx->pc = 0x393df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945236)));
label_393df4:
    // 0x393df4: 0x40f809  jalr        $v0
label_393df8:
    if (ctx->pc == 0x393DF8u) {
        ctx->pc = 0x393DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393DF4u;
        // 0x393df8: 0x8ec6000c  lw          $a2, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393DFCu;
        goto label_393dfc;
    }
    ctx->pc = 0x393DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x393DFCu);
        ctx->pc = 0x393DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393DF4u;
        // 0x393df8: 0x8ec6000c  lw          $a2, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393DF4u, 0x393DFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x393DFCu;
label_393dfc:
    // 0x393dfc: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x393dfcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_393e00:
    // 0x393e00: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x393e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_393e04:
    // 0x393e04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x393e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_393e08:
    // 0x393e08: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x393e08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_393e0c:
    // 0x393e0c: 0x5040ffe2  beql        $v0, $zero, . + 4 + (-0x1E << 2)
label_393e10:
    if (ctx->pc == 0x393E10u) {
        ctx->pc = 0x393E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393E0Cu;
        // 0x393e10: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393E14u;
        goto label_393e14;
    }
    ctx->pc = 0x393E0Cu;
    {
        const bool branch_taken_0x393e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x393e0c) {
            ctx->pc = 0x393E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393E0Cu;
            // 0x393e10: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393d98;
        }
    }
    ctx->pc = 0x393E14u;
label_393e14:
    // 0x393e14: 0x8f82a9d4  lw          $v0, -0x562C($gp)
    ctx->pc = 0x393e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945236)));
label_393e18:
    // 0x393e18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x393e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_393e1c:
    // 0x393e1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x393e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_393e20:
    // 0x393e20: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_393e24:
    if (ctx->pc == 0x393E24u) {
        ctx->pc = 0x393E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393E20u;
        // 0x393e24: 0xaf82a9d4  sw          $v0, -0x562C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393E28u;
        goto label_393e28;
    }
    ctx->pc = 0x393E20u;
    {
        const bool branch_taken_0x393e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x393E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393E20u;
        // 0x393e24: 0xaf82a9d4  sw          $v0, -0x562C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393e20) {
            ctx->pc = 0x393E54u;
            goto label_393e54;
        }
    }
    ctx->pc = 0x393E28u;
label_393e28:
    // 0x393e28: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x393e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_393e2c:
    // 0x393e2c: 0x0  nop
    ctx->pc = 0x393e2cu;
    // NOP
label_393e30:
    // 0x393e30: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x393e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_393e34:
    // 0x393e34: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x393e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_393e38:
    // 0x393e38: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x393e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_393e3c:
    // 0x393e3c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x393e3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_393e40:
    // 0x393e40: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x393e40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_393e44:
    // 0x393e44: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x393e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_393e48:
    // 0x393e48: 0xc4202b  sltu        $a0, $a2, $a0
    ctx->pc = 0x393e48u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_393e4c:
    // 0x393e4c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
label_393e50:
    if (ctx->pc == 0x393E50u) {
        ctx->pc = 0x393E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393E4Cu;
        // 0x393e50: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393E54u;
        goto label_393e54;
    }
    ctx->pc = 0x393E4Cu;
    {
        const bool branch_taken_0x393e4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x393E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393E4Cu;
        // 0x393e50: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393e4c) {
            ctx->pc = 0x393E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393e30;
        }
    }
    ctx->pc = 0x393E54u;
label_393e54:
    // 0x393e54: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x393e54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_393e58:
    // 0x393e58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x393e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_393e5c:
    // 0x393e5c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x393e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_393e60:
    // 0x393e60: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x393e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_393e64:
    // 0x393e64: 0x8f84a9d4  lw          $a0, -0x562C($gp)
    ctx->pc = 0x393e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945236)));
label_393e68:
    // 0x393e68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x393e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_393e6c:
    // 0x393e6c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x393e6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_393e70:
    // 0x393e70: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x393e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_393e74:
    // 0x393e74: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
label_393e78:
    if (ctx->pc == 0x393E78u) {
        ctx->pc = 0x393E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393E74u;
        // 0x393e78: 0x24b20001  addiu       $s2, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393E7Cu;
        goto label_393e7c;
    }
    ctx->pc = 0x393E74u;
    {
        const bool branch_taken_0x393e74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x393E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393E74u;
        // 0x393e78: 0x24b20001  addiu       $s2, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393e74) {
            ctx->pc = 0x393EC8u;
            goto label_393ec8;
        }
    }
    ctx->pc = 0x393E7Cu;
label_393e7c:
    // 0x393e7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x393e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_393e80:
    // 0x393e80: 0xc0e61f4  jal         func_3987D0
label_393e84:
    if (ctx->pc == 0x393E84u) {
        ctx->pc = 0x393E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393E80u;
        // 0x393e84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393E88u;
        goto label_393e88;
    }
    ctx->pc = 0x393E80u;
    SET_GPR_U32(ctx, 31, 0x393E88u);
    ctx->pc = 0x393E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393E80u;
    // 0x393e84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3987D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3987D0u, 0x393E80u, 0x393E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393E88u;
label_393e88:
    // 0x393e88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x393e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_393e8c:
    // 0x393e8c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_393e90:
    if (ctx->pc == 0x393E90u) {
        ctx->pc = 0x393E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393E8Cu;
        // 0x393e90: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393E94u;
        goto label_393e94;
    }
    ctx->pc = 0x393E8Cu;
    {
        const bool branch_taken_0x393e8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x393e8c) {
            ctx->pc = 0x393E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393E8Cu;
            // 0x393e90: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393EB4u;
            goto label_393eb4;
        }
    }
    ctx->pc = 0x393E94u;
label_393e94:
    // 0x393e94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x393e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_393e98:
    // 0x393e98: 0xc0e61f4  jal         func_3987D0
label_393e9c:
    if (ctx->pc == 0x393E9Cu) {
        ctx->pc = 0x393E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393E98u;
        // 0x393e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393EA0u;
        goto label_393ea0;
    }
    ctx->pc = 0x393E98u;
    SET_GPR_U32(ctx, 31, 0x393EA0u);
    ctx->pc = 0x393E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393E98u;
    // 0x393e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3987D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3987D0u, 0x393E98u, 0x393EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393EA0u;
label_393ea0:
    // 0x393ea0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x393ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_393ea4:
    // 0x393ea4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x393ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_393ea8:
    // 0x393ea8: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
label_393eac:
    if (ctx->pc == 0x393EACu) {
        ctx->pc = 0x393EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393EA8u;
        // 0x393eac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393EB0u;
        goto label_393eb0;
    }
    ctx->pc = 0x393EA8u;
    {
        const bool branch_taken_0x393ea8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x393EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393EA8u;
        // 0x393eac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393ea8) {
            ctx->pc = 0x393E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393e98;
        }
    }
    ctx->pc = 0x393EB0u;
label_393eb0:
    // 0x393eb0: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x393eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_393eb4:
    // 0x393eb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x393eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_393eb8:
    // 0x393eb8: 0x8f85a9d4  lw          $a1, -0x562C($gp)
    ctx->pc = 0x393eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945236)));
label_393ebc:
    // 0x393ebc: 0x40f809  jalr        $v0
label_393ec0:
    if (ctx->pc == 0x393EC0u) {
        ctx->pc = 0x393EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393EBCu;
        // 0x393ec0: 0x8ec6000c  lw          $a2, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393EC4u;
        goto label_393ec4;
    }
    ctx->pc = 0x393EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x393EC4u);
        ctx->pc = 0x393EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393EBCu;
        // 0x393ec0: 0x8ec6000c  lw          $a2, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393EBCu, 0x393EC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x393EC4u;
label_393ec4:
    // 0x393ec4: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x393ec4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_393ec8:
    // 0x393ec8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x393ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_393ecc:
    // 0x393ecc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x393eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_393ed0:
    // 0x393ed0: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x393ed0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_393ed4:
    // 0x393ed4: 0x5040ffe2  beql        $v0, $zero, . + 4 + (-0x1E << 2)
label_393ed8:
    if (ctx->pc == 0x393ED8u) {
        ctx->pc = 0x393ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393ED4u;
        // 0x393ed8: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393EDCu;
        goto label_393edc;
    }
    ctx->pc = 0x393ED4u;
    {
        const bool branch_taken_0x393ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x393ed4) {
            ctx->pc = 0x393ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393ED4u;
            // 0x393ed8: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393e60;
        }
    }
    ctx->pc = 0x393EDCu;
label_393edc:
    // 0x393edc: 0x8f82a9d4  lw          $v0, -0x562C($gp)
    ctx->pc = 0x393edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945236)));
label_393ee0:
    // 0x393ee0: 0x2b4382b  sltu        $a3, $s5, $s4
    ctx->pc = 0x393ee0u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_393ee4:
    // 0x393ee4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x393ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_393ee8:
    // 0x393ee8: 0xaf82a9d4  sw          $v0, -0x562C($gp)
    ctx->pc = 0x393ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945236), GPR_U32(ctx, 2));
label_393eec:
    // 0x393eec: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x393eecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_393ef0:
    // 0x393ef0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x393ef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_393ef4:
    // 0x393ef4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x393ef4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_393ef8:
    // 0x393ef8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x393ef8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_393efc:
    // 0x393efc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x393efcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_393f00:
    // 0x393f00: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x393f00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_393f04:
    // 0x393f04: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x393f04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_393f08:
    // 0x393f08: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x393f08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_393f0c:
    // 0x393f0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x393f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_393f10:
    // 0x393f10: 0x3e00008  jr          $ra
label_393f14:
    if (ctx->pc == 0x393F14u) {
        ctx->pc = 0x393F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393F10u;
        // 0x393f14: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393F18u;
        goto label_fallthrough_0x393f10;
    }
    ctx->pc = 0x393F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393F10u;
        // 0x393f14: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x393f10:
    ctx->pc = 0x393F18u;
}
