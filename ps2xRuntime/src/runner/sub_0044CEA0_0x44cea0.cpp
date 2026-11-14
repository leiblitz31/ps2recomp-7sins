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

// Function: sub_0044CEA0
// Address: 0x44cea0 - 0x44d7a0
void sub_0044CEA0_0x44cea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044CEA0_0x44cea0");
#endif

    switch (ctx->pc) {
        case 0x44cf18u: goto label_44cf18;
        case 0x44cf78u: goto label_44cf78;
        case 0x44cf90u: goto label_44cf90;
        case 0x44cfa0u: goto label_44cfa0;
        case 0x44cfacu: goto label_44cfac;
        case 0x44cfc8u: goto label_44cfc8;
        case 0x44d090u: goto label_44d090;
        case 0x44d228u: goto label_44d228;
        case 0x44d358u: goto label_44d358;
        case 0x44d3c0u: goto label_44d3c0;
        case 0x44d3e8u: goto label_44d3e8;
        case 0x44d498u: goto label_44d498;
        case 0x44d558u: goto label_44d558;
        case 0x44d610u: goto label_44d610;
        case 0x44d738u: goto label_44d738;
        default: break;
    }

    ctx->pc = 0x44cea0u;

    // 0x44cea0: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x44cea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x44cea4: 0x7fb001e0  sq          $s0, 0x1E0($sp)
    ctx->pc = 0x44cea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 16));
    // 0x44cea8: 0x7fb101d0  sq          $s1, 0x1D0($sp)
    ctx->pc = 0x44cea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 17));
    // 0x44ceac: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x44ceacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ceb0: 0x7fb50190  sq          $s5, 0x190($sp)
    ctx->pc = 0x44ceb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 21));
    // 0x44ceb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44ceb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ceb8: 0x7fb201c0  sq          $s2, 0x1C0($sp)
    ctx->pc = 0x44ceb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 18));
    // 0x44cebc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x44cebcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44cec0: 0x7fb301b0  sq          $s3, 0x1B0($sp)
    ctx->pc = 0x44cec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 19));
    // 0x44cec4: 0x7fb401a0  sq          $s4, 0x1A0($sp)
    ctx->pc = 0x44cec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 20));
    // 0x44cec8: 0x12200190  beqz        $s1, . + 4 + (0x190 << 2)
    ctx->pc = 0x44CEC8u;
    {
        const bool branch_taken_0x44cec8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CEC8u;
        // 0x44cecc: 0x7fb60180  sq          $s6, 0x180($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cec8) {
            ctx->pc = 0x44D50Cu;
            goto label_44d50c;
        }
    }
    ctx->pc = 0x44CED0u;
    // 0x44ced0: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x44ced0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x44ced4: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x44ced4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x44ced8: 0x5440018d  bnel        $v0, $zero, . + 4 + (0x18D << 2)
    ctx->pc = 0x44CED8u;
    {
        const bool branch_taken_0x44ced8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44ced8) {
            ctx->pc = 0x44CEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44CED8u;
            // 0x44cedc: 0x7bb001e0  lq          $s0, 0x1E0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44D510u;
            goto label_44d510;
        }
    }
    ctx->pc = 0x44CEE0u;
    // 0x44cee0: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x44cee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x44cee4: 0x10400189  beqz        $v0, . + 4 + (0x189 << 2)
    ctx->pc = 0x44CEE4u;
    {
        const bool branch_taken_0x44cee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CEE4u;
        // 0x44cee8: 0x2ea20006  sltiu       $v0, $s5, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cee4) {
            ctx->pc = 0x44D50Cu;
            goto label_44d50c;
        }
    }
    ctx->pc = 0x44CEECu;
    // 0x44ceec: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x44CEECu;
    {
        const bool branch_taken_0x44ceec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CEECu;
        // 0x44cef0: 0x2eb60002  sltiu       $s6, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ceec) {
            ctx->pc = 0x44D14Cu;
            goto label_44d14c;
        }
    }
    ctx->pc = 0x44CEF4u;
    // 0x44cef4: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x44cef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x44cef8: 0x462018  mult        $a0, $v0, $a2
    ctx->pc = 0x44cef8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x44cefc: 0x1120000f  beqz        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x44CEFCu;
    {
        const bool branch_taken_0x44cefc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CEFCu;
        // 0x44cf00: 0x911821  addu        $v1, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cefc) {
            ctx->pc = 0x44CF3Cu;
            goto label_44cf3c;
        }
    }
    ctx->pc = 0x44CF04u;
    // 0x44cf04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x44cf04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44cf08: 0x94842  srl         $t1, $t1, 1
    ctx->pc = 0x44cf08u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x44cf0c: 0x11200009  beqz        $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x44CF0Cu;
    {
        const bool branch_taken_0x44cf0c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CF0Cu;
        // 0x44cf10: 0x27a7000c  addiu       $a3, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cf0c) {
            ctx->pc = 0x44CF34u;
            goto label_44cf34;
        }
    }
    ctx->pc = 0x44CF14u;
    // 0x44cf14: 0x0  nop
    ctx->pc = 0x44cf14u;
    // NOP
label_44cf18:
    // 0x44cf18: 0x94842  srl         $t1, $t1, 1
    ctx->pc = 0x44cf18u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x44cf1c: 0x0  nop
    ctx->pc = 0x44cf1cu;
    // NOP
    // 0x44cf20: 0x0  nop
    ctx->pc = 0x44cf20u;
    // NOP
    // 0x44cf24: 0x0  nop
    ctx->pc = 0x44cf24u;
    // NOP
    // 0x44cf28: 0x0  nop
    ctx->pc = 0x44cf28u;
    // NOP
    // 0x44cf2c: 0x1520fffa  bnez        $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x44CF2Cu;
    {
        const bool branch_taken_0x44cf2c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x44CF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CF2Cu;
        // 0x44cf30: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cf2c) {
            ctx->pc = 0x44CF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44cf18;
        }
    }
    ctx->pc = 0x44CF34u;
label_44cf34:
    // 0x44cf34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x44CF34u;
    {
        const bool branch_taken_0x44cf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CF34u;
        // 0x44cf38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cf34) {
            ctx->pc = 0x44CF48u;
            goto label_44cf48;
        }
    }
    ctx->pc = 0x44CF3Cu;
label_44cf3c:
    // 0x44cf3c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x44cf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x44cf40: 0x27a7000c  addiu       $a3, $sp, 0xC
    ctx->pc = 0x44cf40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x44cf44: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x44cf44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_44cf48:
    // 0x44cf48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44cf4c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x44cf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44cf50: 0xa25804  sllv        $t3, $v0, $a1
    ctx->pc = 0x44cf50u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x44cf54: 0xe0702d  daddu       $t6, $a3, $zero
    ctx->pc = 0x44cf54u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44cf58: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x44cf58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x44cf5c: 0x2cd30004  sltiu       $s3, $a2, 0x4
    ctx->pc = 0x44cf5cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x44cf60: 0xafab0008  sw          $t3, 0x8($sp)
    ctx->pc = 0x44cf60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 11));
    // 0x44cf64: 0x6a080  sll         $s4, $a2, 2
    ctx->pc = 0x44cf64u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x44cf68: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x44cf68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x44cf6c: 0x1c0682d  daddu       $t5, $t6, $zero
    ctx->pc = 0x44cf6cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44cf70: 0x25adfff4  addiu       $t5, $t5, -0xC
    ctx->pc = 0x44cf70u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967284));
    // 0x44cf74: 0x0  nop
    ctx->pc = 0x44cf74u;
    // NOP
