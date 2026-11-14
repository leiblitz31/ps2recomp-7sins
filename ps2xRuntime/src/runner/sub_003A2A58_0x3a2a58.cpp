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

// Function: sub_003A2A58
// Address: 0x3a2a58 - 0x3a3b60
void sub_003A2A58_0x3a2a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2A58_0x3a2a58");
#endif

    switch (ctx->pc) {
        case 0x3a2c30u: goto label_3a2c30;
        case 0x3a2c88u: goto label_3a2c88;
        case 0x3a2d90u: goto label_3a2d90;
        case 0x3a2de8u: goto label_3a2de8;
        case 0x3a2ef0u: goto label_3a2ef0;
        case 0x3a2f70u: goto label_3a2f70;
        case 0x3a3030u: goto label_3a3030;
        case 0x3a30f8u: goto label_3a30f8;
        case 0x3a3130u: goto label_3a3130;
        case 0x3a3200u: goto label_3a3200;
        case 0x3a3248u: goto label_3a3248;
        case 0x3a3318u: goto label_3a3318;
        case 0x3a3388u: goto label_3a3388;
        case 0x3a3448u: goto label_3a3448;
        case 0x3a3510u: goto label_3a3510;
        case 0x3a3548u: goto label_3a3548;
        case 0x3a3610u: goto label_3a3610;
        case 0x3a3660u: goto label_3a3660;
        case 0x3a3790u: goto label_3a3790;
        case 0x3a37e0u: goto label_3a37e0;
        case 0x3a3908u: goto label_3a3908;
        case 0x3a3968u: goto label_3a3968;
        case 0x3a3a08u: goto label_3a3a08;
        case 0x3a3b38u: goto label_3a3b38;
        case 0x3a3b48u: goto label_3a3b48;
        default: break;
    }

    ctx->pc = 0x3a2a58u;

label_3a2a58:
    // 0x3a2a58: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3a2a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3a2a5c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3a2a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x3a2a60: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3a2a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x3a2a64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a2a64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2a68: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3a2a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x3a2a6c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3a2a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x3a2a70: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3a2a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x3a2a74: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3a2a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3a2a78: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3a2a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x3a2a7c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3a2a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x3a2a80: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x3a2a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x3a2a84: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3a2a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3a2a88: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x3a2a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x3a2a8c: 0x8c790018  lw          $t9, 0x18($v1)
    ctx->pc = 0x3a2a8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x3a2a90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3a2a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a2a94: 0x2463004c  addiu       $v1, $v1, 0x4C
    ctx->pc = 0x3a2a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
    // 0x3a2a98: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3a2a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3a2a9c: 0x248e0018  addiu       $t6, $a0, 0x18
    ctx->pc = 0x3a2a9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x3a2aa0: 0x8dc2000c  lw          $v0, 0xC($t6)
    ctx->pc = 0x3a2aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
    // 0x3a2aa4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3a2aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3a2aa8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3a2aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3a2aac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a2aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a2ab0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3a2ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3a2ab4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A2AB4u;
    {
        const bool branch_taken_0x3a2ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2AB4u;
        // 0x3a2ab8: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2ab4) {
            ctx->pc = 0x3A2AE0u;
            goto label_3a2ae0;
        }
    }
    ctx->pc = 0x3A2ABCu;
    // 0x3a2abc: 0x2443bc20  addiu       $v1, $v0, -0x43E0
    ctx->pc = 0x3a2abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949920));
    // 0x3a2ac0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a2ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2ac4: 0x2476000f  addiu       $s6, $v1, 0xF
    ctx->pc = 0x3a2ac4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3a2ac8: 0x90700007  lbu         $s0, 0x7($v1)
    ctx->pc = 0x3a2ac8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
    // 0x3a2acc: 0x907e0008  lbu         $fp, 0x8($v1)
    ctx->pc = 0x3a2accu;
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3a2ad0: 0x24740009  addiu       $s4, $v1, 0x9
    ctx->pc = 0x3a2ad0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x3a2ad4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3A2AD4u;
    {
        const bool branch_taken_0x3a2ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2AD4u;
        // 0x3a2ad8: 0x2473000c  addiu       $s3, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2ad4) {
            ctx->pc = 0x3A2AFCu;
            goto label_3a2afc;
        }
    }
    ctx->pc = 0x3A2ADCu;
    // 0x3a2adc: 0x0  nop
    ctx->pc = 0x3a2adcu;
    // NOP
label_3a2ae0:
    // 0x3a2ae0: 0x2443bc20  addiu       $v1, $v0, -0x43E0
    ctx->pc = 0x3a2ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949920));
    // 0x3a2ae4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a2ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2ae8: 0x90700002  lbu         $s0, 0x2($v1)
    ctx->pc = 0x3a2ae8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3a2aec: 0x24760006  addiu       $s6, $v1, 0x6
    ctx->pc = 0x3a2aecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x3a2af0: 0x907e0003  lbu         $fp, 0x3($v1)
    ctx->pc = 0x3a2af0u;
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x3a2af4: 0x24740004  addiu       $s4, $v1, 0x4
    ctx->pc = 0x3a2af4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3a2af8: 0x24730005  addiu       $s3, $v1, 0x5
    ctx->pc = 0x3a2af8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_3a2afc:
    // 0x3a2afc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3a2afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3a2b00: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3a2b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2b04: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a2b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a2b08: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3a2b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3a2b0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A2B0Cu;
    {
        const bool branch_taken_0x3a2b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2B0Cu;
        // 0x3a2b10: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2b0c) {
            ctx->pc = 0x3A2B1Cu;
            goto label_3a2b1c;
        }
    }
    ctx->pc = 0x3A2B14u;
    // 0x3a2b14: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x3a2b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x3a2b18: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x3a2b18u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3a2b1c:
    // 0x3a2b1c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3a2b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a2b20: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3a2b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3a2b24: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A2B24u;
    {
        const bool branch_taken_0x3a2b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2B24u;
        // 0x3a2b28: 0x24b8bc20  addiu       $t8, $a1, -0x43E0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2b24) {
            ctx->pc = 0x3A2B40u;
            goto label_3a2b40;
        }
    }
    ctx->pc = 0x3A2B2Cu;
    // 0x3a2b2c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3a2b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2b30: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x3a2b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x3a2b34: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x3a2b34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2b38: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3a2b38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2b3c: 0x8c780000  lw          $t8, 0x0($v1)
    ctx->pc = 0x3a2b3cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3a2b40:
    // 0x3a2b40: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x3a2b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3a2b44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a2b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2b48: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3a2b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3a2b4c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A2B4Cu;
    {
        const bool branch_taken_0x3a2b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2B4Cu;
        // 0x3a2b50: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2b4c) {
            ctx->pc = 0x3A2B70u;
            goto label_3a2b70;
        }
    }
    ctx->pc = 0x3A2B54u;
    // 0x3a2b54: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3a2b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3a2b58: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x3a2b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3a2b5c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3a2b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a2b60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A2B60u;
    {
        const bool branch_taken_0x3a2b60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2B60u;
        // 0x3a2b64: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2b60) {
            ctx->pc = 0x3A2B70u;
            goto label_3a2b70;
        }
    }
    ctx->pc = 0x3A2B68u;
    // 0x3a2b68: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3a2b68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3a2b6c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x3a2b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_3a2b70:
    // 0x3a2b70: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x3a2b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x3a2b74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A2B74u;
    {
        const bool branch_taken_0x3a2b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2B74u;
        // 0x3a2b78: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2b74) {
            ctx->pc = 0x3A2B98u;
            goto label_3a2b98;
        }
    }
    ctx->pc = 0x3A2B7Cu;
    // 0x3a2b7c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3a2b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3a2b80: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x3a2b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x3a2b84: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3a2b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a2b88: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A2B88u;
    {
        const bool branch_taken_0x3a2b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2B88u;
        // 0x3a2b8c: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2b88) {
            ctx->pc = 0x3A2B98u;
            goto label_3a2b98;
        }
    }
    ctx->pc = 0x3A2B90u;
    // 0x3a2b90: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3a2b90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3a2b94: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x3a2b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_3a2b98:
    // 0x3a2b98: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x3a2b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x3a2b9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A2B9Cu;
    {
        const bool branch_taken_0x3a2b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2B9Cu;
        // 0x3a2ba0: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2b9c) {
            ctx->pc = 0x3A2BC0u;
            goto label_3a2bc0;
        }
    }
    ctx->pc = 0x3A2BA4u;
    // 0x3a2ba4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3a2ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3a2ba8: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x3a2ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x3a2bac: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3a2bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a2bb0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A2BB0u;
    {
        const bool branch_taken_0x3a2bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2BB0u;
        // 0x3a2bb4: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2bb0) {
            ctx->pc = 0x3A2BC0u;
            goto label_3a2bc0;
        }
    }
    ctx->pc = 0x3A2BB8u;
    // 0x3a2bb8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3a2bb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3a2bbc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3a2bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_3a2bc0:
    // 0x3a2bc0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3a2bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a2bc4: 0x8f24005c  lw          $a0, 0x5C($t9)
    ctx->pc = 0x3a2bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
    // 0x3a2bc8: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x3a2bc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3a2bcc: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x3a2bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3a2bd0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3a2bd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3a2bd4: 0x82b821  addu        $s7, $a0, $v0
    ctx->pc = 0x3a2bd4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3a2bd8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x3a2bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a2bdc: 0x10800056  beqz        $a0, . + 4 + (0x56 << 2)
    ctx->pc = 0x3A2BDCu;
    {
        const bool branch_taken_0x3a2bdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2BDCu;
        // 0x3a2be0: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2bdc) {
            ctx->pc = 0x3A2D38u;
            goto label_3a2d38;
        }
    }
    ctx->pc = 0x3A2BE4u;
    // 0x3a2be4: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x3a2be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x3a2be8: 0x8dc30098  lw          $v1, 0x98($t6)
    ctx->pc = 0x3a2be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 152)));
    // 0x3a2bec: 0x8dc50008  lw          $a1, 0x8($t6)
    ctx->pc = 0x3a2becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x3a2bf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a2bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2bf4: 0x8ee60014  lw          $a2, 0x14($s7)
    ctx->pc = 0x3a2bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x3a2bf8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3a2bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3a2bfc: 0xa36021  addu        $t4, $a1, $v1
    ctx->pc = 0x3a2bfcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3a2c00: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3a2c00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a2c04: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A2C04u;
    {
        const bool branch_taken_0x3a2c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2C04u;
        // 0x3a2c08: 0xafa60020  sw          $a2, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2c04) {
            ctx->pc = 0x3A2C18u;
            goto label_3a2c18;
        }
    }
    ctx->pc = 0x3A2C0Cu;
    // 0x3a2c0c: 0x8dc2009c  lw          $v0, 0x9C($t6)
    ctx->pc = 0x3a2c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 156)));
    // 0x3a2c10: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a2c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a2c14: 0xa26021  addu        $t4, $a1, $v0
    ctx->pc = 0x3a2c14u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3a2c18:
    // 0x3a2c18: 0x8fab0004  lw          $t3, 0x4($sp)
    ctx->pc = 0x3a2c18u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3a2c1c: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x3a2c1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2c20: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3a2c20u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2c24: 0x19600043  blez        $t3, . + 4 + (0x43 << 2)
    ctx->pc = 0x3A2C24u;
    {
        const bool branch_taken_0x3a2c24 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x3A2C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2C24u;
        // 0x3a2c28: 0x3c0482d  daddu       $t1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2c24) {
            ctx->pc = 0x3A2D34u;
            goto label_3a2d34;
        }
    }
    ctx->pc = 0x3A2C2Cu;
    // 0x3a2c2c: 0x8dd20018  lw          $s2, 0x18($t6)
    ctx->pc = 0x3a2c2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
