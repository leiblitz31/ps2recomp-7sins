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

// Function: sub_003D9C88
// Address: 0x3d9c88 - 0x3da3a8
void sub_003D9C88_0x3d9c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9C88_0x3d9c88");
#endif

    switch (ctx->pc) {
        case 0x3d9dd8u: goto label_3d9dd8;
        case 0x3d9ef0u: goto label_3d9ef0;
        case 0x3d9fbcu: goto label_3d9fbc;
        case 0x3d9fd0u: goto label_3d9fd0;
        case 0x3d9fe4u: goto label_3d9fe4;
        case 0x3d9ff0u: goto label_3d9ff0;
        case 0x3d9ffcu: goto label_3d9ffc;
        case 0x3da00cu: goto label_3da00c;
        case 0x3da01cu: goto label_3da01c;
        case 0x3da030u: goto label_3da030;
        case 0x3da050u: goto label_3da050;
        case 0x3da080u: goto label_3da080;
        case 0x3da128u: goto label_3da128;
        case 0x3da168u: goto label_3da168;
        case 0x3da180u: goto label_3da180;
        case 0x3da254u: goto label_3da254;
        case 0x3da284u: goto label_3da284;
        case 0x3da2b4u: goto label_3da2b4;
        case 0x3da2c8u: goto label_3da2c8;
        case 0x3da2ecu: goto label_3da2ec;
        case 0x3da314u: goto label_3da314;
        case 0x3da33cu: goto label_3da33c;
        case 0x3da364u: goto label_3da364;
        default: break;
    }

    ctx->pc = 0x3d9c88u;

    // 0x3d9c88: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3d9c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x3d9c8c: 0x2403023d  addiu       $v1, $zero, 0x23D
    ctx->pc = 0x3d9c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 573));
    // 0x3d9c90: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x3d9c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x3d9c94: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x3d9c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x3d9c98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d9c98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9c9c: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x3d9c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x3d9ca0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3d9ca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9ca4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x3d9ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x3d9ca8: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x3d9ca8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d9cac: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x3d9cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x3d9cb0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3d9cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x3d9cb4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3d9cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3d9cb8: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x3d9cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x3d9cbc: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x3d9cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x3d9cc0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d9cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3d9cc4: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x3d9cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x3d9cc8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3d9cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3d9ccc: 0x8cb30000  lw          $s3, 0x0($a1)
    ctx->pc = 0x3d9cccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3d9cd0: 0x8c55000c  lw          $s5, 0xC($v0)
    ctx->pc = 0x3d9cd0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3d9cd4: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x3d9cd4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d9cd8: 0xae031464  sw          $v1, 0x1464($s0)
    ctx->pc = 0x3d9cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5220), GPR_U32(ctx, 3));
    // 0x3d9cdc: 0x1aa00077  blez        $s5, . + 4 + (0x77 << 2)
    ctx->pc = 0x3D9CDCu;
    {
        const bool branch_taken_0x3d9cdc = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x3D9CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9CDCu;
        // 0x3d9ce0: 0xae001460  sw          $zero, 0x1460($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9cdc) {
            ctx->pc = 0x3D9EBCu;
            goto label_3d9ebc;
        }
    }
    ctx->pc = 0x3D9CE4u;
    // 0x3d9ce4: 0x26090b6c  addiu       $t1, $s0, 0xB6C
    ctx->pc = 0x3d9ce4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 2924));
    // 0x3d9ce8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d9ce8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9cec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d9cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9cf0: 0x26061468  addiu       $a2, $s0, 0x1468
    ctx->pc = 0x3d9cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 5224));
    // 0x3d9cf4: 0x1aa00024  blez        $s5, . + 4 + (0x24 << 2)
    ctx->pc = 0x3D9CF4u;
    {
        const bool branch_taken_0x3d9cf4 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x3D9CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9CF4u;
        // 0x3d9cf8: 0x32a30003  andi        $v1, $s5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9cf4) {
            ctx->pc = 0x3D9D88u;
            goto label_3d9d88;
        }
    }
    ctx->pc = 0x3D9CFCu;
    // 0x3d9cfc: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x3D9CFCu;
    {
        const bool branch_taken_0x3d9cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9CFCu;
        // 0x3d9d00: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9cfc) {
            ctx->pc = 0x3D9DCCu;
            goto label_3d9dcc;
        }
    }
    ctx->pc = 0x3D9D04u;
    // 0x3d9d04: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x3D9D04u;
    {
        const bool branch_taken_0x3d9d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d9d04) {
            ctx->pc = 0x3D9D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9D04u;
            // 0x3d9d08: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D9D8Cu;
            goto label_3d9d8c;
        }
    }
    ctx->pc = 0x3D9D0Cu;
    // 0x3d9d0c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3d9d0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3d9d10: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3D9D10u;
    {
        const bool branch_taken_0x3d9d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d9d10) {
            ctx->pc = 0x3D9D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9D10u;
            // 0x3d9d14: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D9D50u;
            goto label_3d9d50;
        }
    }
    ctx->pc = 0x3D9D18u;
    // 0x3d9d18: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x3d9d18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3d9d1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D9D1Cu;
    {
        const bool branch_taken_0x3d9d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9D1Cu;
        // 0x3d9d20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9d1c) {
            ctx->pc = 0x3D9D38u;
            goto label_3d9d38;
        }
    }
    ctx->pc = 0x3D9D24u;
    // 0x3d9d24: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3d9d24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9d28: 0xae021460  sw          $v0, 0x1460($s0)
    ctx->pc = 0x3d9d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5216), GPR_U32(ctx, 2));
    // 0x3d9d2c: 0xae000b70  sw          $zero, 0xB70($s0)
    ctx->pc = 0x3d9d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2928), GPR_U32(ctx, 0));
    // 0x3d9d30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D9D30u;
    {
        const bool branch_taken_0x3d9d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9D30u;
        // 0x3d9d34: 0xa2001468  sb          $zero, 0x1468($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5224), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9d30) {
            ctx->pc = 0x3D9D3Cu;
            goto label_3d9d3c;
        }
    }
    ctx->pc = 0x3D9D38u;