label_44cf78:
    // 0x44cf78: 0x25cefff4  addiu       $t6, $t6, -0xC
    ctx->pc = 0x44cf78u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967284));
    // 0x44cf7c: 0x8da90000  lw          $t1, 0x0($t5)
    ctx->pc = 0x44cf7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x44cf80: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x44cf80u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44cf84: 0x8da40004  lw          $a0, 0x4($t5)
    ctx->pc = 0x44cf84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x44cf88: 0x8dab0008  lw          $t3, 0x8($t5)
    ctx->pc = 0x44cf88u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x44cf8c: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x44cf8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_44cf90:
    // 0x44cf90: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x44cf90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44cf94: 0xbc842  srl         $t9, $t3, 1
    ctx->pc = 0x44cf94u;
    SET_GPR_S32(ctx, 25, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
    // 0x44cf98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x44CF98u;
    {
        const bool branch_taken_0x44cf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CF98u;
        // 0x44cf9c: 0x1301821  addu        $v1, $t1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cf98) {
            ctx->pc = 0x44CFACu;
            goto label_44cfac;
        }
    }
    ctx->pc = 0x44CFA0u;
label_44cfa0:
    // 0x44cfa0: 0x89102b  sltu        $v0, $a0, $t1
    ctx->pc = 0x44cfa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x44cfa4: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x44CFA4u;
    {
        const bool branch_taken_0x44cfa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44CFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CFA4u;
        // 0x44cfa8: 0x661821  addu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cfa4) {
            ctx->pc = 0x44D0F8u;
            goto label_44d0f8;
        }
    }
    ctx->pc = 0x44CFACu;
label_44cfac:
    // 0x44cfac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x44cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x44cfb0: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x44cfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x44cfb4: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x44CFB4u;
    {
        const bool branch_taken_0x44cfb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44cfb4) {
            ctx->pc = 0x44CFB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44CFB4u;
            // 0x44cfb8: 0x1264821  addu        $t1, $t1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44CFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44cfa0;
        }
    }
    ctx->pc = 0x44CFBCu;
    // 0x44cfbc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x44CFBCu;
    {
        const bool branch_taken_0x44cfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CFBCu;
        // 0x44cfc0: 0x901821  addu        $v1, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cfbc) {
            ctx->pc = 0x44CFD4u;
            goto label_44cfd4;
        }
    }
    ctx->pc = 0x44CFC4u;
    // 0x44cfc4: 0x0  nop
    ctx->pc = 0x44cfc4u;
    // NOP
label_44cfc8:
    // 0x44cfc8: 0x89102b  sltu        $v0, $a0, $t1
    ctx->pc = 0x44cfc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x44cfcc: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x44CFCCu;
    {
        const bool branch_taken_0x44cfcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44CFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CFCCu;
        // 0x44cfd0: 0x901821  addu        $v1, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cfcc) {
            ctx->pc = 0x44D0F8u;
            goto label_44d0f8;
        }
    }
    ctx->pc = 0x44CFD4u;
label_44cfd4:
    // 0x44cfd4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x44cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x44cfd8: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x44cfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x44cfdc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x44CFDCu;
    {
        const bool branch_taken_0x44cfdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44cfdc) {
            ctx->pc = 0x44CFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44CFDCu;
            // 0x44cfe0: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44CFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44cfc8;
        }
    }
    ctx->pc = 0x44CFE4u;
    // 0x44cfe4: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x44cfe4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44cfe8: 0x1267821  addu        $t7, $t1, $a2
    ctx->pc = 0x44cfe8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x44cfec: 0x1660003d  bnez        $s3, . + 4 + (0x3D << 2)
    ctx->pc = 0x44CFECu;
    {
        const bool branch_taken_0x44cfec = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x44CFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CFECu;
        // 0x44cff0: 0x86c023  subu        $t8, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cfec) {
            ctx->pc = 0x44D0E4u;
            goto label_44d0e4;
        }
    }
    ctx->pc = 0x44CFF4u;
    // 0x44cff4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x44cff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x44cff8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x44cff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44cffc: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x44cffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x44d000: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x44d000u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d004: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x44d004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x44d008: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x44D008u;
    {
        const bool branch_taken_0x44d008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D008u;
        // 0x44d00c: 0x3063000f  andi        $v1, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d008) {
            ctx->pc = 0x44D068u;
            goto label_44d068;
        }
    }
    ctx->pc = 0x44D010u;
    // 0x44d010: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x44D010u;
    {
        const bool branch_taken_0x44d010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D010u;
        // 0x44d014: 0x2862000c  slti        $v0, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d010) {
            ctx->pc = 0x44D08Cu;
            goto label_44d08c;
        }
    }
    ctx->pc = 0x44D018u;
    // 0x44d018: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x44D018u;
    {
        const bool branch_taken_0x44d018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D018u;
        // 0x44d01c: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d018) {
            ctx->pc = 0x44D068u;
            goto label_44d068;
        }
    }
    ctx->pc = 0x44D020u;
    // 0x44d020: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x44D020u;
    {
        const bool branch_taken_0x44d020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D020u;
        // 0x44d024: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d020) {
            ctx->pc = 0x44D04Cu;
            goto label_44d04c;
        }
    }
    ctx->pc = 0x44D028u;
    // 0x44d028: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x44D028u;
    {
        const bool branch_taken_0x44d028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44d028) {
            ctx->pc = 0x44D02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44D028u;
            // 0x44d02c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44D090u;
            goto label_44d090;
        }
    }
    ctx->pc = 0x44D030u;
    // 0x44d030: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x44d030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x44d034: 0x25280004  addiu       $t0, $t1, 0x4
    ctx->pc = 0x44d034u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x44d038: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x44d038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44d03c: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x44d03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x44d040: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x44d040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x44d044: 0x24cafffc  addiu       $t2, $a2, -0x4
    ctx->pc = 0x44d044u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x44d048: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x44d048u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