label_3a2c30:
    // 0x3a2c30: 0x24b102a  slt         $v0, $s2, $t3
    ctx->pc = 0x3a2c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x3a2c34: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A2C34u;
    {
        const bool branch_taken_0x3a2c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2C34u;
        // 0x3a2c38: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2c34) {
            ctx->pc = 0x3A2C58u;
            goto label_3a2c58;
        }
    }
    ctx->pc = 0x3A2C3Cu;
    // 0x3a2c3c: 0x85c200a4  lh          $v0, 0xA4($t6)
    ctx->pc = 0x3a2c3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 164)));
    // 0x3a2c40: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x3a2c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2c44: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a2c44u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2c48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a2c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a2c4c: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x3a2c4cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3a2c50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3A2C50u;
    {
        const bool branch_taken_0x3a2c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2C50u;
        // 0x3a2c54: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2c50) {
            ctx->pc = 0x3A2C6Cu;
            goto label_3a2c6c;
        }
    }
    ctx->pc = 0x3A2C58u;
label_3a2c58:
    // 0x3a2c58: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A2C58u;
    {
        const bool branch_taken_0x3a2c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2C58u;
        // 0x3a2c5c: 0x8dc50090  lw          $a1, 0x90($t6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2c58) {
            ctx->pc = 0x3A2C64u;
            goto label_3a2c64;
        }
    }
    ctx->pc = 0x3A2C60u;
    // 0x3a2c60: 0x8dc50094  lw          $a1, 0x94($t6)
    ctx->pc = 0x3a2c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 148)));
label_3a2c64:
    // 0x3a2c64: 0xb51023  subu        $v0, $a1, $s5
    ctx->pc = 0x3a2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x3a2c68: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x3a2c68u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_3a2c6c:
    // 0x3a2c6c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3a2c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2c70: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3A2C70u;
    {
        const bool branch_taken_0x3a2c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2C70u;
        // 0x3a2c74: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2c70) {
            ctx->pc = 0x3A2D08u;
            goto label_3a2d08;
        }
    }
    ctx->pc = 0x3A2C78u;
    // 0x3a2c78: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3a2c78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2c7c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3a2c7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2c80: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x3a2c80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3a2c84: 0x0  nop
    ctx->pc = 0x3a2c84u;
    // NOP
label_3a2c88:
    // 0x3a2c88: 0x28d1021  addu        $v0, $s4, $t5
    ctx->pc = 0x3a2c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x3a2c8c: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x3a2c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x3a2c90: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3a2c90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a2c94: 0x2cd3821  addu        $a3, $s6, $t5
    ctx->pc = 0x3a2c94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x3a2c98: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x3a2c98u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a2c9c: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x3a2c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x3a2ca0: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x3a2ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x3a2ca4: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x3a2ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x3a2ca8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3a2ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3a2cac: 0xc93004  sllv        $a2, $t1, $a2
    ctx->pc = 0x3a2cacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x3a2cb0: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x3a2cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x3a2cb4: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3a2cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2cb8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3a2cb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a2cbc: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x3a2cbcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3a2cc0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3a2cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a2cc4: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x3a2cc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x3a2cc8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3a2cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3a2ccc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3a2cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3a2cd0: 0x600013  mtlo        $v1
    ctx->pc = 0x3a2cd0u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x3a2cd4: 0x704f1000  madd        $v0, $v0, $t7
    ctx->pc = 0x3a2cd4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3a2cd8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3a2cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a2cdc: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a2cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a2ce0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a2ce0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a2ce4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3a2ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a2ce8: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a2ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a2cec: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a2cecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a2cf0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3a2cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a2cf4: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a2cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a2cf8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a2cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a2cfc: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3a2cfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a2d00: 0x14a0ffe1  bnez        $a1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x3A2D00u;
    {
        const bool branch_taken_0x3a2d00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2D00u;
        // 0x3a2d04: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2d00) {
            ctx->pc = 0x3A2C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a2c88;
        }
    }
    ctx->pc = 0x3A2D08u;
label_3a2d08:
    // 0x3a2d08: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x3a2d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x3a2d0c: 0x1354823  subu        $t1, $t1, $s5
    ctx->pc = 0x3a2d0cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x3a2d10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a2d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2d14: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3a2d14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a2d18: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A2D18u;
    {
        const bool branch_taken_0x3a2d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2D18u;
        // 0x3a2d1c: 0x85c500a0  lh          $a1, 0xA0($t6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2d18) {
            ctx->pc = 0x3A2D24u;
            goto label_3a2d24;
        }
    }
    ctx->pc = 0x3A2D20u;
    // 0x3a2d20: 0x85c500a2  lh          $a1, 0xA2($t6)
    ctx->pc = 0x3a2d20u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 162)));
label_3a2d24:
    // 0x3a2d24: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x3a2d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3a2d28: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x3a2d28u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3a2d2c: 0x1d60ffc0  bgtz        $t3, . + 4 + (-0x40 << 2)
    ctx->pc = 0x3A2D2Cu;
    {
        const bool branch_taken_0x3a2d2c = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x3A2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2D2Cu;
        // 0x3a2d30: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2d2c) {
            ctx->pc = 0x3A2C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a2c30;
        }
    }
    ctx->pc = 0x3A2D34u;
label_3a2d34:
    // 0x3a2d34: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x3a2d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3a2d38:
    // 0x3a2d38: 0x10800059  beqz        $a0, . + 4 + (0x59 << 2)
    ctx->pc = 0x3A2D38u;
    {
        const bool branch_taken_0x3a2d38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2D38u;
        // 0x3a2d3c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2d38) {
            ctx->pc = 0x3A2EA0u;
            goto label_3a2ea0;
        }
    }
    ctx->pc = 0x3A2D40u;
    // 0x3a2d40: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x3a2d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x3a2d44: 0x8dc300b0  lw          $v1, 0xB0($t6)
    ctx->pc = 0x3a2d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 176)));
    // 0x3a2d48: 0x8dc50008  lw          $a1, 0x8($t6)
    ctx->pc = 0x3a2d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x3a2d4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a2d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2d50: 0x8ee60014  lw          $a2, 0x14($s7)
    ctx->pc = 0x3a2d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x3a2d54: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3a2d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3a2d58: 0xa36021  addu        $t4, $a1, $v1
    ctx->pc = 0x3a2d58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3a2d5c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3a2d5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a2d60: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A2D60u;
    {
        const bool branch_taken_0x3a2d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2D60u;
        // 0x3a2d64: 0xafa60020  sw          $a2, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2d60) {
            ctx->pc = 0x3A2D74u;
            goto label_3a2d74;
        }
    }
    ctx->pc = 0x3A2D68u;
    // 0x3a2d68: 0x8dc200b4  lw          $v0, 0xB4($t6)
    ctx->pc = 0x3a2d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 180)));
    // 0x3a2d6c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a2d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a2d70: 0xa26021  addu        $t4, $a1, $v0
    ctx->pc = 0x3a2d70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3a2d74:
    // 0x3a2d74: 0x8fab0004  lw          $t3, 0x4($sp)
    ctx->pc = 0x3a2d74u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3a2d78: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x3a2d78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2d7c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3a2d7cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2d80: 0x19600046  blez        $t3, . + 4 + (0x46 << 2)
    ctx->pc = 0x3A2D80u;
    {
        const bool branch_taken_0x3a2d80 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x3A2D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2D80u;
        // 0x3a2d84: 0x3c0482d  daddu       $t1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2d80) {
            ctx->pc = 0x3A2E9Cu;
            goto label_3a2e9c;
        }
    }
    ctx->pc = 0x3A2D88u;
    // 0x3a2d88: 0x8dd20018  lw          $s2, 0x18($t6)
    ctx->pc = 0x3a2d88u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x3a2d8c: 0x0  nop
    ctx->pc = 0x3a2d8cu;
    // NOP
label_3a2d90:
    // 0x3a2d90: 0x24b102a  slt         $v0, $s2, $t3
    ctx->pc = 0x3a2d90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x3a2d94: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A2D94u;
    {
        const bool branch_taken_0x3a2d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2D94u;
        // 0x3a2d98: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2d94) {
            ctx->pc = 0x3A2DB8u;
            goto label_3a2db8;
        }
    }
    ctx->pc = 0x3A2D9Cu;
    // 0x3a2d9c: 0x85c200bc  lh          $v0, 0xBC($t6)
    ctx->pc = 0x3a2d9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 188)));
    // 0x3a2da0: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x3a2da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2da4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a2da4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2da8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a2da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a2dac: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x3a2dacu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3a2db0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3A2DB0u;
    {
        const bool branch_taken_0x3a2db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2DB0u;
        // 0x3a2db4: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2db0) {
            ctx->pc = 0x3A2DCCu;
            goto label_3a2dcc;
        }
    }
    ctx->pc = 0x3A2DB8u;
label_3a2db8:
    // 0x3a2db8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A2DB8u;
    {
        const bool branch_taken_0x3a2db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2DB8u;
        // 0x3a2dbc: 0x8dc500a8  lw          $a1, 0xA8($t6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2db8) {
            ctx->pc = 0x3A2DC4u;
            goto label_3a2dc4;
        }
    }
    ctx->pc = 0x3A2DC0u;
    // 0x3a2dc0: 0x8dc500ac  lw          $a1, 0xAC($t6)
    ctx->pc = 0x3a2dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 172)));
label_3a2dc4:
    // 0x3a2dc4: 0xb51023  subu        $v0, $a1, $s5
    ctx->pc = 0x3a2dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x3a2dc8: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x3a2dc8u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_3a2dcc:
    // 0x3a2dcc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3a2dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2dd0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3A2DD0u;
    {
        const bool branch_taken_0x3a2dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2DD0u;
        // 0x3a2dd4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2dd0) {
            ctx->pc = 0x3A2E70u;
            goto label_3a2e70;
        }
    }
    ctx->pc = 0x3A2DD8u;
    // 0x3a2dd8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3a2dd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2ddc: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3a2ddcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2de0: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x3a2de0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3a2de4: 0x0  nop
    ctx->pc = 0x3a2de4u;
    // NOP
