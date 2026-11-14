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

// Function: sub_00449C48
// Address: 0x449c48 - 0x449fb8
void sub_00449C48_0x449c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00449C48_0x449c48");
#endif

    switch (ctx->pc) {
        case 0x449d20u: goto label_449d20;
        case 0x449e38u: goto label_449e38;
        case 0x449ee0u: goto label_449ee0;
        case 0x449f28u: goto label_449f28;
        case 0x449f74u: goto label_449f74;
        default: break;
    }

    ctx->pc = 0x449c48u;

label_449c48:
    // 0x449c48: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x449c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x449c4c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x449c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x449c50: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x449c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x449c54: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x449c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449c58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x449c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x449c5c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x449c5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449c60: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x449c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x449c64: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x449c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x449c68: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x449c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x449c6c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x449c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x449c70: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x449c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x449c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x449c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x449c78: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x449c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x449c7c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x449c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x449c80: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x449c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x449c84: 0x24540020  addiu       $s4, $v0, 0x20
    ctx->pc = 0x449c84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x449c88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x449c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x449c8c: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x449C8Cu;
    {
        const bool branch_taken_0x449c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449C8Cu;
        // 0x449c90: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449c8c) {
            ctx->pc = 0x449D7Cu;
            goto label_449d7c;
        }
    }
    ctx->pc = 0x449C94u;
    // 0x449c94: 0x8c67000c  lw          $a3, 0xC($v1)
    ctx->pc = 0x449c94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x449c98: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x449C98u;
    {
        const bool branch_taken_0x449c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449C98u;
        // 0x449c9c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449c98) {
            ctx->pc = 0x449D7Cu;
            goto label_449d7c;
        }
    }
    ctx->pc = 0x449CA0u;
    // 0x449ca0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x449ca0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449ca4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x449ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449ca8: 0x31050003  andi        $a1, $t0, 0x3
    ctx->pc = 0x449ca8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x449cac: 0x19000014  blez        $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x449CACu;
    {
        const bool branch_taken_0x449cac = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x449CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449CACu;
        // 0x449cb0: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449cac) {
            ctx->pc = 0x449D00u;
            goto label_449d00;
        }
    }
    ctx->pc = 0x449CB4u;
    // 0x449cb4: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x449CB4u;
    {
        const bool branch_taken_0x449cb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x449CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449CB4u;
        // 0x449cb8: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x449cb4) {
            ctx->pc = 0x449D1Cu;
            goto label_449d1c;
        }
    }
    ctx->pc = 0x449CBCu;
    // 0x449cbc: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x449CBCu;
    {
        const bool branch_taken_0x449cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x449cbc) {
            ctx->pc = 0x449CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449CBCu;
            // 0x449cc0: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449D04u;
            goto label_449d04;
        }
    }
    ctx->pc = 0x449CC4u;
    // 0x449cc4: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x449cc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x449cc8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x449CC8u;
    {
        const bool branch_taken_0x449cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x449cc8) {
            ctx->pc = 0x449CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449CC8u;
            // 0x449ccc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449CF0u;
            goto label_449cf0;
        }
    }
    ctx->pc = 0x449CD0u;
    // 0x449cd0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x449cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x449cd4: 0x54500003  bnel        $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x449CD4u;
    {
        const bool branch_taken_0x449cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x449cd4) {
            ctx->pc = 0x449CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449CD4u;
            // 0x449cd8: 0x24e60024  addiu       $a2, $a3, 0x24 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449CE4u;
            goto label_449ce4;
        }
    }
    ctx->pc = 0x449CDCu;
    // 0x449cdc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x449CDCu;
    {
        const bool branch_taken_0x449cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449CDCu;
        // 0x449ce0: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449cdc) {
            ctx->pc = 0x449D80u;
            goto label_449d80;
        }
    }
    ctx->pc = 0x449CE4u;
