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

// Function: sub_003E1C10
// Address: 0x3e1c10 - 0x3e1e08
void sub_003E1C10_0x3e1c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1C10_0x3e1c10");
#endif

    switch (ctx->pc) {
        case 0x3e1c10u: goto label_3e1c10;
        case 0x3e1c14u: goto label_3e1c14;
        case 0x3e1c18u: goto label_3e1c18;
        case 0x3e1c1cu: goto label_3e1c1c;
        case 0x3e1c20u: goto label_3e1c20;
        case 0x3e1c24u: goto label_3e1c24;
        case 0x3e1c28u: goto label_3e1c28;
        case 0x3e1c2cu: goto label_3e1c2c;
        case 0x3e1c30u: goto label_3e1c30;
        case 0x3e1c34u: goto label_3e1c34;
        case 0x3e1c38u: goto label_3e1c38;
        case 0x3e1c3cu: goto label_3e1c3c;
        case 0x3e1c40u: goto label_3e1c40;
        case 0x3e1c44u: goto label_3e1c44;
        case 0x3e1c48u: goto label_3e1c48;
        case 0x3e1c4cu: goto label_3e1c4c;
        case 0x3e1c50u: goto label_3e1c50;
        case 0x3e1c54u: goto label_3e1c54;
        case 0x3e1c58u: goto label_3e1c58;
        case 0x3e1c5cu: goto label_3e1c5c;
        case 0x3e1c60u: goto label_3e1c60;
        case 0x3e1c64u: goto label_3e1c64;
        case 0x3e1c68u: goto label_3e1c68;
        case 0x3e1c6cu: goto label_3e1c6c;
        case 0x3e1c70u: goto label_3e1c70;
        case 0x3e1c74u: goto label_3e1c74;
        case 0x3e1c78u: goto label_3e1c78;
        case 0x3e1c7cu: goto label_3e1c7c;
        case 0x3e1c80u: goto label_3e1c80;
        case 0x3e1c84u: goto label_3e1c84;
        case 0x3e1c88u: goto label_3e1c88;
        case 0x3e1c8cu: goto label_3e1c8c;
        case 0x3e1c90u: goto label_3e1c90;
        case 0x3e1c94u: goto label_3e1c94;
        case 0x3e1c98u: goto label_3e1c98;
        case 0x3e1c9cu: goto label_3e1c9c;
        case 0x3e1ca0u: goto label_3e1ca0;
        case 0x3e1ca4u: goto label_3e1ca4;
        case 0x3e1ca8u: goto label_3e1ca8;
        case 0x3e1cacu: goto label_3e1cac;
        case 0x3e1cb0u: goto label_3e1cb0;
        case 0x3e1cb4u: goto label_3e1cb4;
        case 0x3e1cb8u: goto label_3e1cb8;
        case 0x3e1cbcu: goto label_3e1cbc;
        case 0x3e1cc0u: goto label_3e1cc0;
        case 0x3e1cc4u: goto label_3e1cc4;
        case 0x3e1cc8u: goto label_3e1cc8;
        case 0x3e1cccu: goto label_3e1ccc;
        case 0x3e1cd0u: goto label_3e1cd0;
        case 0x3e1cd4u: goto label_3e1cd4;
        case 0x3e1cd8u: goto label_3e1cd8;
        case 0x3e1cdcu: goto label_3e1cdc;
        case 0x3e1ce0u: goto label_3e1ce0;
        case 0x3e1ce4u: goto label_3e1ce4;
        case 0x3e1ce8u: goto label_3e1ce8;
        case 0x3e1cecu: goto label_3e1cec;
        case 0x3e1cf0u: goto label_3e1cf0;
        case 0x3e1cf4u: goto label_3e1cf4;
        case 0x3e1cf8u: goto label_3e1cf8;
        case 0x3e1cfcu: goto label_3e1cfc;
        case 0x3e1d00u: goto label_3e1d00;
        case 0x3e1d04u: goto label_3e1d04;
        case 0x3e1d08u: goto label_3e1d08;
        case 0x3e1d0cu: goto label_3e1d0c;
        case 0x3e1d10u: goto label_3e1d10;
        case 0x3e1d14u: goto label_3e1d14;
        case 0x3e1d18u: goto label_3e1d18;
        case 0x3e1d1cu: goto label_3e1d1c;
        case 0x3e1d20u: goto label_3e1d20;
        case 0x3e1d24u: goto label_3e1d24;
        case 0x3e1d28u: goto label_3e1d28;
        case 0x3e1d2cu: goto label_3e1d2c;
        case 0x3e1d30u: goto label_3e1d30;
        case 0x3e1d34u: goto label_3e1d34;
        case 0x3e1d38u: goto label_3e1d38;
        case 0x3e1d3cu: goto label_3e1d3c;
        case 0x3e1d40u: goto label_3e1d40;
        case 0x3e1d44u: goto label_3e1d44;
        case 0x3e1d48u: goto label_3e1d48;
        case 0x3e1d4cu: goto label_3e1d4c;
        case 0x3e1d50u: goto label_3e1d50;
        case 0x3e1d54u: goto label_3e1d54;
        case 0x3e1d58u: goto label_3e1d58;
        case 0x3e1d5cu: goto label_3e1d5c;
        case 0x3e1d60u: goto label_3e1d60;
        case 0x3e1d64u: goto label_3e1d64;
        case 0x3e1d68u: goto label_3e1d68;
        case 0x3e1d6cu: goto label_3e1d6c;
        case 0x3e1d70u: goto label_3e1d70;
        case 0x3e1d74u: goto label_3e1d74;
        case 0x3e1d78u: goto label_3e1d78;
        case 0x3e1d7cu: goto label_3e1d7c;
        case 0x3e1d80u: goto label_3e1d80;
        case 0x3e1d84u: goto label_3e1d84;
        case 0x3e1d88u: goto label_3e1d88;
        case 0x3e1d8cu: goto label_3e1d8c;
        case 0x3e1d90u: goto label_3e1d90;
        case 0x3e1d94u: goto label_3e1d94;
        case 0x3e1d98u: goto label_3e1d98;
        case 0x3e1d9cu: goto label_3e1d9c;
        case 0x3e1da0u: goto label_3e1da0;
        case 0x3e1da4u: goto label_3e1da4;
        case 0x3e1da8u: goto label_3e1da8;
        case 0x3e1dacu: goto label_3e1dac;
        case 0x3e1db0u: goto label_3e1db0;
        case 0x3e1db4u: goto label_3e1db4;
        case 0x3e1db8u: goto label_3e1db8;
        case 0x3e1dbcu: goto label_3e1dbc;
        case 0x3e1dc0u: goto label_3e1dc0;
        case 0x3e1dc4u: goto label_3e1dc4;
        case 0x3e1dc8u: goto label_3e1dc8;
        case 0x3e1dccu: goto label_3e1dcc;
        case 0x3e1dd0u: goto label_3e1dd0;
        case 0x3e1dd4u: goto label_3e1dd4;
        case 0x3e1dd8u: goto label_3e1dd8;
        case 0x3e1ddcu: goto label_3e1ddc;
        case 0x3e1de0u: goto label_3e1de0;
        case 0x3e1de4u: goto label_3e1de4;
        case 0x3e1de8u: goto label_3e1de8;
        case 0x3e1decu: goto label_3e1dec;
        case 0x3e1df0u: goto label_3e1df0;
        case 0x3e1df4u: goto label_3e1df4;
        case 0x3e1df8u: goto label_3e1df8;
        case 0x3e1dfcu: goto label_3e1dfc;
        case 0x3e1e00u: goto label_3e1e00;
        case 0x3e1e04u: goto label_3e1e04;
        default: break;
    }

    ctx->pc = 0x3e1c10u;