label_3a2de8:
    // 0x3a2de8: 0x28d1021  addu        $v0, $s4, $t5
    ctx->pc = 0x3a2de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x3a2dec: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x3a2decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x3a2df0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3a2df0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a2df4: 0x2cd3821  addu        $a3, $s6, $t5
    ctx->pc = 0x3a2df4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x3a2df8: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x3a2df8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a2dfc: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x3a2dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x3a2e00: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x3a2e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x3a2e04: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x3a2e04u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x3a2e08: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3a2e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3a2e0c: 0xc93004  sllv        $a2, $t1, $a2
    ctx->pc = 0x3a2e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x3a2e10: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x3a2e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x3a2e14: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3a2e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2e18: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3a2e18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a2e1c: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x3a2e1cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3a2e20: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3a2e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a2e24: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x3a2e24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x3a2e28: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3a2e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3a2e2c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3a2e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3a2e30: 0x600013  mtlo        $v1
    ctx->pc = 0x3a2e30u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x3a2e34: 0x704f1000  madd        $v0, $v0, $t7
    ctx->pc = 0x3a2e34u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3a2e38: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3a2e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a2e3c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a2e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a2e40: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a2e40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a2e44: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3a2e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a2e48: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a2e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a2e4c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a2e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a2e50: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3a2e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a2e54: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a2e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a2e58: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a2e58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a2e5c: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x3a2e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x3a2e60: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a2e60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a2e64: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3a2e64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a2e68: 0x14a0ffdf  bnez        $a1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x3A2E68u;
    {
        const bool branch_taken_0x3a2e68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2E68u;
        // 0x3a2e6c: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2e68) {
            ctx->pc = 0x3A2DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a2de8;
        }
    }
    ctx->pc = 0x3A2E70u;
label_3a2e70:
    // 0x3a2e70: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x3a2e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x3a2e74: 0x1354823  subu        $t1, $t1, $s5
    ctx->pc = 0x3a2e74u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x3a2e78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a2e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2e7c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3a2e7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a2e80: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A2E80u;
    {
        const bool branch_taken_0x3a2e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2E80u;
        // 0x3a2e84: 0x85c500b8  lh          $a1, 0xB8($t6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2e80) {
            ctx->pc = 0x3A2E8Cu;
            goto label_3a2e8c;
        }
    }
    ctx->pc = 0x3A2E88u;
    // 0x3a2e88: 0x85c500ba  lh          $a1, 0xBA($t6)
    ctx->pc = 0x3a2e88u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 186)));
label_3a2e8c:
    // 0x3a2e8c: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x3a2e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3a2e90: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x3a2e90u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3a2e94: 0x1d60ffbe  bgtz        $t3, . + 4 + (-0x42 << 2)
    ctx->pc = 0x3A2E94u;
    {
        const bool branch_taken_0x3a2e94 = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x3A2E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2E94u;
        // 0x3a2e98: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2e94) {
            ctx->pc = 0x3A2D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a2d90;
        }
    }
    ctx->pc = 0x3A2E9Cu;
label_3a2e9c:
    // 0x3a2e9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3a2e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3a2ea0:
    // 0x3a2ea0: 0x108000ba  beqz        $a0, . + 4 + (0xBA << 2)
    ctx->pc = 0x3A2EA0u;
    {
        const bool branch_taken_0x3a2ea0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2EA0u;
        // 0x3a2ea4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2ea0) {
            ctx->pc = 0x3A318Cu;
            goto label_3a318c;
        }
    }
    ctx->pc = 0x3A2EA8u;
    // 0x3a2ea8: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x3a2ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x3a2eac: 0x8dc30110  lw          $v1, 0x110($t6)
    ctx->pc = 0x3a2eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 272)));
    // 0x3a2eb0: 0x8dc50008  lw          $a1, 0x8($t6)
    ctx->pc = 0x3a2eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x3a2eb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a2eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2eb8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3a2eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3a2ebc: 0x8ef20018  lw          $s2, 0x18($s7)
    ctx->pc = 0x3a2ebcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x3a2ec0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3a2ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a2ec4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A2EC4u;
    {
        const bool branch_taken_0x3a2ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2EC4u;
        // 0x3a2ec8: 0xa36021  addu        $t4, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2ec4) {
            ctx->pc = 0x3A2ED8u;
            goto label_3a2ed8;
        }
    }
    ctx->pc = 0x3A2ECCu;
    // 0x3a2ecc: 0x8dc20114  lw          $v0, 0x114($t6)
    ctx->pc = 0x3a2eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 276)));
    // 0x3a2ed0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a2ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a2ed4: 0xa26021  addu        $t4, $a1, $v0
    ctx->pc = 0x3a2ed4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3a2ed8:
    // 0x3a2ed8: 0x8fab0004  lw          $t3, 0x4($sp)
    ctx->pc = 0x3a2ed8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3a2edc: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x3a2edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2ee0: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3a2ee0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2ee4: 0x196000a8  blez        $t3, . + 4 + (0xA8 << 2)
    ctx->pc = 0x3A2EE4u;
    {
        const bool branch_taken_0x3a2ee4 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x3A2EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2EE4u;
        // 0x3a2ee8: 0x3c0482d  daddu       $t1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2ee4) {
            ctx->pc = 0x3A3188u;
            goto label_3a3188;
        }
    }
    ctx->pc = 0x3A2EECu;
    // 0x3a2eec: 0x0  nop
    ctx->pc = 0x3a2eecu;
    // NOP
label_3a2ef0:
    // 0x3a2ef0: 0x8dc20018  lw          $v0, 0x18($t6)
    ctx->pc = 0x3a2ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x3a2ef4: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x3a2ef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x3a2ef8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A2EF8u;
    {
        const bool branch_taken_0x3a2ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2EF8u;
        // 0x3a2efc: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2ef8) {
            ctx->pc = 0x3A2F1Cu;
            goto label_3a2f1c;
        }
    }
    ctx->pc = 0x3A2F00u;
    // 0x3a2f00: 0x85c2011c  lh          $v0, 0x11C($t6)
    ctx->pc = 0x3a2f00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 284)));
    // 0x3a2f04: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x3a2f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2f08: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a2f08u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2f0c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a2f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a2f10: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x3a2f10u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3a2f14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3A2F14u;
    {
        const bool branch_taken_0x3a2f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F14u;
        // 0x3a2f18: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2f14) {
            ctx->pc = 0x3A2F30u;
            goto label_3a2f30;
        }
    }
    ctx->pc = 0x3A2F1Cu;
label_3a2f1c:
    // 0x3a2f1c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A2F1Cu;
    {
        const bool branch_taken_0x3a2f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F1Cu;
        // 0x3a2f20: 0x8dc50108  lw          $a1, 0x108($t6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2f1c) {
            ctx->pc = 0x3A2F28u;
            goto label_3a2f28;
        }
    }
    ctx->pc = 0x3A2F24u;
    // 0x3a2f24: 0x8dc5010c  lw          $a1, 0x10C($t6)
    ctx->pc = 0x3a2f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 268)));
label_3a2f28:
    // 0x3a2f28: 0xb51023  subu        $v0, $a1, $s5
    ctx->pc = 0x3a2f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x3a2f2c: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x3a2f2cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_3a2f30:
    // 0x3a2f30: 0x8f220008  lw          $v0, 0x8($t9)
    ctx->pc = 0x3a2f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x3a2f34: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3a2f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3a2f38: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x3A2F38u;
    {
        const bool branch_taken_0x3a2f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F38u;
        // 0x3a2f3c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2f38) {
            ctx->pc = 0x3A30DCu;
            goto label_3a30dc;
        }
    }
    ctx->pc = 0x3A2F40u;
    // 0x3a2f40: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x3a2f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x3a2f44: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x3a2f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x3a2f48: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3A2F48u;
    {
        const bool branch_taken_0x3a2f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F48u;
        // 0x3a2f4c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2f48) {
            ctx->pc = 0x3A3014u;
            goto label_3a3014;
        }
    }
    ctx->pc = 0x3A2F50u;
    // 0x3a2f50: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x3A2F50u;
    {
        const bool branch_taken_0x3a2f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F50u;
        // 0x3a2f54: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2f50) {
            ctx->pc = 0x3A315Cu;
            goto label_3a315c;
        }
    }
    ctx->pc = 0x3A2F58u;
    // 0x3a2f58: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x3a2f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x3a2f5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a2f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a2f60: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3a2f60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2f64: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3a2f64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2f68: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x3a2f68u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3a2f6c: 0x0  nop
    ctx->pc = 0x3a2f6cu;
    // NOP
label_3a2f70:
    // 0x3a2f70: 0x28d1821  addu        $v1, $s4, $t5
    ctx->pc = 0x3a2f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x3a2f74: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x3a2f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x3a2f78: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3a2f78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a2f7c: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x3a2f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x3a2f80: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3a2f80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a2f84: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x3a2f84u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x3a2f88: 0x491004  sllv        $v0, $t1, $v0
    ctx->pc = 0x3a2f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
    // 0x3a2f8c: 0x2cd3821  addu        $a3, $s6, $t5
    ctx->pc = 0x3a2f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x3a2f90: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3a2f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3a2f94: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x3a2f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x3a2f98: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3a2f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3a2f9c: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x3a2f9cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3a2fa0: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x3a2fa0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a2fa4: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x3a2fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2fa8: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x3a2fa8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x3a2fac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3a2facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3a2fb0: 0x6f1018  mult        $v0, $v1, $t7
    ctx->pc = 0x3a2fb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3a2fb4: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x3a2fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3a2fb8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3a2fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a2fbc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a2fbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a2fc0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a2fc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3a2fc4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x3a2fc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a2fc8: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3a2fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a2fcc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a2fccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a2fd0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3a2fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a2fd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a2fd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a2fd8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a2fd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3a2fdc: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x3a2fdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a2fe0: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3a2fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a2fe4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a2fe4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a2fe8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3a2fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a2fec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a2fecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a2ff0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a2ff0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3a2ff4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x3a2ff4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a2ff8: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3a2ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a2ffc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a2ffcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a3000: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3a3000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a3004: 0x14c0ffda  bnez        $a2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x3A3004u;
    {
        const bool branch_taken_0x3a3004 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3004u;
        // 0x3a3008: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3004) {
            ctx->pc = 0x3A2F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a2f70;
        }
    }
    ctx->pc = 0x3A300Cu;
    // 0x3a300c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x3A300Cu;
    {
        const bool branch_taken_0x3a300c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A300Cu;
        // 0x3a3010: 0x8f220018  lw          $v0, 0x18($t9) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a300c) {
            ctx->pc = 0x3A3160u;
            goto label_3a3160;
        }
    }
    ctx->pc = 0x3A3014u;
label_3a3014:
    // 0x3a3014: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x3A3014u;
    {
        const bool branch_taken_0x3a3014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3014u;
        // 0x3a3018: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3014) {
            ctx->pc = 0x3A315Cu;
            goto label_3a315c;
        }
    }
    ctx->pc = 0x3A301Cu;
    // 0x3a301c: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x3a301cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x3a3020: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a3020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a3024: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3a3024u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3028: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3a3028u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a302c: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x3a302cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3a3030:
    // 0x3a3030: 0x28d1821  addu        $v1, $s4, $t5
    ctx->pc = 0x3a3030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x3a3034: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x3a3034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x3a3038: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3a3038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a303c: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x3a303cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x3a3040: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3a3040u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a3044: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x3a3044u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x3a3048: 0x491004  sllv        $v0, $t1, $v0
    ctx->pc = 0x3a3048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
    // 0x3a304c: 0x2cd3821  addu        $a3, $s6, $t5
    ctx->pc = 0x3a304cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x3a3050: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3a3050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3a3054: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x3a3054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x3a3058: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3a3058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3a305c: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x3a305cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3a3060: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x3a3060u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a3064: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x3a3064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3068: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x3a3068u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x3a306c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3a306cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3a3070: 0x6f1018  mult        $v0, $v1, $t7
    ctx->pc = 0x3a3070u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3a3074: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x3a3074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3a3078: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3a3078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a307c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a307cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a3080: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a3080u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3a3084: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x3a3084u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a3088: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3a3088u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a308c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a308cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a3090: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3a3090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a3094: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a3094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a3098: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a3098u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3a309c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x3a309cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a30a0: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3a30a0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a30a4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a30a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a30a8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3a30a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a30ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a30acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a30b0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a30b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3a30b4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x3a30b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a30b8: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3a30b8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a30bc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a30bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a30c0: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x3a30c0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a30c4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a30c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a30c8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3a30c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a30cc: 0x14c0ffd8  bnez        $a2, . + 4 + (-0x28 << 2)
    ctx->pc = 0x3A30CCu;
    {
        const bool branch_taken_0x3a30cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A30D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A30CCu;
        // 0x3a30d0: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a30cc) {
            ctx->pc = 0x3A3030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3030;
        }
    }
    ctx->pc = 0x3A30D4u;
    // 0x3a30d4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3A30D4u;
    {
        const bool branch_taken_0x3a30d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A30D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A30D4u;
        // 0x3a30d8: 0x8f220018  lw          $v0, 0x18($t9) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a30d4) {
            ctx->pc = 0x3A3160u;
            goto label_3a3160;
        }
    }
    ctx->pc = 0x3A30DCu;