label_449ce4:
    // 0x449ce4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x449ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x449ce8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x449ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449cec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x449cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_449cf0:
    // 0x449cf0: 0x1050000e  beq         $v0, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x449CF0u;
    {
        const bool branch_taken_0x449cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x449CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449CF0u;
        // 0x449cf4: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449cf0) {
            ctx->pc = 0x449D2Cu;
            goto label_449d2c;
        }
    }
    ctx->pc = 0x449CF8u;
    // 0x449cf8: 0x24c60024  addiu       $a2, $a2, 0x24
    ctx->pc = 0x449cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
    // 0x449cfc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x449cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_449d00:
    // 0x449d00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x449d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_449d04:
    // 0x449d04: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x449D04u;
    {
        const bool branch_taken_0x449d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x449D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449D04u;
        // 0x449d08: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449d04) {
            ctx->pc = 0x449D2Cu;
            goto label_449d2c;
        }
    }
    ctx->pc = 0x449D0Cu;
    // 0x449d0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x449d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x449d10: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x449d10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x449d14: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x449D14u;
    {
        const bool branch_taken_0x449d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449D14u;
        // 0x449d18: 0x24c60024  addiu       $a2, $a2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449d14) {
            ctx->pc = 0x449D7Cu;
            goto label_449d7c;
        }
    }
    ctx->pc = 0x449D1Cu;
label_449d1c:
    // 0x449d1c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x449d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_449d20:
    // 0x449d20: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x449d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x449d24: 0x54500003  bnel        $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x449D24u;
    {
        const bool branch_taken_0x449d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x449d24) {
            ctx->pc = 0x449D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449D24u;
            // 0x449d28: 0x8ca20024  lw          $v0, 0x24($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449D34u;
            goto label_449d34;
        }
    }
    ctx->pc = 0x449D2Cu;
label_449d2c:
    // 0x449d2c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x449D2Cu;
    {
        const bool branch_taken_0x449d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449D2Cu;
        // 0x449d30: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449d2c) {
            ctx->pc = 0x449D80u;
            goto label_449d80;
        }
    }
    ctx->pc = 0x449D34u;
label_449d34:
    // 0x449d34: 0x24c40024  addiu       $a0, $a2, 0x24
    ctx->pc = 0x449d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
    // 0x449d38: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x449D38u;
    {
        const bool branch_taken_0x449d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x449D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449D38u;
        // 0x449d3c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449d38) {
            ctx->pc = 0x449D60u;
            goto label_449d60;
        }
    }
    ctx->pc = 0x449D40u;
    // 0x449d40: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x449d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x449d44: 0x24c40048  addiu       $a0, $a2, 0x48
    ctx->pc = 0x449d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 72));
    // 0x449d48: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x449D48u;
    {
        const bool branch_taken_0x449d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x449D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449D48u;
        // 0x449d4c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449d48) {
            ctx->pc = 0x449D60u;
            goto label_449d60;
        }
    }
    ctx->pc = 0x449D50u;
    // 0x449d50: 0x8ca2006c  lw          $v0, 0x6C($a1)
    ctx->pc = 0x449d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x449d54: 0x24c4006c  addiu       $a0, $a2, 0x6C
    ctx->pc = 0x449d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 108));
    // 0x449d58: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x449D58u;
    {
        const bool branch_taken_0x449d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x449D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449D58u;
        // 0x449d5c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449d58) {
            ctx->pc = 0x449D68u;
            goto label_449d68;
        }
    }
    ctx->pc = 0x449D60u;
label_449d60:
    // 0x449d60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x449D60u;
    {
        const bool branch_taken_0x449d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449D60u;
        // 0x449d64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449d60) {
            ctx->pc = 0x449D80u;
            goto label_449d80;
        }
    }
    ctx->pc = 0x449D68u;
label_449d68:
    // 0x449d68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x449d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x449d6c: 0x24a50090  addiu       $a1, $a1, 0x90
    ctx->pc = 0x449d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    // 0x449d70: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x449d70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x449d74: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x449D74u;
    {
        const bool branch_taken_0x449d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x449D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449D74u;
        // 0x449d78: 0x24c60090  addiu       $a2, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449d74) {
            ctx->pc = 0x449D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_449d20;
        }
    }
    ctx->pc = 0x449D7Cu;