label_3d9d38:
    // 0x3d9d38: 0xa6600002  sh          $zero, 0x2($s3)
    ctx->pc = 0x3d9d38u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 0));
label_3d9d3c:
    // 0x3d9d3c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3d9d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3d9d40: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3d9d40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3d9d44: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3d9d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3d9d48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3d9d48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3d9d4c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3d9d4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_3d9d50:
    // 0x3d9d50: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D9D50u;
    {
        const bool branch_taken_0x3d9d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9d50) {
            ctx->pc = 0x3D9D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9D50u;
            // 0x3d9d54: 0xa4800002  sh          $zero, 0x2($a0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D9D78u;
            goto label_3d9d78;
        }
    }
    ctx->pc = 0x3D9D58u;
    // 0x3d9d58: 0x8e031460  lw          $v1, 0x1460($s0)
    ctx->pc = 0x3d9d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5216)));
    // 0x3d9d5c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x3d9d5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9d60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d9d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d9d64: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3d9d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d9d68: 0xae031460  sw          $v1, 0x1460($s0)
    ctx->pc = 0x3d9d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5216), GPR_U32(ctx, 3));
    // 0x3d9d6c: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x3d9d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3d9d70: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x3d9d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x3d9d74: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x3d9d74u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
label_3d9d78:
    // 0x3d9d78: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3d9d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3d9d7c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3d9d7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3d9d80: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3d9d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3d9d84: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3d9d84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3d9d88:
    // 0x3d9d88: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3d9d88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_3d9d8c:
    // 0x3d9d8c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D9D8Cu;
    {
        const bool branch_taken_0x3d9d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9d8c) {
            ctx->pc = 0x3D9D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9D8Cu;
            // 0x3d9d90: 0xa4800002  sh          $zero, 0x2($a0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D9DB4u;
            goto label_3d9db4;
        }
    }
    ctx->pc = 0x3D9D94u;
    // 0x3d9d94: 0x8e031460  lw          $v1, 0x1460($s0)
    ctx->pc = 0x3d9d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5216)));
    // 0x3d9d98: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x3d9d98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9d9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d9d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d9da0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3d9da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d9da4: 0xae031460  sw          $v1, 0x1460($s0)
    ctx->pc = 0x3d9da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5216), GPR_U32(ctx, 3));
    // 0x3d9da8: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x3d9da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3d9dac: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x3d9dacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x3d9db0: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x3d9db0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
label_3d9db4:
    // 0x3d9db4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3d9db4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3d9db8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3d9db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3d9dbc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3d9dbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3d9dc0: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x3d9dc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x3d9dc4: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3D9DC4u;
    {
        const bool branch_taken_0x3d9dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9DC4u;
        // 0x3d9dc8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9dc4) {
            ctx->pc = 0x3D9EBCu;
            goto label_3d9ebc;
        }
    }
    ctx->pc = 0x3D9DCCu;
label_3d9dcc:
    // 0x3d9dcc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d9dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9dd0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3d9dd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9dd4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3d9dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d9dd8:
    // 0x3d9dd8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x3d9dd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d9ddc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D9DDCu;
    {
        const bool branch_taken_0x3d9ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9ddc) {
            ctx->pc = 0x3D9DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9DDCu;
            // 0x3d9de0: 0xa4a00002  sh          $zero, 0x2($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D9E04u;
            goto label_3d9e04;
        }
    }
    ctx->pc = 0x3D9DE4u;
    // 0x3d9de4: 0x8e031460  lw          $v1, 0x1460($s0)
    ctx->pc = 0x3d9de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5216)));
    // 0x3d9de8: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x3d9de8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9dec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d9decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d9df0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3d9df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d9df4: 0xae031460  sw          $v1, 0x1460($s0)
    ctx->pc = 0x3d9df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5216), GPR_U32(ctx, 3));
    // 0x3d9df8: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x3d9df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3d9dfc: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x3d9dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x3d9e00: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x3d9e00u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
label_3d9e04:
    // 0x3d9e04: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x3d9e04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3d9e08: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3D9E08u;
    {
        const bool branch_taken_0x3d9e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9E08u;
        // 0x3d9e0c: 0x25040001  addiu       $a0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9e08) {
            ctx->pc = 0x3D9E34u;
            goto label_3d9e34;
        }
    }
    ctx->pc = 0x3D9E10u;
    // 0x3d9e10: 0x8e031460  lw          $v1, 0x1460($s0)
    ctx->pc = 0x3d9e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5216)));
    // 0x3d9e14: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3d9e14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9e18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d9e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d9e1c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3d9e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d9e20: 0xae031460  sw          $v1, 0x1460($s0)
    ctx->pc = 0x3d9e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5216), GPR_U32(ctx, 3));
    // 0x3d9e24: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x3d9e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3d9e28: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x3d9e28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x3d9e2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D9E2Cu;
    {
        const bool branch_taken_0x3d9e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9E2Cu;
        // 0x3d9e30: 0xa0e00001  sb          $zero, 0x1($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9e2c) {
            ctx->pc = 0x3D9E38u;
            goto label_3d9e38;
        }
    }
    ctx->pc = 0x3D9E34u;
