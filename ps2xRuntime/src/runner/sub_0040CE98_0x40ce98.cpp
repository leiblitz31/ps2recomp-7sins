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

// Function: sub_0040CE98
// Address: 0x40ce98 - 0x40d010
void sub_0040CE98_0x40ce98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040CE98_0x40ce98");
#endif

    switch (ctx->pc) {
        case 0x40cedcu: goto label_40cedc;
        case 0x40cef8u: goto label_40cef8;
        case 0x40cf04u: goto label_40cf04;
        case 0x40cf78u: goto label_40cf78;
        case 0x40cfdcu: goto label_40cfdc;
        default: break;
    }

    ctx->pc = 0x40ce98u;

    // 0x40ce98: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x40ce98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x40ce9c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x40ce9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x40cea0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x40cea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x40cea4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x40cea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x40cea8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x40cea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ceac: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x40ceacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x40ceb0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x40ceb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ceb4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x40ceb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x40ceb8: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x40ceb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x40cebc: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x40cebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x40cec0: 0x27b20044  addiu       $s2, $sp, 0x44
    ctx->pc = 0x40cec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x40cec4: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x40cec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x40cec8: 0x27b3004c  addiu       $s3, $sp, 0x4C
    ctx->pc = 0x40cec8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x40cecc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x40ceccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x40ced0: 0x27b40048  addiu       $s4, $sp, 0x48
    ctx->pc = 0x40ced0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x40ced4: 0xc10480a  jal         func_412028
    ctx->pc = 0x40CED4u;
    SET_GPR_U32(ctx, 31, 0x40CEDCu);
    ctx->pc = 0x40CED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CED4u;
    // 0x40ced8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x40CED4u, 0x40CEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CEDCu;
label_40cedc:
    // 0x40cedc: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x40cedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
    // 0x40cee0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x40CEE0u;
    {
        const bool branch_taken_0x40cee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CEE0u;
        // 0x40cee4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cee0) {
            ctx->pc = 0x40CF10u;
            goto label_40cf10;
        }
    }
    ctx->pc = 0x40CEE8u;
    // 0x40cee8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40cee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x40ceec: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x40ceecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x40cef0: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x40CEF0u;
    SET_GPR_U32(ctx, 31, 0x40CEF8u);
    ctx->pc = 0x40CEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CEF0u;
    // 0x40cef4: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40CEF0u, 0x40CEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CEF8u;
label_40cef8:
    // 0x40cef8: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x40cef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x40cefc: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x40CEFCu;
    SET_GPR_U32(ctx, 31, 0x40CF04u);
    ctx->pc = 0x40CF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CEFCu;
    // 0x40cf00: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x40CEFCu, 0x40CF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CF04u;
label_40cf04:
    // 0x40cf04: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x40CF04u;
    {
        const bool branch_taken_0x40cf04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CF04u;
        // 0x40cf08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cf04) {
            ctx->pc = 0x40CFB0u;
            goto label_40cfb0;
        }
    }
    ctx->pc = 0x40CF0Cu;
    // 0x40cf0c: 0x0  nop
    ctx->pc = 0x40cf0cu;
    // NOP
label_40cf10:
    // 0x40cf10: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x40cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40cf14: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x40cf14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x40cf18: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x40cf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x40cf1c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x40cf1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x40cf20: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x40cf20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x40cf24: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x40cf24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x40cf28: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x40CF28u;
    {
        const bool branch_taken_0x40cf28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x40CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CF28u;
        // 0x40cf2c: 0xafa40014  sw          $a0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cf28) {
            ctx->pc = 0x40CF40u;
            goto label_40cf40;
        }
    }
    ctx->pc = 0x40CF30u;
    // 0x40cf30: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x40cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x40cf34: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x40cf34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x40cf38: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x40CF38u;
    {
        const bool branch_taken_0x40cf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CF38u;
        // 0x40cf3c: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cf38) {
            ctx->pc = 0x40CF70u;
            goto label_40cf70;
        }
    }
    ctx->pc = 0x40CF40u;