label_449d7c:
    // 0x449d7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x449d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_449d80:
    // 0x449d80: 0x50a00082  beql        $a1, $zero, . + 4 + (0x82 << 2)
    ctx->pc = 0x449D80u;
    {
        const bool branch_taken_0x449d80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x449d80) {
            ctx->pc = 0x449D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449D80u;
            // 0x449d84: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449F8Cu;
            goto label_449f8c;
        }
    }
    ctx->pc = 0x449D88u;
    // 0x449d88: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x449d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x449d8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x449d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x449d90: 0x1440007d  bnez        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x449D90u;
    {
        const bool branch_taken_0x449d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x449D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449D90u;
        // 0x449d94: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449d90) {
            ctx->pc = 0x449F88u;
            goto label_449f88;
        }
    }
    ctx->pc = 0x449D98u;
    // 0x449d98: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x449d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x449d9c: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x449d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x449da0: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x449da0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x449da4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x449da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x449da8: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x449da8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x449dac: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x449dacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x449db0: 0x2462ffdc  addiu       $v0, $v1, -0x24
    ctx->pc = 0x449db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967260));
    // 0x449db4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x449db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x449db8: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x449DB8u;
    {
        const bool branch_taken_0x449db8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x449DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449DB8u;
        // 0x449dbc: 0x671021  addu        $v0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449db8) {
            ctx->pc = 0x449E08u;
            goto label_449e08;
        }
    }
    ctx->pc = 0x449DC0u;
    // 0x449dc0: 0x6843ffe3  ldl         $v1, -0x1D($v0)
    ctx->pc = 0x449dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967267); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x449dc4: 0x6c43ffdc  ldr         $v1, -0x24($v0)
    ctx->pc = 0x449dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967260); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x449dc8: 0x6844ffeb  ldl         $a0, -0x15($v0)
    ctx->pc = 0x449dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x449dcc: 0x6c44ffe4  ldr         $a0, -0x1C($v0)
    ctx->pc = 0x449dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967268); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x449dd0: 0x6847fff3  ldl         $a3, -0xD($v0)
    ctx->pc = 0x449dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967283); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x449dd4: 0x6c47ffec  ldr         $a3, -0x14($v0)
    ctx->pc = 0x449dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967276); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x449dd8: 0x6848fffb  ldl         $t0, -0x5($v0)
    ctx->pc = 0x449dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x449ddc: 0x6c48fff4  ldr         $t0, -0xC($v0)
    ctx->pc = 0x449ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x449de0: 0xb0a30007  sdl         $v1, 0x7($a1)
    ctx->pc = 0x449de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x449de4: 0xb4a30000  sdr         $v1, 0x0($a1)
    ctx->pc = 0x449de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x449de8: 0xb0a4000f  sdl         $a0, 0xF($a1)
    ctx->pc = 0x449de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x449dec: 0xb4a40008  sdr         $a0, 0x8($a1)
    ctx->pc = 0x449decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x449df0: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x449df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x449df4: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x449df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x449df8: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x449df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x449dfc: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x449dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x449e00: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x449e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x449e04: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x449e04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
label_449e08:
    // 0x449e08: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x449e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x449e0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x449e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x449e10: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x449e10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x449e14: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x449e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x449e18: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x449E18u;
    {
        const bool branch_taken_0x449e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x449E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449E18u;
        // 0x449e1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449e18) {
            ctx->pc = 0x449F88u;
            goto label_449f88;
        }
    }
    ctx->pc = 0x449E20u;
    // 0x449e20: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x449e20u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x449e24: 0x2417000c  addiu       $s7, $zero, 0xC
    ctx->pc = 0x449e24u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x449e28: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x449e28u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x449e2c: 0x24160028  addiu       $s6, $zero, 0x28
    ctx->pc = 0x449e2cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x449e30: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x449e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x449e34: 0x0  nop
    ctx->pc = 0x449e34u;
    // NOP
