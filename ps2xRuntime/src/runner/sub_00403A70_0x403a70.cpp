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

// Function: sub_00403A70
// Address: 0x403a70 - 0x403e08
void sub_00403A70_0x403a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00403A70_0x403a70");
#endif

    switch (ctx->pc) {
        case 0x403b30u: goto label_403b30;
        case 0x403be8u: goto label_403be8;
        case 0x403ca0u: goto label_403ca0;
        case 0x403d50u: goto label_403d50;
        case 0x403d74u: goto label_403d74;
        case 0x403dbcu: goto label_403dbc;
        case 0x403dccu: goto label_403dcc;
        default: break;
    }

    ctx->pc = 0x403a70u;

    // 0x403a70: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x403a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x403a74: 0x28c20006  slti        $v0, $a2, 0x6
    ctx->pc = 0x403a74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x403a78: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x403a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x403a7c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x403a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x403a80: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x403a80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403a84: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x403a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x403a88: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x403a88u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403a8c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x403a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x403a90: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x403a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x403a94: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x403a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x403a98: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x403a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x403a9c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x403a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x403aa0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x403aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x403aa4: 0x104000cc  beqz        $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x403AA4u;
    {
        const bool branch_taken_0x403aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x403AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403AA4u;
        // 0x403aa8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403aa4) {
            ctx->pc = 0x403DD8u;
            goto label_403dd8;
        }
    }
    ctx->pc = 0x403AACu;
    // 0x403aac: 0x92e30013  lbu         $v1, 0x13($s7)
    ctx->pc = 0x403aacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 19)));
    // 0x403ab0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x403ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x403ab4: 0x10620039  beq         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x403AB4u;
    {
        const bool branch_taken_0x403ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x403AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403AB4u;
        // 0x403ab8: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x403ab4) {
            ctx->pc = 0x403B9Cu;
            goto label_403b9c;
        }
    }
    ctx->pc = 0x403ABCu;
    // 0x403abc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x403ABCu;
    {
        const bool branch_taken_0x403abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x403AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403ABCu;
        // 0x403ac0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403abc) {
            ctx->pc = 0x403AD4u;
            goto label_403ad4;
        }
    }
    ctx->pc = 0x403AC4u;
    // 0x403ac4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x403AC4u;
    {
        const bool branch_taken_0x403ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x403AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403AC4u;
        // 0x403ac8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403ac4) {
            ctx->pc = 0x403AE8u;
            goto label_403ae8;
        }
    }
    ctx->pc = 0x403ACCu;
    // 0x403acc: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x403ACCu;
    {
        const bool branch_taken_0x403acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403ACCu;
        // 0x403ad0: 0x62880  sll         $a1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403acc) {
            ctx->pc = 0x403D14u;
            goto label_403d14;
        }
    }
    ctx->pc = 0x403AD4u;
label_403ad4:
    // 0x403ad4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x403ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x403ad8: 0x1062005f  beq         $v1, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x403AD8u;
    {
        const bool branch_taken_0x403ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x403ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403AD8u;
        // 0x403adc: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403ad8) {
            ctx->pc = 0x403C58u;
            goto label_403c58;
        }
    }
    ctx->pc = 0x403AE0u;
    // 0x403ae0: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x403AE0u;
    {
        const bool branch_taken_0x403ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403AE0u;
        // 0x403ae4: 0x62880  sll         $a1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403ae0) {
            ctx->pc = 0x403D14u;
            goto label_403d14;
        }
    }
    ctx->pc = 0x403AE8u;