label_44d04c:
    // 0x44d04c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x44d04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x44d050: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x44d050u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x44d054: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x44d054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44d058: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x44d058u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x44d05c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x44d05cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x44d060: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x44d060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x44d064: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x44d064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_44d068:
    // 0x44d068: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x44d068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x44d06c: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x44d06cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x44d070: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x44d070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44d074: 0x2d490004  sltiu       $t1, $t2, 0x4
    ctx->pc = 0x44d074u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x44d078: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x44d078u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x44d07c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x44d07cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x44d080: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x44d080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x44d084: 0x15200017  bnez        $t1, . + 4 + (0x17 << 2)
    ctx->pc = 0x44D084u;
    {
        const bool branch_taken_0x44d084 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x44D088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D084u;
        // 0x44d088: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d084) {
            ctx->pc = 0x44D0E4u;
            goto label_44d0e4;
        }
    }
    ctx->pc = 0x44D08Cu;
label_44d08c:
    // 0x44d08c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x44d08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_44d090:
    // 0x44d090: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x44d090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44d094: 0x254afff0  addiu       $t2, $t2, -0x10
    ctx->pc = 0x44d094u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967280));
    // 0x44d098: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x44d098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44d09c: 0x2d490004  sltiu       $t1, $t2, 0x4
    ctx->pc = 0x44d09cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x44d0a0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x44d0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x44d0a4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x44d0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x44d0a8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x44d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x44d0ac: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x44d0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x44d0b0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x44d0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x44d0b4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x44d0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x44d0b8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x44d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x44d0bc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x44d0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x44d0c0: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x44d0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x44d0c4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x44d0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x44d0c8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x44d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x44d0cc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x44d0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x44d0d0: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x44d0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x44d0d4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x44d0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x44d0d8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x44d0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x44d0dc: 0x1120ffec  beqz        $t1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x44D0DCu;
    {
        const bool branch_taken_0x44d0dc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D0DCu;
        // 0x44d0e0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d0dc) {
            ctx->pc = 0x44D090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44d090;
        }
    }
    ctx->pc = 0x44D0E4u;
label_44d0e4:
    // 0x44d0e4: 0x1e0482d  daddu       $t1, $t7, $zero
    ctx->pc = 0x44d0e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d0e8: 0x300202d  daddu       $a0, $t8, $zero
    ctx->pc = 0x44d0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d0ec: 0x89102b  sltu        $v0, $a0, $t1
    ctx->pc = 0x44d0ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x44d0f0: 0x1040ffae  beqz        $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x44D0F0u;
    {
        const bool branch_taken_0x44d0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D0F0u;
        // 0x44d0f4: 0x1301821  addu        $v1, $t1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d0f0) {
            ctx->pc = 0x44CFACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44cfac;
        }
    }
    ctx->pc = 0x44D0F8u;
label_44d0f8:
    // 0x44d0f8: 0x13200012  beqz        $t9, . + 4 + (0x12 << 2)
    ctx->pc = 0x44D0F8u;
    {
        const bool branch_taken_0x44d0f8 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D0F8u;
        // 0x44d0fc: 0x320582d  daddu       $t3, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d0f8) {
            ctx->pc = 0x44D144u;
            goto label_44d144;
        }
    }
    ctx->pc = 0x44D100u;
    // 0x44d100: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x44d100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x44d104: 0x2862821  addu        $a1, $s4, $a2
    ctx->pc = 0x44d104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x44d108: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x44d108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x44d10c: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x44d10cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x44d110: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x44D110u;
    {
        const bool branch_taken_0x44d110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44D114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D110u;
        // 0x44d114: 0x1262023  subu        $a0, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d110) {
            ctx->pc = 0x44D130u;
            goto label_44d130;
        }
    }
    ctx->pc = 0x44D118u;
    // 0x44d118: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x44d118u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x44d11c: 0x25ad000c  addiu       $t5, $t5, 0xC
    ctx->pc = 0x44d11cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 12));
    // 0x44d120: 0xad870004  sw          $a3, 0x4($t4)
    ctx->pc = 0x44d120u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 7));
    // 0x44d124: 0x25ce000c  addiu       $t6, $t6, 0xC
    ctx->pc = 0x44d124u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12));
    // 0x44d128: 0xad990008  sw          $t9, 0x8($t4)
    ctx->pc = 0x44d128u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 25));
    // 0x44d12c: 0x258c000c  addiu       $t4, $t4, 0xC
    ctx->pc = 0x44d12cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 12));
label_44d130:
    // 0x44d130: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x44d130u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d134: 0x1251021  addu        $v0, $t1, $a1
    ctx->pc = 0x44d134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x44d138: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x44d138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x44d13c: 0x1040ff94  beqz        $v0, . + 4 + (-0x6C << 2)
    ctx->pc = 0x44D13Cu;
    {
        const bool branch_taken_0x44d13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D13Cu;
        // 0x44d140: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d13c) {
            ctx->pc = 0x44CF90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44cf90;
        }
    }
    ctx->pc = 0x44D144u;
label_44d144:
    // 0x44d144: 0x55ddff8c  bnel        $t6, $sp, . + 4 + (-0x74 << 2)
    ctx->pc = 0x44D144u;
    {
        const bool branch_taken_0x44d144 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 29));
        if (branch_taken_0x44d144) {
            ctx->pc = 0x44D148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44D144u;
            // 0x44d148: 0x25adfff4  addiu       $t5, $t5, -0xC (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967284));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44CF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44cf78;
        }
    }
    ctx->pc = 0x44D14Cu;