label_3a30dc:
    // 0x3a30dc: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x3a30dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x3a30e0: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x3a30e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x3a30e4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3A30E4u;
    {
        const bool branch_taken_0x3a30e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A30E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A30E4u;
        // 0x3a30e8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a30e4) {
            ctx->pc = 0x3A3124u;
            goto label_3a3124;
        }
    }
    ctx->pc = 0x3A30ECu;
    // 0x3a30ec: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3A30ECu;
    {
        const bool branch_taken_0x3a30ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A30F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A30ECu;
        // 0x3a30f0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a30ec) {
            ctx->pc = 0x3A315Cu;
            goto label_3a315c;
        }
    }
    ctx->pc = 0x3A30F4u;
    // 0x3a30f4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x3a30f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3a30f8:
    // 0x3a30f8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a30f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a30fc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3a30fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3100: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a3100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a3104: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3a3104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3a3108: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a3108u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a310c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a310cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a3110: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a3110u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a3114: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3A3114u;
    {
        const bool branch_taken_0x3a3114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3114u;
        // 0x3a3118: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3114) {
            ctx->pc = 0x3A30F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a30f8;
        }
    }
    ctx->pc = 0x3A311Cu;
    // 0x3a311c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3A311Cu;
    {
        const bool branch_taken_0x3a311c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A311Cu;
        // 0x3a3120: 0x8f220018  lw          $v0, 0x18($t9) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a311c) {
            ctx->pc = 0x3A3160u;
            goto label_3a3160;
        }
    }
    ctx->pc = 0x3A3124u;
label_3a3124:
    // 0x3a3124: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A3124u;
    {
        const bool branch_taken_0x3a3124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3124u;
        // 0x3a3128: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3124) {
            ctx->pc = 0x3A315Cu;
            goto label_3a315c;
        }
    }
    ctx->pc = 0x3A312Cu;
    // 0x3a312c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x3a312cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3a3130:
    // 0x3a3130: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a3130u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a3134: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3a3134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3138: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a3138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a313c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3a313cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3a3140: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a3140u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a3144: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a3144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a3148: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a3148u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a314c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a314cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a3150: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a3150u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a3154: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3A3154u;
    {
        const bool branch_taken_0x3a3154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3154u;
        // 0x3a3158: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3154) {
            ctx->pc = 0x3A3130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3130;
        }
    }
    ctx->pc = 0x3A315Cu;
label_3a315c:
    // 0x3a315c: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x3a315cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3a3160:
    // 0x3a3160: 0x1354823  subu        $t1, $t1, $s5
    ctx->pc = 0x3a3160u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x3a3164: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a3164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3168: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3a3168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a316c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A316Cu;
    {
        const bool branch_taken_0x3a316c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A316Cu;
        // 0x3a3170: 0x85c50118  lh          $a1, 0x118($t6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a316c) {
            ctx->pc = 0x3A3178u;
            goto label_3a3178;
        }
    }
    ctx->pc = 0x3A3174u;
    // 0x3a3174: 0x85c5011a  lh          $a1, 0x11A($t6)
    ctx->pc = 0x3a3174u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 282)));
label_3a3178:
    // 0x3a3178: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x3a3178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3a317c: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x3a317cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3a3180: 0x1d60ff5b  bgtz        $t3, . + 4 + (-0xA5 << 2)
    ctx->pc = 0x3A3180u;
    {
        const bool branch_taken_0x3a3180 = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x3A3184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3180u;
        // 0x3a3184: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3180) {
            ctx->pc = 0x3A2EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a2ef0;
        }
    }
    ctx->pc = 0x3A3188u;
label_3a3188:
    // 0x3a3188: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3a3188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3a318c:
    // 0x3a318c: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x3a318cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3a3190: 0xadc20024  sw          $v0, 0x24($t6)
    ctx->pc = 0x3a3190u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 36), GPR_U32(ctx, 2));
    // 0x3a3194: 0x84640006  lh          $a0, 0x6($v1)
    ctx->pc = 0x3a3194u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x3a3198: 0xadc40028  sw          $a0, 0x28($t6)
    ctx->pc = 0x3a3198u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 40), GPR_U32(ctx, 4));
    // 0x3a319c: 0x8f230018  lw          $v1, 0x18($t9)
    ctx->pc = 0x3a319cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x3a31a0: 0xadc3002c  sw          $v1, 0x2C($t6)
    ctx->pc = 0x3a31a0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 44), GPR_U32(ctx, 3));
    // 0x3a31a4: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x3a31a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x3a31a8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3a31a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a31ac: 0x544000f8  bnel        $v0, $zero, . + 4 + (0xF8 << 2)
    ctx->pc = 0x3A31ACu;
    {
        const bool branch_taken_0x3a31ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a31ac) {
            ctx->pc = 0x3A31B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A31ACu;
            // 0x3a31b0: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3590u;
            goto label_3a3590;
        }
    }
    ctx->pc = 0x3A31B4u;
    // 0x3a31b4: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x3a31b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3a31b8: 0x8f23005c  lw          $v1, 0x5C($t9)
    ctx->pc = 0x3a31b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
    // 0x3a31bc: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x3a31bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3a31c0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x3a31c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a31c4: 0x10800046  beqz        $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x3A31C4u;
    {
        const bool branch_taken_0x3a31c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A31C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A31C4u;
        // 0x3a31c8: 0x62b821  addu        $s7, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a31c4) {
            ctx->pc = 0x3A32E0u;
            goto label_3a32e0;
        }
    }
    ctx->pc = 0x3A31CCu;
    // 0x3a31cc: 0x8dc2018c  lw          $v0, 0x18C($t6)
    ctx->pc = 0x3a31ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 396)));
    // 0x3a31d0: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3a31d0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a31d4: 0x8dc30008  lw          $v1, 0x8($t6)
    ctx->pc = 0x3a31d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x3a31d8: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x3a31d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a31dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a31dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a31e0: 0x8ee60014  lw          $a2, 0x14($s7)
    ctx->pc = 0x3a31e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x3a31e4: 0x626021  addu        $t4, $v1, $v0
    ctx->pc = 0x3a31e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a31e8: 0x8fab0004  lw          $t3, 0x4($sp)
    ctx->pc = 0x3a31e8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3a31ec: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x3a31ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x3a31f0: 0x1960003b  blez        $t3, . + 4 + (0x3B << 2)
    ctx->pc = 0x3A31F0u;
    {
        const bool branch_taken_0x3a31f0 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x3A31F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A31F0u;
        // 0x3a31f4: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a31f0) {
            ctx->pc = 0x3A32E0u;
            goto label_3a32e0;
        }
    }
    ctx->pc = 0x3A31F8u;
    // 0x3a31f8: 0x8dd20018  lw          $s2, 0x18($t6)
    ctx->pc = 0x3a31f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x3a31fc: 0x0  nop
    ctx->pc = 0x3a31fcu;
    // NOP
label_3a3200:
    // 0x3a3200: 0x24b102a  slt         $v0, $s2, $t3
    ctx->pc = 0x3a3200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x3a3204: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A3204u;
    {
        const bool branch_taken_0x3a3204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a3204) {
            ctx->pc = 0x3A3208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3204u;
            // 0x3a3208: 0x8dc50184  lw          $a1, 0x184($t6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3228u;
            goto label_3a3228;
        }
    }
    ctx->pc = 0x3A320Cu;
    // 0x3a320c: 0x85c20194  lh          $v0, 0x194($t6)
    ctx->pc = 0x3a320cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 404)));
    // 0x3a3210: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x3a3210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3214: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a3214u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3218: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a3218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a321c: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x3a321cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3a3220: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A3220u;
    {
        const bool branch_taken_0x3a3220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3220u;
        // 0x3a3224: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3220) {
            ctx->pc = 0x3A3230u;
            goto label_3a3230;
        }
    }
    ctx->pc = 0x3A3228u;
label_3a3228:
    // 0x3a3228: 0xb51023  subu        $v0, $a1, $s5
    ctx->pc = 0x3a3228u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x3a322c: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x3a322cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_3a3230:
    // 0x3a3230: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3a3230u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3234: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3A3234u;
    {
        const bool branch_taken_0x3a3234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3234u;
        // 0x3a3238: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3234) {
            ctx->pc = 0x3A32C8u;
            goto label_3a32c8;
        }
    }
    ctx->pc = 0x3A323Cu;
    // 0x3a323c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3a323cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3240: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3a3240u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3244: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x3a3244u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3a3248:
    // 0x3a3248: 0x28d1021  addu        $v0, $s4, $t5
    ctx->pc = 0x3a3248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x3a324c: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x3a324cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x3a3250: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3a3250u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a3254: 0x2cd3821  addu        $a3, $s6, $t5
    ctx->pc = 0x3a3254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x3a3258: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x3a3258u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a325c: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x3a325cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x3a3260: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x3a3260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x3a3264: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x3a3264u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x3a3268: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3a3268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3a326c: 0xc93004  sllv        $a2, $t1, $a2
    ctx->pc = 0x3a326cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x3a3270: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x3a3270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x3a3274: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3a3274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3278: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3a3278u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a327c: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x3a327cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3a3280: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3a3280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a3284: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x3a3284u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x3a3288: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3a3288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3a328c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3a328cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3a3290: 0x600013  mtlo        $v1
    ctx->pc = 0x3a3290u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x3a3294: 0x704f1000  madd        $v0, $v0, $t7
    ctx->pc = 0x3a3294u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3a3298: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3a3298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a329c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a329cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a32a0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a32a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a32a4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3a32a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a32a8: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a32a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a32ac: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a32acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a32b0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3a32b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a32b4: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a32b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a32b8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a32b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a32bc: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3a32bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a32c0: 0x14a0ffe1  bnez        $a1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x3A32C0u;
    {
        const bool branch_taken_0x3a32c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A32C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A32C0u;
        // 0x3a32c4: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a32c0) {
            ctx->pc = 0x3A3248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3248;
        }
    }
    ctx->pc = 0x3A32C8u;
