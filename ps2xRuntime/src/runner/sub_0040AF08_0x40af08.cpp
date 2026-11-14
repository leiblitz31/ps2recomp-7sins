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

// Function: sub_0040AF08
// Address: 0x40af08 - 0x40b138
void sub_0040AF08_0x40af08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040AF08_0x40af08");
#endif

    switch (ctx->pc) {
        case 0x40af68u: goto label_40af68;
        case 0x40b028u: goto label_40b028;
        case 0x40b108u: goto label_40b108;
        default: break;
    }

    ctx->pc = 0x40af08u;

    // 0x40af08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40af08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40af0c: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x40af0cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40af10: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x40af10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x40af14: 0xc0c82d  daddu       $t9, $a2, $zero
    ctx->pc = 0x40af14u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40af18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x40af18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40af1c: 0x8de2006c  lw          $v0, 0x6C($t7)
    ctx->pc = 0x40af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 108)));
    // 0x40af20: 0x8de30070  lw          $v1, 0x70($t7)
    ctx->pc = 0x40af20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 112)));
    // 0x40af24: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x40af24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x40af28: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x40af28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x40af2c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x40af2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x40af30: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x40af30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x40af34: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x40af34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x40af38: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x40af38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x40af3c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x40af3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x40af40: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x40af40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x40af44: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x40af44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x40af48: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x40af48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x40af4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x40af4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40af50: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x40af50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x40af54: 0x90ee0001  lbu         $t6, 0x1($a3)
    ctx->pc = 0x40af54u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x40af58: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x40af58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x40af5c: 0x11c0005d  beqz        $t6, . + 4 + (0x5D << 2)
    ctx->pc = 0x40AF5Cu;
    {
        const bool branch_taken_0x40af5c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x40AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AF5Cu;
        // 0x40af60: 0x62c021  addu        $t8, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40af5c) {
            ctx->pc = 0x40B0D4u;
            goto label_40b0d4;
        }
    }
    ctx->pc = 0x40AF64u;
    // 0x40af64: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x40af64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_40af68:
    // 0x40af68: 0x24ad0001  addiu       $t5, $a1, 0x1
    ctx->pc = 0x40af68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x40af6c: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x40af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x40af70: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x40af70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40af74: 0x904c0001  lbu         $t4, 0x1($v0)
    ctx->pc = 0x40af74u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x40af78: 0x11800052  beqz        $t4, . + 4 + (0x52 << 2)
    ctx->pc = 0x40AF78u;
    {
        const bool branch_taken_0x40af78 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x40AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AF78u;
        // 0x40af7c: 0x90490000  lbu         $t1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40af78) {
            ctx->pc = 0x40B0C4u;
            goto label_40b0c4;
        }
    }
    ctx->pc = 0x40AF80u;
    // 0x40af80: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x40af80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40af84: 0x1980001c  blez        $t4, . + 4 + (0x1C << 2)
    ctx->pc = 0x40AF84u;
    {
        const bool branch_taken_0x40af84 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x40AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AF84u;
        // 0x40af88: 0x31830003  andi        $v1, $t4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40af84) {
            ctx->pc = 0x40AFF8u;
            goto label_40aff8;
        }
    }
    ctx->pc = 0x40AF8Cu;
    // 0x40af8c: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x40AF8Cu;
    {
        const bool branch_taken_0x40af8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x40AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AF8Cu;
        // 0x40af90: 0x91142  srl         $v0, $t1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40af8c) {
            ctx->pc = 0x40B02Cu;
            goto label_40b02c;
        }
    }
    ctx->pc = 0x40AF94u;
    // 0x40af94: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x40af94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x40af98: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x40AF98u;
    {
        const bool branch_taken_0x40af98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40AF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AF98u;
        // 0x40af9c: 0x91142  srl         $v0, $t1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40af98) {
            ctx->pc = 0x40AFFCu;
            goto label_40affc;
        }
    }
    ctx->pc = 0x40AFA0u;
    // 0x40afa0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x40afa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x40afa4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x40AFA4u;
    {
        const bool branch_taken_0x40afa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40AFA4u;
        // 0x40afa8: 0x91142  srl         $v0, $t1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40afa4) {
            ctx->pc = 0x40AFD4u;
            goto label_40afd4;
        }
    }
    ctx->pc = 0x40AFACu;
    // 0x40afac: 0x3123001f  andi        $v1, $t1, 0x1F
    ctx->pc = 0x40afacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)31);
    // 0x40afb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x40afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x40afb4: 0x6b1804  sllv        $v1, $t3, $v1
    ctx->pc = 0x40afb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 3) & 0x1F));
    // 0x40afb8: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x40afb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x40afbc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x40afbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x40afc0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x40afc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x40afc4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x40afc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40afc8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x40afc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x40afcc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x40afccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x40afd0: 0x91142  srl         $v0, $t1, 5
    ctx->pc = 0x40afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 5));