label_3e1c10:
    // 0x3e1c10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3e1c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3e1c14:
    // 0x3e1c14: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3e1c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3e1c18:
    // 0x3e1c18: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3e1c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3e1c1c:
    // 0x3e1c1c: 0x2449e2c8  addiu       $t1, $v0, -0x1D38
    ctx->pc = 0x3e1c1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959816));
label_3e1c20:
    // 0x3e1c20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e1c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e1c24:
    // 0x3e1c24: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3e1c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3e1c28:
    // 0x3e1c28: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x3e1c28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e1c2c:
    // 0x3e1c2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e1c2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e1c30:
    // 0x3e1c30: 0x240d005b  addiu       $t5, $zero, 0x5B
    ctx->pc = 0x3e1c30u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_3e1c34:
    // 0x3e1c34: 0x240c005d  addiu       $t4, $zero, 0x5D
    ctx->pc = 0x3e1c34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
label_3e1c38:
    // 0x3e1c38: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x3e1c38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e1c3c:
    // 0x3e1c3c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3e1c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e1c40:
    // 0x3e1c40: 0x26080200  addiu       $t0, $s0, 0x200
    ctx->pc = 0x3e1c40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
label_3e1c44:
    // 0x3e1c44: 0x0  nop
    ctx->pc = 0x3e1c44u;
    // NOP
