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

// Function: sub_003A5C80
// Address: 0x3a5c80 - 0x3a66a0
void sub_003A5C80_0x3a5c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5C80_0x3a5c80");
#endif

    switch (ctx->pc) {
        case 0x3a5dc0u: goto label_3a5dc0;
        case 0x3a5e08u: goto label_3a5e08;
        case 0x3a5ef8u: goto label_3a5ef8;
        case 0x3a5f40u: goto label_3a5f40;
        case 0x3a6048u: goto label_3a6048;
        case 0x3a6090u: goto label_3a6090;
        case 0x3a6190u: goto label_3a6190;
        case 0x3a61d8u: goto label_3a61d8;
        case 0x3a62d0u: goto label_3a62d0;
        case 0x3a6328u: goto label_3a6328;
        case 0x3a63c8u: goto label_3a63c8;
        case 0x3a6450u: goto label_3a6450;
        case 0x3a64b8u: goto label_3a64b8;
        case 0x3a6548u: goto label_3a6548;
        case 0x3a65f0u: goto label_3a65f0;
        case 0x3a6628u: goto label_3a6628;
        default: break;
    }

    ctx->pc = 0x3a5c80u;

    // 0x3a5c80: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3a5c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3a5c84: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3a5c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x3a5c88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a5c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5c8c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3a5c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3a5c90: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3a5c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x3a5c94: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3a5c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x3a5c98: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3a5c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x3a5c9c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3a5c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3a5ca0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3a5ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3a5ca4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3a5ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x3a5ca8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3a5ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x3a5cac: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3a5cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x3a5cb0: 0x8c84e884  lw          $a0, -0x177C($a0)
    ctx->pc = 0x3a5cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61E884u));
    // 0x3a5cb4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x3a5cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3a5cb8: 0x8e170008  lw          $s7, 0x8($s0)
    ctx->pc = 0x3a5cb8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3a5cbc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3a5cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3a5cc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a5cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a5cc4: 0x244f0018  addiu       $t7, $v0, 0x18
    ctx->pc = 0x3a5cc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x3a5cc8: 0x8de2000c  lw          $v0, 0xC($t7)
    ctx->pc = 0x3a5cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 12)));
    // 0x3a5ccc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3a5cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3a5cd0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3a5cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3a5cd4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a5cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a5cd8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3a5cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3a5cdc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A5CDCu;
    {
        const bool branch_taken_0x3a5cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5CDCu;
        // 0x3a5ce0: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5cdc) {
            ctx->pc = 0x3A5D08u;
            goto label_3a5d08;
        }
    }
    ctx->pc = 0x3A5CE4u;
    // 0x3a5ce4: 0x2443bf78  addiu       $v1, $v0, -0x4088
    ctx->pc = 0x3a5ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950776));
    // 0x3a5ce8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a5ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5cec: 0x2475000f  addiu       $s5, $v1, 0xF
    ctx->pc = 0x3a5cecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3a5cf0: 0x90790007  lbu         $t9, 0x7($v1)
    ctx->pc = 0x3a5cf0u;
    SET_GPR_ZE32(ctx, 25, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
    // 0x3a5cf4: 0x90760008  lbu         $s6, 0x8($v1)
    ctx->pc = 0x3a5cf4u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3a5cf8: 0x24730009  addiu       $s3, $v1, 0x9
    ctx->pc = 0x3a5cf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x3a5cfc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3A5CFCu;
    {
        const bool branch_taken_0x3a5cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5CFCu;
        // 0x3a5d00: 0x2472000c  addiu       $s2, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5cfc) {
            ctx->pc = 0x3A5D24u;
            goto label_3a5d24;
        }
    }
    ctx->pc = 0x3A5D04u;
    // 0x3a5d04: 0x0  nop
    ctx->pc = 0x3a5d04u;
    // NOP
label_3a5d08:
    // 0x3a5d08: 0x2443bf78  addiu       $v1, $v0, -0x4088
    ctx->pc = 0x3a5d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950776));
    // 0x3a5d0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a5d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5d10: 0x90790002  lbu         $t9, 0x2($v1)
    ctx->pc = 0x3a5d10u;
    SET_GPR_ZE32(ctx, 25, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3a5d14: 0x24750006  addiu       $s5, $v1, 0x6
    ctx->pc = 0x3a5d14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x3a5d18: 0x90760003  lbu         $s6, 0x3($v1)
    ctx->pc = 0x3a5d18u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x3a5d1c: 0x24730004  addiu       $s3, $v1, 0x4
    ctx->pc = 0x3a5d1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3a5d20: 0x24720005  addiu       $s2, $v1, 0x5
    ctx->pc = 0x3a5d20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_3a5d24:
    // 0x3a5d24: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3a5d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3a5d28: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3a5d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5d2c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a5d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a5d30: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3a5d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3a5d34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A5D34u;
    {
        const bool branch_taken_0x3a5d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5D34u;
        // 0x3a5d38: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5d34) {
            ctx->pc = 0x3A5D44u;
            goto label_3a5d44;
        }
    }
    ctx->pc = 0x3A5D3Cu;
    // 0x3a5d3c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x3a5d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x3a5d40: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x3a5d40u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3a5d44:
    // 0x3a5d44: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3a5d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a5d48: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3a5d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3a5d4c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A5D4Cu;
    {
        const bool branch_taken_0x3a5d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5D4Cu;
        // 0x3a5d50: 0x24b8bf78  addiu       $t8, $a1, -0x4088 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5d4c) {
            ctx->pc = 0x3A5D68u;
            goto label_3a5d68;
        }
    }
    ctx->pc = 0x3A5D54u;
    // 0x3a5d54: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3a5d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5d58: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x3a5d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3a5d5c: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x3a5d5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5d60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a5d60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5d64: 0x8c780000  lw          $t8, 0x0($v1)
    ctx->pc = 0x3a5d64u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3a5d68:
    // 0x3a5d68: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x3a5d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x3a5d6c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3a5d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3a5d70: 0x5040009b  beql        $v0, $zero, . + 4 + (0x9B << 2)
    ctx->pc = 0x3A5D70u;
    {
        const bool branch_taken_0x3a5d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5d70) {
            ctx->pc = 0x3A5D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5D70u;
            // 0x3a5d74: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5FE0u;
            goto label_3a5fe0;
        }
    }
    ctx->pc = 0x3A5D78u;
    // 0x3a5d78: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3a5d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3a5d7c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x3a5d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3a5d80: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3a5d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a5d84: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x3A5D84u;
    {
        const bool branch_taken_0x3a5d84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5D84u;
        // 0x3a5d88: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5d84) {
            ctx->pc = 0x3A5E9Cu;
            goto label_3a5e9c;
        }
    }
    ctx->pc = 0x3A5D8Cu;
    // 0x3a5d8c: 0x54400044  bnel        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x3A5D8Cu;
    {
        const bool branch_taken_0x3a5d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5d8c) {
            ctx->pc = 0x3A5D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5D8Cu;
            // 0x3a5d90: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5EA0u;
            goto label_3a5ea0;
        }
    }
    ctx->pc = 0x3A5D94u;
    // 0x3a5d94: 0x8de20098  lw          $v0, 0x98($t7)
    ctx->pc = 0x3a5d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 152)));
    // 0x3a5d98: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3a5d98u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5d9c: 0x8de30008  lw          $v1, 0x8($t7)
    ctx->pc = 0x3a5d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x3a5da0: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x3a5da0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5da4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a5da8: 0x8faa0004  lw          $t2, 0x4($sp)
    ctx->pc = 0x3a5da8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3a5dac: 0x626021  addu        $t4, $v1, $v0
    ctx->pc = 0x3a5dacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a5db0: 0x8efe0008  lw          $fp, 0x8($s7)
    ctx->pc = 0x3a5db0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3a5db4: 0x19400039  blez        $t2, . + 4 + (0x39 << 2)
    ctx->pc = 0x3A5DB4u;
    {
        const bool branch_taken_0x3a5db4 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3A5DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5DB4u;
        // 0x3a5db8: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5db4) {
            ctx->pc = 0x3A5E9Cu;
            goto label_3a5e9c;
        }
    }
    ctx->pc = 0x3A5DBCu;
    // 0x3a5dbc: 0x8df10018  lw          $s1, 0x18($t7)
    ctx->pc = 0x3a5dbcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