label_449e38:
    // 0x449e38: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x449e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x449e3c: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x449e3cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449e40: 0x24b30001  addiu       $s3, $a1, 0x1
    ctx->pc = 0x449e40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x449e44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x449e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x449e48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x449e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x449e4c: 0x10520049  beq         $v0, $s2, . + 4 + (0x49 << 2)
    ctx->pc = 0x449E4Cu;
    {
        const bool branch_taken_0x449e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x449E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449E4Cu;
        // 0x449e50: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449e4c) {
            ctx->pc = 0x449F74u;
            goto label_449f74;
        }
    }
    ctx->pc = 0x449E54u;
    // 0x449e54: 0xb72018  mult        $a0, $a1, $s7
    ctx->pc = 0x449e54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x449e58: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x449e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x449e5c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x449e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x449e60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x449e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449e64: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x449e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x449e68: 0x10a0002d  beqz        $a1, . + 4 + (0x2D << 2)
    ctx->pc = 0x449E68u;
    {
        const bool branch_taken_0x449e68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x449E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449E68u;
        // 0x449e6c: 0x441821  addu        $v1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449e68) {
            ctx->pc = 0x449F20u;
            goto label_449f20;
        }
    }
    ctx->pc = 0x449E70u;
    // 0x449e70: 0x8e880004  lw          $t0, 0x4($s4)
    ctx->pc = 0x449e70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x449e74: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x449e74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449e78: 0x31270003  andi        $a3, $t1, 0x3
    ctx->pc = 0x449e78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
    // 0x449e7c: 0x19200011  blez        $t1, . + 4 + (0x11 << 2)
    ctx->pc = 0x449E7Cu;
    {
        const bool branch_taken_0x449e7c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x449E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449E7Cu;
        // 0x449e80: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449e7c) {
            ctx->pc = 0x449EC4u;
            goto label_449ec4;
        }
    }
    ctx->pc = 0x449E84u;
    // 0x449e84: 0x50e00017  beql        $a3, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x449E84u;
    {
        const bool branch_taken_0x449e84 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x449e84) {
            ctx->pc = 0x449E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449E84u;
            // 0x449e88: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449EE4u;
            goto label_449ee4;
        }
    }
    ctx->pc = 0x449E8Cu;
    // 0x449e8c: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x449e8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x449e90: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x449E90u;
    {
        const bool branch_taken_0x449e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x449e90) {
            ctx->pc = 0x449E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449E90u;
            // 0x449e94: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449EC8u;
            goto label_449ec8;
        }
    }
    ctx->pc = 0x449E98u;
    // 0x449e98: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x449e98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x449e9c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x449E9Cu;
    {
        const bool branch_taken_0x449e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x449e9c) {
            ctx->pc = 0x449EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449E9Cu;
            // 0x449ea0: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449EB8u;
            goto label_449eb8;
        }
    }
    ctx->pc = 0x449EA4u;
    // 0x449ea4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x449ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x449ea8: 0x10500023  beq         $v0, $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x449EA8u;
    {
        const bool branch_taken_0x449ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x449EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449EA8u;
        // 0x449eac: 0x2505000c  addiu       $a1, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449ea8) {
            ctx->pc = 0x449F38u;
            goto label_449f38;
        }
    }
    ctx->pc = 0x449EB0u;
    // 0x449eb0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x449eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x449eb4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x449eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_449eb8:
    // 0x449eb8: 0x1050001f  beq         $v0, $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x449EB8u;
    {
        const bool branch_taken_0x449eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x449EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449EB8u;
        // 0x449ebc: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449eb8) {
            ctx->pc = 0x449F38u;
            goto label_449f38;
        }
    }
    ctx->pc = 0x449EC0u;
    // 0x449ec0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x449ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_449ec4:
    // 0x449ec4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x449ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_449ec8:
    // 0x449ec8: 0x10500017  beq         $v0, $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x449EC8u;
    {
        const bool branch_taken_0x449ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x449ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449EC8u;
        // 0x449ecc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449ec8) {
            ctx->pc = 0x449F28u;
            goto label_449f28;
        }
    }
    ctx->pc = 0x449ED0u;
    // 0x449ed0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x449ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x449ed4: 0xc9102b  sltu        $v0, $a2, $t1
    ctx->pc = 0x449ed4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x449ed8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x449ED8u;
    {
        const bool branch_taken_0x449ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449ED8u;
        // 0x449edc: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449ed8) {
            ctx->pc = 0x449F20u;
            goto label_449f20;
        }
    }
    ctx->pc = 0x449EE0u;