label_40afd4:
    // 0x40afd4: 0x3123001f  andi        $v1, $t1, 0x1F
    ctx->pc = 0x40afd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)31);
    // 0x40afd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x40afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x40afdc: 0x6b1804  sllv        $v1, $t3, $v1
    ctx->pc = 0x40afdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 3) & 0x1F));
    // 0x40afe0: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x40afe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x40afe4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x40afe4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x40afe8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x40afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x40afec: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x40afecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x40aff0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x40aff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x40aff4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x40aff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_40aff8:
    // 0x40aff8: 0x91142  srl         $v0, $t1, 5
    ctx->pc = 0x40aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 5));
label_40affc:
    // 0x40affc: 0x3123001f  andi        $v1, $t1, 0x1F
    ctx->pc = 0x40affcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)31);
    // 0x40b000: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x40b000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x40b004: 0x6b1804  sllv        $v1, $t3, $v1
    ctx->pc = 0x40b004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 3) & 0x1F));
    // 0x40b008: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x40b008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x40b00c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x40b00cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x40b010: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x40b010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x40b014: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x40b014u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x40b018: 0x14c282b  sltu        $a1, $t2, $t4
    ctx->pc = 0x40b018u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x40b01c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x40b01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x40b020: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x40B020u;
    {
        const bool branch_taken_0x40b020 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B020u;
        // 0x40b024: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b020) {
            ctx->pc = 0x40B0C4u;
            goto label_40b0c4;
        }
    }
    ctx->pc = 0x40B028u;
label_40b028:
    // 0x40b028: 0x91142  srl         $v0, $t1, 5
    ctx->pc = 0x40b028u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 5));
label_40b02c:
    // 0x40b02c: 0x3125001f  andi        $a1, $t1, 0x1F
    ctx->pc = 0x40b02cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)31);
    // 0x40b030: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x40b030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x40b034: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x40b034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x40b038: 0x3a23021  addu        $a2, $sp, $v0
    ctx->pc = 0x40b038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x40b03c: 0xab2804  sllv        $a1, $t3, $a1
    ctx->pc = 0x40b03cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 5) & 0x1F));
    // 0x40b040: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x40b040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x40b044: 0x41142  srl         $v0, $a0, 5
    ctx->pc = 0x40b044u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x40b048: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x40b048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x40b04c: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x40b04cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x40b050: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x40b050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x40b054: 0x3a23821  addu        $a3, $sp, $v0
    ctx->pc = 0x40b054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x40b058: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x40b058u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x40b05c: 0x25250002  addiu       $a1, $t1, 0x2
    ctx->pc = 0x40b05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x40b060: 0x8b2004  sllv        $a0, $t3, $a0
    ctx->pc = 0x40b060u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 4) & 0x1F));
    // 0x40b064: 0x51142  srl         $v0, $a1, 5
    ctx->pc = 0x40b064u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x40b068: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x40b068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x40b06c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x40b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x40b070: 0x3a24021  addu        $t0, $sp, $v0
    ctx->pc = 0x40b070u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x40b074: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x40b074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x40b078: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x40b078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x40b07c: 0x25260003  addiu       $a2, $t1, 0x3
    ctx->pc = 0x40b07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
    // 0x40b080: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x40b080u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x40b084: 0xab2804  sllv        $a1, $t3, $a1
    ctx->pc = 0x40b084u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 5) & 0x1F));
    // 0x40b088: 0x61142  srl         $v0, $a2, 5
    ctx->pc = 0x40b088u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x40b08c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x40b08cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x40b090: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x40b090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x40b094: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x40b094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x40b098: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x40b098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x40b09c: 0x30c6001f  andi        $a2, $a2, 0x1F
    ctx->pc = 0x40b09cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x40b0a0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x40b0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x40b0a4: 0xcb3004  sllv        $a2, $t3, $a2
    ctx->pc = 0x40b0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x40b0a8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x40b0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x40b0ac: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x40b0acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x40b0b0: 0x14c282b  sltu        $a1, $t2, $t4
    ctx->pc = 0x40b0b0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x40b0b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x40b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x40b0b8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x40b0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x40b0bc: 0x14a0ffda  bnez        $a1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x40B0BCu;
    {
        const bool branch_taken_0x40b0bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x40B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B0BCu;
        // 0x40b0c0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b0bc) {
            ctx->pc = 0x40B028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40b028;
        }
    }
    ctx->pc = 0x40B0C4u;