label_44d14c:
    // 0x44d14c: 0x56c000f0  bnel        $s6, $zero, . + 4 + (0xF0 << 2)
    ctx->pc = 0x44D14Cu;
    {
        const bool branch_taken_0x44d14c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x44d14c) {
            ctx->pc = 0x44D150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44D14Cu;
            // 0x44d150: 0x7bb001e0  lq          $s0, 0x1E0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44D510u;
            goto label_44d510;
        }
    }
    ctx->pc = 0x44D154u;
    // 0x44d154: 0x26a3ffff  addiu       $v1, $s5, -0x1
    ctx->pc = 0x44d154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x44d158: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x44d158u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x44d15c: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x44d15cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x44d160: 0x2302821  addu        $a1, $s1, $s0
    ctx->pc = 0x44d160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x44d164: 0x62580b  movn        $t3, $v1, $v0
    ctx->pc = 0x44d164u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 3));
    // 0x44d168: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x44d168u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x44d16c: 0x1661018  mult        $v0, $t3, $a2
    ctx->pc = 0x44d16cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x44d170: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x44d170u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d174: 0x254bffff  addiu       $t3, $t2, -0x1
    ctx->pc = 0x44d174u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x44d178: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x44d178u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x44d17c: 0x1662018  mult        $a0, $t3, $a2
    ctx->pc = 0x44d17cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x44d180: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x44d180u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d184: 0x66023  negu        $t4, $a2
    ctx->pc = 0x44d184u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x44d188: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x44d188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x44d18c: 0xb1027  nor         $v0, $zero, $t3
    ctx->pc = 0x44d18cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 11)));
    // 0x44d190: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x44d190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x44d194: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x44d194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x44d198: 0x30490003  andi        $t1, $v0, 0x3
    ctx->pc = 0x44d198u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x44d19c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x44d19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x44d1a0: 0x11200021  beqz        $t1, . + 4 + (0x21 << 2)
    ctx->pc = 0x44D1A0u;
    {
        const bool branch_taken_0x44d1a0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D1A0u;
        // 0x44d1a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d1a0) {
            ctx->pc = 0x44D228u;
            goto label_44d228;
        }
    }
    ctx->pc = 0x44D1A8u;
    // 0x44d1a8: 0x29220003  slti        $v0, $t1, 0x3
    ctx->pc = 0x44d1a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x44d1ac: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x44D1ACu;
    {
        const bool branch_taken_0x44d1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D1ACu;
        // 0x44d1b0: 0x29220002  slti        $v0, $t1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d1ac) {
            ctx->pc = 0x44D200u;
            goto label_44d200;
        }
    }
    ctx->pc = 0x44D1B4u;
    // 0x44d1b4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x44D1B4u;
    {
        const bool branch_taken_0x44d1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d1b4) {
            ctx->pc = 0x44D1B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44D1B4u;
            // 0x44d1b8: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44D1E0u;
            goto label_44d1e0;
        }
    }
    ctx->pc = 0x44D1BCu;
    // 0x44d1bc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x44d1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44d1c0: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x44d1c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x44d1c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x44D1C4u;
    {
        const bool branch_taken_0x44d1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D1C4u;
        // 0x44d1c8: 0x2568ffff  addiu       $t0, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d1c4) {
            ctx->pc = 0x44D1D4u;
            goto label_44d1d4;
        }
    }
    ctx->pc = 0x44D1CCu;
    // 0x44d1cc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x44d1ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d1d0: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x44d1d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_44d1d4:
    // 0x44d1d4: 0x8c2821  addu        $a1, $a0, $t4
    ctx->pc = 0x44d1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x44d1d8: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x44d1d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d1dc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x44d1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_44d1e0:
    // 0x44d1e0: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x44d1e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x44d1e4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x44D1E4u;
    {
        const bool branch_taken_0x44d1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d1e4) {
            ctx->pc = 0x44D1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44D1E4u;
            // 0x44d1e8: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44D1F8u;
            goto label_44d1f8;
        }
    }
    ctx->pc = 0x44D1ECu;
    // 0x44d1ec: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x44d1ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d1f0: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x44d1f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d1f4: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x44d1f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_44d1f8:
    // 0x44d1f8: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x44d1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x44d1fc: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x44d1fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_44d200:
    // 0x44d200: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x44d200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44d204: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x44d204u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x44d208: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x44D208u;
    {
        const bool branch_taken_0x44d208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d208) {
            ctx->pc = 0x44D20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44D208u;
            // 0x44d20c: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44D21Cu;
            goto label_44d21c;
        }
    }
    ctx->pc = 0x44D210u;
    // 0x44d210: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x44d210u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d214: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x44d214u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d218: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x44d218u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_44d21c:
    // 0x44d21c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x44d21cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x44d220: 0x1167001f  beq         $t3, $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x44D220u;
    {
        const bool branch_taken_0x44d220 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 7));
        ctx->pc = 0x44D224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D220u;
        // 0x44d224: 0xac2821  addu        $a1, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d220) {
            ctx->pc = 0x44D2A0u;
            goto label_44d2a0;
        }
    }
    ctx->pc = 0x44D228u;
label_44d228:
    // 0x44d228: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x44d228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44d22c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x44d22cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x44d230: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x44D230u;
    {
        const bool branch_taken_0x44d230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D230u;
        // 0x44d234: 0xac2821  addu        $a1, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d230) {
            ctx->pc = 0x44D240u;
            goto label_44d240;
        }
    }
    ctx->pc = 0x44D238u;
    // 0x44d238: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x44d238u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d23c: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x44d23cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_44d240:
    // 0x44d240: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x44d240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44d244: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x44d244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x44d248: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x44D248u;
    {
        const bool branch_taken_0x44d248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D248u;
        // 0x44d24c: 0x2509ffff  addiu       $t1, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d248) {
            ctx->pc = 0x44D258u;
            goto label_44d258;
        }
    }
    ctx->pc = 0x44D250u;
    // 0x44d250: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x44d250u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d254: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x44d254u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_44d258:
    // 0x44d258: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x44d258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x44d25c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x44d25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44d260: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x44d260u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x44d264: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x44D264u;
    {
        const bool branch_taken_0x44d264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D264u;
        // 0x44d268: 0x2509fffe  addiu       $t1, $t0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d264) {
            ctx->pc = 0x44D274u;
            goto label_44d274;
        }
    }
    ctx->pc = 0x44D26Cu;
    // 0x44d26c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x44d26cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d270: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x44d270u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_44d274:
    // 0x44d274: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x44d274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x44d278: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x44d278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44d27c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x44d27cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x44d280: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x44D280u;
    {
        const bool branch_taken_0x44d280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D280u;
        // 0x44d284: 0x2509fffd  addiu       $t1, $t0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d280) {
            ctx->pc = 0x44D290u;
            goto label_44d290;
        }
    }
    ctx->pc = 0x44D288u;
    // 0x44d288: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x44d288u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d28c: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x44d28cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_44d290:
    // 0x44d290: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x44d290u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x44d294: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x44d294u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x44d298: 0x1567ffe3  bne         $t3, $a3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x44D298u;
    {
        const bool branch_taken_0x44d298 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 7));
        ctx->pc = 0x44D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D298u;
        // 0x44d29c: 0xac2821  addu        $a1, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d298) {
            ctx->pc = 0x44D228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44d228;
        }
    }
    ctx->pc = 0x44D2A0u;