label_403ae8:
    // 0x403ae8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x403ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x403aec: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x403aecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x403af0: 0x2462e0b8  addiu       $v0, $v1, -0x1F48
    ctx->pc = 0x403af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959288));
    // 0x403af4: 0xdeea0000  ld          $t2, 0x0($s7)
    ctx->pc = 0x403af4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x403af8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x403af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x403afc: 0x60682d  daddu       $t5, $v1, $zero
    ctx->pc = 0x403afcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403b00: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x403b00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x403b04: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x403b04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403b08: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x403b08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403b0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x403b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403b10: 0x24090007  addiu       $t1, $zero, 0x7
    ctx->pc = 0x403b10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x403b14: 0xea102b  sltu        $v0, $a3, $t2
    ctx->pc = 0x403b14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x403b18: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x403B18u;
    {
        const bool branch_taken_0x403b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x403B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403B18u;
        // 0x403b1c: 0x3c1e0060  lui         $fp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403b18) {
            ctx->pc = 0x403B94u;
            goto label_403b94;
        }
    }
    ctx->pc = 0x403B20u;
    // 0x403b20: 0x27c2e0d8  addiu       $v0, $fp, -0x1F28
    ctx->pc = 0x403b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294959320));
    // 0x403b24: 0x240c0007  addiu       $t4, $zero, 0x7
    ctx->pc = 0x403b24u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x403b28: 0x2a25821  addu        $t3, $s5, $v0
    ctx->pc = 0x403b28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x403b2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x403b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_403b30:
    // 0x403b30: 0x72778  dsll        $a0, $a3, 29
    ctx->pc = 0x403b30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 29);
    // 0x403b34: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x403b34u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x403b38: 0x30e30007  andi        $v1, $a3, 0x7
    ctx->pc = 0x403b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
    // 0x403b3c: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x403b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x403b40: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x403b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x403b44: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x403b44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x403b48: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x403b48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x403b4c: 0x1831823  subu        $v1, $t4, $v1
    ctx->pc = 0x403b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x403b50: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x403b50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x403b54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x403b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x403b58: 0x1221004  sllv        $v0, $v0, $t1
    ctx->pc = 0x403b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 9) & 0x1F));
    // 0x403b5c: 0x15200007  bnez        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x403B5Cu;
    {
        const bool branch_taken_0x403b5c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x403B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403B5Cu;
        // 0x403b60: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403b5c) {
            ctx->pc = 0x403B7Cu;
            goto label_403b7c;
        }
    }
    ctx->pc = 0x403B64u;
    // 0x403b64: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x403b64u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x403b68: 0x24090007  addiu       $t1, $zero, 0x7
    ctx->pc = 0x403b68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x403b6c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x403b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x403b70: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x403b70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x403b74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x403B74u;
    {
        const bool branch_taken_0x403b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403B74u;
        // 0x403b78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403b74) {
            ctx->pc = 0x403B80u;
            goto label_403b80;
        }
    }
    ctx->pc = 0x403B7Cu;
label_403b7c:
    // 0x403b7c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x403b7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_403b80:
    // 0x403b80: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x403b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x403b84: 0xe2382d  daddu       $a3, $a3, $v0
    ctx->pc = 0x403b84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 2));
    // 0x403b88: 0xea182b  sltu        $v1, $a3, $t2
    ctx->pc = 0x403b88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x403b8c: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x403B8Cu;
    {
        const bool branch_taken_0x403b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x403b8c) {
            ctx->pc = 0x403B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_403b30;
        }
    }
    ctx->pc = 0x403B94u;
label_403b94:
    // 0x403b94: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x403B94u;
    {
        const bool branch_taken_0x403b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403B94u;
        // 0x403b98: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403b94) {
            ctx->pc = 0x403D04u;
            goto label_403d04;
        }
    }
    ctx->pc = 0x403B9Cu;
label_403b9c:
    // 0x403b9c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x403b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x403ba0: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x403ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x403ba4: 0x2462e0b8  addiu       $v0, $v1, -0x1F48
    ctx->pc = 0x403ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959288));
    // 0x403ba8: 0xdeea0000  ld          $t2, 0x0($s7)
    ctx->pc = 0x403ba8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x403bac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x403bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x403bb0: 0x60682d  daddu       $t5, $v1, $zero
    ctx->pc = 0x403bb0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403bb4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x403bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x403bb8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x403bb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403bbc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x403bbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403bc0: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x403bc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x403bc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x403bc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403bc8: 0xea102b  sltu        $v0, $a3, $t2
    ctx->pc = 0x403bc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x403bcc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x403BCCu;
    {
        const bool branch_taken_0x403bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x403BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403BCCu;
        // 0x403bd0: 0x3c1e0060  lui         $fp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403bcc) {
            ctx->pc = 0x403C50u;
            goto label_403c50;
        }
    }
    ctx->pc = 0x403BD4u;
    // 0x403bd4: 0x27c2e0d8  addiu       $v0, $fp, -0x1F28
    ctx->pc = 0x403bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294959320));
    // 0x403bd8: 0x240c0003  addiu       $t4, $zero, 0x3
    ctx->pc = 0x403bd8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x403bdc: 0x2a25821  addu        $t3, $s5, $v0
    ctx->pc = 0x403bdcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x403be0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x403be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403be4: 0x0  nop
    ctx->pc = 0x403be4u;
    // NOP