label_3e1c48:
    // 0x3e1c48: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3e1c48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3e1c4c:
    // 0x3e1c4c: 0x2462ffd7  addiu       $v0, $v1, -0x29
    ctx->pc = 0x3e1c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967255));
label_3e1c50:
    // 0x3e1c50: 0x2c420052  sltiu       $v0, $v0, 0x52
    ctx->pc = 0x3e1c50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)82) ? 1 : 0);
label_3e1c54:
    // 0x3e1c54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3e1c58:
    if (ctx->pc == 0x3E1C58u) {
        ctx->pc = 0x3E1C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1C54u;
        // 0x3e1c58: 0x2462ffa5  addiu       $v0, $v1, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967205));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1C5Cu;
        goto label_3e1c5c;
    }
    ctx->pc = 0x3E1C54u;
    {
        const bool branch_taken_0x3e1c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1C54u;
        // 0x3e1c58: 0x2462ffa5  addiu       $v0, $v1, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1c54) {
            ctx->pc = 0x3E1C68u;
            goto label_3e1c68;
        }
    }
    ctx->pc = 0x3E1C5Cu;
label_3e1c5c:
    // 0x3e1c5c: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x3e1c5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3e1c60:
    // 0x3e1c60: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_3e1c64:
    if (ctx->pc == 0x3E1C64u) {
        ctx->pc = 0x3E1C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1C60u;
        // 0x3e1c64: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1C68u;
        goto label_3e1c68;
    }
    ctx->pc = 0x3E1C60u;
    {
        const bool branch_taken_0x3e1c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1c60) {
            ctx->pc = 0x3E1C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1C60u;
            // 0x3e1c64: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1CA4u;
            goto label_3e1ca4;
        }
    }
    ctx->pc = 0x3E1C68u;
label_3e1c68:
    // 0x3e1c68: 0xa0cd0000  sb          $t5, 0x0($a2)
    ctx->pc = 0x3e1c68u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 13));
label_3e1c6c:
    // 0x3e1c6c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x3e1c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_3e1c70:
    // 0x3e1c70: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3e1c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_3e1c74:
    // 0x3e1c74: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x3e1c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_3e1c78:
    // 0x3e1c78: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3e1c78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3e1c7c:
    // 0x3e1c7c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3e1c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_3e1c80:
    // 0x3e1c80: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3e1c80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3e1c84:
    // 0x3e1c84: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3e1c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3e1c88:
    // 0x3e1c88: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x3e1c88u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
label_3e1c8c:
    // 0x3e1c8c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3e1c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3e1c90:
    // 0x3e1c90: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3e1c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3e1c94:
    // 0x3e1c94: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3e1c94u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e1c98:
    // 0x3e1c98: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3e1c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3e1c9c:
    // 0x3e1c9c: 0x10000002  b           . + 4 + (0x2 << 2)
label_3e1ca0:
    if (ctx->pc == 0x3E1CA0u) {
        ctx->pc = 0x3E1CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1C9Cu;
        // 0x3e1ca0: 0xa0cc0000  sb          $t4, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1CA4u;
        goto label_3e1ca4;
    }
    ctx->pc = 0x3E1C9Cu;
    {
        const bool branch_taken_0x3e1c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1C9Cu;
        // 0x3e1ca0: 0xa0cc0000  sb          $t4, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1c9c) {
            ctx->pc = 0x3E1CA8u;
            goto label_3e1ca8;
        }
    }
    ctx->pc = 0x3E1CA4u;
label_3e1ca4:
    // 0x3e1ca4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3e1ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3e1ca8:
    // 0x3e1ca8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3e1ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3e1cac:
    // 0x3e1cac: 0x91030001  lbu         $v1, 0x1($t0)
    ctx->pc = 0x3e1cacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_3e1cb0:
    // 0x3e1cb0: 0x256bfffe  addiu       $t3, $t3, -0x2
    ctx->pc = 0x3e1cb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967294));
label_3e1cb4:
    // 0x3e1cb4: 0x2462ffd7  addiu       $v0, $v1, -0x29
    ctx->pc = 0x3e1cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967255));