label_44d2a0:
    // 0x44d2a0: 0x11400042  beqz        $t2, . + 4 + (0x42 << 2)
    ctx->pc = 0x44D2A0u;
    {
        const bool branch_taken_0x44d2a0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D2A0u;
        // 0x44d2a4: 0x1461818  mult        $v1, $t2, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d2a0) {
            ctx->pc = 0x44D3ACu;
            goto label_44d3ac;
        }
    }
    ctx->pc = 0x44D2A8u;
    // 0x44d2a8: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x44d2a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d2ac: 0x2cc20004  sltiu       $v0, $a2, 0x4
    ctx->pc = 0x44d2acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x44d2b0: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x44D2B0u;
    {
        const bool branch_taken_0x44d2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D2B0u;
        // 0x44d2b4: 0x715021  addu        $t2, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d2b0) {
            ctx->pc = 0x44D3ACu;
            goto label_44d3ac;
        }
    }
    ctx->pc = 0x44D2B8u;
    // 0x44d2b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x44d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x44d2bc: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x44d2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d2c0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x44d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x44d2c4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x44d2c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d2c8: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x44d2c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x44d2cc: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x44D2CCu;
    {
        const bool branch_taken_0x44d2cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x44D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D2CCu;
        // 0x44d2d0: 0x3044000f  andi        $a0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d2cc) {
            ctx->pc = 0x44D32Cu;
            goto label_44d32c;
        }
    }
    ctx->pc = 0x44D2D4u;
    // 0x44d2d4: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x44D2D4u;
    {
        const bool branch_taken_0x44d2d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D2D4u;
        // 0x44d2d8: 0x2882000c  slti        $v0, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d2d4) {
            ctx->pc = 0x44D350u;
            goto label_44d350;
        }
    }
    ctx->pc = 0x44D2DCu;
    // 0x44d2dc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x44D2DCu;
    {
        const bool branch_taken_0x44d2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D2DCu;
        // 0x44d2e0: 0x28820008  slti        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d2dc) {
            ctx->pc = 0x44D32Cu;
            goto label_44d32c;
        }
    }
    ctx->pc = 0x44D2E4u;
    // 0x44d2e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x44D2E4u;
    {
        const bool branch_taken_0x44d2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D2E4u;
        // 0x44d2e8: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d2e4) {
            ctx->pc = 0x44D310u;
            goto label_44d310;
        }
    }
    ctx->pc = 0x44D2ECu;
    // 0x44d2ec: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x44D2ECu;
    {
        const bool branch_taken_0x44d2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44d2ec) {
            ctx->pc = 0x44D2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44D2ECu;
            // 0x44d2f0: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44D358u;
            goto label_44d358;
        }
    }
    ctx->pc = 0x44D2F4u;
    // 0x44d2f4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x44d2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x44d2f8: 0x25450004  addiu       $a1, $t2, 0x4
    ctx->pc = 0x44d2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x44d2fc: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x44d2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x44d300: 0x26280004  addiu       $t0, $s1, 0x4
    ctx->pc = 0x44d300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x44d304: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x44d304u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x44d308: 0x24c9fffc  addiu       $t1, $a2, -0x4
    ctx->pc = 0x44d308u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x44d30c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x44d30cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_44d310:
    // 0x44d310: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x44d310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x44d314: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x44d314u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x44d318: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x44d318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44d31c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x44d31cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x44d320: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x44d320u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x44d324: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x44d324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x44d328: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x44d328u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_44d32c:
    // 0x44d32c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x44d32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x44d330: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x44d330u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x44d334: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x44d334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44d338: 0x2d2a0004  sltiu       $t2, $t1, 0x4
    ctx->pc = 0x44d338u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x44d33c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x44d33cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x44d340: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x44d340u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x44d344: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x44d344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x44d348: 0x15400018  bnez        $t2, . + 4 + (0x18 << 2)
    ctx->pc = 0x44D348u;
    {
        const bool branch_taken_0x44d348 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x44D34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D348u;
        // 0x44d34c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d348) {
            ctx->pc = 0x44D3ACu;
            goto label_44d3ac;
        }
    }
    ctx->pc = 0x44D350u;
label_44d350:
    // 0x44d350: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x44d350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d354: 0x0  nop
    ctx->pc = 0x44d354u;
    // NOP
label_44d358:
    // 0x44d358: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x44d358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44d35c: 0x2529fff0  addiu       $t1, $t1, -0x10
    ctx->pc = 0x44d35cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967280));
    // 0x44d360: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x44d360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44d364: 0x2d2a0004  sltiu       $t2, $t1, 0x4
    ctx->pc = 0x44d364u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x44d368: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x44d368u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x44d36c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x44d36cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x44d370: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x44d370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x44d374: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x44d374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x44d378: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x44d378u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x44d37c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x44d37cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x44d380: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x44d380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x44d384: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x44d384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x44d388: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x44d388u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x44d38c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x44d38cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x44d390: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x44d390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x44d394: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x44d394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x44d398: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x44d398u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x44d39c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x44d39cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x44d3a0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x44d3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x44d3a4: 0x1140ffec  beqz        $t2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x44D3A4u;
    {
        const bool branch_taken_0x44d3a4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D3A4u;
        // 0x44d3a8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d3a4) {
            ctx->pc = 0x44D358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44d358;
        }
    }
    ctx->pc = 0x44D3ACu;
label_44d3ac:
    // 0x44d3ac: 0x26a5ffff  addiu       $a1, $s5, -0x1
    ctx->pc = 0x44d3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x44d3b0: 0x10a00056  beqz        $a1, . + 4 + (0x56 << 2)
    ctx->pc = 0x44D3B0u;
    {
        const bool branch_taken_0x44d3b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D3B0u;
        // 0x44d3b4: 0x2262021  addu        $a0, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d3b0) {
            ctx->pc = 0x44D50Cu;
            goto label_44d50c;
        }
    }
    ctx->pc = 0x44D3B8u;
    // 0x44d3b8: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x44d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x44d3bc: 0x0  nop
    ctx->pc = 0x44d3bcu;
    // NOP
label_44d3c0:
    // 0x44d3c0: 0x864823  subu        $t1, $a0, $a2
    ctx->pc = 0x44d3c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x44d3c4: 0x8c4d0000  lw          $t5, 0x0($v0)
    ctx->pc = 0x44d3c4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44d3c8: 0x1301821  addu        $v1, $t1, $s0
    ctx->pc = 0x44d3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
    // 0x44d3cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x44d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x44d3d0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x44d3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x44d3d4: 0x1a2102b  sltu        $v0, $t5, $v0
    ctx->pc = 0x44d3d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x44d3d8: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x44D3D8u;
    {
        const bool branch_taken_0x44d3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D3D8u;
        // 0x44d3dc: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d3d8) {
            ctx->pc = 0x44D504u;
            goto label_44d504;
        }
    }
    ctx->pc = 0x44D3E0u;
    // 0x44d3e0: 0x2cce0004  sltiu       $t6, $a2, 0x4
    ctx->pc = 0x44d3e0u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x44d3e4: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x44d3e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_44d3e8:
    // 0x44d3e8: 0x1266021  addu        $t4, $t1, $a2
    ctx->pc = 0x44d3e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x44d3ec: 0x15c0003f  bnez        $t6, . + 4 + (0x3F << 2)
    ctx->pc = 0x44D3ECu;
    {
        const bool branch_taken_0x44d3ec = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x44D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D3ECu;
        // 0x44d3f0: 0x12b3823  subu        $a3, $t1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d3ec) {
            ctx->pc = 0x44D4ECu;
            goto label_44d4ec;
        }
    }
    ctx->pc = 0x44D3F4u;
    // 0x44d3f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x44d3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x44d3f8: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x44d3f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d3fc: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x44d3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x44d400: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x44d400u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d404: 0x29620004  slti        $v0, $t3, 0x4
    ctx->pc = 0x44d404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x44d408: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x44D408u;
    {
        const bool branch_taken_0x44d408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D408u;
        // 0x44d40c: 0x3063000f  andi        $v1, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d408) {
            ctx->pc = 0x44D468u;
            goto label_44d468;
        }
    }
    ctx->pc = 0x44D410u;
    // 0x44d410: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x44D410u;
    {
        const bool branch_taken_0x44d410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D410u;
        // 0x44d414: 0x2862000c  slti        $v0, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d410) {
            ctx->pc = 0x44D48Cu;
            goto label_44d48c;
        }
    }
    ctx->pc = 0x44D418u;
    // 0x44d418: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x44D418u;
    {
        const bool branch_taken_0x44d418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D418u;
        // 0x44d41c: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d418) {
            ctx->pc = 0x44D468u;
            goto label_44d468;
        }
    }
    ctx->pc = 0x44D420u;
    // 0x44d420: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x44D420u;
    {
        const bool branch_taken_0x44d420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D420u;
        // 0x44d424: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d420) {
            ctx->pc = 0x44D44Cu;
            goto label_44d44c;
        }
    }
    ctx->pc = 0x44D428u;
    // 0x44d428: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x44D428u;
    {
        const bool branch_taken_0x44d428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44d428) {
            ctx->pc = 0x44D42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44D428u;
            // 0x44d42c: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44D490u;
            goto label_44d490;
        }
    }
    ctx->pc = 0x44D430u;
    // 0x44d430: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x44d430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x44d434: 0x252a0004  addiu       $t2, $t1, 0x4
    ctx->pc = 0x44d434u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x44d438: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x44d438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x44d43c: 0x25880004  addiu       $t0, $t4, 0x4
    ctx->pc = 0x44d43cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x44d440: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x44d440u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x44d444: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x44d444u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x44d448: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x44d448u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