label_3d9e34:
    // 0x3d9e34: 0xa4a00006  sh          $zero, 0x6($a1)
    ctx->pc = 0x3d9e34u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 0));
label_3d9e38:
    // 0x3d9e38: 0x94c20008  lhu         $v0, 0x8($a2)
    ctx->pc = 0x3d9e38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3d9e3c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3D9E3Cu;
    {
        const bool branch_taken_0x3d9e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9E3Cu;
        // 0x3d9e40: 0x25040002  addiu       $a0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9e3c) {
            ctx->pc = 0x3D9E68u;
            goto label_3d9e68;
        }
    }
    ctx->pc = 0x3D9E44u;
    // 0x3d9e44: 0x8e031460  lw          $v1, 0x1460($s0)
    ctx->pc = 0x3d9e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5216)));
    // 0x3d9e48: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3d9e48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9e4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d9e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d9e50: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3d9e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d9e54: 0xae031460  sw          $v1, 0x1460($s0)
    ctx->pc = 0x3d9e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5216), GPR_U32(ctx, 3));
    // 0x3d9e58: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x3d9e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3d9e5c: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x3d9e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x3d9e60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D9E60u;
    {
        const bool branch_taken_0x3d9e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9E60u;
        // 0x3d9e64: 0xa0e00002  sb          $zero, 0x2($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9e60) {
            ctx->pc = 0x3D9E6Cu;
            goto label_3d9e6c;
        }
    }
    ctx->pc = 0x3D9E68u;
label_3d9e68:
    // 0x3d9e68: 0xa4a0000a  sh          $zero, 0xA($a1)
    ctx->pc = 0x3d9e68u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 0));
label_3d9e6c:
    // 0x3d9e6c: 0x94c2000c  lhu         $v0, 0xC($a2)
    ctx->pc = 0x3d9e6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x3d9e70: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3D9E70u;
    {
        const bool branch_taken_0x3d9e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9E70u;
        // 0x3d9e74: 0x25040003  addiu       $a0, $t0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9e70) {
            ctx->pc = 0x3D9E9Cu;
            goto label_3d9e9c;
        }
    }
    ctx->pc = 0x3D9E78u;
    // 0x3d9e78: 0x8e031460  lw          $v1, 0x1460($s0)
    ctx->pc = 0x3d9e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5216)));
    // 0x3d9e7c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3d9e7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9e80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d9e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d9e84: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3d9e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d9e88: 0xae031460  sw          $v1, 0x1460($s0)
    ctx->pc = 0x3d9e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5216), GPR_U32(ctx, 3));
    // 0x3d9e8c: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x3d9e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3d9e90: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x3d9e90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x3d9e94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D9E94u;
    {
        const bool branch_taken_0x3d9e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9E94u;
        // 0x3d9e98: 0xa0e00003  sb          $zero, 0x3($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9e94) {
            ctx->pc = 0x3D9EA0u;
            goto label_3d9ea0;
        }
    }
    ctx->pc = 0x3D9E9Cu;
label_3d9e9c:
    // 0x3d9e9c: 0xa4a0000e  sh          $zero, 0xE($a1)
    ctx->pc = 0x3d9e9cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 0));
label_3d9ea0:
    // 0x3d9ea0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3d9ea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3d9ea4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3d9ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x3d9ea8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3d9ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3d9eac: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3d9eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3d9eb0: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x3d9eb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x3d9eb4: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x3D9EB4u;
    {
        const bool branch_taken_0x3d9eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D9EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9EB4u;
        // 0x3d9eb8: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9eb4) {
            ctx->pc = 0x3D9DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d9dd8;
        }
    }
    ctx->pc = 0x3D9EBCu;
label_3d9ebc:
    // 0x3d9ebc: 0x8e031460  lw          $v1, 0x1460($s0)
    ctx->pc = 0x3d9ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5216)));
    // 0x3d9ec0: 0x26020b6c  addiu       $v0, $s0, 0xB6C
    ctx->pc = 0x3d9ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2924));
    // 0x3d9ec4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x3d9ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x3d9ec8: 0x26040b4c  addiu       $a0, $s0, 0xB4C
    ctx->pc = 0x3d9ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2892));
    // 0x3d9ecc: 0x26161468  addiu       $s6, $s0, 0x1468
    ctx->pc = 0x3d9eccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 5224));
    // 0x3d9ed0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3d9ed0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3d9ed4: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3D9ED4u;
    {
        const bool branch_taken_0x3d9ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9ED4u;
        // 0x3d9ed8: 0xafa40024  sw          $a0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9ed4) {
            ctx->pc = 0x3D9F64u;
            goto label_3d9f64;
        }
    }
    ctx->pc = 0x3D9EDCu;
    // 0x3d9edc: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x3d9edcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x3d9ee0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3d9ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d9ee4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3d9ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9ee8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3d9ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d9eec: 0x0  nop
    ctx->pc = 0x3d9eecu;
    // NOP