label_3a5dc0:
    // 0x3a5dc0: 0x22a102a  slt         $v0, $s1, $t2
    ctx->pc = 0x3a5dc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x3a5dc4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A5DC4u;
    {
        const bool branch_taken_0x3a5dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5dc4) {
            ctx->pc = 0x3A5DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5DC4u;
            // 0x3a5dc8: 0x8de50090  lw          $a1, 0x90($t7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5DE8u;
            goto label_3a5de8;
        }
    }
    ctx->pc = 0x3A5DCCu;
    // 0x3a5dcc: 0x85e200a4  lh          $v0, 0xA4($t7)
    ctx->pc = 0x3a5dccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 164)));
    // 0x3a5dd0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3a5dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5dd4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a5dd4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5dd8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a5dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a5ddc: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x3a5ddcu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3a5de0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A5DE0u;
    {
        const bool branch_taken_0x3a5de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5DE0u;
        // 0x3a5de4: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5de0) {
            ctx->pc = 0x3A5DF0u;
            goto label_3a5df0;
        }
    }
    ctx->pc = 0x3A5DE8u;
label_3a5de8:
    // 0x3a5de8: 0xb41023  subu        $v0, $a1, $s4
    ctx->pc = 0x3a5de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x3a5dec: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x3a5decu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_3a5df0:
    // 0x3a5df0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3a5df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5df4: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3A5DF4u;
    {
        const bool branch_taken_0x3a5df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5DF4u;
        // 0x3a5df8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5df4) {
            ctx->pc = 0x3A5E84u;
            goto label_3a5e84;
        }
    }
    ctx->pc = 0x3A5DFCu;
    // 0x3a5dfc: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x3a5dfcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5e00: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3a5e00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5e04: 0x240e000c  addiu       $t6, $zero, 0xC
    ctx->pc = 0x3a5e04u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3a5e08:
    // 0x3a5e08: 0x26d1021  addu        $v0, $s3, $t5
    ctx->pc = 0x3a5e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x3a5e0c: 0x24d2821  addu        $a1, $s2, $t5
    ctx->pc = 0x3a5e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x3a5e10: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3a5e10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a5e14: 0x2ad3821  addu        $a3, $s5, $t5
    ctx->pc = 0x3a5e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x3a5e18: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x3a5e18u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a5e1c: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x3a5e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x3a5e20: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x3a5e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x3a5e24: 0x992006  srlv        $a0, $t9, $a0
    ctx->pc = 0x3a5e24u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), GPR_U32(ctx, 4) & 0x1F));
    // 0x3a5e28: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3a5e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3a5e2c: 0xc93004  sllv        $a2, $t1, $a2
    ctx->pc = 0x3a5e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x3a5e30: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x3a5e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x3a5e34: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x3a5e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5e38: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3a5e38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a5e3c: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x3a5e3cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3a5e40: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3a5e40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3a5e44: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3a5e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3a5e48: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3a5e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3a5e4c: 0x4e1818  mult        $v1, $v0, $t6
    ctx->pc = 0x3a5e4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3a5e50: 0x7e1021  addu        $v0, $v1, $fp
    ctx->pc = 0x3a5e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x3a5e54: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3a5e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a5e58: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a5e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a5e5c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a5e5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a5e60: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3a5e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a5e64: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a5e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a5e68: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a5e68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a5e6c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3a5e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a5e70: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a5e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a5e74: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a5e74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a5e78: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3a5e78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a5e7c: 0x14a0ffe2  bnez        $a1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x3A5E7Cu;
    {
        const bool branch_taken_0x3a5e7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5E7Cu;
        // 0x3a5e80: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5e7c) {
            ctx->pc = 0x3A5E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5e08;
        }
    }
    ctx->pc = 0x3A5E84u;
label_3a5e84:
    // 0x3a5e84: 0x85e200a0  lh          $v0, 0xA0($t7)
    ctx->pc = 0x3a5e84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 160)));
    // 0x3a5e88: 0x1344823  subu        $t1, $t1, $s4
    ctx->pc = 0x3a5e88u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x3a5e8c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a5e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a5e90: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x3a5e90u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3a5e94: 0x1d40ffca  bgtz        $t2, . + 4 + (-0x36 << 2)
    ctx->pc = 0x3A5E94u;
    {
        const bool branch_taken_0x3a5e94 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x3A5E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5E94u;
        // 0x3a5e98: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5e94) {
            ctx->pc = 0x3A5DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5dc0;
        }
    }
    ctx->pc = 0x3A5E9Cu;
label_3a5e9c:
    // 0x3a5e9c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x3a5e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_3a5ea0:
    // 0x3a5ea0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3a5ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3a5ea4: 0x5040004e  beql        $v0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x3A5EA4u;
    {
        const bool branch_taken_0x3a5ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5ea4) {
            ctx->pc = 0x3A5EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5EA4u;
            // 0x3a5ea8: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5FE0u;
            goto label_3a5fe0;
        }
    }
    ctx->pc = 0x3A5EACu;
    // 0x3a5eac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3a5eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3a5eb0: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x3a5eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x3a5eb4: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3a5eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a5eb8: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x3A5EB8u;
    {
        const bool branch_taken_0x3a5eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5EB8u;
        // 0x3a5ebc: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5eb8) {
            ctx->pc = 0x3A5FDCu;
            goto label_3a5fdc;
        }
    }
    ctx->pc = 0x3A5EC0u;
    // 0x3a5ec0: 0x54400047  bnel        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x3A5EC0u;
    {
        const bool branch_taken_0x3a5ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5ec0) {
            ctx->pc = 0x3A5EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5EC0u;
            // 0x3a5ec4: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5FE0u;
            goto label_3a5fe0;
        }
    }
    ctx->pc = 0x3A5EC8u;
    // 0x3a5ec8: 0x8de200b0  lw          $v0, 0xB0($t7)
    ctx->pc = 0x3a5ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 176)));
    // 0x3a5ecc: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3a5eccu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5ed0: 0x8de30008  lw          $v1, 0x8($t7)
    ctx->pc = 0x3a5ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x3a5ed4: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x3a5ed4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5ed8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a5ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a5edc: 0x8faa0004  lw          $t2, 0x4($sp)
    ctx->pc = 0x3a5edcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3a5ee0: 0x626021  addu        $t4, $v1, $v0
    ctx->pc = 0x3a5ee0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a5ee4: 0x8efe0008  lw          $fp, 0x8($s7)
    ctx->pc = 0x3a5ee4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3a5ee8: 0x1940003c  blez        $t2, . + 4 + (0x3C << 2)
    ctx->pc = 0x3A5EE8u;
    {
        const bool branch_taken_0x3a5ee8 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3A5EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5EE8u;
        // 0x3a5eec: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5ee8) {
            ctx->pc = 0x3A5FDCu;
            goto label_3a5fdc;
        }
    }
    ctx->pc = 0x3A5EF0u;
    // 0x3a5ef0: 0x8df10018  lw          $s1, 0x18($t7)
    ctx->pc = 0x3a5ef0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x3a5ef4: 0x0  nop
    ctx->pc = 0x3a5ef4u;
    // NOP