label_3e1cb8:
    // 0x3e1cb8: 0x2c420052  sltiu       $v0, $v0, 0x52
    ctx->pc = 0x3e1cb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)82) ? 1 : 0);
label_3e1cbc:
    // 0x3e1cbc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3e1cc0:
    if (ctx->pc == 0x3E1CC0u) {
        ctx->pc = 0x3E1CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1CBCu;
        // 0x3e1cc0: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1CC4u;
        goto label_3e1cc4;
    }
    ctx->pc = 0x3E1CBCu;
    {
        const bool branch_taken_0x3e1cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1CBCu;
        // 0x3e1cc0: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1cbc) {
            ctx->pc = 0x3E1CD4u;
            goto label_3e1cd4;
        }
    }
    ctx->pc = 0x3E1CC4u;
label_3e1cc4:
    // 0x3e1cc4: 0x2462ffa5  addiu       $v0, $v1, -0x5B
    ctx->pc = 0x3e1cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967205));
label_3e1cc8:
    // 0x3e1cc8: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x3e1cc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3e1ccc:
    // 0x3e1ccc: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_3e1cd0:
    if (ctx->pc == 0x3E1CD0u) {
        ctx->pc = 0x3E1CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1CCCu;
        // 0x3e1cd0: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1CD4u;
        goto label_3e1cd4;
    }
    ctx->pc = 0x3E1CCCu;
    {
        const bool branch_taken_0x3e1ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1ccc) {
            ctx->pc = 0x3E1CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1CCCu;
            // 0x3e1cd0: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1D10u;
            goto label_3e1d10;
        }
    }
    ctx->pc = 0x3E1CD4u;
label_3e1cd4:
    // 0x3e1cd4: 0xa0cd0000  sb          $t5, 0x0($a2)
    ctx->pc = 0x3e1cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 13));
label_3e1cd8:
    // 0x3e1cd8: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x3e1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_3e1cdc:
    // 0x3e1cdc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3e1cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_3e1ce0:
    // 0x3e1ce0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x3e1ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_3e1ce4:
    // 0x3e1ce4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3e1ce4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3e1ce8:
    // 0x3e1ce8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3e1ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_3e1cec:
    // 0x3e1cec: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3e1cecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3e1cf0:
    // 0x3e1cf0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3e1cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3e1cf4:
    // 0x3e1cf4: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x3e1cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
label_3e1cf8:
    // 0x3e1cf8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3e1cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3e1cfc:
    // 0x3e1cfc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3e1cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3e1d00:
    // 0x3e1d00: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3e1d00u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e1d04:
    // 0x3e1d04: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3e1d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3e1d08:
    // 0x3e1d08: 0x10000002  b           . + 4 + (0x2 << 2)
label_3e1d0c:
    if (ctx->pc == 0x3E1D0Cu) {
        ctx->pc = 0x3E1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1D08u;
        // 0x3e1d0c: 0xa0cc0000  sb          $t4, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1D10u;
        goto label_3e1d10;
    }
    ctx->pc = 0x3E1D08u;
    {
        const bool branch_taken_0x3e1d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1D08u;
        // 0x3e1d0c: 0xa0cc0000  sb          $t4, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1d08) {
            ctx->pc = 0x3E1D14u;
            goto label_3e1d14;
        }
    }
    ctx->pc = 0x3E1D10u;
label_3e1d10:
    // 0x3e1d10: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3e1d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3e1d14:
    // 0x3e1d14: 0x561ffcc  bgez        $t3, . + 4 + (-0x34 << 2)
label_3e1d18:
    if (ctx->pc == 0x3E1D18u) {
        ctx->pc = 0x3E1D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1D14u;
        // 0x3e1d18: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1D1Cu;
        goto label_3e1d1c;
    }
    ctx->pc = 0x3E1D14u;
    {
        const bool branch_taken_0x3e1d14 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x3E1D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1D14u;
        // 0x3e1d18: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1d14) {
            ctx->pc = 0x3E1C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1c48;
        }
    }
    ctx->pc = 0x3E1D1Cu;