label_3d9ef0:
    // 0x3d9ef0: 0x2a840002  slti        $a0, $s4, 0x2
    ctx->pc = 0x3d9ef0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3d9ef4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3d9ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3d9ef8: 0xae021460  sw          $v0, 0x1460($s0)
    ctx->pc = 0x3d9ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5216), GPR_U32(ctx, 2));
    // 0x3d9efc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D9EFCu;
    {
        const bool branch_taken_0x3d9efc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9EFCu;
        // 0x3d9f00: 0xc31821  addu        $v1, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9efc) {
            ctx->pc = 0x3D9F10u;
            goto label_3d9f10;
        }
    }
    ctx->pc = 0x3D9F04u;
    // 0x3d9f04: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3d9f04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3d9f08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D9F08u;
    {
        const bool branch_taken_0x3d9f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F08u;
        // 0x3d9f0c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9f08) {
            ctx->pc = 0x3D9F14u;
            goto label_3d9f14;
        }
    }
    ctx->pc = 0x3D9F10u;
label_3d9f10:
    // 0x3d9f10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d9f10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d9f14:
    // 0x3d9f14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d9f14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9f18: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3d9f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3d9f1c: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x3d9f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3d9f20: 0xb21821  addu        $v1, $a1, $s2
    ctx->pc = 0x3d9f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x3d9f24: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x3d9f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x3d9f28: 0xa4470000  sh          $a3, 0x0($v0)
    ctx->pc = 0x3d9f28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x3d9f2c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3d9f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d9f30: 0xde0216b8  ld          $v0, 0x16B8($s0)
    ctx->pc = 0x3d9f30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 5816)));
    // 0x3d9f34: 0x6442ffff  daddiu      $v0, $v0, -0x1
    ctx->pc = 0x3d9f34u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
    // 0x3d9f38: 0x11400006  beqz        $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D9F38u;
    {
        const bool branch_taken_0x3d9f38 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F38u;
        // 0x3d9f3c: 0xfe0216b8  sd          $v0, 0x16B8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 5816), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9f38) {
            ctx->pc = 0x3D9F54u;
            goto label_3d9f54;
        }
    }
    ctx->pc = 0x3D9F40u;
    // 0x3d9f40: 0x8a1021  addu        $v0, $a0, $t2
    ctx->pc = 0x3d9f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x3d9f44: 0xde0316c0  ld          $v1, 0x16C0($s0)
    ctx->pc = 0x3d9f44u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 5824)));
    // 0x3d9f48: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x3d9f48u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3d9f4c: 0x64182f  dsubu       $v1, $v1, $a0
    ctx->pc = 0x3d9f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
    // 0x3d9f50: 0xfe0316c0  sd          $v1, 0x16C0($s0)
    ctx->pc = 0x3d9f50u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 5824), GPR_U64(ctx, 3));
label_3d9f54:
    // 0x3d9f54: 0x8e031460  lw          $v1, 0x1460($s0)
    ctx->pc = 0x3d9f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5216)));
    // 0x3d9f58: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3d9f58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3d9f5c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x3D9F5Cu;
    {
        const bool branch_taken_0x3d9f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D9F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F5Cu;
        // 0x3d9f60: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9f5c) {
            ctx->pc = 0x3D9EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d9ef0;
        }
    }
    ctx->pc = 0x3D9F64u;
label_3d9f64:
    // 0x3d9f64: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3d9f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d9f68: 0x2a840000  slti        $a0, $s4, 0x0
    ctx->pc = 0x3d9f68u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3d9f6c: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x3d9f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x3d9f70: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x3d9f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x3d9f74: 0x8e021460  lw          $v0, 0x1460($s0)
    ctx->pc = 0x3d9f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5216)));
    // 0x3d9f78: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x3d9f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x3d9f7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d9f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d9f80: 0x28843  sra         $s1, $v0, 1
    ctx->pc = 0x3d9f80u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3d9f84: 0x1a20002c  blez        $s1, . + 4 + (0x2C << 2)
    ctx->pc = 0x3D9F84u;
    {
        const bool branch_taken_0x3d9f84 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3D9F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F84u;
        // 0x3d9f88: 0x111023  negu        $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9f84) {
            ctx->pc = 0x3DA038u;
            goto label_3da038;
        }
    }
    ctx->pc = 0x3D9F8Cu;
    // 0x3d9f8c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3d9f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3d9f90: 0x50600017  beql        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x3D9F90u;
    {
        const bool branch_taken_0x3d9f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9f90) {
            ctx->pc = 0x3D9F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9F90u;
            // 0x3d9f94: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D9FF0u;
            goto label_3d9ff0;
        }
    }
    ctx->pc = 0x3D9F98u;
    // 0x3d9f98: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3d9f98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3d9f9c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3D9F9Cu;
    {
        const bool branch_taken_0x3d9f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F9Cu;
        // 0x3d9fa0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9f9c) {
            ctx->pc = 0x3D9FD0u;
            goto label_3d9fd0;
        }
    }
    ctx->pc = 0x3D9FA4u;
    // 0x3d9fa4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D9FA4u;
    {
        const bool branch_taken_0x3d9fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9FA4u;
        // 0x3d9fa8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9fa4) {
            ctx->pc = 0x3D9FBCu;
            goto label_3d9fbc;
        }
    }
    ctx->pc = 0x3D9FACu;
    // 0x3d9fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d9facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9fb0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3d9fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9fb4: 0xc0f660a  jal         func_3D9828
    ctx->pc = 0x3D9FB4u;
    SET_GPR_U32(ctx, 31, 0x3D9FBCu);
    ctx->pc = 0x3D9FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9FB4u;
    // 0x3d9fb8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9828u, 0x3D9FB4u, 0x3D9FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9FBCu;
label_3d9fbc:
    // 0x3d9fbc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d9fbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d9fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9fc4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3d9fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9fc8: 0xc0f660a  jal         func_3D9828
    ctx->pc = 0x3D9FC8u;
    SET_GPR_U32(ctx, 31, 0x3D9FD0u);
    ctx->pc = 0x3D9FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9FC8u;
    // 0x3d9fcc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9828u, 0x3D9FC8u, 0x3D9FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9FD0u;