label_40cf40:
    // 0x40cf40: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x40cf40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x40cf44: 0x61382  srl         $v0, $a2, 14
    ctx->pc = 0x40cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 14));
    // 0x40cf48: 0x3484ff00  ori         $a0, $a0, 0xFF00
    ctx->pc = 0x40cf48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
    // 0x40cf4c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x40cf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x40cf50: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x40cf50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x40cf54: 0x61c02  srl         $v1, $a2, 16
    ctx->pc = 0x40cf54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x40cf58: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x40cf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x40cf5c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x40cf5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x40cf60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x40cf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x40cf64: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x40cf64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x40cf68: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x40cf68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x40cf6c: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x40cf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
label_40cf70:
    // 0x40cf70: 0xc103310  jal         func_40CC40
    ctx->pc = 0x40CF70u;
    SET_GPR_U32(ctx, 31, 0x40CF78u);
    ctx->pc = 0x40CF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CF70u;
    // 0x40cf74: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC40u, 0x40CF70u, 0x40CF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CF78u;
label_40cf78:
    // 0x40cf78: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x40CF78u;
    {
        const bool branch_taken_0x40cf78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CF78u;
        // 0x40cf7c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cf78) {
            ctx->pc = 0x40CF88u;
            goto label_40cf88;
        }
    }
    ctx->pc = 0x40CF80u;
    // 0x40cf80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x40cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40cf84: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x40cf84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_40cf88:
    // 0x40cf88: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x40CF88u;
    {
        const bool branch_taken_0x40cf88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CF88u;
        // 0x40cf8c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cf88) {
            ctx->pc = 0x40CF94u;
            goto label_40cf94;
        }
    }
    ctx->pc = 0x40CF90u;
    // 0x40cf90: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x40cf90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_40cf94:
    // 0x40cf94: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x40CF94u;
    {
        const bool branch_taken_0x40cf94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CF94u;
        // 0x40cf98: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cf94) {
            ctx->pc = 0x40CFA0u;
            goto label_40cfa0;
        }
    }
    ctx->pc = 0x40CF9Cu;
    // 0x40cf9c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x40cf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_40cfa0:
    // 0x40cfa0: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x40CFA0u;
    {
        const bool branch_taken_0x40cfa0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CFA0u;
        // 0x40cfa4: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cfa0) {
            ctx->pc = 0x40CFACu;
            goto label_40cfac;
        }
    }
    ctx->pc = 0x40CFA8u;
    // 0x40cfa8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x40cfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_40cfac:
    // 0x40cfac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40cfb0:
    // 0x40cfb0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x40CFB0u;
    {
        const bool branch_taken_0x40cfb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CFB0u;
        // 0x40cfb4: 0x8fa60040  lw          $a2, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cfb0) {
            ctx->pc = 0x40CFE8u;
            goto label_40cfe8;
        }
    }
    ctx->pc = 0x40CFB8u;
    // 0x40cfb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40cfb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40cfbc: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x40cfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x40cfc0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x40cfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x40cfc4: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x40cfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x40cfc8: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x40cfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x40cfcc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x40cfccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x40cfd0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x40cfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x40cfd4: 0xc103310  jal         func_40CC40
    ctx->pc = 0x40CFD4u;
    SET_GPR_U32(ctx, 31, 0x40CFDCu);
    ctx->pc = 0x40CFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CFD4u;
    // 0x40cfd8: 0xae05000c  sw          $a1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC40u, 0x40CFD4u, 0x40CFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CFDCu;
label_40cfdc:
    // 0x40cfdc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x40cfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x40cfe0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x40CFE0u;
    {
        const bool branch_taken_0x40cfe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CFE0u;
        // 0x40cfe4: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cfe0) {
            ctx->pc = 0x40CFECu;
            goto label_40cfec;
        }
    }
    ctx->pc = 0x40CFE8u;
label_40cfe8:
    // 0x40cfe8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40cfe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40cfec:
    // 0x40cfec: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x40cfecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x40cff0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x40cff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x40cff4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x40cff4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x40cff8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x40cff8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x40cffc: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x40cffcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x40d000: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x40d000u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x40d004: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x40d004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x40d008: 0x3e00008  jr          $ra
    ctx->pc = 0x40D008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D008u;
        // 0x40d00c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40D010u;
}