label_3a5ef8:
    // 0x3a5ef8: 0x22a102a  slt         $v0, $s1, $t2
    ctx->pc = 0x3a5ef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x3a5efc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A5EFCu;
    {
        const bool branch_taken_0x3a5efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5efc) {
            ctx->pc = 0x3A5F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5EFCu;
            // 0x3a5f00: 0x8de500a8  lw          $a1, 0xA8($t7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5F20u;
            goto label_3a5f20;
        }
    }
    ctx->pc = 0x3A5F04u;
    // 0x3a5f04: 0x85e200bc  lh          $v0, 0xBC($t7)
    ctx->pc = 0x3a5f04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 188)));
    // 0x3a5f08: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3a5f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5f0c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a5f0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5f10: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a5f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a5f14: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x3a5f14u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3a5f18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A5F18u;
    {
        const bool branch_taken_0x3a5f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5F18u;
        // 0x3a5f1c: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5f18) {
            ctx->pc = 0x3A5F28u;
            goto label_3a5f28;
        }
    }
    ctx->pc = 0x3A5F20u;
label_3a5f20:
    // 0x3a5f20: 0xb41023  subu        $v0, $a1, $s4
    ctx->pc = 0x3a5f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x3a5f24: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x3a5f24u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_3a5f28:
    // 0x3a5f28: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3a5f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5f2c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3A5F2Cu;
    {
        const bool branch_taken_0x3a5f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5F2Cu;
        // 0x3a5f30: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5f2c) {
            ctx->pc = 0x3A5FC4u;
            goto label_3a5fc4;
        }
    }
    ctx->pc = 0x3A5F34u;
    // 0x3a5f34: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x3a5f34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5f38: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3a5f38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5f3c: 0x240e000c  addiu       $t6, $zero, 0xC
    ctx->pc = 0x3a5f3cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3a5f40:
    // 0x3a5f40: 0x26d1021  addu        $v0, $s3, $t5
    ctx->pc = 0x3a5f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x3a5f44: 0x24d2821  addu        $a1, $s2, $t5
    ctx->pc = 0x3a5f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x3a5f48: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3a5f48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a5f4c: 0x2ad3821  addu        $a3, $s5, $t5
    ctx->pc = 0x3a5f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x3a5f50: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x3a5f50u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a5f54: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x3a5f54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x3a5f58: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x3a5f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x3a5f5c: 0x992006  srlv        $a0, $t9, $a0
    ctx->pc = 0x3a5f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), GPR_U32(ctx, 4) & 0x1F));
    // 0x3a5f60: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3a5f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3a5f64: 0xc93004  sllv        $a2, $t1, $a2
    ctx->pc = 0x3a5f64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x3a5f68: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x3a5f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x3a5f6c: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x3a5f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5f70: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3a5f70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a5f74: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x3a5f74u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3a5f78: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3a5f78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3a5f7c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3a5f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3a5f80: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3a5f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3a5f84: 0x4e1818  mult        $v1, $v0, $t6
    ctx->pc = 0x3a5f84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3a5f88: 0x7e1021  addu        $v0, $v1, $fp
    ctx->pc = 0x3a5f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x3a5f8c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3a5f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a5f90: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a5f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a5f94: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a5f94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a5f98: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3a5f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a5f9c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a5f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a5fa0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a5fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a5fa4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3a5fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a5fa8: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a5fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a5fac: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a5facu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a5fb0: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x3a5fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x3a5fb4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a5fb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a5fb8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3a5fb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a5fbc: 0x14a0ffe0  bnez        $a1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x3A5FBCu;
    {
        const bool branch_taken_0x3a5fbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5FBCu;
        // 0x3a5fc0: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5fbc) {
            ctx->pc = 0x3A5F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5f40;
        }
    }
    ctx->pc = 0x3A5FC4u;
label_3a5fc4:
    // 0x3a5fc4: 0x85e200b8  lh          $v0, 0xB8($t7)
    ctx->pc = 0x3a5fc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 184)));
    // 0x3a5fc8: 0x1344823  subu        $t1, $t1, $s4
    ctx->pc = 0x3a5fc8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x3a5fcc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a5fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a5fd0: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x3a5fd0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3a5fd4: 0x1d40ffc8  bgtz        $t2, . + 4 + (-0x38 << 2)
    ctx->pc = 0x3A5FD4u;
    {
        const bool branch_taken_0x3a5fd4 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x3A5FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5FD4u;
        // 0x3a5fd8: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5fd4) {
            ctx->pc = 0x3A5EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5ef8;
        }
    }
    ctx->pc = 0x3A5FDCu;