label_3d9fd0:
    // 0x3d9fd0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d9fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9fd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d9fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9fd8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3d9fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9fdc: 0xc0f660a  jal         func_3D9828
    ctx->pc = 0x3D9FDCu;
    SET_GPR_U32(ctx, 31, 0x3D9FE4u);
    ctx->pc = 0x3D9FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9FDCu;
    // 0x3d9fe0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9828u, 0x3D9FDCu, 0x3D9FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9FE4u;
label_3d9fe4:
    // 0x3d9fe4: 0x1a200015  blez        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3D9FE4u;
    {
        const bool branch_taken_0x3d9fe4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3D9FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9FE4u;
        // 0x3d9fe8: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9fe4) {
            ctx->pc = 0x3DA03Cu;
            goto label_3da03c;
        }
    }
    ctx->pc = 0x3D9FECu;
    // 0x3d9fec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d9fecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d9ff0:
    // 0x3d9ff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d9ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9ff4: 0xc0f660a  jal         func_3D9828
    ctx->pc = 0x3D9FF4u;
    SET_GPR_U32(ctx, 31, 0x3D9FFCu);
    ctx->pc = 0x3D9FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9FF4u;
    // 0x3d9ff8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9828u, 0x3D9FF4u, 0x3D9FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9FFCu;
label_3d9ffc:
    // 0x3d9ffc: 0x2626ffff  addiu       $a2, $s1, -0x1
    ctx->pc = 0x3d9ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3da000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3da000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da004: 0xc0f660a  jal         func_3D9828
    ctx->pc = 0x3DA004u;
    SET_GPR_U32(ctx, 31, 0x3DA00Cu);
    ctx->pc = 0x3DA008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA004u;
    // 0x3da008: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9828u, 0x3DA004u, 0x3DA00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA00Cu;
label_3da00c:
    // 0x3da00c: 0x2626fffe  addiu       $a2, $s1, -0x2
    ctx->pc = 0x3da00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x3da010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3da010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da014: 0xc0f660a  jal         func_3D9828
    ctx->pc = 0x3DA014u;
    SET_GPR_U32(ctx, 31, 0x3DA01Cu);
    ctx->pc = 0x3DA018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA014u;
    // 0x3da018: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9828u, 0x3DA014u, 0x3DA01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA01Cu;
label_3da01c:
    // 0x3da01c: 0x2626fffd  addiu       $a2, $s1, -0x3
    ctx->pc = 0x3da01cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967293));
    // 0x3da020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3da020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da024: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3da024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da028: 0xc0f660a  jal         func_3D9828
    ctx->pc = 0x3DA028u;
    SET_GPR_U32(ctx, 31, 0x3DA030u);
    ctx->pc = 0x3DA02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA028u;
    // 0x3da02c: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9828u, 0x3DA028u, 0x3DA030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA030u;
label_3da030:
    // 0x3da030: 0x1e20ffef  bgtz        $s1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3DA030u;
    {
        const bool branch_taken_0x3da030 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x3DA034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA030u;
        // 0x3da034: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da030) {
            ctx->pc = 0x3D9FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d9ff0;
        }
    }
    ctx->pc = 0x3DA038u;
label_3da038:
    // 0x3da038: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x3da038u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3da03c:
    // 0x3da03c: 0x2c0f02d  daddu       $fp, $s6, $zero
    ctx->pc = 0x3da03cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da040: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x3da040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3da044: 0x8fb7002c  lw          $s7, 0x2C($sp)
    ctx->pc = 0x3da044u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x3da048: 0x53b021  addu        $s6, $v0, $s3
    ctx->pc = 0x3da048u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3da04c: 0x25ea821  addu        $s5, $s2, $fp
    ctx->pc = 0x3da04cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
label_3da050:
    // 0x3da050: 0x8e071460  lw          $a3, 0x1460($s0)
    ctx->pc = 0x3da050u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5216)));
    // 0x3da054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3da054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da058: 0x8e110b70  lw          $s1, 0xB70($s0)
    ctx->pc = 0x3da058u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2928)));
    // 0x3da05c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3da05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da060: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x3da060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3da064: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3da064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3da068: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x3da068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x3da06c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3da06cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3da070: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3da070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3da074: 0xae071460  sw          $a3, 0x1460($s0)
    ctx->pc = 0x3da074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5216), GPR_U32(ctx, 7));
    // 0x3da078: 0xc0f660a  jal         func_3D9828
    ctx->pc = 0x3DA078u;
    SET_GPR_U32(ctx, 31, 0x3DA080u);
    ctx->pc = 0x3DA07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA078u;
    // 0x3da07c: 0xae030b70  sw          $v1, 0xB70($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2928), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9828u, 0x3DA078u, 0x3DA080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA080u;