label_44d44c:
    // 0x44d44c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x44d44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x44d450: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x44d450u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x44d454: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x44d454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x44d458: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x44d458u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x44d45c: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x44d45cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x44d460: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x44d460u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x44d464: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x44d464u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_44d468:
    // 0x44d468: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x44d468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x44d46c: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x44d46cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x44d470: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x44d470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x44d474: 0x2d6c0004  sltiu       $t4, $t3, 0x4
    ctx->pc = 0x44d474u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x44d478: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x44d478u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x44d47c: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x44d47cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x44d480: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x44d480u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x44d484: 0x15800019  bnez        $t4, . + 4 + (0x19 << 2)
    ctx->pc = 0x44D484u;
    {
        const bool branch_taken_0x44d484 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x44D488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D484u;
        // 0x44d488: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d484) {
            ctx->pc = 0x44D4ECu;
            goto label_44d4ec;
        }
    }
    ctx->pc = 0x44D48Cu;
label_44d48c:
    // 0x44d48c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x44d48cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_44d490:
    // 0x44d490: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x44d490u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d494: 0x0  nop
    ctx->pc = 0x44d494u;
    // NOP
label_44d498:
    // 0x44d498: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x44d498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x44d49c: 0x256bfff0  addiu       $t3, $t3, -0x10
    ctx->pc = 0x44d49cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967280));
    // 0x44d4a0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x44d4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x44d4a4: 0x2d6c0004  sltiu       $t4, $t3, 0x4
    ctx->pc = 0x44d4a4u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x44d4a8: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x44d4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x44d4ac: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x44d4acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x44d4b0: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x44d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x44d4b4: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x44d4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x44d4b8: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x44d4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x44d4bc: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x44d4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x44d4c0: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x44d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x44d4c4: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x44d4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x44d4c8: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x44d4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
    // 0x44d4cc: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x44d4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x44d4d0: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x44d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x44d4d4: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x44d4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x44d4d8: 0xad22000c  sw          $v0, 0xC($t1)
    ctx->pc = 0x44d4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
    // 0x44d4dc: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x44d4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x44d4e0: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x44d4e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x44d4e4: 0x1180ffec  beqz        $t4, . + 4 + (-0x14 << 2)
    ctx->pc = 0x44D4E4u;
    {
        const bool branch_taken_0x44d4e4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D4E4u;
        // 0x44d4e8: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d4e4) {
            ctx->pc = 0x44D498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44d498;
        }
    }
    ctx->pc = 0x44D4ECu;
label_44d4ec:
    // 0x44d4ec: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x44d4ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d4f0: 0x1301821  addu        $v1, $t1, $s0
    ctx->pc = 0x44d4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
    // 0x44d4f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x44d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x44d4f8: 0x1a2102b  sltu        $v0, $t5, $v0
    ctx->pc = 0x44d4f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x44d4fc: 0x5440ffba  bnel        $v0, $zero, . + 4 + (-0x46 << 2)
    ctx->pc = 0x44D4FCu;
    {
        const bool branch_taken_0x44d4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44d4fc) {
            ctx->pc = 0x44D500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44D4FCu;
            // 0x44d500: 0xc0582d  daddu       $t3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44D3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44d3e8;
        }
    }
    ctx->pc = 0x44D504u;
label_44d504:
    // 0x44d504: 0x14a0ffae  bnez        $a1, . + 4 + (-0x52 << 2)
    ctx->pc = 0x44D504u;
    {
        const bool branch_taken_0x44d504 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x44D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D504u;
        // 0x44d508: 0x901021  addu        $v0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d504) {
            ctx->pc = 0x44D3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44d3c0;
        }
    }
    ctx->pc = 0x44D50Cu;
label_44d50c:
    // 0x44d50c: 0x7bb001e0  lq          $s0, 0x1E0($sp)
    ctx->pc = 0x44d50cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_44d510:
    // 0x44d510: 0x7bb101d0  lq          $s1, 0x1D0($sp)
    ctx->pc = 0x44d510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x44d514: 0x7bb201c0  lq          $s2, 0x1C0($sp)
    ctx->pc = 0x44d514u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x44d518: 0x7bb301b0  lq          $s3, 0x1B0($sp)
    ctx->pc = 0x44d518u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x44d51c: 0x7bb401a0  lq          $s4, 0x1A0($sp)
    ctx->pc = 0x44d51cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x44d520: 0x7bb50190  lq          $s5, 0x190($sp)
    ctx->pc = 0x44d520u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x44d524: 0x7bb60180  lq          $s6, 0x180($sp)
    ctx->pc = 0x44d524u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x44d528: 0x3e00008  jr          $ra
    ctx->pc = 0x44D528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D528u;
        // 0x44d52c: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44D528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44D530u;
    // 0x44d530: 0x10800099  beqz        $a0, . + 4 + (0x99 << 2)
    ctx->pc = 0x44D530u;
    {
        const bool branch_taken_0x44d530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D530u;
        // 0x44d534: 0x24e20004  addiu       $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d530) {
            ctx->pc = 0x44D798u;
            goto label_44d798;
        }
    }
    ctx->pc = 0x44D538u;
    // 0x44d538: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x44d538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x44d53c: 0x14400096  bnez        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x44D53Cu;
    {
        const bool branch_taken_0x44d53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44D540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D53Cu;
        // 0x44d540: 0x109102b  sltu        $v0, $t0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d53c) {
            ctx->pc = 0x44D798u;
            goto label_44d798;
        }
    }
    ctx->pc = 0x44D544u;
    // 0x44d544: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x44D544u;
    {
        const bool branch_taken_0x44d544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D544u;
        // 0x44d548: 0x2ca20002  sltiu       $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d544) {
            ctx->pc = 0x44D798u;
            goto label_44d798;
        }
    }
    ctx->pc = 0x44D54Cu;
    // 0x44d54c: 0x14400092  bnez        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x44D54Cu;
    {
        const bool branch_taken_0x44d54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D54Cu;
        // 0x44d550: 0x2cd80004  sltiu       $t8, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 24, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d54c) {
            ctx->pc = 0x44D798u;
            goto label_44d798;
        }
    }
    ctx->pc = 0x44D554u;
    // 0x44d554: 0x0  nop
    ctx->pc = 0x44d554u;
    // NOP