label_403be8:
    // 0x403be8: 0x717b8  dsll        $v0, $a3, 30
    ctx->pc = 0x403be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 30);
    // 0x403bec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x403becu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x403bf0: 0x30e30003  andi        $v1, $a3, 0x3
    ctx->pc = 0x403bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x403bf4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x403bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x403bf8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x403bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x403bfc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x403bfcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x403c00: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x403c00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x403c04: 0x1831823  subu        $v1, $t4, $v1
    ctx->pc = 0x403c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x403c08: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x403c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x403c0c: 0x642007  srav        $a0, $a0, $v1
    ctx->pc = 0x403c0cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x403c10: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x403c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x403c14: 0x1242004  sllv        $a0, $a0, $t1
    ctx->pc = 0x403c14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 9) & 0x1F));
    // 0x403c18: 0x15200007  bnez        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x403C18u;
    {
        const bool branch_taken_0x403c18 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x403C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403C18u;
        // 0x403c1c: 0xc43025  or          $a2, $a2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403c18) {
            ctx->pc = 0x403C38u;
            goto label_403c38;
        }
    }
    ctx->pc = 0x403C20u;
    // 0x403c20: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x403c20u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x403c24: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x403c24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x403c28: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x403c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x403c2c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x403c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x403c30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x403C30u;
    {
        const bool branch_taken_0x403c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403C30u;
        // 0x403c34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403c30) {
            ctx->pc = 0x403C3Cu;
            goto label_403c3c;
        }
    }
    ctx->pc = 0x403C38u;
label_403c38:
    // 0x403c38: 0x2529fffe  addiu       $t1, $t1, -0x2
    ctx->pc = 0x403c38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967294));
label_403c3c:
    // 0x403c3c: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x403c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x403c40: 0xe2382d  daddu       $a3, $a3, $v0
    ctx->pc = 0x403c40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 2));
    // 0x403c44: 0xea182b  sltu        $v1, $a3, $t2
    ctx->pc = 0x403c44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x403c48: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x403C48u;
    {
        const bool branch_taken_0x403c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x403c48) {
            ctx->pc = 0x403BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_403be8;
        }
    }
    ctx->pc = 0x403C50u;
label_403c50:
    // 0x403c50: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x403C50u;
    {
        const bool branch_taken_0x403c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403C50u;
        // 0x403c54: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403c50) {
            ctx->pc = 0x403D04u;
            goto label_403d04;
        }
    }
    ctx->pc = 0x403C58u;