label_3da080:
    // 0x3da080: 0x8e021464  lw          $v0, 0x1464($s0)
    ctx->pc = 0x3da080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5220)));
    // 0x3da084: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x3da084u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3da088: 0x8e080b70  lw          $t0, 0xB70($s0)
    ctx->pc = 0x3da088u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2928)));
    // 0x3da08c: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x3da08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x3da090: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3da090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3da094: 0x3d13821  addu        $a3, $fp, $s1
    ctx->pc = 0x3da094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
    // 0x3da098: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3da098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3da09c: 0xae021464  sw          $v0, 0x1464($s0)
    ctx->pc = 0x3da09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5220), GPR_U32(ctx, 2));
    // 0x3da0a0: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x3da0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x3da0a4: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x3da0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3da0a8: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x3da0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x3da0ac: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x3da0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x3da0b0: 0x3c83021  addu        $a2, $fp, $t0
    ctx->pc = 0x3da0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
    // 0x3da0b4: 0x8e021464  lw          $v0, 0x1464($s0)
    ctx->pc = 0x3da0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5220)));
    // 0x3da0b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3da0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3da0bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3da0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3da0c0: 0xae021464  sw          $v0, 0x1464($s0)
    ctx->pc = 0x3da0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5220), GPR_U32(ctx, 2));
    // 0x3da0c4: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x3da0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x3da0c8: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x3da0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x3da0cc: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x3da0ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3da0d0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x3da0d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3da0d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3da0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3da0d8: 0xa6c20000  sh          $v0, 0x0($s6)
    ctx->pc = 0x3da0d8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3da0dc: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x3da0dcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3da0e0: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x3da0e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3da0e4: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x3da0e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3da0e8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3DA0E8u;
    {
        const bool branch_taken_0x3da0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DA0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA0E8u;
        // 0x3da0ec: 0x24c30001  addiu       $v1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da0e8) {
            ctx->pc = 0x3DA0F4u;
            goto label_3da0f4;
        }
    }
    ctx->pc = 0x3DA0F0u;
    // 0x3da0f0: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x3da0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3da0f4:
    // 0x3da0f4: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x3da0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3da0f8: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x3da0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3da0fc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3da0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3da100: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x3da100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3da104: 0xa4520002  sh          $s2, 0x2($v0)
    ctx->pc = 0x3da104u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x3da108: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x3da108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3da10c: 0xa4720002  sh          $s2, 0x2($v1)
    ctx->pc = 0x3da10cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x3da110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3da110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da114: 0xae120b70  sw          $s2, 0xB70($s0)
    ctx->pc = 0x3da114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2928), GPR_U32(ctx, 18));
    // 0x3da118: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3da118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da11c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3da11cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3da120: 0xc0f660a  jal         func_3D9828
    ctx->pc = 0x3DA120u;
    SET_GPR_U32(ctx, 31, 0x3DA128u);
    ctx->pc = 0x3DA124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA120u;
    // 0x3da124: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9828u, 0x3DA120u, 0x3DA128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA128u;
label_3da128:
    // 0x3da128: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x3da128u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x3da12c: 0x8e021460  lw          $v0, 0x1460($s0)
    ctx->pc = 0x3da12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5216)));
    // 0x3da130: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3da130u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3da134: 0x1040ffc6  beqz        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x3DA134u;
    {
        const bool branch_taken_0x3da134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA134u;
        // 0x3da138: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da134) {
            ctx->pc = 0x3DA050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3da050;
        }
    }
    ctx->pc = 0x3DA13Cu;
    // 0x3da13c: 0x8e021464  lw          $v0, 0x1464($s0)
    ctx->pc = 0x3da13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5220)));
    // 0x3da140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3da140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da144: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x3da144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3da148: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3da148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3da14c: 0x8e060b70  lw          $a2, 0xB70($s0)
    ctx->pc = 0x3da14cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2928)));
    // 0x3da150: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3da150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3da154: 0xae021464  sw          $v0, 0x1464($s0)
    ctx->pc = 0x3da154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5220), GPR_U32(ctx, 2));
    // 0x3da158: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x3da158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x3da15c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3da15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3da160: 0xc0f6654  jal         func_3D9950
    ctx->pc = 0x3DA160u;
    SET_GPR_U32(ctx, 31, 0x3DA168u);
    ctx->pc = 0x3DA164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA160u;
    // 0x3da164: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9950u, 0x3DA160u, 0x3DA168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA168u;
label_3da168:
    // 0x3da168: 0x27ab0002  addiu       $t3, $sp, 0x2
    ctx->pc = 0x3da168u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    // 0x3da16c: 0x8fa90024  lw          $t1, 0x24($sp)
    ctx->pc = 0x3da16cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x3da170: 0x27ac0020  addiu       $t4, $sp, 0x20
    ctx->pc = 0x3da170u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3da174: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3da174u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da178: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x3da178u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da17c: 0x0  nop
    ctx->pc = 0x3da17cu;
    // NOP