label_3a32c8:
    // 0x3a32c8: 0x85c20192  lh          $v0, 0x192($t6)
    ctx->pc = 0x3a32c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 402)));
    // 0x3a32cc: 0x1354823  subu        $t1, $t1, $s5
    ctx->pc = 0x3a32ccu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x3a32d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a32d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a32d4: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x3a32d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3a32d8: 0x1d60ffc9  bgtz        $t3, . + 4 + (-0x37 << 2)
    ctx->pc = 0x3A32D8u;
    {
        const bool branch_taken_0x3a32d8 = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x3A32DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A32D8u;
        // 0x3a32dc: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a32d8) {
            ctx->pc = 0x3A3200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3200;
        }
    }
    ctx->pc = 0x3A32E0u;
label_3a32e0:
    // 0x3a32e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3a32e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a32e4: 0x508000aa  beql        $a0, $zero, . + 4 + (0xAA << 2)
    ctx->pc = 0x3A32E4u;
    {
        const bool branch_taken_0x3a32e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a32e4) {
            ctx->pc = 0x3A32E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A32E4u;
            // 0x3a32e8: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3590u;
            goto label_3a3590;
        }
    }
    ctx->pc = 0x3A32ECu;
    // 0x3a32ec: 0x8dc201a4  lw          $v0, 0x1A4($t6)
    ctx->pc = 0x3a32ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 420)));
    // 0x3a32f0: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3a32f0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a32f4: 0x8dc30008  lw          $v1, 0x8($t6)
    ctx->pc = 0x3a32f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x3a32f8: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x3a32f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a32fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a32fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a3300: 0x8fab0004  lw          $t3, 0x4($sp)
    ctx->pc = 0x3a3300u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3a3304: 0x626021  addu        $t4, $v1, $v0
    ctx->pc = 0x3a3304u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a3308: 0x8ef20018  lw          $s2, 0x18($s7)
    ctx->pc = 0x3a3308u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x3a330c: 0x1960009f  blez        $t3, . + 4 + (0x9F << 2)
    ctx->pc = 0x3A330Cu;
    {
        const bool branch_taken_0x3a330c = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x3A3310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A330Cu;
        // 0x3a3310: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a330c) {
            ctx->pc = 0x3A358Cu;
            goto label_3a358c;
        }
    }
    ctx->pc = 0x3A3314u;
    // 0x3a3314: 0x0  nop
    ctx->pc = 0x3a3314u;
    // NOP
label_3a3318:
    // 0x3a3318: 0x8dc20018  lw          $v0, 0x18($t6)
    ctx->pc = 0x3a3318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x3a331c: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x3a331cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x3a3320: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A3320u;
    {
        const bool branch_taken_0x3a3320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a3320) {
            ctx->pc = 0x3A3324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3320u;
            // 0x3a3324: 0x8dc5019c  lw          $a1, 0x19C($t6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 412)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3344u;
            goto label_3a3344;
        }
    }
    ctx->pc = 0x3A3328u;
    // 0x3a3328: 0x85c201ac  lh          $v0, 0x1AC($t6)
    ctx->pc = 0x3a3328u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 428)));
    // 0x3a332c: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x3a332cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3330: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a3330u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3334: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a3334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a3338: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x3a3338u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3a333c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A333Cu;
    {
        const bool branch_taken_0x3a333c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A333Cu;
        // 0x3a3340: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a333c) {
            ctx->pc = 0x3A334Cu;
            goto label_3a334c;
        }
    }
    ctx->pc = 0x3A3344u;
label_3a3344:
    // 0x3a3344: 0xb51023  subu        $v0, $a1, $s5
    ctx->pc = 0x3a3344u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x3a3348: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x3a3348u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_3a334c:
    // 0x3a334c: 0x8f220008  lw          $v0, 0x8($t9)
    ctx->pc = 0x3a334cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x3a3350: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3a3350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3a3354: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x3A3354u;
    {
        const bool branch_taken_0x3a3354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3354u;
        // 0x3a3358: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3354) {
            ctx->pc = 0x3A34F4u;
            goto label_3a34f4;
        }
    }
    ctx->pc = 0x3A335Cu;
    // 0x3a335c: 0x8c620078  lw          $v0, 0x78($v1)
    ctx->pc = 0x3a335cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x3a3360: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x3a3360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x3a3364: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x3A3364u;
    {
        const bool branch_taken_0x3a3364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3364u;
        // 0x3a3368: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3364) {
            ctx->pc = 0x3A342Cu;
            goto label_3a342c;
        }
    }
    ctx->pc = 0x3A336Cu;
    // 0x3a336c: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x3A336Cu;
    {
        const bool branch_taken_0x3a336c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A336Cu;
        // 0x3a3370: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a336c) {
            ctx->pc = 0x3A3574u;
            goto label_3a3574;
        }
    }
    ctx->pc = 0x3A3374u;
    // 0x3a3374: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x3a3374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x3a3378: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a3378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a337c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3a337cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3380: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3a3380u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3384: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x3a3384u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3a3388:
    // 0x3a3388: 0x28d1821  addu        $v1, $s4, $t5
    ctx->pc = 0x3a3388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x3a338c: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x3a338cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x3a3390: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3a3390u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a3394: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x3a3394u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x3a3398: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3a3398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a339c: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x3a339cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x3a33a0: 0x491004  sllv        $v0, $t1, $v0
    ctx->pc = 0x3a33a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
    // 0x3a33a4: 0x2cd3821  addu        $a3, $s6, $t5
    ctx->pc = 0x3a33a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x3a33a8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3a33a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3a33ac: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x3a33acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x3a33b0: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3a33b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3a33b4: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x3a33b4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3a33b8: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x3a33b8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a33bc: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x3a33bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a33c0: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x3a33c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x3a33c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3a33c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3a33c8: 0x6f1018  mult        $v0, $v1, $t7
    ctx->pc = 0x3a33c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3a33cc: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x3a33ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3a33d0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3a33d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a33d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a33d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a33d8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a33d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3a33dc: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x3a33dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a33e0: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3a33e0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a33e4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a33e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a33e8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3a33e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a33ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a33ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a33f0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a33f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3a33f4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x3a33f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a33f8: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3a33f8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a33fc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a33fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a3400: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3a3400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a3404: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a3404u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a3408: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a3408u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3a340c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x3a340cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a3410: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3a3410u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a3414: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a3414u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a3418: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3a3418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a341c: 0x14c0ffda  bnez        $a2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x3A341Cu;
    {
        const bool branch_taken_0x3a341c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A341Cu;
        // 0x3a3420: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a341c) {
            ctx->pc = 0x3A3388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3388;
        }
    }
    ctx->pc = 0x3A3424u;
    // 0x3a3424: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x3A3424u;
    {
        const bool branch_taken_0x3a3424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3424u;
        // 0x3a3428: 0x85c201aa  lh          $v0, 0x1AA($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 426)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3424) {
            ctx->pc = 0x3A3578u;
            goto label_3a3578;
        }
    }
    ctx->pc = 0x3A342Cu;
label_3a342c:
    // 0x3a342c: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x3A342Cu;
    {
        const bool branch_taken_0x3a342c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A342Cu;
        // 0x3a3430: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a342c) {
            ctx->pc = 0x3A3574u;
            goto label_3a3574;
        }
    }
    ctx->pc = 0x3A3434u;
    // 0x3a3434: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x3a3434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x3a3438: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a3438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a343c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3a343cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3440: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3a3440u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3444: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x3a3444u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3a3448:
    // 0x3a3448: 0x28d1821  addu        $v1, $s4, $t5
    ctx->pc = 0x3a3448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x3a344c: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x3a344cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x3a3450: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3a3450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a3454: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x3a3454u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x3a3458: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3a3458u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a345c: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x3a345cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x3a3460: 0x491004  sllv        $v0, $t1, $v0
    ctx->pc = 0x3a3460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
    // 0x3a3464: 0x2cd3821  addu        $a3, $s6, $t5
    ctx->pc = 0x3a3464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x3a3468: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3a3468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3a346c: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x3a346cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x3a3470: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3a3470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3a3474: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x3a3474u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3a3478: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x3a3478u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a347c: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x3a347cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3480: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x3a3480u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x3a3484: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3a3484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3a3488: 0x6f1018  mult        $v0, $v1, $t7
    ctx->pc = 0x3a3488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3a348c: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x3a348cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3a3490: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3a3490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a3494: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a3494u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a3498: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a3498u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3a349c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x3a349cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a34a0: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3a34a0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a34a4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a34a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a34a8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3a34a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a34ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a34acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a34b0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a34b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3a34b4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x3a34b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a34b8: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3a34b8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a34bc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a34bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a34c0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3a34c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a34c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a34c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a34c8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a34c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3a34cc: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x3a34ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a34d0: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3a34d0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a34d4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a34d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a34d8: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x3a34d8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a34dc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a34dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a34e0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3a34e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a34e4: 0x14c0ffd8  bnez        $a2, . + 4 + (-0x28 << 2)
    ctx->pc = 0x3A34E4u;
    {
        const bool branch_taken_0x3a34e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A34E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A34E4u;
        // 0x3a34e8: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a34e4) {
            ctx->pc = 0x3A3448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3448;
        }
    }
    ctx->pc = 0x3A34ECu;
    // 0x3a34ec: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3A34ECu;
    {
        const bool branch_taken_0x3a34ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A34F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A34ECu;
        // 0x3a34f0: 0x85c201aa  lh          $v0, 0x1AA($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 426)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a34ec) {
            ctx->pc = 0x3A3578u;
            goto label_3a3578;
        }
    }
    ctx->pc = 0x3A34F4u;
label_3a34f4:
    // 0x3a34f4: 0x8c620078  lw          $v0, 0x78($v1)
    ctx->pc = 0x3a34f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x3a34f8: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x3a34f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x3a34fc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3A34FCu;
    {
        const bool branch_taken_0x3a34fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A34FCu;
        // 0x3a3500: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a34fc) {
            ctx->pc = 0x3A353Cu;
            goto label_3a353c;
        }
    }
    ctx->pc = 0x3A3504u;
    // 0x3a3504: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3A3504u;
    {
        const bool branch_taken_0x3a3504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3504u;
        // 0x3a3508: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3504) {
            ctx->pc = 0x3A3574u;
            goto label_3a3574;
        }
    }
    ctx->pc = 0x3A350Cu;
    // 0x3a350c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3a350cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a3510:
    // 0x3a3510: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a3510u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a3514: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3a3514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3518: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a3518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a351c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3a351cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3a3520: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a3520u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a3524: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a3524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a3528: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a3528u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a352c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3A352Cu;
    {
        const bool branch_taken_0x3a352c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A352Cu;
        // 0x3a3530: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a352c) {
            ctx->pc = 0x3A3510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3510;
        }
    }
    ctx->pc = 0x3A3534u;
    // 0x3a3534: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3A3534u;
    {
        const bool branch_taken_0x3a3534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3534u;
        // 0x3a3538: 0x85c201aa  lh          $v0, 0x1AA($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 426)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3534) {
            ctx->pc = 0x3A3578u;
            goto label_3a3578;
        }
    }
    ctx->pc = 0x3A353Cu;
label_3a353c:
    // 0x3a353c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A353Cu;
    {
        const bool branch_taken_0x3a353c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A353Cu;
        // 0x3a3540: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a353c) {
            ctx->pc = 0x3A3574u;
            goto label_3a3574;
        }
    }
    ctx->pc = 0x3A3544u;
    // 0x3a3544: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3a3544u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a3548:
    // 0x3a3548: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a3548u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a354c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3a354cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3550: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a3550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a3554: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3a3554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3a3558: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a3558u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a355c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a355cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a3560: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a3560u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a3564: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a3564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a3568: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a3568u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a356c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3A356Cu;
    {
        const bool branch_taken_0x3a356c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A356Cu;
        // 0x3a3570: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a356c) {
            ctx->pc = 0x3A3548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3548;
        }
    }
    ctx->pc = 0x3A3574u;