label_44d558:
    // 0x44d558: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x44d558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x44d55c: 0x24abffff  addiu       $t3, $a1, -0x1
    ctx->pc = 0x44d55cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x44d560: 0x160782d  daddu       $t7, $t3, $zero
    ctx->pc = 0x44d560u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d564: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x44d564u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44d568: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x44d568u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d56c: 0x11e00046  beqz        $t7, . + 4 + (0x46 << 2)
    ctx->pc = 0x44D56Cu;
    {
        const bool branch_taken_0x44d56c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D56Cu;
        // 0x44d570: 0x867021  addu        $t6, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d56c) {
            ctx->pc = 0x44D688u;
            goto label_44d688;
        }
    }
    ctx->pc = 0x44D574u;
    // 0x44d574: 0x1c76021  addu        $t4, $t6, $a3
    ctx->pc = 0x44d574u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
    // 0x44d578: 0xf1023  negu        $v0, $t7
    ctx->pc = 0x44d578u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x44d57c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x44d57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x44d580: 0x1c0402d  daddu       $t0, $t6, $zero
    ctx->pc = 0x44d580u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d584: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x44D584u;
    {
        const bool branch_taken_0x44d584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D584u;
        // 0x44d588: 0x180482d  daddu       $t1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d584) {
            ctx->pc = 0x44D610u;
            goto label_44d610;
        }
    }
    ctx->pc = 0x44D58Cu;
    // 0x44d58c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x44d58cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x44d590: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x44D590u;
    {
        const bool branch_taken_0x44d590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D590u;
        // 0x44d594: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d590) {
            ctx->pc = 0x44D5E4u;
            goto label_44d5e4;
        }
    }
    ctx->pc = 0x44D598u;
    // 0x44d598: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x44D598u;
    {
        const bool branch_taken_0x44d598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d598) {
            ctx->pc = 0x44D59Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44D598u;
            // 0x44d59c: 0x8d230000  lw          $v1, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44D5C4u;
            goto label_44d5c4;
        }
    }
    ctx->pc = 0x44D5A0u;
    // 0x44d5a0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x44d5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x44d5a4: 0x6a102b  sltu        $v0, $v1, $t2
    ctx->pc = 0x44d5a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x44d5a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x44D5A8u;
    {
        const bool branch_taken_0x44d5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D5A8u;
        // 0x44d5ac: 0x1864821  addu        $t1, $t4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d5a8) {
            ctx->pc = 0x44D5B8u;
            goto label_44d5b8;
        }
    }
    ctx->pc = 0x44D5B0u;
    // 0x44d5b0: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x44d5b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d5b4: 0x1c0682d  daddu       $t5, $t6, $zero
    ctx->pc = 0x44d5b4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_44d5b8:
    // 0x44d5b8: 0x24abfffe  addiu       $t3, $a1, -0x2
    ctx->pc = 0x44d5b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x44d5bc: 0x1c64021  addu        $t0, $t6, $a2
    ctx->pc = 0x44d5bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
    // 0x44d5c0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x44d5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_44d5c4:
    // 0x44d5c4: 0x6a102b  sltu        $v0, $v1, $t2
    ctx->pc = 0x44d5c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x44d5c8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x44D5C8u;
    {
        const bool branch_taken_0x44d5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d5c8) {
            ctx->pc = 0x44D5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44D5C8u;
            // 0x44d5cc: 0x1064021  addu        $t0, $t0, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44D5DCu;
            goto label_44d5dc;
        }
    }
    ctx->pc = 0x44D5D0u;
    // 0x44d5d0: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x44d5d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d5d4: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x44d5d4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d5d8: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x44d5d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_44d5dc:
    // 0x44d5dc: 0x1264821  addu        $t1, $t1, $a2
    ctx->pc = 0x44d5dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x44d5e0: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x44d5e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_44d5e4:
    // 0x44d5e4: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x44d5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x44d5e8: 0x6a102b  sltu        $v0, $v1, $t2
    ctx->pc = 0x44d5e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x44d5ec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x44D5ECu;
    {
        const bool branch_taken_0x44d5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d5ec) {
            ctx->pc = 0x44D5F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44D5ECu;
            // 0x44d5f0: 0x1064021  addu        $t0, $t0, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44D600u;
            goto label_44d600;
        }
    }
    ctx->pc = 0x44D5F4u;
    // 0x44d5f4: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x44d5f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d5f8: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x44d5f8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d5fc: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x44d5fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_44d600:
    // 0x44d600: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x44d600u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x44d604: 0x11600020  beqz        $t3, . + 4 + (0x20 << 2)
    ctx->pc = 0x44D604u;
    {
        const bool branch_taken_0x44d604 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D604u;
        // 0x44d608: 0x1264821  addu        $t1, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d604) {
            ctx->pc = 0x44D688u;
            goto label_44d688;
        }
    }
    ctx->pc = 0x44D60Cu;
    // 0x44d60c: 0x0  nop
    ctx->pc = 0x44d60cu;
    // NOP
label_44d610:
    // 0x44d610: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x44d610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x44d614: 0x6a102b  sltu        $v0, $v1, $t2
    ctx->pc = 0x44d614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x44d618: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x44D618u;
    {
        const bool branch_taken_0x44d618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D618u;
        // 0x44d61c: 0x1264821  addu        $t1, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d618) {
            ctx->pc = 0x44D628u;
            goto label_44d628;
        }
    }
    ctx->pc = 0x44D620u;
    // 0x44d620: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x44d620u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d624: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x44d624u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_44d628:
    // 0x44d628: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x44d628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x44d62c: 0x6a102b  sltu        $v0, $v1, $t2
    ctx->pc = 0x44d62cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x44d630: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x44D630u;
    {
        const bool branch_taken_0x44d630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D630u;
        // 0x44d634: 0x1064021  addu        $t0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d630) {
            ctx->pc = 0x44D640u;
            goto label_44d640;
        }
    }
    ctx->pc = 0x44D638u;
    // 0x44d638: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x44d638u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d63c: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x44d63cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_44d640:
    // 0x44d640: 0x1264821  addu        $t1, $t1, $a2
    ctx->pc = 0x44d640u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x44d644: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x44d644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x44d648: 0x6a102b  sltu        $v0, $v1, $t2
    ctx->pc = 0x44d648u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x44d64c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x44D64Cu;
    {
        const bool branch_taken_0x44d64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D64Cu;
        // 0x44d650: 0x1064021  addu        $t0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d64c) {
            ctx->pc = 0x44D65Cu;
            goto label_44d65c;
        }
    }
    ctx->pc = 0x44D654u;
    // 0x44d654: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x44d654u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d658: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x44d658u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_44d65c:
    // 0x44d65c: 0x1264821  addu        $t1, $t1, $a2
    ctx->pc = 0x44d65cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x44d660: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x44d660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x44d664: 0x6a102b  sltu        $v0, $v1, $t2
    ctx->pc = 0x44d664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x44d668: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x44D668u;
    {
        const bool branch_taken_0x44d668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D668u;
        // 0x44d66c: 0x1064021  addu        $t0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d668) {
            ctx->pc = 0x44D678u;
            goto label_44d678;
        }
    }
    ctx->pc = 0x44D670u;
    // 0x44d670: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x44d670u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d674: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x44d674u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_44d678:
    // 0x44d678: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x44d678u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x44d67c: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x44d67cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x44d680: 0x1560ffe3  bnez        $t3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x44D680u;
    {
        const bool branch_taken_0x44d680 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x44D684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D680u;
        // 0x44d684: 0x1264821  addu        $t1, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d680) {
            ctx->pc = 0x44D610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44d610;
        }
    }
    ctx->pc = 0x44D688u;