label_3da180:
    // 0x3da180: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x3da180u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3da184: 0x256b000a  addiu       $t3, $t3, 0xA
    ctx->pc = 0x3da184u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 10));
    // 0x3da188: 0x95230002  lhu         $v1, 0x2($t1)
    ctx->pc = 0x3da188u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x3da18c: 0x16c382a  slt         $a3, $t3, $t4
    ctx->pc = 0x3da18cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x3da190: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x3da190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3da194: 0x95240004  lhu         $a0, 0x4($t1)
    ctx->pc = 0x3da194u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x3da198: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3da198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3da19c: 0x95250006  lhu         $a1, 0x6($t1)
    ctx->pc = 0x3da19cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x3da1a0: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x3da1a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3da1a4: 0x95260008  lhu         $a2, 0x8($t1)
    ctx->pc = 0x3da1a4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x3da1a8: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x3da1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x3da1ac: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x3da1acu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3da1b0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3da1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3da1b4: 0x2529000a  addiu       $t1, $t1, 0xA
    ctx->pc = 0x3da1b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 10));
    // 0x3da1b8: 0x3068ffff  andi        $t0, $v1, 0xFFFF
    ctx->pc = 0x3da1b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3da1bc: 0xa5430002  sh          $v1, 0x2($t2)
    ctx->pc = 0x3da1bcu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x3da1c0: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x3da1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x3da1c4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3da1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3da1c8: 0x3088ffff  andi        $t0, $a0, 0xFFFF
    ctx->pc = 0x3da1c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3da1cc: 0xa5440004  sh          $a0, 0x4($t2)
    ctx->pc = 0x3da1ccu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x3da1d0: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x3da1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x3da1d4: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x3da1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3da1d8: 0x30a8ffff  andi        $t0, $a1, 0xFFFF
    ctx->pc = 0x3da1d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3da1dc: 0xa5450006  sh          $a1, 0x6($t2)
    ctx->pc = 0x3da1dcu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x3da1e0: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x3da1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x3da1e4: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x3da1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3da1e8: 0xa5460008  sh          $a2, 0x8($t2)
    ctx->pc = 0x3da1e8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 8), (uint16_t)GPR_U32(ctx, 6));
    // 0x3da1ec: 0x30c8ffff  andi        $t0, $a2, 0xFFFF
    ctx->pc = 0x3da1ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3da1f0: 0x14e0ffe3  bnez        $a3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x3DA1F0u;
    {
        const bool branch_taken_0x3da1f0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA1F0u;
        // 0x3da1f4: 0x254a000a  addiu       $t2, $t2, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da1f0) {
            ctx->pc = 0x3DA180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3da180;
        }
    }
    ctx->pc = 0x3DA1F8u;
    // 0x3da1f8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3da1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3da1fc: 0x1480005f  bnez        $a0, . + 4 + (0x5F << 2)
    ctx->pc = 0x3DA1FCu;
    {
        const bool branch_taken_0x3da1fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DA200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA1FCu;
        // 0x3da200: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da1fc) {
            ctx->pc = 0x3DA37Cu;
            goto label_3da37c;
        }
    }
    ctx->pc = 0x3DA204u;
    // 0x3da204: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x3da204u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3da208: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x3da208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da20c: 0x121023  negu        $v0, $s2
    ctx->pc = 0x3da20cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x3da210: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3da210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3da214: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x3DA214u;
    {
        const bool branch_taken_0x3da214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA214u;
        // 0x3da218: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da214) {
            ctx->pc = 0x3DA2C4u;
            goto label_3da2c4;
        }
    }
    ctx->pc = 0x3DA21Cu;
    // 0x3da21c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3da21cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3da220: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3DA220u;
    {
        const bool branch_taken_0x3da220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA220u;
        // 0x3da224: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da220) {
            ctx->pc = 0x3DA290u;
            goto label_3da290;
        }
    }
    ctx->pc = 0x3DA228u;
    // 0x3da228: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3DA228u;
    {
        const bool branch_taken_0x3da228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da228) {
            ctx->pc = 0x3DA22Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA228u;
            // 0x3da22c: 0x96050002  lhu         $a1, 0x2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA264u;
            goto label_3da264;
        }
    }
    ctx->pc = 0x3DA230u;
    // 0x3da230: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x3da230u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3da234: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DA234u;
    {
        const bool branch_taken_0x3da234 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA234u;
        // 0x3da238: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da234) {
            ctx->pc = 0x3DA258u;
            goto label_3da258;
        }
    }
    ctx->pc = 0x3DA23Cu;
    // 0x3da23c: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x3da23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3da240: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x3da240u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3da244: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3da244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3da248: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x3da248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3da24c: 0xc0f7068  jal         func_3DC1A0
    ctx->pc = 0x3DA24Cu;
    SET_GPR_U32(ctx, 31, 0x3DA254u);
    ctx->pc = 0x3DA250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA24Cu;
    // 0x3da250: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC1A0u, 0x3DA24Cu, 0x3DA254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA254u;
label_3da254:
    // 0x3da254: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x3da254u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_3da258:
    // 0x3da258: 0x26300004  addiu       $s0, $s1, 0x4
    ctx->pc = 0x3da258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3da25c: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x3da25cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da260: 0x96050002  lhu         $a1, 0x2($s0)
    ctx->pc = 0x3da260u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3da264:
    // 0x3da264: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DA264u;
    {
        const bool branch_taken_0x3da264 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA264u;
        // 0x3da268: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da264) {
            ctx->pc = 0x3DA288u;
            goto label_3da288;
        }
    }
    ctx->pc = 0x3DA26Cu;
    // 0x3da26c: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x3da26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3da270: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x3da270u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3da274: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3da274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3da278: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x3da278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3da27c: 0xc0f7068  jal         func_3DC1A0
    ctx->pc = 0x3DA27Cu;
    SET_GPR_U32(ctx, 31, 0x3DA284u);
    ctx->pc = 0x3DA280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA27Cu;
    // 0x3da280: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC1A0u, 0x3DA27Cu, 0x3DA284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA284u;
label_3da284:
    // 0x3da284: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3da284u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_3da288:
    // 0x3da288: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3da288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3da28c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3da28cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3da290:
    // 0x3da290: 0x96050002  lhu         $a1, 0x2($s0)
    ctx->pc = 0x3da290u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3da294: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DA294u;
    {
        const bool branch_taken_0x3da294 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA294u;
        // 0x3da298: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da294) {
            ctx->pc = 0x3DA2B8u;
            goto label_3da2b8;
        }
    }
    ctx->pc = 0x3DA29Cu;
    // 0x3da29c: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x3da29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3da2a0: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x3da2a0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3da2a4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3da2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3da2a8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x3da2a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3da2ac: 0xc0f7068  jal         func_3DC1A0
    ctx->pc = 0x3DA2ACu;
    SET_GPR_U32(ctx, 31, 0x3DA2B4u);
    ctx->pc = 0x3DA2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA2ACu;
    // 0x3da2b0: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC1A0u, 0x3DA2ACu, 0x3DA2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA2B4u;