label_3a3574:
    // 0x3a3574: 0x85c201aa  lh          $v0, 0x1AA($t6)
    ctx->pc = 0x3a3574u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 426)));
label_3a3578:
    // 0x3a3578: 0x1354823  subu        $t1, $t1, $s5
    ctx->pc = 0x3a3578u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x3a357c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a357cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a3580: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x3a3580u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3a3584: 0x1d60ff64  bgtz        $t3, . + 4 + (-0x9C << 2)
    ctx->pc = 0x3A3584u;
    {
        const bool branch_taken_0x3a3584 = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x3A3588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3584u;
        // 0x3a3588: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3584) {
            ctx->pc = 0x3A3318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3318;
        }
    }
    ctx->pc = 0x3A358Cu;
label_3a358c:
    // 0x3a358c: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x3a358cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_3a3590:
    // 0x3a3590: 0x30420180  andi        $v0, $v0, 0x180
    ctx->pc = 0x3a3590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)384);
    // 0x3a3594: 0x504000c1  beql        $v0, $zero, . + 4 + (0xC1 << 2)
    ctx->pc = 0x3A3594u;
    {
        const bool branch_taken_0x3a3594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3594) {
            ctx->pc = 0x3A3598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3594u;
            // 0x3a3598: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A389Cu;
            goto label_3a389c;
        }
    }
    ctx->pc = 0x3A359Cu;
    // 0x3a359c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3a359cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3a35a0: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x3a35a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x3a35a4: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3a35a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a35a8: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x3A35A8u;
    {
        const bool branch_taken_0x3a35a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A35ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A35A8u;
        // 0x3a35ac: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a35a8) {
            ctx->pc = 0x3A36FCu;
            goto label_3a36fc;
        }
    }
    ctx->pc = 0x3A35B0u;
    // 0x3a35b0: 0x54400053  bnel        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x3A35B0u;
    {
        const bool branch_taken_0x3a35b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a35b0) {
            ctx->pc = 0x3A35B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A35B0u;
            // 0x3a35b4: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3700u;
            goto label_3a3700;
        }
    }
    ctx->pc = 0x3A35B8u;
    // 0x3a35b8: 0x8f220008  lw          $v0, 0x8($t9)
    ctx->pc = 0x3a35b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x3a35bc: 0x30420084  andi        $v0, $v0, 0x84
    ctx->pc = 0x3a35bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)132);
    // 0x3a35c0: 0x5040004f  beql        $v0, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x3A35C0u;
    {
        const bool branch_taken_0x3a35c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a35c0) {
            ctx->pc = 0x3A35C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A35C0u;
            // 0x3a35c4: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3700u;
            goto label_3a3700;
        }
    }
    ctx->pc = 0x3A35C8u;
    // 0x3a35c8: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x3a35c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x3a35cc: 0x8dc300c8  lw          $v1, 0xC8($t6)
    ctx->pc = 0x3a35ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 200)));
    // 0x3a35d0: 0x8dc50008  lw          $a1, 0x8($t6)
    ctx->pc = 0x3a35d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x3a35d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a35d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a35d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3a35d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3a35dc: 0x8f2f0034  lw          $t7, 0x34($t9)
    ctx->pc = 0x3a35dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
    // 0x3a35e0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3a35e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a35e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A35E4u;
    {
        const bool branch_taken_0x3a35e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A35E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A35E4u;
        // 0x3a35e8: 0xa36021  addu        $t4, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a35e4) {
            ctx->pc = 0x3A35F8u;
            goto label_3a35f8;
        }
    }
    ctx->pc = 0x3A35ECu;
    // 0x3a35ec: 0x8dc200cc  lw          $v0, 0xCC($t6)
    ctx->pc = 0x3a35ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 204)));
    // 0x3a35f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a35f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a35f4: 0xa26021  addu        $t4, $a1, $v0
    ctx->pc = 0x3a35f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3a35f8:
    // 0x3a35f8: 0x8fab0004  lw          $t3, 0x4($sp)
    ctx->pc = 0x3a35f8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3a35fc: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x3a35fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3600: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3a3600u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3604: 0x1960003d  blez        $t3, . + 4 + (0x3D << 2)
    ctx->pc = 0x3A3604u;
    {
        const bool branch_taken_0x3a3604 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x3A3608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3604u;
        // 0x3a3608: 0x3c0482d  daddu       $t1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3604) {
            ctx->pc = 0x3A36FCu;
            goto label_3a36fc;
        }
    }
    ctx->pc = 0x3A360Cu;
    // 0x3a360c: 0x8dd20018  lw          $s2, 0x18($t6)
    ctx->pc = 0x3a360cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
label_3a3610:
    // 0x3a3610: 0x24b102a  slt         $v0, $s2, $t3
    ctx->pc = 0x3a3610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x3a3614: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A3614u;
    {
        const bool branch_taken_0x3a3614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3614u;
        // 0x3a3618: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3614) {
            ctx->pc = 0x3A3638u;
            goto label_3a3638;
        }
    }
    ctx->pc = 0x3A361Cu;
    // 0x3a361c: 0x85c200d4  lh          $v0, 0xD4($t6)
    ctx->pc = 0x3a361cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 212)));
    // 0x3a3620: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x3a3620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3624: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a3624u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3628: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a3628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a362c: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x3a362cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3a3630: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3A3630u;
    {
        const bool branch_taken_0x3a3630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3630u;
        // 0x3a3634: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3630) {
            ctx->pc = 0x3A364Cu;
            goto label_3a364c;
        }
    }
    ctx->pc = 0x3A3638u;
label_3a3638:
    // 0x3a3638: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A3638u;
    {
        const bool branch_taken_0x3a3638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3638u;
        // 0x3a363c: 0x8dc500c0  lw          $a1, 0xC0($t6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3638) {
            ctx->pc = 0x3A3644u;
            goto label_3a3644;
        }
    }
    ctx->pc = 0x3A3640u;
    // 0x3a3640: 0x8dc500c4  lw          $a1, 0xC4($t6)
    ctx->pc = 0x3a3640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 196)));
label_3a3644:
    // 0x3a3644: 0xb51023  subu        $v0, $a1, $s5
    ctx->pc = 0x3a3644u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x3a3648: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x3a3648u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_3a364c:
    // 0x3a364c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3a364cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3650: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3A3650u;
    {
        const bool branch_taken_0x3a3650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3650u;
        // 0x3a3654: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3650) {
            ctx->pc = 0x3A36D0u;
            goto label_3a36d0;
        }
    }
    ctx->pc = 0x3A3658u;
    // 0x3a3658: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3a3658u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a365c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3a365cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a3660:
    // 0x3a3660: 0x28d1021  addu        $v0, $s4, $t5
    ctx->pc = 0x3a3660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x3a3664: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x3a3664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x3a3668: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3a3668u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a366c: 0x2cd3821  addu        $a3, $s6, $t5
    ctx->pc = 0x3a366cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x3a3670: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x3a3670u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a3674: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x3a3674u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x3a3678: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x3a3678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x3a367c: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x3a367cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x3a3680: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3a3680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3a3684: 0xc93004  sllv        $a2, $t1, $a2
    ctx->pc = 0x3a3684u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x3a3688: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x3a3688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x3a368c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3a368cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3690: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3a3690u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a3694: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x3a3694u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3a3698: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x3a3698u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x3a369c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3a369cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3a36a0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3a36a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3a36a4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3a36a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3a36a8: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x3a36a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x3a36ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3a36acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a36b0: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a36b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a36b4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a36b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a36b8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3a36b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a36bc: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a36bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a36c0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a36c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a36c4: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3a36c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a36c8: 0x14a0ffe5  bnez        $a1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x3A36C8u;
    {
        const bool branch_taken_0x3a36c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A36CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A36C8u;
        // 0x3a36cc: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a36c8) {
            ctx->pc = 0x3A3660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3660;
        }
    }
    ctx->pc = 0x3A36D0u;
label_3a36d0:
    // 0x3a36d0: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x3a36d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x3a36d4: 0x1354823  subu        $t1, $t1, $s5
    ctx->pc = 0x3a36d4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x3a36d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a36d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a36dc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3a36dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a36e0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A36E0u;
    {
        const bool branch_taken_0x3a36e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A36E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A36E0u;
        // 0x3a36e4: 0x85c500d0  lh          $a1, 0xD0($t6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a36e0) {
            ctx->pc = 0x3A36ECu;
            goto label_3a36ec;
        }
    }
    ctx->pc = 0x3A36E8u;
    // 0x3a36e8: 0x85c500d2  lh          $a1, 0xD2($t6)
    ctx->pc = 0x3a36e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 210)));
label_3a36ec:
    // 0x3a36ec: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x3a36ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3a36f0: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x3a36f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3a36f4: 0x1d60ffc6  bgtz        $t3, . + 4 + (-0x3A << 2)
    ctx->pc = 0x3A36F4u;
    {
        const bool branch_taken_0x3a36f4 = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x3A36F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A36F4u;
        // 0x3a36f8: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a36f4) {
            ctx->pc = 0x3A3610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3610;
        }
    }
    ctx->pc = 0x3A36FCu;