label_403c58:
    // 0x403c58: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x403c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x403c5c: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x403c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x403c60: 0x2462e0b8  addiu       $v0, $v1, -0x1F48
    ctx->pc = 0x403c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959288));
    // 0x403c64: 0xdeea0000  ld          $t2, 0x0($s7)
    ctx->pc = 0x403c64u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x403c68: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x403c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x403c6c: 0x60682d  daddu       $t5, $v1, $zero
    ctx->pc = 0x403c6cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403c70: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x403c70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x403c74: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x403c74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403c78: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x403c78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403c7c: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x403c7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x403c80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x403c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403c84: 0xea102b  sltu        $v0, $a3, $t2
    ctx->pc = 0x403c84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x403c88: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x403C88u;
    {
        const bool branch_taken_0x403c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x403C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403C88u;
        // 0x403c8c: 0x3c1e0060  lui         $fp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403c88) {
            ctx->pc = 0x403D00u;
            goto label_403d00;
        }
    }
    ctx->pc = 0x403C90u;
    // 0x403c90: 0x27c2e0d8  addiu       $v0, $fp, -0x1F28
    ctx->pc = 0x403c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294959320));
    // 0x403c94: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x403c94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x403c98: 0x2a25821  addu        $t3, $s5, $v0
    ctx->pc = 0x403c98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x403c9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x403c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_403ca0:
    // 0x403ca0: 0x727f8  dsll        $a0, $a3, 31
    ctx->pc = 0x403ca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 31);
    // 0x403ca4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x403ca4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x403ca8: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x403ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x403cac: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x403cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x403cb0: 0x1831823  subu        $v1, $t4, $v1
    ctx->pc = 0x403cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x403cb4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x403cb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x403cb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x403cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x403cbc: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x403cbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x403cc0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x403cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x403cc4: 0x1221004  sllv        $v0, $v0, $t1
    ctx->pc = 0x403cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 9) & 0x1F));
    // 0x403cc8: 0x15200007  bnez        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x403CC8u;
    {
        const bool branch_taken_0x403cc8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x403CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403CC8u;
        // 0x403ccc: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403cc8) {
            ctx->pc = 0x403CE8u;
            goto label_403ce8;
        }
    }
    ctx->pc = 0x403CD0u;
    // 0x403cd0: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x403cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x403cd4: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x403cd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x403cd8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x403cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x403cdc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x403cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x403ce0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x403CE0u;
    {
        const bool branch_taken_0x403ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403CE0u;
        // 0x403ce4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403ce0) {
            ctx->pc = 0x403CECu;
            goto label_403cec;
        }
    }
    ctx->pc = 0x403CE8u;
label_403ce8:
    // 0x403ce8: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x403ce8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
label_403cec:
    // 0x403cec: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x403cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x403cf0: 0xe2382d  daddu       $a3, $a3, $v0
    ctx->pc = 0x403cf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 2));
    // 0x403cf4: 0xea182b  sltu        $v1, $a3, $t2
    ctx->pc = 0x403cf4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x403cf8: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x403CF8u;
    {
        const bool branch_taken_0x403cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x403cf8) {
            ctx->pc = 0x403CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_403ca0;
        }
    }
    ctx->pc = 0x403D00u;
label_403d00:
    // 0x403d00: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x403d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_403d04:
    // 0x403d04: 0x55220021  bnel        $t1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x403D04u;
    {
        const bool branch_taken_0x403d04 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x403d04) {
            ctx->pc = 0x403D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x403D04u;
            // 0x403d08: 0xa1060000  sb          $a2, 0x0($t0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x403D8Cu;
            goto label_403d8c;
        }
    }
    ctx->pc = 0x403D0Cu;
    // 0x403d0c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x403D0Cu;
    {
        const bool branch_taken_0x403d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403D0Cu;
        // 0x403d10: 0x25a3e0b8  addiu       $v1, $t5, -0x1F48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 4294959288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403d0c) {
            ctx->pc = 0x403D90u;
            goto label_403d90;
        }
    }
    ctx->pc = 0x403D14u;
label_403d14:
    // 0x403d14: 0x2482e0b8  addiu       $v0, $a0, -0x1F48
    ctx->pc = 0x403d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959288));
    // 0x403d18: 0xdef40000  ld          $s4, 0x0($s7)
    ctx->pc = 0x403d18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x403d1c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x403d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x403d20: 0x92e30013  lbu         $v1, 0x13($s7)
    ctx->pc = 0x403d20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 19)));
    // 0x403d24: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x403d24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x403d28: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x403d28u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403d2c: 0x390c2  srl         $s2, $v1, 3
    ctx->pc = 0x403d2cu;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x403d30: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x403d30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403d34: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x403d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403d38: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x403d38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x403d3c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x403D3Cu;
    {
        const bool branch_taken_0x403d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x403D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403D3Cu;
        // 0x403d40: 0x3c1e0060  lui         $fp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403d3c) {
            ctx->pc = 0x403D8Cu;
            goto label_403d8c;
        }
    }
    ctx->pc = 0x403D44u;
    // 0x403d44: 0x27c2e0d8  addiu       $v0, $fp, -0x1F28
    ctx->pc = 0x403d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294959320));
    // 0x403d48: 0x2a2b021  addu        $s6, $s5, $v0
    ctx->pc = 0x403d48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x403d4c: 0x0  nop
    ctx->pc = 0x403d4cu;
    // NOP