label_449ee0:
    // 0x449ee0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x449ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_449ee4:
    // 0x449ee4: 0x10500010  beq         $v0, $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x449EE4u;
    {
        const bool branch_taken_0x449ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x449EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449EE4u;
        // 0x449ee8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449ee4) {
            ctx->pc = 0x449F28u;
            goto label_449f28;
        }
    }
    ctx->pc = 0x449EECu;
    // 0x449eec: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x449eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x449ef0: 0x10500011  beq         $v0, $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x449EF0u;
    {
        const bool branch_taken_0x449ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x449EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449EF0u;
        // 0x449ef4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449ef0) {
            ctx->pc = 0x449F38u;
            goto label_449f38;
        }
    }
    ctx->pc = 0x449EF8u;
    // 0x449ef8: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x449ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x449efc: 0x1050000e  beq         $v0, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x449EFCu;
    {
        const bool branch_taken_0x449efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x449F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449EFCu;
        // 0x449f00: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449efc) {
            ctx->pc = 0x449F38u;
            goto label_449f38;
        }
    }
    ctx->pc = 0x449F04u;
    // 0x449f04: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x449f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x449f08: 0x1050000b  beq         $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x449F08u;
    {
        const bool branch_taken_0x449f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x449F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449F08u;
        // 0x449f0c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449f08) {
            ctx->pc = 0x449F38u;
            goto label_449f38;
        }
    }
    ctx->pc = 0x449F10u;
    // 0x449f10: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x449f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x449f14: 0xc9102b  sltu        $v0, $a2, $t1
    ctx->pc = 0x449f14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x449f18: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x449F18u;
    {
        const bool branch_taken_0x449f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x449F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449F18u;
        // 0x449f1c: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449f18) {
            ctx->pc = 0x449EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_449ee0;
        }
    }
    ctx->pc = 0x449F20u;
label_449f20:
    // 0x449f20: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x449f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x449f24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x449f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_449f28:
    // 0x449f28: 0x54520005  bnel        $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x449F28u;
    {
        const bool branch_taken_0x449f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x449f28) {
            ctx->pc = 0x449F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449F28u;
            // 0x449f2c: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449F40u;
            goto label_449f40;
        }
    }
    ctx->pc = 0x449F30u;
    // 0x449f30: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x449F30u;
    {
        const bool branch_taken_0x449f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449F30u;
        // 0x449f34: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449f30) {
            ctx->pc = 0x449F4Cu;
            goto label_449f4c;
        }
    }
    ctx->pc = 0x449F38u;
label_449f38:
    // 0x449f38: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x449F38u;
    {
        const bool branch_taken_0x449f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449F38u;
        // 0x449f3c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449f38) {
            ctx->pc = 0x449F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_449f28;
        }
    }
    ctx->pc = 0x449F40u;
label_449f40:
    // 0x449f40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x449f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x449f44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x449f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x449f48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x449f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_449f4c:
    // 0x449f4c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x449F4Cu;
    {
        const bool branch_taken_0x449f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x449f4c) {
            ctx->pc = 0x449F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449F4Cu;
            // 0x449f50: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449F78u;
            goto label_449f78;
        }
    }
    ctx->pc = 0x449F54u;
    // 0x449f54: 0x16a1021  addu        $v0, $t3, $t2
    ctx->pc = 0x449f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x449f58: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x449f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x449f5c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x449f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x449f60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x449f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449f64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x449f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449f68: 0xb62818  mult        $a1, $a1, $s6
    ctx->pc = 0x449f68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x449f6c: 0xc112712  jal         func_449C48
    ctx->pc = 0x449F6Cu;
    SET_GPR_U32(ctx, 31, 0x449F74u);
    ctx->pc = 0x449F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449F6Cu;
    // 0x449f70: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449C48u;
    goto label_449c48;
    ctx->pc = 0x449F74u;
label_449f74:
    // 0x449f74: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x449f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_449f78:
    // 0x449f78: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x449f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x449f7c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x449f7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x449f80: 0x5440ffad  bnel        $v0, $zero, . + 4 + (-0x53 << 2)
    ctx->pc = 0x449F80u;
    {
        const bool branch_taken_0x449f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x449f80) {
            ctx->pc = 0x449F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449F80u;
            // 0x449f84: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_449e38;
        }
    }
    ctx->pc = 0x449F88u;
label_449f88:
    // 0x449f88: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x449f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_449f8c:
    // 0x449f8c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x449f8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x449f90: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x449f90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x449f94: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x449f94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x449f98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x449f98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x449f9c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x449f9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x449fa0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x449fa0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x449fa4: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x449fa4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x449fa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x449fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x449fac: 0x3e00008  jr          $ra
    ctx->pc = 0x449FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449FACu;
        // 0x449fb0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x449FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x449FB4u;
    // 0x449fb4: 0x0  nop
    ctx->pc = 0x449fb4u;
    // NOP
    ctx->pc = 0x449fb8u;
}