label_3a36fc:
    // 0x3a36fc: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x3a36fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_3a3700:
    // 0x3a3700: 0x30420180  andi        $v0, $v0, 0x180
    ctx->pc = 0x3a3700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)384);
    // 0x3a3704: 0x50400065  beql        $v0, $zero, . + 4 + (0x65 << 2)
    ctx->pc = 0x3A3704u;
    {
        const bool branch_taken_0x3a3704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3704) {
            ctx->pc = 0x3A3708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3704u;
            // 0x3a3708: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A389Cu;
            goto label_3a389c;
        }
    }
    ctx->pc = 0x3A370Cu;
    // 0x3a370c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3a370cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3a3710: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x3a3710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x3a3714: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3a3714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a3718: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x3A3718u;
    {
        const bool branch_taken_0x3a3718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3718u;
        // 0x3a371c: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3718) {
            ctx->pc = 0x3A3898u;
            goto label_3a3898;
        }
    }
    ctx->pc = 0x3A3720u;
    // 0x3a3720: 0x5440005e  bnel        $v0, $zero, . + 4 + (0x5E << 2)
    ctx->pc = 0x3A3720u;
    {
        const bool branch_taken_0x3a3720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a3720) {
            ctx->pc = 0x3A3724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3720u;
            // 0x3a3724: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A389Cu;
            goto label_3a389c;
        }
    }
    ctx->pc = 0x3A3728u;
    // 0x3a3728: 0x8f230008  lw          $v1, 0x8($t9)
    ctx->pc = 0x3a3728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x3a372c: 0x30620084  andi        $v0, $v1, 0x84
    ctx->pc = 0x3a372cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)132);
    // 0x3a3730: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x3A3730u;
    {
        const bool branch_taken_0x3a3730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3730u;
        // 0x3a3734: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3730) {
            ctx->pc = 0x3A3898u;
            goto label_3a3898;
        }
    }
    ctx->pc = 0x3A3738u;
    // 0x3a3738: 0x8f320034  lw          $s2, 0x34($t9)
    ctx->pc = 0x3a3738u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
    // 0x3a373c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A373Cu;
    {
        const bool branch_taken_0x3a373c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A373Cu;
        // 0x3a3740: 0x240782d  daddu       $t7, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a373c) {
            ctx->pc = 0x3A3748u;
            goto label_3a3748;
        }
    }
    ctx->pc = 0x3A3744u;
    // 0x3a3744: 0x8f2f0038  lw          $t7, 0x38($t9)
    ctx->pc = 0x3a3744u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_3a3748:
    // 0x3a3748: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x3a3748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x3a374c: 0x8dc300e0  lw          $v1, 0xE0($t6)
    ctx->pc = 0x3a374cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 224)));
    // 0x3a3750: 0x8dc50008  lw          $a1, 0x8($t6)
    ctx->pc = 0x3a3750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x3a3754: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a3754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3758: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3a3758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3a375c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3a375cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a3760: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A3760u;
    {
        const bool branch_taken_0x3a3760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3760u;
        // 0x3a3764: 0xa36021  addu        $t4, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3760) {
            ctx->pc = 0x3A3774u;
            goto label_3a3774;
        }
    }
    ctx->pc = 0x3A3768u;
    // 0x3a3768: 0x8dc200e4  lw          $v0, 0xE4($t6)
    ctx->pc = 0x3a3768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 228)));
    // 0x3a376c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a376cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a3770: 0xa26021  addu        $t4, $a1, $v0
    ctx->pc = 0x3a3770u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3a3774:
    // 0x3a3774: 0x8fab0004  lw          $t3, 0x4($sp)
    ctx->pc = 0x3a3774u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3a3778: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x3a3778u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a377c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3a377cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3780: 0x19600045  blez        $t3, . + 4 + (0x45 << 2)
    ctx->pc = 0x3A3780u;
    {
        const bool branch_taken_0x3a3780 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x3A3784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3780u;
        // 0x3a3784: 0x3c0482d  daddu       $t1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3780) {
            ctx->pc = 0x3A3898u;
            goto label_3a3898;
        }
    }
    ctx->pc = 0x3A3788u;
    // 0x3a3788: 0x8dd70018  lw          $s7, 0x18($t6)
    ctx->pc = 0x3a3788u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x3a378c: 0x0  nop
    ctx->pc = 0x3a378cu;
    // NOP
label_3a3790:
    // 0x3a3790: 0x2eb102a  slt         $v0, $s7, $t3
    ctx->pc = 0x3a3790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x3a3794: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A3794u;
    {
        const bool branch_taken_0x3a3794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3794u;
        // 0x3a3798: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3794) {
            ctx->pc = 0x3A37B8u;
            goto label_3a37b8;
        }
    }
    ctx->pc = 0x3A379Cu;
    // 0x3a379c: 0x85c200ec  lh          $v0, 0xEC($t6)
    ctx->pc = 0x3a379cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 236)));
    // 0x3a37a0: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x3a37a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a37a4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a37a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a37a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a37a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a37ac: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x3a37acu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3a37b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3A37B0u;
    {
        const bool branch_taken_0x3a37b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A37B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A37B0u;
        // 0x3a37b4: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a37b0) {
            ctx->pc = 0x3A37CCu;
            goto label_3a37cc;
        }
    }
    ctx->pc = 0x3A37B8u;
label_3a37b8:
    // 0x3a37b8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A37B8u;
    {
        const bool branch_taken_0x3a37b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A37BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A37B8u;
        // 0x3a37bc: 0x8dc500d8  lw          $a1, 0xD8($t6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a37b8) {
            ctx->pc = 0x3A37C4u;
            goto label_3a37c4;
        }
    }
    ctx->pc = 0x3A37C0u;
    // 0x3a37c0: 0x8dc500dc  lw          $a1, 0xDC($t6)
    ctx->pc = 0x3a37c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 220)));
label_3a37c4:
    // 0x3a37c4: 0xb51023  subu        $v0, $a1, $s5
    ctx->pc = 0x3a37c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x3a37c8: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x3a37c8u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_3a37cc:
    // 0x3a37cc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3a37ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a37d0: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3A37D0u;
    {
        const bool branch_taken_0x3a37d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A37D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A37D0u;
        // 0x3a37d4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a37d0) {
            ctx->pc = 0x3A386Cu;
            goto label_3a386c;
        }
    }
    ctx->pc = 0x3A37D8u;
    // 0x3a37d8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3a37d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a37dc: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3a37dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a37e0:
    // 0x3a37e0: 0x28d1021  addu        $v0, $s4, $t5
    ctx->pc = 0x3a37e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x3a37e4: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x3a37e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x3a37e8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3a37e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a37ec: 0x2cd3821  addu        $a3, $s6, $t5
    ctx->pc = 0x3a37ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x3a37f0: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x3a37f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a37f4: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x3a37f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x3a37f8: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x3a37f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x3a37fc: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x3a37fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x3a3800: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3a3800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3a3804: 0xc93004  sllv        $a2, $t1, $a2
    ctx->pc = 0x3a3804u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x3a3808: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x3a3808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x3a380c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3a380cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3810: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3a3810u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a3814: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x3a3814u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3a3818: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x3a3818u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x3a381c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3a381cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3a3820: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3a3820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3a3824: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3a3824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3a3828: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x3a3828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3a382c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3a382cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a3830: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a3830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a3834: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a3834u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a3838: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3a3838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a383c: 0x1e21821  addu        $v1, $t7, $v0
    ctx->pc = 0x3a383cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x3a3840: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a3840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a3844: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a3844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a3848: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3a3848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a384c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a384cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a3850: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a3850u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a3854: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3a3854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a3858: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a3858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a385c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a385cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a3860: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3a3860u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a3864: 0x14a0ffde  bnez        $a1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x3A3864u;
    {
        const bool branch_taken_0x3a3864 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3864u;
        // 0x3a3868: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3864) {
            ctx->pc = 0x3A37E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a37e0;
        }
    }
    ctx->pc = 0x3A386Cu;
label_3a386c:
    // 0x3a386c: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x3a386cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x3a3870: 0x1354823  subu        $t1, $t1, $s5
    ctx->pc = 0x3a3870u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x3a3874: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a3874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3878: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3a3878u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a387c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A387Cu;
    {
        const bool branch_taken_0x3a387c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A387Cu;
        // 0x3a3880: 0x85c500e8  lh          $a1, 0xE8($t6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a387c) {
            ctx->pc = 0x3A3888u;
            goto label_3a3888;
        }
    }
    ctx->pc = 0x3A3884u;
    // 0x3a3884: 0x85c500ea  lh          $a1, 0xEA($t6)
    ctx->pc = 0x3a3884u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 234)));
label_3a3888:
    // 0x3a3888: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x3a3888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3a388c: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x3a388cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3a3890: 0x1d60ffbf  bgtz        $t3, . + 4 + (-0x41 << 2)
    ctx->pc = 0x3A3890u;
    {
        const bool branch_taken_0x3a3890 = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x3A3894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3890u;
        // 0x3a3894: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3890) {
            ctx->pc = 0x3A3790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3790;
        }
    }
    ctx->pc = 0x3A3898u;
label_3a3898:
    // 0x3a3898: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x3a3898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_3a389c:
    // 0x3a389c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3a389cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x3a38a0: 0x5040006c  beql        $v0, $zero, . + 4 + (0x6C << 2)
    ctx->pc = 0x3A38A0u;
    {
        const bool branch_taken_0x3a38a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a38a0) {
            ctx->pc = 0x3A38A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A38A0u;
            // 0x3a38a4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3A54u;
            goto label_3a3a54;
        }
    }
    ctx->pc = 0x3A38A8u;
    // 0x3a38a8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3a38a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3a38ac: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x3a38acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x3a38b0: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3a38b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a38b4: 0x10600066  beqz        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x3A38B4u;
    {
        const bool branch_taken_0x3a38b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A38B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A38B4u;
        // 0x3a38b8: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a38b4) {
            ctx->pc = 0x3A3A50u;
            goto label_3a3a50;
        }
    }
    ctx->pc = 0x3A38BCu;
    // 0x3a38bc: 0x54400065  bnel        $v0, $zero, . + 4 + (0x65 << 2)
    ctx->pc = 0x3A38BCu;
    {
        const bool branch_taken_0x3a38bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a38bc) {
            ctx->pc = 0x3A38C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A38BCu;
            // 0x3a38c0: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3A54u;
            goto label_3a3a54;
        }
    }
    ctx->pc = 0x3A38C4u;
    // 0x3a38c4: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x3a38c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x3a38c8: 0x8dc300f8  lw          $v1, 0xF8($t6)
    ctx->pc = 0x3a38c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 248)));
    // 0x3a38cc: 0x8dc50008  lw          $a1, 0x8($t6)
    ctx->pc = 0x3a38ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x3a38d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a38d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a38d4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3a38d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3a38d8: 0x8f310030  lw          $s1, 0x30($t9)
    ctx->pc = 0x3a38d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
    // 0x3a38dc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3a38dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a38e0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A38E0u;
    {
        const bool branch_taken_0x3a38e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A38E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A38E0u;
        // 0x3a38e4: 0xa37821  addu        $t7, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a38e0) {
            ctx->pc = 0x3A38F4u;
            goto label_3a38f4;
        }
    }
    ctx->pc = 0x3A38E8u;
    // 0x3a38e8: 0x8dc200fc  lw          $v0, 0xFC($t6)
    ctx->pc = 0x3a38e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 252)));
    // 0x3a38ec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a38ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a38f0: 0xa27821  addu        $t7, $a1, $v0
    ctx->pc = 0x3a38f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3a38f4:
    // 0x3a38f4: 0x8fab0004  lw          $t3, 0x4($sp)
    ctx->pc = 0x3a38f4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3a38f8: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x3a38f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a38fc: 0x1e0182d  daddu       $v1, $t7, $zero
    ctx->pc = 0x3a38fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3900: 0x19600053  blez        $t3, . + 4 + (0x53 << 2)
    ctx->pc = 0x3A3900u;
    {
        const bool branch_taken_0x3a3900 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x3A3904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3900u;
        // 0x3a3904: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3900) {
            ctx->pc = 0x3A3A50u;
            goto label_3a3a50;
        }
    }
    ctx->pc = 0x3A3908u;
label_3a3908:
    // 0x3a3908: 0x8dc20018  lw          $v0, 0x18($t6)
    ctx->pc = 0x3a3908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x3a390c: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x3a390cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x3a3910: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A3910u;
    {
        const bool branch_taken_0x3a3910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3910u;
        // 0x3a3914: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3910) {
            ctx->pc = 0x3A3934u;
            goto label_3a3934;
        }
    }
    ctx->pc = 0x3A3918u;
    // 0x3a3918: 0x85c20104  lh          $v0, 0x104($t6)
    ctx->pc = 0x3a3918u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 260)));
    // 0x3a391c: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x3a391cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3920: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a3920u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3924: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a3924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a3928: 0x1e27823  subu        $t7, $t7, $v0
    ctx->pc = 0x3a3928u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x3a392c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3A392Cu;
    {
        const bool branch_taken_0x3a392c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A392Cu;
        // 0x3a3930: 0x1e0182d  daddu       $v1, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a392c) {
            ctx->pc = 0x3A3948u;
            goto label_3a3948;
        }
    }
    ctx->pc = 0x3A3934u;