label_3a5fdc:
    // 0x3a5fdc: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x3a5fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_3a5fe0:
    // 0x3a5fe0: 0x30420180  andi        $v0, $v0, 0x180
    ctx->pc = 0x3a5fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)384);
    // 0x3a5fe4: 0x504000a6  beql        $v0, $zero, . + 4 + (0xA6 << 2)
    ctx->pc = 0x3A5FE4u;
    {
        const bool branch_taken_0x3a5fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5fe4) {
            ctx->pc = 0x3A5FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5FE4u;
            // 0x3a5fe8: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6280u;
            goto label_3a6280;
        }
    }
    ctx->pc = 0x3A5FECu;
    // 0x3a5fec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3a5fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3a5ff0: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x3a5ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x3a5ff4: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3a5ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a5ff8: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x3A5FF8u;
    {
        const bool branch_taken_0x3a5ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5FF8u;
        // 0x3a5ffc: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5ff8) {
            ctx->pc = 0x3A6118u;
            goto label_3a6118;
        }
    }
    ctx->pc = 0x3A6000u;
    // 0x3a6000: 0x54400046  bnel        $v0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x3A6000u;
    {
        const bool branch_taken_0x3a6000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6000) {
            ctx->pc = 0x3A6004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6000u;
            // 0x3a6004: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A611Cu;
            goto label_3a611c;
        }
    }
    ctx->pc = 0x3A6008u;
    // 0x3a6008: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3a6008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a600c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3a600cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a6010: 0x30420084  andi        $v0, $v0, 0x84
    ctx->pc = 0x3a6010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)132);
    // 0x3a6014: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x3A6014u;
    {
        const bool branch_taken_0x3a6014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6014) {
            ctx->pc = 0x3A6018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6014u;
            // 0x3a6018: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A611Cu;
            goto label_3a611c;
        }
    }
    ctx->pc = 0x3A601Cu;
    // 0x3a601c: 0x8de200c8  lw          $v0, 0xC8($t7)
    ctx->pc = 0x3a601cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 200)));
    // 0x3a6020: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3a6020u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6024: 0x8de30008  lw          $v1, 0x8($t7)
    ctx->pc = 0x3a6024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x3a6028: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x3a6028u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a602c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a602cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a6030: 0x8faa0004  lw          $t2, 0x4($sp)
    ctx->pc = 0x3a6030u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3a6034: 0x626021  addu        $t4, $v1, $v0
    ctx->pc = 0x3a6034u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a6038: 0x8eee0010  lw          $t6, 0x10($s7)
    ctx->pc = 0x3a6038u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x3a603c: 0x19400036  blez        $t2, . + 4 + (0x36 << 2)
    ctx->pc = 0x3A603Cu;
    {
        const bool branch_taken_0x3a603c = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3A6040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A603Cu;
        // 0x3a6040: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a603c) {
            ctx->pc = 0x3A6118u;
            goto label_3a6118;
        }
    }
    ctx->pc = 0x3A6044u;
    // 0x3a6044: 0x8df10018  lw          $s1, 0x18($t7)
    ctx->pc = 0x3a6044u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
label_3a6048:
    // 0x3a6048: 0x22a102a  slt         $v0, $s1, $t2
    ctx->pc = 0x3a6048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x3a604c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A604Cu;
    {
        const bool branch_taken_0x3a604c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a604c) {
            ctx->pc = 0x3A6050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A604Cu;
            // 0x3a6050: 0x8de500c0  lw          $a1, 0xC0($t7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6070u;
            goto label_3a6070;
        }
    }
    ctx->pc = 0x3A6054u;
    // 0x3a6054: 0x85e200d4  lh          $v0, 0xD4($t7)
    ctx->pc = 0x3a6054u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 212)));
    // 0x3a6058: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3a6058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a605c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a605cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6060: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a6060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a6064: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x3a6064u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3a6068: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A6068u;
    {
        const bool branch_taken_0x3a6068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6068u;
        // 0x3a606c: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6068) {
            ctx->pc = 0x3A6078u;
            goto label_3a6078;
        }
    }
    ctx->pc = 0x3A6070u;
label_3a6070:
    // 0x3a6070: 0xb41023  subu        $v0, $a1, $s4
    ctx->pc = 0x3a6070u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x3a6074: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x3a6074u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_3a6078:
    // 0x3a6078: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3a6078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a607c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3A607Cu;
    {
        const bool branch_taken_0x3a607c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A607Cu;
        // 0x3a6080: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a607c) {
            ctx->pc = 0x3A6100u;
            goto label_3a6100;
        }
    }
    ctx->pc = 0x3A6084u;
    // 0x3a6084: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x3a6084u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6088: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3a6088u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a608c: 0x0  nop
    ctx->pc = 0x3a608cu;
    // NOP
label_3a6090:
    // 0x3a6090: 0x26d1021  addu        $v0, $s3, $t5
    ctx->pc = 0x3a6090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x3a6094: 0x24d2821  addu        $a1, $s2, $t5
    ctx->pc = 0x3a6094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x3a6098: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3a6098u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a609c: 0x2ad3821  addu        $a3, $s5, $t5
    ctx->pc = 0x3a609cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x3a60a0: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x3a60a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a60a4: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x3a60a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x3a60a8: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x3a60a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x3a60ac: 0x992006  srlv        $a0, $t9, $a0
    ctx->pc = 0x3a60acu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), GPR_U32(ctx, 4) & 0x1F));
    // 0x3a60b0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3a60b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3a60b4: 0xc93004  sllv        $a2, $t1, $a2
    ctx->pc = 0x3a60b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x3a60b8: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x3a60b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x3a60bc: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x3a60bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a60c0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3a60c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a60c4: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x3a60c4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3a60c8: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3a60c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3a60cc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3a60ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3a60d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3a60d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3a60d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3a60d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3a60d8: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x3a60d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3a60dc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3a60dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a60e0: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a60e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a60e4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a60e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a60e8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3a60e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a60ec: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a60ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a60f0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a60f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a60f4: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3a60f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a60f8: 0x14a0ffe5  bnez        $a1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x3A60F8u;
    {
        const bool branch_taken_0x3a60f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A60FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A60F8u;
        // 0x3a60fc: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a60f8) {
            ctx->pc = 0x3A6090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6090;
        }
    }
    ctx->pc = 0x3A6100u;
label_3a6100:
    // 0x3a6100: 0x85e200d0  lh          $v0, 0xD0($t7)
    ctx->pc = 0x3a6100u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 208)));
    // 0x3a6104: 0x1344823  subu        $t1, $t1, $s4
    ctx->pc = 0x3a6104u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x3a6108: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a6108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a610c: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x3a610cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3a6110: 0x1d40ffcd  bgtz        $t2, . + 4 + (-0x33 << 2)
    ctx->pc = 0x3A6110u;
    {
        const bool branch_taken_0x3a6110 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x3A6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6110u;
        // 0x3a6114: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6110) {
            ctx->pc = 0x3A6048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6048;
        }
    }
    ctx->pc = 0x3A6118u;