label_44d688:
    // 0x44d688: 0x11a00041  beqz        $t5, . + 4 + (0x41 << 2)
    ctx->pc = 0x44D688u;
    {
        const bool branch_taken_0x44d688 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D688u;
        // 0x44d68c: 0x1e0282d  daddu       $a1, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d688) {
            ctx->pc = 0x44D790u;
            goto label_44d790;
        }
    }
    ctx->pc = 0x44D690u;
    // 0x44d690: 0x1700003f  bnez        $t8, . + 4 + (0x3F << 2)
    ctx->pc = 0x44D690u;
    {
        const bool branch_taken_0x44d690 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x44D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D690u;
        // 0x44d694: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d690) {
            ctx->pc = 0x44D790u;
            goto label_44d790;
        }
    }
    ctx->pc = 0x44D698u;
    // 0x44d698: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x44d698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x44d69c: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x44d69cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d6a0: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x44d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x44d6a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x44d6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44d6a8: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x44d6a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x44d6ac: 0x29220004  slti        $v0, $t1, 0x4
    ctx->pc = 0x44d6acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x44d6b0: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x44D6B0u;
    {
        const bool branch_taken_0x44d6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44D6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D6B0u;
        // 0x44d6b4: 0x140402d  daddu       $t0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d6b0) {
            ctx->pc = 0x44D710u;
            goto label_44d710;
        }
    }
    ctx->pc = 0x44D6B8u;
    // 0x44d6b8: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x44D6B8u;
    {
        const bool branch_taken_0x44d6b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D6B8u;
        // 0x44d6bc: 0x2862000c  slti        $v0, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d6b8) {
            ctx->pc = 0x44D734u;
            goto label_44d734;
        }
    }
    ctx->pc = 0x44D6C0u;
    // 0x44d6c0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x44D6C0u;
    {
        const bool branch_taken_0x44d6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D6C0u;
        // 0x44d6c4: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d6c0) {
            ctx->pc = 0x44D710u;
            goto label_44d710;
        }
    }
    ctx->pc = 0x44D6C8u;
    // 0x44d6c8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x44D6C8u;
    {
        const bool branch_taken_0x44d6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D6C8u;
        // 0x44d6cc: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d6c8) {
            ctx->pc = 0x44D6F4u;
            goto label_44d6f4;
        }
    }
    ctx->pc = 0x44D6D0u;
    // 0x44d6d0: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x44D6D0u;
    {
        const bool branch_taken_0x44d6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44d6d0) {
            ctx->pc = 0x44D6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44D6D0u;
            // 0x44d6d4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44D738u;
            goto label_44d738;
        }
    }
    ctx->pc = 0x44D6D8u;
    // 0x44d6d8: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x44d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x44d6dc: 0x25480004  addiu       $t0, $t2, 0x4
    ctx->pc = 0x44d6dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x44d6e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x44d6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44d6e4: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x44d6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x44d6e8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x44d6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x44d6ec: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x44d6ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x44d6f0: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x44d6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
label_44d6f4:
    // 0x44d6f4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x44d6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x44d6f8: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x44d6f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x44d6fc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x44d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44d700: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x44d700u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x44d704: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x44d704u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x44d708: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x44d708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x44d70c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x44d70cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_44d710:
    // 0x44d710: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x44d710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x44d714: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x44d714u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x44d718: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x44d718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44d71c: 0x2d2a0004  sltiu       $t2, $t1, 0x4
    ctx->pc = 0x44d71cu;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x44d720: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x44d720u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x44d724: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x44d724u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x44d728: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x44d728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x44d72c: 0x15400017  bnez        $t2, . + 4 + (0x17 << 2)
    ctx->pc = 0x44D72Cu;
    {
        const bool branch_taken_0x44d72c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x44D730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D72Cu;
        // 0x44d730: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d72c) {
            ctx->pc = 0x44D78Cu;
            goto label_44d78c;
        }
    }
    ctx->pc = 0x44D734u;
label_44d734:
    // 0x44d734: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x44d734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_44d738:
    // 0x44d738: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x44d738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44d73c: 0x2529fff0  addiu       $t1, $t1, -0x10
    ctx->pc = 0x44d73cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967280));
    // 0x44d740: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x44d740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44d744: 0x2d2a0004  sltiu       $t2, $t1, 0x4
    ctx->pc = 0x44d744u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x44d748: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x44d748u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x44d74c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x44d74cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x44d750: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x44d750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x44d754: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x44d754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x44d758: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x44d758u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x44d75c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x44d75cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x44d760: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x44d760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x44d764: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x44d764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x44d768: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x44d768u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x44d76c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x44d76cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x44d770: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x44d770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x44d774: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x44d774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x44d778: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x44d778u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x44d77c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x44d77cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x44d780: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x44d780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x44d784: 0x1140ffec  beqz        $t2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x44D784u;
    {
        const bool branch_taken_0x44d784 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D784u;
        // 0x44d788: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d784) {
            ctx->pc = 0x44D738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44d738;
        }
    }
    ctx->pc = 0x44D78Cu;
label_44d78c:
    // 0x44d78c: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x44d78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_44d790:
    // 0x44d790: 0x14a0ff71  bnez        $a1, . + 4 + (-0x8F << 2)
    ctx->pc = 0x44D790u;
    {
        const bool branch_taken_0x44d790 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x44D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44D790u;
        // 0x44d794: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d790) {
            ctx->pc = 0x44D558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44d558;
        }
    }
    ctx->pc = 0x44D798u;
label_44d798:
    // 0x44d798: 0x3e00008  jr          $ra
    ctx->pc = 0x44D798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44D798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44D7A0u;
}