label_40b0c4:
    // 0x40b0c4: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x40b0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b0c8: 0xae102b  sltu        $v0, $a1, $t6
    ctx->pc = 0x40b0c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x40b0cc: 0x1440ffa6  bnez        $v0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x40B0CCu;
    {
        const bool branch_taken_0x40b0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B0CCu;
        // 0x40b0d0: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b0cc) {
            ctx->pc = 0x40AF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40af68;
        }
    }
    ctx->pc = 0x40B0D4u;
label_40b0d4:
    // 0x40b0d4: 0x8f220004  lw          $v0, 0x4($t9)
    ctx->pc = 0x40b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4)));
    // 0x40b0d8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x40B0D8u;
    {
        const bool branch_taken_0x40b0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B0D8u;
        // 0x40b0dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b0d8) {
            ctx->pc = 0x40B124u;
            goto label_40b124;
        }
    }
    ctx->pc = 0x40B0E0u;
    // 0x40b0e0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x40b0e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b0e4: 0x18e00003  blez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x40B0E4u;
    {
        const bool branch_taken_0x40b0e4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x40B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B0E4u;
        // 0x40b0e8: 0x30e20001  andi        $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b0e4) {
            ctx->pc = 0x40B0F4u;
            goto label_40b0f4;
        }
    }
    ctx->pc = 0x40B0ECu;
    // 0x40b0ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x40B0ECu;
    {
        const bool branch_taken_0x40b0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B0ECu;
        // 0x40b0f0: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b0ec) {
            ctx->pc = 0x40B108u;
            goto label_40b108;
        }
    }
    ctx->pc = 0x40B0F4u;
label_40b0f4:
    // 0x40b0f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x40b0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40b0f8: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x40b0f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x40b0fc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x40B0FCu;
    {
        const bool branch_taken_0x40b0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B0FCu;
        // 0x40b100: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b0fc) {
            ctx->pc = 0x40B128u;
            goto label_40b128;
        }
    }
    ctx->pc = 0x40B104u;
    // 0x40b104: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x40b104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_40b108:
    // 0x40b108: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x40b108u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x40b10c: 0x0  nop
    ctx->pc = 0x40b10cu;
    // NOP
    // 0x40b110: 0x0  nop
    ctx->pc = 0x40b110u;
    // NOP
    // 0x40b114: 0x0  nop
    ctx->pc = 0x40b114u;
    // NOP
    // 0x40b118: 0x0  nop
    ctx->pc = 0x40b118u;
    // NOP
    // 0x40b11c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x40B11Cu;
    {
        const bool branch_taken_0x40b11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40b11c) {
            ctx->pc = 0x40B120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40B11Cu;
            // 0x40b120: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40B108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40b108;
        }
    }
    ctx->pc = 0x40B124u;
label_40b124:
    // 0x40b124: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x40b124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40b128:
    // 0x40b128: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x40b128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40b12c: 0x3e00008  jr          $ra
    ctx->pc = 0x40B12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B12Cu;
        // 0x40b130: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40B12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40B134u;
    // 0x40b134: 0x0  nop
    ctx->pc = 0x40b134u;
    // NOP
    ctx->pc = 0x40b138u;
}