label_3e1d1c:
    // 0x3e1d1c: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_3e1d20:
    if (ctx->pc == 0x3E1D20u) {
        ctx->pc = 0x3E1D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1D1Cu;
        // 0x3e1d20: 0x1471821  addu        $v1, $t2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1D24u;
        goto label_3e1d24;
    }
    ctx->pc = 0x3E1D1Cu;
    {
        const bool branch_taken_0x3e1d1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E1D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1D1Cu;
        // 0x3e1d20: 0x1471821  addu        $v1, $t2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1d1c) {
            ctx->pc = 0x3E1D30u;
            goto label_3e1d30;
        }
    }
    ctx->pc = 0x3E1D24u;
label_3e1d24:
    // 0x3e1d24: 0x1471021  addu        $v0, $t2, $a3
    ctx->pc = 0x3e1d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_3e1d28:
    // 0x3e1d28: 0x1000002a  b           . + 4 + (0x2A << 2)
label_3e1d2c:
    if (ctx->pc == 0x3E1D2Cu) {
        ctx->pc = 0x3E1D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1D28u;
        // 0x3e1d2c: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1D30u;
        goto label_3e1d30;
    }
    ctx->pc = 0x3E1D28u;
    {
        const bool branch_taken_0x3e1d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1D28u;
        // 0x3e1d2c: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1d28) {
            ctx->pc = 0x3E1DD4u;
            goto label_3e1dd4;
        }
    }
    ctx->pc = 0x3E1D30u;
label_3e1d30:
    // 0x3e1d30: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x3e1d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_3e1d34:
    // 0x3e1d34: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3e1d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3e1d38:
    // 0x3e1d38: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3e1d38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e1d3c:
    // 0x3e1d3c: 0x1472021  addu        $a0, $t2, $a3
    ctx->pc = 0x3e1d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_3e1d40:
    // 0x3e1d40: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3e1d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3e1d44:
    // 0x3e1d44: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3e1d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3e1d48:
    // 0x3e1d48: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3e1d48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_3e1d4c:
    // 0x3e1d4c: 0x1471021  addu        $v0, $t2, $a3
    ctx->pc = 0x3e1d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_3e1d50:
    // 0x3e1d50: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x3e1d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3e1d54:
    // 0x3e1d54: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x3e1d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3e1d58:
    // 0x3e1d58: 0x68a4000f  ldl         $a0, 0xF($a1)
    ctx->pc = 0x3e1d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3e1d5c:
    // 0x3e1d5c: 0x6ca40008  ldr         $a0, 0x8($a1)
    ctx->pc = 0x3e1d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3e1d60:
    // 0x3e1d60: 0x68a60017  ldl         $a2, 0x17($a1)
    ctx->pc = 0x3e1d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3e1d64:
    // 0x3e1d64: 0x6ca60010  ldr         $a2, 0x10($a1)
    ctx->pc = 0x3e1d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3e1d68:
    // 0x3e1d68: 0x68a7001f  ldl         $a3, 0x1F($a1)
    ctx->pc = 0x3e1d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_3e1d6c:
    // 0x3e1d6c: 0x6ca70018  ldr         $a3, 0x18($a1)
    ctx->pc = 0x3e1d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_3e1d70:
    // 0x3e1d70: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x3e1d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1d74:
    // 0x3e1d74: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x3e1d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1d78:
    // 0x3e1d78: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x3e1d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1d7c:
    // 0x3e1d7c: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x3e1d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1d80:
    // 0x3e1d80: 0xb0460017  sdl         $a2, 0x17($v0)
    ctx->pc = 0x3e1d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1d84:
    // 0x3e1d84: 0xb4460010  sdr         $a2, 0x10($v0)
    ctx->pc = 0x3e1d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1d88:
    // 0x3e1d88: 0xb047001f  sdl         $a3, 0x1F($v0)
    ctx->pc = 0x3e1d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1d8c:
    // 0x3e1d8c: 0xb4470018  sdr         $a3, 0x18($v0)
    ctx->pc = 0x3e1d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1d90:
    // 0x3e1d90: 0x68a30027  ldl         $v1, 0x27($a1)
    ctx->pc = 0x3e1d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3e1d94:
    // 0x3e1d94: 0x6ca30020  ldr         $v1, 0x20($a1)
    ctx->pc = 0x3e1d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3e1d98:
    // 0x3e1d98: 0x68a4002f  ldl         $a0, 0x2F($a1)
    ctx->pc = 0x3e1d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3e1d9c:
    // 0x3e1d9c: 0x6ca40028  ldr         $a0, 0x28($a1)
    ctx->pc = 0x3e1d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3e1da0:
    // 0x3e1da0: 0x68a60037  ldl         $a2, 0x37($a1)
    ctx->pc = 0x3e1da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3e1da4:
    // 0x3e1da4: 0x6ca60030  ldr         $a2, 0x30($a1)
    ctx->pc = 0x3e1da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3e1da8:
    // 0x3e1da8: 0x68a7003f  ldl         $a3, 0x3F($a1)
    ctx->pc = 0x3e1da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_3e1dac:
    // 0x3e1dac: 0x6ca70038  ldr         $a3, 0x38($a1)
    ctx->pc = 0x3e1dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_3e1db0:
    // 0x3e1db0: 0xb0430027  sdl         $v1, 0x27($v0)
    ctx->pc = 0x3e1db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1db4:
    // 0x3e1db4: 0xb4430020  sdr         $v1, 0x20($v0)
    ctx->pc = 0x3e1db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1db8:
    // 0x3e1db8: 0xb044002f  sdl         $a0, 0x2F($v0)
    ctx->pc = 0x3e1db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1dbc:
    // 0x3e1dbc: 0xb4440028  sdr         $a0, 0x28($v0)
    ctx->pc = 0x3e1dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1dc0:
    // 0x3e1dc0: 0xb0460037  sdl         $a2, 0x37($v0)
    ctx->pc = 0x3e1dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1dc4:
    // 0x3e1dc4: 0xb4460030  sdr         $a2, 0x30($v0)
    ctx->pc = 0x3e1dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1dc8:
    // 0x3e1dc8: 0xb047003f  sdl         $a3, 0x3F($v0)
    ctx->pc = 0x3e1dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1dcc:
    // 0x3e1dcc: 0xb4470038  sdr         $a3, 0x38($v0)
    ctx->pc = 0x3e1dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1dd0:
    // 0x3e1dd0: 0xa040003f  sb          $zero, 0x3F($v0)
    ctx->pc = 0x3e1dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 63), (uint8_t)GPR_U32(ctx, 0));