label_403d50:
    // 0x403d50: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x403d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x403d54: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x403d54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x403d58: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x403d58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x403d5c: 0x732821  addu        $a1, $v1, $s3
    ctx->pc = 0x403d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x403d60: 0x12050005  beq         $s0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x403D60u;
    {
        const bool branch_taken_0x403d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x403D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403D60u;
        // 0x403d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403d60) {
            ctx->pc = 0x403D78u;
            goto label_403d78;
        }
    }
    ctx->pc = 0x403D68u;
    // 0x403d68: 0x7fad0000  sq          $t5, 0x0($sp)
    ctx->pc = 0x403d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 13));
    // 0x403d6c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x403D6Cu;
    SET_GPR_U32(ctx, 31, 0x403D74u);
    ctx->pc = 0x403D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403D6Cu;
    // 0x403d70: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x403D6Cu, 0x403D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403D74u;
label_403d74:
    // 0x403d74: 0x7bad0000  lq          $t5, 0x0($sp)
    ctx->pc = 0x403d74u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_403d78:
    // 0x403d78: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x403d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x403d7c: 0x223882d  daddu       $s1, $s1, $v1
    ctx->pc = 0x403d7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 3));
    // 0x403d80: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x403d80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x403d84: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x403D84u;
    {
        const bool branch_taken_0x403d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x403D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403D84u;
        // 0x403d88: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403d84) {
            ctx->pc = 0x403D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_403d50;
        }
    }
    ctx->pc = 0x403D8Cu;
label_403d8c:
    // 0x403d8c: 0x25a3e0b8  addiu       $v1, $t5, -0x1F48
    ctx->pc = 0x403d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 4294959288));
label_403d90:
    // 0x403d90: 0x27c2e0d8  addiu       $v0, $fp, -0x1F28
    ctx->pc = 0x403d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294959320));
    // 0x403d94: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x403d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x403d98: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x403d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x403d9c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x403d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x403da0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x403da0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x403da4: 0xdee40000  ld          $a0, 0x0($s7)
    ctx->pc = 0x403da4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x403da8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x403da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403dac: 0x64c60001  daddiu      $a2, $a2, 0x1
    ctx->pc = 0x403dacu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)1);
    // 0x403db0: 0x87202d  daddu       $a0, $a0, $a3
    ctx->pc = 0x403db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 7));
    // 0x403db4: 0xc0be820  jal         func_2FA080
    ctx->pc = 0x403DB4u;
    SET_GPR_U32(ctx, 31, 0x403DBCu);
    ctx->pc = 0x403DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403DB4u;
    // 0x403db8: 0x86202f  dsubu       $a0, $a0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA080u, 0x403DB4u, 0x403DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403DBCu;
label_403dbc:
    // 0x403dbc: 0x92e50013  lbu         $a1, 0x13($s7)
    ctx->pc = 0x403dbcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 19)));
    // 0x403dc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x403dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403dc4: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x403DC4u;
    SET_GPR_U32(ctx, 31, 0x403DCCu);
    ctx->pc = 0x403DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403DC4u;
    // 0x403dc8: 0xfee20000  sd          $v0, 0x0($s7) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x403DC4u, 0x403DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403DCCu;
label_403dcc:
    // 0x403dcc: 0x64420007  daddiu      $v0, $v0, 0x7
    ctx->pc = 0x403dccu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)7);
    // 0x403dd0: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x403dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x403dd4: 0xfee20008  sd          $v0, 0x8($s7)
    ctx->pc = 0x403dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 2));
label_403dd8:
    // 0x403dd8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x403dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x403ddc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x403ddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x403de0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x403de0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x403de4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x403de4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x403de8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x403de8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x403dec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x403decu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x403df0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x403df0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x403df4: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x403df4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x403df8: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x403df8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x403dfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x403dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x403e00: 0x3e00008  jr          $ra
    ctx->pc = 0x403E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x403E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403E00u;
        // 0x403e04: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x403E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x403E08u;
}