label_3a3934:
    // 0x3a3934: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A3934u;
    {
        const bool branch_taken_0x3a3934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3934u;
        // 0x3a3938: 0x8dc500f0  lw          $a1, 0xF0($t6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3934) {
            ctx->pc = 0x3A3940u;
            goto label_3a3940;
        }
    }
    ctx->pc = 0x3A393Cu;
    // 0x3a393c: 0x8dc500f4  lw          $a1, 0xF4($t6)
    ctx->pc = 0x3a393cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 244)));
label_3a3940:
    // 0x3a3940: 0xb51023  subu        $v0, $a1, $s5
    ctx->pc = 0x3a3940u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x3a3944: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x3a3944u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_3a3948:
    // 0x3a3948: 0x8f220008  lw          $v0, 0x8($t9)
    ctx->pc = 0x3a3948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x3a394c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3a394cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3a3950: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3A3950u;
    {
        const bool branch_taken_0x3a3950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3950u;
        // 0x3a3954: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3950) {
            ctx->pc = 0x3A39F8u;
            goto label_3a39f8;
        }
    }
    ctx->pc = 0x3A3958u;
    // 0x3a3958: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3A3958u;
    {
        const bool branch_taken_0x3a3958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3958u;
        // 0x3a395c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3958) {
            ctx->pc = 0x3A3A24u;
            goto label_3a3a24;
        }
    }
    ctx->pc = 0x3A3960u;
    // 0x3a3960: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x3a3960u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3964: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x3a3964u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a3968:
    // 0x3a3968: 0x28d1021  addu        $v0, $s4, $t5
    ctx->pc = 0x3a3968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x3a396c: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x3a396cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x3a3970: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3a3970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a3974: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x3a3974u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x3a3978: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x3a3978u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a397c: 0x2cd4021  addu        $t0, $s6, $t5
    ctx->pc = 0x3a397cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x3a3980: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x3a3980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x3a3984: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x3a3984u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x3a3988: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3a3988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3a398c: 0xc93004  sllv        $a2, $t1, $a2
    ctx->pc = 0x3a398cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x3a3990: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x3a3990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x3a3994: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x3a3994u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3a3998: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3a3998u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a399c: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x3a399cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a39a0: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x3a39a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x3a39a4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3a39a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3a39a8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3a39a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3a39ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a39acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a39b0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3a39b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3a39b4: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x3a39b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x3a39b8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3a39b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a39bc: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x3a39bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3a39c0: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3a39c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3a39c4: 0x90460003  lbu         $a2, 0x3($v0)
    ctx->pc = 0x3a39c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x3a39c8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3a39c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3a39cc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x3a39ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x3a39d0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3a39d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3a39d4: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x3a39d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x3a39d8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x3a39d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x3a39dc: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x3a39dcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x3a39e0: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x3a39e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x3a39e4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3a39e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3a39e8: 0x14e0ffdf  bnez        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x3A39E8u;
    {
        const bool branch_taken_0x3a39e8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A39ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A39E8u;
        // 0x3a39ec: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a39e8) {
            ctx->pc = 0x3A3968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3968;
        }
    }
    ctx->pc = 0x3A39F0u;
    // 0x3a39f0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3A39F0u;
    {
        const bool branch_taken_0x3a39f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A39F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A39F0u;
        // 0x3a39f4: 0x8f220018  lw          $v0, 0x18($t9) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a39f0) {
            ctx->pc = 0x3A3A28u;
            goto label_3a3a28;
        }
    }
    ctx->pc = 0x3A39F8u;
label_3a39f8:
    // 0x3a39f8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A39F8u;
    {
        const bool branch_taken_0x3a39f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A39FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A39F8u;
        // 0x3a39fc: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a39f8) {
            ctx->pc = 0x3A3A24u;
            goto label_3a3a24;
        }
    }
    ctx->pc = 0x3A3A00u;
    // 0x3a3a00: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x3a3a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
    // 0x3a3a04: 0x0  nop
    ctx->pc = 0x3a3a04u;
    // NOP
label_3a3a08:
    // 0x3a3a08: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3a3a08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x3a3a0c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3a3a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3a10: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3a3a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3a3a14: 0x0  nop
    ctx->pc = 0x3a3a14u;
    // NOP
    // 0x3a3a18: 0x0  nop
    ctx->pc = 0x3a3a18u;
    // NOP
    // 0x3a3a1c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A3A1Cu;
    {
        const bool branch_taken_0x3a3a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3A1Cu;
        // 0x3a3a20: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3a1c) {
            ctx->pc = 0x3A3A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3a08;
        }
    }
    ctx->pc = 0x3A3A24u;
label_3a3a24:
    // 0x3a3a24: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x3a3a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3a3a28:
    // 0x3a3a28: 0x1354823  subu        $t1, $t1, $s5
    ctx->pc = 0x3a3a28u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x3a3a2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a3a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3a30: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3a3a30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a3a34: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A3A34u;
    {
        const bool branch_taken_0x3a3a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3A34u;
        // 0x3a3a38: 0x85c50100  lh          $a1, 0x100($t6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3a34) {
            ctx->pc = 0x3A3A40u;
            goto label_3a3a40;
        }
    }
    ctx->pc = 0x3A3A3Cu;
    // 0x3a3a3c: 0x85c50102  lh          $a1, 0x102($t6)
    ctx->pc = 0x3a3a3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 258)));
label_3a3a40:
    // 0x3a3a40: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x3a3a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3a3a44: 0x1e27821  addu        $t7, $t7, $v0
    ctx->pc = 0x3a3a44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x3a3a48: 0x1d60ffaf  bgtz        $t3, . + 4 + (-0x51 << 2)
    ctx->pc = 0x3A3A48u;
    {
        const bool branch_taken_0x3a3a48 = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x3A3A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3A48u;
        // 0x3a3a4c: 0x1e0182d  daddu       $v1, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3a48) {
            ctx->pc = 0x3A3908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3908;
        }
    }
    ctx->pc = 0x3A3A50u;
label_3a3a50:
    // 0x3a3a50: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3a3a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a3a54:
    // 0x3a3a54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a3a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a3a58: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3a3a58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3a3a5c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3a3a5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3a3a60: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3a3a60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3a3a64: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3a3a64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a3a68: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3a3a68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a3a6c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x3a3a6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a3a70: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x3a3a70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a3a74: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x3a3a74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a3a78: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3A78u;
        // 0x3a3a7c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3A80u;
    // 0x3a3a80: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3a3a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3a84: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x3a3a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x3a3a88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a3a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a3a8c: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x3a3a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x3a3a90: 0x8cc3002c  lw          $v1, 0x2C($a2)
    ctx->pc = 0x3a3a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x3a3a94: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x3a3a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x3a3a98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3a3a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a3a9c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3a3a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3a3aa0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A3AA0u;
    {
        const bool branch_taken_0x3a3aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3AA0u;
        // 0x3a3aa4: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3aa0) {
            ctx->pc = 0x3A3AB8u;
            goto label_3a3ab8;
        }
    }
    ctx->pc = 0x3A3AA8u;
    // 0x3a3aa8: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x3a3aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x3a3aac: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x3a3aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3a3ab0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a3ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a3ab4: 0x0  nop
    ctx->pc = 0x3a3ab4u;
    // NOP
label_3a3ab8:
    // 0x3a3ab8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x3a3ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3a3abc: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A3ABCu;
    {
        const bool branch_taken_0x3a3abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a3abc) {
            ctx->pc = 0x3A3AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3ABCu;
            // 0x3a3ac0: 0x8cc70034  lw          $a3, 0x34($a2) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3AD4u;
            goto label_3a3ad4;
        }
    }
    ctx->pc = 0x3A3AC4u;
    // 0x3a3ac4: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x3a3ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x3a3ac8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x3a3ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x3a3acc: 0xacc20034  sw          $v0, 0x34($a2)
    ctx->pc = 0x3a3accu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 2));
    // 0x3a3ad0: 0x8cc70034  lw          $a3, 0x34($a2)
    ctx->pc = 0x3a3ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_3a3ad4:
    // 0x3a3ad4: 0x30e20008  andi        $v0, $a3, 0x8
    ctx->pc = 0x3a3ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x3a3ad8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A3AD8u;
    {
        const bool branch_taken_0x3a3ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3ad8) {
            ctx->pc = 0x3A3ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3AD8u;
            // 0x3a3adc: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3AE8u;
            goto label_3a3ae8;
        }
    }
    ctx->pc = 0x3A3AE0u;
    // 0x3a3ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3AE0u;
        // 0x3a3ae4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3AE8u;
label_3a3ae8:
    // 0x3a3ae8: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x3a3ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x3a3aec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3a3aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a3af0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a3af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a3af4: 0xacc50038  sw          $a1, 0x38($a2)
    ctx->pc = 0x3a3af4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 5));
    // 0x3a3af8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x3a3af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x3a3afc: 0x10a20002  beq         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A3AFCu;
    {
        const bool branch_taken_0x3a3afc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A3B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3AFCu;
        // 0x3a3b00: 0x34e20008  ori         $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3afc) {
            ctx->pc = 0x3A3B08u;
            goto label_3a3b08;
        }
    }
    ctx->pc = 0x3A3B04u;
    // 0x3a3b04: 0xacc20034  sw          $v0, 0x34($a2)
    ctx->pc = 0x3a3b04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 2));
label_3a3b08:
    // 0x3a3b08: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3B08u;
        // 0x3a3b0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3B10u;
    // 0x3a3b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a3b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a3b14: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a3b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3b18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a3b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a3b1c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3a3b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3a3b20: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3a3b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3a3b24: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x3a3b24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a3b28: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A3B28u;
    {
        const bool branch_taken_0x3a3b28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a3b28) {
            ctx->pc = 0x3A3B40u;
            goto label_3a3b40;
        }
    }
    ctx->pc = 0x3A3B30u;
    // 0x3a3b30: 0xc0e8a96  jal         func_3A2A58
    ctx->pc = 0x3A3B30u;
    SET_GPR_U32(ctx, 31, 0x3A3B38u);
    ctx->pc = 0x3A3B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3B30u;
    // 0x3a3b34: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2A58u;
    goto label_3a2a58;
    ctx->pc = 0x3A3B38u;
label_3a3b38:
    // 0x3a3b38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A3B38u;
    {
        const bool branch_taken_0x3a3b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3B38u;
        // 0x3a3b3c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3b38) {
            ctx->pc = 0x3A3B4Cu;
            goto label_3a3b4c;
        }
    }
    ctx->pc = 0x3A3B40u;
label_3a3b40:
    // 0x3a3b40: 0xc0e9720  jal         func_3A5C80
    ctx->pc = 0x3A3B40u;
    SET_GPR_U32(ctx, 31, 0x3A3B48u);
    ctx->pc = 0x3A3B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3B40u;
    // 0x3a3b44: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5C80u, 0x3A3B40u, 0x3A3B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3B48u;
label_3a3b48:
    // 0x3a3b48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a3b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a3b4c:
    // 0x3a3b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3B4Cu;
        // 0x3a3b50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3B54u;
    // 0x3a3b54: 0x0  nop
    ctx->pc = 0x3a3b54u;
    // NOP
    // 0x3a3b58: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3B58u;
        // 0x3a3b5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3B60u;
}