label_3a6118:
    // 0x3a6118: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x3a6118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_3a611c:
    // 0x3a611c: 0x30420180  andi        $v0, $v0, 0x180
    ctx->pc = 0x3a611cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)384);
    // 0x3a6120: 0x50400057  beql        $v0, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x3A6120u;
    {
        const bool branch_taken_0x3a6120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6120) {
            ctx->pc = 0x3A6124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6120u;
            // 0x3a6124: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6280u;
            goto label_3a6280;
        }
    }
    ctx->pc = 0x3A6128u;
    // 0x3a6128: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3a6128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3a612c: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x3a612cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x3a6130: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3a6130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a6134: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x3A6134u;
    {
        const bool branch_taken_0x3a6134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6134u;
        // 0x3a6138: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6134) {
            ctx->pc = 0x3A627Cu;
            goto label_3a627c;
        }
    }
    ctx->pc = 0x3A613Cu;
    // 0x3a613c: 0x54400050  bnel        $v0, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x3A613Cu;
    {
        const bool branch_taken_0x3a613c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a613c) {
            ctx->pc = 0x3A6140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A613Cu;
            // 0x3a6140: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6280u;
            goto label_3a6280;
        }
    }
    ctx->pc = 0x3A6144u;
    // 0x3a6144: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3a6144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6148: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3a6148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3a614c: 0x30820084  andi        $v0, $a0, 0x84
    ctx->pc = 0x3a614cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)132);
    // 0x3a6150: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x3A6150u;
    {
        const bool branch_taken_0x3a6150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6150u;
        // 0x3a6154: 0x30840080  andi        $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6150) {
            ctx->pc = 0x3A627Cu;
            goto label_3a627c;
        }
    }
    ctx->pc = 0x3A6158u;
    // 0x3a6158: 0x8de200e0  lw          $v0, 0xE0($t7)
    ctx->pc = 0x3a6158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x3a615c: 0x8de30008  lw          $v1, 0x8($t7)
    ctx->pc = 0x3a615cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x3a6160: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a6160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a6164: 0x8ef10010  lw          $s1, 0x10($s7)
    ctx->pc = 0x3a6164u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x3a6168: 0x626021  addu        $t4, $v1, $v0
    ctx->pc = 0x3a6168u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a616c: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x3a616cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6170: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A6170u;
    {
        const bool branch_taken_0x3a6170 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6170u;
        // 0x3a6174: 0x220702d  daddu       $t6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6170) {
            ctx->pc = 0x3A617Cu;
            goto label_3a617c;
        }
    }
    ctx->pc = 0x3A6178u;
    // 0x3a6178: 0x8eee0014  lw          $t6, 0x14($s7)
    ctx->pc = 0x3a6178u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
label_3a617c:
    // 0x3a617c: 0x8faa0004  lw          $t2, 0x4($sp)
    ctx->pc = 0x3a617cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3a6180: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3a6180u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6184: 0x1940003d  blez        $t2, . + 4 + (0x3D << 2)
    ctx->pc = 0x3A6184u;
    {
        const bool branch_taken_0x3a6184 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3A6188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6184u;
        // 0x3a6188: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6184) {
            ctx->pc = 0x3A627Cu;
            goto label_3a627c;
        }
    }
    ctx->pc = 0x3A618Cu;
    // 0x3a618c: 0x8dfe0018  lw          $fp, 0x18($t7)
    ctx->pc = 0x3a618cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
label_3a6190:
    // 0x3a6190: 0x3ca102a  slt         $v0, $fp, $t2
    ctx->pc = 0x3a6190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x3a6194: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A6194u;
    {
        const bool branch_taken_0x3a6194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6194) {
            ctx->pc = 0x3A6198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6194u;
            // 0x3a6198: 0x8de500d8  lw          $a1, 0xD8($t7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A61B8u;
            goto label_3a61b8;
        }
    }
    ctx->pc = 0x3A619Cu;
    // 0x3a619c: 0x85e200ec  lh          $v0, 0xEC($t7)
    ctx->pc = 0x3a619cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 236)));
    // 0x3a61a0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3a61a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a61a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a61a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a61a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a61a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a61ac: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x3a61acu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3a61b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A61B0u;
    {
        const bool branch_taken_0x3a61b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A61B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A61B0u;
        // 0x3a61b4: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a61b0) {
            ctx->pc = 0x3A61C0u;
            goto label_3a61c0;
        }
    }
    ctx->pc = 0x3A61B8u;
label_3a61b8:
    // 0x3a61b8: 0xb41023  subu        $v0, $a1, $s4
    ctx->pc = 0x3a61b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x3a61bc: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x3a61bcu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_3a61c0:
    // 0x3a61c0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3a61c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a61c4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3A61C4u;
    {
        const bool branch_taken_0x3a61c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A61C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A61C4u;
        // 0x3a61c8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a61c4) {
            ctx->pc = 0x3A6264u;
            goto label_3a6264;
        }
    }
    ctx->pc = 0x3A61CCu;
    // 0x3a61cc: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x3a61ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a61d0: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3a61d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a61d4: 0x0  nop
    ctx->pc = 0x3a61d4u;
    // NOP
label_3a61d8:
    // 0x3a61d8: 0x26d1021  addu        $v0, $s3, $t5
    ctx->pc = 0x3a61d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x3a61dc: 0x24d2821  addu        $a1, $s2, $t5
    ctx->pc = 0x3a61dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x3a61e0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3a61e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a61e4: 0x2ad3821  addu        $a3, $s5, $t5
    ctx->pc = 0x3a61e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x3a61e8: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x3a61e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a61ec: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x3a61ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x3a61f0: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x3a61f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x3a61f4: 0x992006  srlv        $a0, $t9, $a0
    ctx->pc = 0x3a61f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), GPR_U32(ctx, 4) & 0x1F));
    // 0x3a61f8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3a61f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3a61fc: 0xc93004  sllv        $a2, $t1, $a2
    ctx->pc = 0x3a61fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x3a6200: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x3a6200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x3a6204: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x3a6204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6208: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3a6208u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a620c: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x3a620cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3a6210: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3a6210u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3a6214: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3a6214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3a6218: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3a6218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3a621c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3a621cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3a6220: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x3a6220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3a6224: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3a6224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a6228: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a6228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a622c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a622cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a6230: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3a6230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a6234: 0x1c21821  addu        $v1, $t6, $v0
    ctx->pc = 0x3a6234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3a6238: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a6238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a623c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a623cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a6240: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3a6240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a6244: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a6244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a6248: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a6248u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a624c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3a624cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a6250: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3a6250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3a6254: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3a6254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3a6258: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3a6258u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a625c: 0x14a0ffde  bnez        $a1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x3A625Cu;
    {
        const bool branch_taken_0x3a625c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A625Cu;
        // 0x3a6260: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a625c) {
            ctx->pc = 0x3A61D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a61d8;
        }
    }
    ctx->pc = 0x3A6264u;
label_3a6264:
    // 0x3a6264: 0x85e200e8  lh          $v0, 0xE8($t7)
    ctx->pc = 0x3a6264u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 232)));
    // 0x3a6268: 0x1344823  subu        $t1, $t1, $s4
    ctx->pc = 0x3a6268u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x3a626c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a626cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a6270: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x3a6270u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3a6274: 0x1d40ffc6  bgtz        $t2, . + 4 + (-0x3A << 2)
    ctx->pc = 0x3A6274u;
    {
        const bool branch_taken_0x3a6274 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x3A6278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6274u;
        // 0x3a6278: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6274) {
            ctx->pc = 0x3A6190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6190;
        }
    }
    ctx->pc = 0x3A627Cu;