label_3da2b4:
    // 0x3da2b4: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3da2b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_3da2b8:
    // 0x3da2b8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3da2b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3da2bc: 0x1240002e  beqz        $s2, . + 4 + (0x2E << 2)
    ctx->pc = 0x3DA2BCu;
    {
        const bool branch_taken_0x3da2bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA2BCu;
        // 0x3da2c0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da2bc) {
            ctx->pc = 0x3DA378u;
            goto label_3da378;
        }
    }
    ctx->pc = 0x3DA2C4u;
label_3da2c4:
    // 0x3da2c4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3da2c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3da2c8:
    // 0x3da2c8: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x3da2c8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3da2cc: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DA2CCu;
    {
        const bool branch_taken_0x3da2cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA2CCu;
        // 0x3da2d0: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da2cc) {
            ctx->pc = 0x3DA2F0u;
            goto label_3da2f0;
        }
    }
    ctx->pc = 0x3DA2D4u;
    // 0x3da2d4: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x3da2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3da2d8: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x3da2d8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3da2dc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3da2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3da2e0: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x3da2e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3da2e4: 0xc0f7068  jal         func_3DC1A0
    ctx->pc = 0x3DA2E4u;
    SET_GPR_U32(ctx, 31, 0x3DA2ECu);
    ctx->pc = 0x3DA2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA2E4u;
    // 0x3da2e8: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC1A0u, 0x3DA2E4u, 0x3DA2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA2ECu;
label_3da2ec:
    // 0x3da2ec: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3da2ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_3da2f0:
    // 0x3da2f0: 0x96250006  lhu         $a1, 0x6($s1)
    ctx->pc = 0x3da2f0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3da2f4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DA2F4u;
    {
        const bool branch_taken_0x3da2f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA2F4u;
        // 0x3da2f8: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da2f4) {
            ctx->pc = 0x3DA318u;
            goto label_3da318;
        }
    }
    ctx->pc = 0x3DA2FCu;
    // 0x3da2fc: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x3da2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3da300: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x3da300u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3da304: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3da304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3da308: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x3da308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3da30c: 0xc0f7068  jal         func_3DC1A0
    ctx->pc = 0x3DA30Cu;
    SET_GPR_U32(ctx, 31, 0x3DA314u);
    ctx->pc = 0x3DA310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA30Cu;
    // 0x3da310: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC1A0u, 0x3DA30Cu, 0x3DA314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA314u;
label_3da314:
    // 0x3da314: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x3da314u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
label_3da318:
    // 0x3da318: 0x9625000a  lhu         $a1, 0xA($s1)
    ctx->pc = 0x3da318u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x3da31c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DA31Cu;
    {
        const bool branch_taken_0x3da31c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA31Cu;
        // 0x3da320: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da31c) {
            ctx->pc = 0x3DA340u;
            goto label_3da340;
        }
    }
    ctx->pc = 0x3DA324u;
    // 0x3da324: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x3da324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3da328: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x3da328u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3da32c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3da32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3da330: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x3da330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3da334: 0xc0f7068  jal         func_3DC1A0
    ctx->pc = 0x3DA334u;
    SET_GPR_U32(ctx, 31, 0x3DA33Cu);
    ctx->pc = 0x3DA338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA334u;
    // 0x3da338: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC1A0u, 0x3DA334u, 0x3DA33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA33Cu;
label_3da33c:
    // 0x3da33c: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x3da33cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
label_3da340:
    // 0x3da340: 0x9625000e  lhu         $a1, 0xE($s1)
    ctx->pc = 0x3da340u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x3da344: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DA344u;
    {
        const bool branch_taken_0x3da344 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA344u;
        // 0x3da348: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da344) {
            ctx->pc = 0x3DA368u;
            goto label_3da368;
        }
    }
    ctx->pc = 0x3DA34Cu;
    // 0x3da34c: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x3da34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3da350: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x3da350u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3da354: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3da354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3da358: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x3da358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3da35c: 0xc0f7068  jal         func_3DC1A0
    ctx->pc = 0x3DA35Cu;
    SET_GPR_U32(ctx, 31, 0x3DA364u);
    ctx->pc = 0x3DA360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA35Cu;
    // 0x3da360: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC1A0u, 0x3DA35Cu, 0x3DA364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA364u;
label_3da364:
    // 0x3da364: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x3da364u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_3da368:
    // 0x3da368: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3da368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3da36c: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x3da36cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x3da370: 0x1640ffd5  bnez        $s2, . + 4 + (-0x2B << 2)
    ctx->pc = 0x3DA370u;
    {
        const bool branch_taken_0x3da370 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DA374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA370u;
        // 0x3da374: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da370) {
            ctx->pc = 0x3DA2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3da2c8;
        }
    }
    ctx->pc = 0x3DA378u;
label_3da378:
    // 0x3da378: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x3da378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3da37c:
    // 0x3da37c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x3da37cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3da380: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x3da380u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3da384: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x3da384u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3da388: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x3da388u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3da38c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3da38cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3da390: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3da390u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3da394: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x3da394u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3da398: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x3da398u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3da39c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3da39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3da3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA3A0u;
        // 0x3da3a4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA3A8u;
}