label_3e1dd4:
    // 0x3e1dd4: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x3e1dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_3e1dd8:
    // 0x3e1dd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3e1ddc:
    if (ctx->pc == 0x3E1DDCu) {
        ctx->pc = 0x3E1DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1DD8u;
        // 0x3e1ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1DE0u;
        goto label_3e1de0;
    }
    ctx->pc = 0x3E1DD8u;
    {
        const bool branch_taken_0x3e1dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1DD8u;
        // 0x3e1ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1dd8) {
            ctx->pc = 0x3E1DE8u;
            goto label_3e1de8;
        }
    }
    ctx->pc = 0x3E1DE0u;
label_3e1de0:
    // 0x3e1de0: 0x40f809  jalr        $v0
label_3e1de4:
    if (ctx->pc == 0x3E1DE4u) {
        ctx->pc = 0x3E1DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1DE0u;
        // 0x3e1de4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1DE8u;
        goto label_3e1de8;
    }
    ctx->pc = 0x3E1DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E1DE8u);
        ctx->pc = 0x3E1DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1DE0u;
        // 0x3e1de4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1DE0u, 0x3E1DE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E1DE8u;
label_3e1de8:
    // 0x3e1de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e1de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e1dec:
    // 0x3e1dec: 0xc0f87a2  jal         func_3E1E88
label_3e1df0:
    if (ctx->pc == 0x3E1DF0u) {
        ctx->pc = 0x3E1DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1DECu;
        // 0x3e1df0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1DF4u;
        goto label_3e1df4;
    }
    ctx->pc = 0x3E1DECu;
    SET_GPR_U32(ctx, 31, 0x3E1DF4u);
    ctx->pc = 0x3E1DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1DECu;
    // 0x3e1df0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E88u, 0x3E1DECu, 0x3E1DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1DF4u;
label_3e1df4:
    // 0x3e1df4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3e1df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e1df8:
    // 0x3e1df8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3e1df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3e1dfc:
    // 0x3e1dfc: 0x3e00008  jr          $ra
label_3e1e00:
    if (ctx->pc == 0x3E1E00u) {
        ctx->pc = 0x3E1E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1DFCu;
        // 0x3e1e00: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1E04u;
        goto label_3e1e04;
    }
    ctx->pc = 0x3E1DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1DFCu;
        // 0x3e1e00: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1E04u;
label_3e1e04:
    // 0x3e1e04: 0x0  nop
    ctx->pc = 0x3e1e04u;
    // NOP
    ctx->pc = 0x3e1e08u;
}