label_3a627c:
    // 0x3a627c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x3a627cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_3a6280:
    // 0x3a6280: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3a6280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x3a6284: 0x5040005e  beql        $v0, $zero, . + 4 + (0x5E << 2)
    ctx->pc = 0x3A6284u;
    {
        const bool branch_taken_0x3a6284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6284) {
            ctx->pc = 0x3A6288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6284u;
            // 0x3a6288: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6400u;
            goto label_3a6400;
        }
    }
    ctx->pc = 0x3A628Cu;
    // 0x3a628c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3a628cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3a6290: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x3a6290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x3a6294: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3a6294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a6298: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x3A6298u;
    {
        const bool branch_taken_0x3a6298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6298u;
        // 0x3a629c: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6298) {
            ctx->pc = 0x3A63FCu;
            goto label_3a63fc;
        }
    }
    ctx->pc = 0x3A62A0u;
    // 0x3a62a0: 0x54400057  bnel        $v0, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x3A62A0u;
    {
        const bool branch_taken_0x3a62a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a62a0) {
            ctx->pc = 0x3A62A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A62A0u;
            // 0x3a62a4: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6400u;
            goto label_3a6400;
        }
    }
    ctx->pc = 0x3A62A8u;
    // 0x3a62a8: 0x8de200f8  lw          $v0, 0xF8($t7)
    ctx->pc = 0x3a62a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 248)));
    // 0x3a62ac: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3a62acu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a62b0: 0x8de30008  lw          $v1, 0x8($t7)
    ctx->pc = 0x3a62b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x3a62b4: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x3a62b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a62b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a62b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a62bc: 0x8faa0004  lw          $t2, 0x4($sp)
    ctx->pc = 0x3a62bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3a62c0: 0x627021  addu        $t6, $v1, $v0
    ctx->pc = 0x3a62c0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a62c4: 0x8ef10030  lw          $s1, 0x30($s7)
    ctx->pc = 0x3a62c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x3a62c8: 0x1940004c  blez        $t2, . + 4 + (0x4C << 2)
    ctx->pc = 0x3A62C8u;
    {
        const bool branch_taken_0x3a62c8 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3A62CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A62C8u;
        // 0x3a62cc: 0x1c0182d  daddu       $v1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a62c8) {
            ctx->pc = 0x3A63FCu;
            goto label_3a63fc;
        }
    }
    ctx->pc = 0x3A62D0u;
label_3a62d0:
    // 0x3a62d0: 0x8de20018  lw          $v0, 0x18($t7)
    ctx->pc = 0x3a62d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x3a62d4: 0x4a102a  slt         $v0, $v0, $t2
    ctx->pc = 0x3a62d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x3a62d8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A62D8u;
    {
        const bool branch_taken_0x3a62d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a62d8) {
            ctx->pc = 0x3A62DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A62D8u;
            // 0x3a62dc: 0x8de500f0  lw          $a1, 0xF0($t7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A62FCu;
            goto label_3a62fc;
        }
    }
    ctx->pc = 0x3A62E0u;
    // 0x3a62e0: 0x85e20104  lh          $v0, 0x104($t7)
    ctx->pc = 0x3a62e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 260)));
    // 0x3a62e4: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3a62e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a62e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a62e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a62ec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a62ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a62f0: 0x1c27023  subu        $t6, $t6, $v0
    ctx->pc = 0x3a62f0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3a62f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A62F4u;
    {
        const bool branch_taken_0x3a62f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A62F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A62F4u;
        // 0x3a62f8: 0x1c0182d  daddu       $v1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a62f4) {
            ctx->pc = 0x3A6304u;
            goto label_3a6304;
        }
    }
    ctx->pc = 0x3A62FCu;
label_3a62fc:
    // 0x3a62fc: 0xb41023  subu        $v0, $a1, $s4
    ctx->pc = 0x3a62fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x3a6300: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x3a6300u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_3a6304:
    // 0x3a6304: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3a6304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6308: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3a6308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a630c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3a630cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3a6310: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3A6310u;
    {
        const bool branch_taken_0x3a6310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6310u;
        // 0x3a6314: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6310) {
            ctx->pc = 0x3A63B8u;
            goto label_3a63b8;
        }
    }
    ctx->pc = 0x3A6318u;
    // 0x3a6318: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3A6318u;
    {
        const bool branch_taken_0x3a6318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6318u;
        // 0x3a631c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6318) {
            ctx->pc = 0x3A63E4u;
            goto label_3a63e4;
        }
    }
    ctx->pc = 0x3A6320u;
    // 0x3a6320: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x3a6320u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6324: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x3a6324u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a6328:
    // 0x3a6328: 0x26d1021  addu        $v0, $s3, $t5
    ctx->pc = 0x3a6328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x3a632c: 0x24d2821  addu        $a1, $s2, $t5
    ctx->pc = 0x3a632cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x3a6330: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3a6330u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a6334: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x3a6334u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x3a6338: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x3a6338u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a633c: 0x2ad4021  addu        $t0, $s5, $t5
    ctx->pc = 0x3a633cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x3a6340: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x3a6340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x3a6344: 0x992006  srlv        $a0, $t9, $a0
    ctx->pc = 0x3a6344u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), GPR_U32(ctx, 4) & 0x1F));
    // 0x3a6348: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3a6348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3a634c: 0xc93004  sllv        $a2, $t1, $a2
    ctx->pc = 0x3a634cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x3a6350: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x3a6350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x3a6354: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x3a6354u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3a6358: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3a6358u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a635c: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x3a635cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6360: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x3a6360u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x3a6364: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3a6364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3a6368: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3a6368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3a636c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a636cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a6370: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3a6370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3a6374: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x3a6374u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x3a6378: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3a6378u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a637c: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x3a637cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3a6380: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3a6380u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3a6384: 0x90460003  lbu         $a2, 0x3($v0)
    ctx->pc = 0x3a6384u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x3a6388: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3a6388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3a638c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x3a638cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x3a6390: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3a6390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3a6394: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x3a6394u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x3a6398: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x3a6398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x3a639c: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x3a639cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x3a63a0: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x3a63a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x3a63a4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3a63a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3a63a8: 0x14e0ffdf  bnez        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x3A63A8u;
    {
        const bool branch_taken_0x3a63a8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A63ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A63A8u;
        // 0x3a63ac: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a63a8) {
            ctx->pc = 0x3A6328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6328;
        }
    }
    ctx->pc = 0x3A63B0u;
    // 0x3a63b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3A63B0u;
    {
        const bool branch_taken_0x3a63b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A63B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A63B0u;
        // 0x3a63b4: 0x85e20100  lh          $v0, 0x100($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a63b0) {
            ctx->pc = 0x3A63E8u;
            goto label_3a63e8;
        }
    }
    ctx->pc = 0x3A63B8u;
label_3a63b8:
    // 0x3a63b8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A63B8u;
    {
        const bool branch_taken_0x3a63b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A63BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A63B8u;
        // 0x3a63bc: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a63b8) {
            ctx->pc = 0x3A63E4u;
            goto label_3a63e4;
        }
    }
    ctx->pc = 0x3A63C0u;
    // 0x3a63c0: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x3a63c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
    // 0x3a63c4: 0x0  nop
    ctx->pc = 0x3a63c4u;
    // NOP
label_3a63c8:
    // 0x3a63c8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3a63c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x3a63cc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3a63ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a63d0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3a63d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3a63d4: 0x0  nop
    ctx->pc = 0x3a63d4u;
    // NOP
    // 0x3a63d8: 0x0  nop
    ctx->pc = 0x3a63d8u;
    // NOP
    // 0x3a63dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A63DCu;
    {
        const bool branch_taken_0x3a63dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A63E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A63DCu;
        // 0x3a63e0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a63dc) {
            ctx->pc = 0x3A63C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a63c8;
        }
    }
    ctx->pc = 0x3A63E4u;
label_3a63e4:
    // 0x3a63e4: 0x85e20100  lh          $v0, 0x100($t7)
    ctx->pc = 0x3a63e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 256)));
label_3a63e8:
    // 0x3a63e8: 0x1344823  subu        $t1, $t1, $s4
    ctx->pc = 0x3a63e8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x3a63ec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a63ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a63f0: 0x1c27021  addu        $t6, $t6, $v0
    ctx->pc = 0x3a63f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3a63f4: 0x1d40ffb6  bgtz        $t2, . + 4 + (-0x4A << 2)
    ctx->pc = 0x3A63F4u;
    {
        const bool branch_taken_0x3a63f4 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x3A63F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A63F4u;
        // 0x3a63f8: 0x1c0182d  daddu       $v1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a63f4) {
            ctx->pc = 0x3A62D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a62d0;
        }
    }
    ctx->pc = 0x3A63FCu;
label_3a63fc:
    // 0x3a63fc: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x3a63fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_3a6400:
    // 0x3a6400: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3a6400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3a6404: 0x5040009a  beql        $v0, $zero, . + 4 + (0x9A << 2)
    ctx->pc = 0x3A6404u;
    {
        const bool branch_taken_0x3a6404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6404) {
            ctx->pc = 0x3A6408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6404u;
            // 0x3a6408: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6670u;
            goto label_3a6670;
        }
    }
    ctx->pc = 0x3A640Cu;
    // 0x3a640c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3a640cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3a6410: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x3a6410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x3a6414: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3a6414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a6418: 0x10600094  beqz        $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x3A6418u;
    {
        const bool branch_taken_0x3a6418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6418u;
        // 0x3a641c: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6418) {
            ctx->pc = 0x3A666Cu;
            goto label_3a666c;
        }
    }
    ctx->pc = 0x3A6420u;
    // 0x3a6420: 0x54400093  bnel        $v0, $zero, . + 4 + (0x93 << 2)
    ctx->pc = 0x3A6420u;
    {
        const bool branch_taken_0x3a6420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6420) {
            ctx->pc = 0x3A6424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6420u;
            // 0x3a6424: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6670u;
            goto label_3a6670;
        }
    }
    ctx->pc = 0x3A6428u;
    // 0x3a6428: 0x8de20110  lw          $v0, 0x110($t7)
    ctx->pc = 0x3a6428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 272)));
    // 0x3a642c: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x3a642cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6430: 0x8de30008  lw          $v1, 0x8($t7)
    ctx->pc = 0x3a6430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x3a6434: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3a6434u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6438: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a6438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a643c: 0x8faa0004  lw          $t2, 0x4($sp)
    ctx->pc = 0x3a643cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3a6440: 0x626021  addu        $t4, $v1, $v0
    ctx->pc = 0x3a6440u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a6444: 0x8eee000c  lw          $t6, 0xC($s7)
    ctx->pc = 0x3a6444u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x3a6448: 0x19400088  blez        $t2, . + 4 + (0x88 << 2)
    ctx->pc = 0x3A6448u;
    {
        const bool branch_taken_0x3a6448 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3A644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6448u;
        // 0x3a644c: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6448) {
            ctx->pc = 0x3A666Cu;
            goto label_3a666c;
        }
    }
    ctx->pc = 0x3A6450u;
label_3a6450:
    // 0x3a6450: 0x8de20018  lw          $v0, 0x18($t7)
    ctx->pc = 0x3a6450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x3a6454: 0x4a102a  slt         $v0, $v0, $t2
    ctx->pc = 0x3a6454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x3a6458: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A6458u;
    {
        const bool branch_taken_0x3a6458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6458) {
            ctx->pc = 0x3A645Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6458u;
            // 0x3a645c: 0x8de50108  lw          $a1, 0x108($t7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A647Cu;
            goto label_3a647c;
        }
    }
    ctx->pc = 0x3A6460u;
    // 0x3a6460: 0x85e2011c  lh          $v0, 0x11C($t7)
    ctx->pc = 0x3a6460u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 284)));
    // 0x3a6464: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3a6464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6468: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a6468u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a646c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a646cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a6470: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x3a6470u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3a6474: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A6474u;
    {
        const bool branch_taken_0x3a6474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6474u;
        // 0x3a6478: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6474) {
            ctx->pc = 0x3A6484u;
            goto label_3a6484;
        }
    }
    ctx->pc = 0x3A647Cu;
label_3a647c:
    // 0x3a647c: 0xb41023  subu        $v0, $a1, $s4
    ctx->pc = 0x3a647cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x3a6480: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x3a6480u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_3a6484:
    // 0x3a6484: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3a6484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6488: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3a6488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3a648c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3a648cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3a6490: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x3A6490u;
    {
        const bool branch_taken_0x3a6490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6490u;
        // 0x3a6494: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6490) {
            ctx->pc = 0x3A65D0u;
            goto label_3a65d0;
        }
    }
    ctx->pc = 0x3A6498u;
    // 0x3a6498: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x3a6498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x3a649c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x3a649cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x3a64a0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3A64A0u;
    {
        const bool branch_taken_0x3a64a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A64A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A64A0u;
        // 0x3a64a4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a64a0) {
            ctx->pc = 0x3A6538u;
            goto label_3a6538;
        }
    }
    ctx->pc = 0x3A64A8u;
    // 0x3a64a8: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x3A64A8u;
    {
        const bool branch_taken_0x3a64a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A64ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A64A8u;
        // 0x3a64ac: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a64a8) {
            ctx->pc = 0x3A6654u;
            goto label_3a6654;
        }
    }
    ctx->pc = 0x3A64B0u;
    // 0x3a64b0: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x3a64b0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a64b4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3a64b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a64b8:
    // 0x3a64b8: 0x26d1821  addu        $v1, $s3, $t5
    ctx->pc = 0x3a64b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x3a64bc: 0x24d2821  addu        $a1, $s2, $t5
    ctx->pc = 0x3a64bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x3a64c0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3a64c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a64c4: 0x2ad3821  addu        $a3, $s5, $t5
    ctx->pc = 0x3a64c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x3a64c8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3a64c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a64cc: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x3a64ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x3a64d0: 0x491004  sllv        $v0, $t1, $v0
    ctx->pc = 0x3a64d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
    // 0x3a64d4: 0x992006  srlv        $a0, $t9, $a0
    ctx->pc = 0x3a64d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), GPR_U32(ctx, 4) & 0x1F));
    // 0x3a64d8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3a64d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3a64dc: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x3a64dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x3a64e0: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3a64e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3a64e4: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x3a64e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a64e8: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x3a64e8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a64ec: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x3a64ecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3a64f0: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3a64f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3a64f4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3a64f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3a64f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a64f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a64fc: 0x1c31821  addu        $v1, $t6, $v1
    ctx->pc = 0x3a64fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x3a6500: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3a6500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a6504: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3a6504u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a6508: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a6508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a650c: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x3a650cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x3a6510: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3a6510u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a6514: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a6514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a6518: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3a6518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3a651c: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3a651cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a6520: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a6520u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a6524: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3a6524u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a6528: 0x14c0ffe3  bnez        $a2, . + 4 + (-0x1D << 2)
    ctx->pc = 0x3A6528u;
    {
        const bool branch_taken_0x3a6528 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6528u;
        // 0x3a652c: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6528) {
            ctx->pc = 0x3A64B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a64b8;
        }
    }
    ctx->pc = 0x3A6530u;
    // 0x3a6530: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x3A6530u;
    {
        const bool branch_taken_0x3a6530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6530u;
        // 0x3a6534: 0x85e20118  lh          $v0, 0x118($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6530) {
            ctx->pc = 0x3A6658u;
            goto label_3a6658;
        }
    }
    ctx->pc = 0x3A6538u;
label_3a6538:
    // 0x3a6538: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x3A6538u;
    {
        const bool branch_taken_0x3a6538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6538u;
        // 0x3a653c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6538) {
            ctx->pc = 0x3A6654u;
            goto label_3a6654;
        }
    }
    ctx->pc = 0x3A6540u;
    // 0x3a6540: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x3a6540u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6544: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3a6544u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a6548:
    // 0x3a6548: 0x26d1821  addu        $v1, $s3, $t5
    ctx->pc = 0x3a6548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x3a654c: 0x24d2821  addu        $a1, $s2, $t5
    ctx->pc = 0x3a654cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x3a6550: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3a6550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a6554: 0x2ad3821  addu        $a3, $s5, $t5
    ctx->pc = 0x3a6554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x3a6558: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3a6558u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a655c: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x3a655cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x3a6560: 0x491004  sllv        $v0, $t1, $v0
    ctx->pc = 0x3a6560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
    // 0x3a6564: 0x992006  srlv        $a0, $t9, $a0
    ctx->pc = 0x3a6564u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), GPR_U32(ctx, 4) & 0x1F));
    // 0x3a6568: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3a6568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3a656c: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x3a656cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x3a6570: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3a6570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3a6574: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x3a6574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6578: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x3a6578u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a657c: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x3a657cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3a6580: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3a6580u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3a6584: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3a6584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3a6588: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a6588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a658c: 0x1c31821  addu        $v1, $t6, $v1
    ctx->pc = 0x3a658cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x3a6590: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3a6590u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a6594: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3a6594u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a6598: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a6598u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a659c: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x3a659cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x3a65a0: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3a65a0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a65a4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a65a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a65a8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3a65a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3a65ac: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3a65acu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a65b0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a65b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a65b4: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x3a65b4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a65b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a65b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a65bc: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3a65bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a65c0: 0x14c0ffe1  bnez        $a2, . + 4 + (-0x1F << 2)
    ctx->pc = 0x3A65C0u;
    {
        const bool branch_taken_0x3a65c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A65C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A65C0u;
        // 0x3a65c4: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a65c0) {
            ctx->pc = 0x3A6548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6548;
        }
    }
    ctx->pc = 0x3A65C8u;
    // 0x3a65c8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3A65C8u;
    {
        const bool branch_taken_0x3a65c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A65CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A65C8u;
        // 0x3a65cc: 0x85e20118  lh          $v0, 0x118($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a65c8) {
            ctx->pc = 0x3A6658u;
            goto label_3a6658;
        }
    }
    ctx->pc = 0x3A65D0u;
label_3a65d0:
    // 0x3a65d0: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x3a65d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x3a65d4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x3a65d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x3a65d8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3A65D8u;
    {
        const bool branch_taken_0x3a65d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A65DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A65D8u;
        // 0x3a65dc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a65d8) {
            ctx->pc = 0x3A661Cu;
            goto label_3a661c;
        }
    }
    ctx->pc = 0x3A65E0u;
    // 0x3a65e0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3A65E0u;
    {
        const bool branch_taken_0x3a65e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A65E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A65E0u;
        // 0x3a65e4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a65e0) {
            ctx->pc = 0x3A6654u;
            goto label_3a6654;
        }
    }
    ctx->pc = 0x3A65E8u;
    // 0x3a65e8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3a65e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a65ec: 0x0  nop
    ctx->pc = 0x3a65ecu;
    // NOP
label_3a65f0:
    // 0x3a65f0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a65f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a65f4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3a65f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a65f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a65f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a65fc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3a65fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3a6600: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a6600u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6604: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a6604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a6608: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a6608u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a660c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3A660Cu;
    {
        const bool branch_taken_0x3a660c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A660Cu;
        // 0x3a6610: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a660c) {
            ctx->pc = 0x3A65F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a65f0;
        }
    }
    ctx->pc = 0x3A6614u;
    // 0x3a6614: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3A6614u;
    {
        const bool branch_taken_0x3a6614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6614u;
        // 0x3a6618: 0x85e20118  lh          $v0, 0x118($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6614) {
            ctx->pc = 0x3A6658u;
            goto label_3a6658;
        }
    }
    ctx->pc = 0x3A661Cu;
label_3a661c:
    // 0x3a661c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A661Cu;
    {
        const bool branch_taken_0x3a661c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A661Cu;
        // 0x3a6620: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a661c) {
            ctx->pc = 0x3A6654u;
            goto label_3a6654;
        }
    }
    ctx->pc = 0x3A6624u;
    // 0x3a6624: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3a6624u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a6628:
    // 0x3a6628: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a6628u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a662c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3a662cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6630: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a6630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a6634: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3a6634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3a6638: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a6638u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a663c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a663cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a6640: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a6640u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6644: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a6644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a6648: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a6648u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a664c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3A664Cu;
    {
        const bool branch_taken_0x3a664c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A664Cu;
        // 0x3a6650: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a664c) {
            ctx->pc = 0x3A6628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6628;
        }
    }
    ctx->pc = 0x3A6654u;
label_3a6654:
    // 0x3a6654: 0x85e20118  lh          $v0, 0x118($t7)
    ctx->pc = 0x3a6654u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 280)));
label_3a6658:
    // 0x3a6658: 0x1344823  subu        $t1, $t1, $s4
    ctx->pc = 0x3a6658u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x3a665c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a665cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a6660: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x3a6660u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3a6664: 0x1d40ff7a  bgtz        $t2, . + 4 + (-0x86 << 2)
    ctx->pc = 0x3A6664u;
    {
        const bool branch_taken_0x3a6664 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x3A6668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6664u;
        // 0x3a6668: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6664) {
            ctx->pc = 0x3A6450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6450;
        }
    }
    ctx->pc = 0x3A666Cu;
label_3a666c:
    // 0x3a666c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3a666cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3a6670:
    // 0x3a6670: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a6670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a6674: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3a6674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3a6678: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3a6678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a667c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3a667cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a6680: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3a6680u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a6684: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3a6684u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a6688: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3a6688u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a668c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3a668cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a6690: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3a6690u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a6694: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6694u;
        // 0x3a6698: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A669Cu;
    // 0x3a669c: 0x0  nop
    ctx->pc = 0x3a669cu;
    // NOP
    ctx->pc = 0x3a66a0u;
}
