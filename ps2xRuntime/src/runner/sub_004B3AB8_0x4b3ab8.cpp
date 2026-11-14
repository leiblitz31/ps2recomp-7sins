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

// Function: sub_004B3AB8
// Address: 0x4b3ab8 - 0x4b3c30
void sub_004B3AB8_0x4b3ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3AB8_0x4b3ab8");
#endif

    switch (ctx->pc) {
        case 0x4b3ae8u: goto label_4b3ae8;
        case 0x4b3b14u: goto label_4b3b14;
        case 0x4b3b38u: goto label_4b3b38;
        case 0x4b3b50u: goto label_4b3b50;
        case 0x4b3b78u: goto label_4b3b78;
        case 0x4b3b98u: goto label_4b3b98;
        case 0x4b3c04u: goto label_4b3c04;
        default: break;
    }

    ctx->pc = 0x4b3ab8u;

    // 0x4b3ab8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4b3ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4b3abc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4b3abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4b3ac0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b3ac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3ac4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4b3ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4b3ac8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4b3ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4b3acc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x4b3accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x4b3ad0: 0x2632002c  addiu       $s2, $s1, 0x2C
    ctx->pc = 0x4b3ad0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x4b3ad4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b3ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4b3ad8: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x4b3ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4b3adc: 0x24842150  addiu       $a0, $a0, 0x2150
    ctx->pc = 0x4b3adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8528));
    // 0x4b3ae0: 0xc1297fc  jal         func_4A5FF0
    ctx->pc = 0x4B3AE0u;
    SET_GPR_U32(ctx, 31, 0x4B3AE8u);
    ctx->pc = 0x4B3AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3AE0u;
    // 0x4b3ae4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FF0u, 0x4B3AE0u, 0x4B3AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3AE8u;
label_4b3ae8:
    // 0x4b3ae8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B3AE8u;
    {
        const bool branch_taken_0x4b3ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B3AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3AE8u;
        // 0x4b3aec: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3ae8) {
            ctx->pc = 0x4B3B08u;
            goto label_4b3b08;
        }
    }
    ctx->pc = 0x4B3AF0u;
    // 0x4b3af0: 0x92020019  lbu         $v0, 0x19($s0)
    ctx->pc = 0x4b3af0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x4b3af4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b3af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b3af8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B3AF8u;
    {
        const bool branch_taken_0x4b3af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b3af8) {
            ctx->pc = 0x4B3AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B3AF8u;
            // 0x4b3afc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B3B0Cu;
            goto label_4b3b0c;
        }
    }
    ctx->pc = 0x4B3B00u;
    // 0x4b3b00: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x4B3B00u;
    {
        const bool branch_taken_0x4b3b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3B00u;
        // 0x4b3b04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3b00) {
            ctx->pc = 0x4B3C14u;
            goto label_4b3c14;
        }
    }
    ctx->pc = 0x4B3B08u;
label_4b3b08:
    // 0x4b3b08: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4b3b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4b3b0c:
    // 0x4b3b0c: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4B3B0Cu;
    SET_GPR_U32(ctx, 31, 0x4B3B14u);
    ctx->pc = 0x4B3B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3B0Cu;
    // 0x4b3b10: 0x24a52600  addiu       $a1, $a1, 0x2600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4B3B0Cu, 0x4B3B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3B14u;
label_4b3b14:
    // 0x4b3b14: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4B3B14u;
    {
        const bool branch_taken_0x4b3b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b3b14) {
            ctx->pc = 0x4B3B90u;
            goto label_4b3b90;
        }
    }
    ctx->pc = 0x4B3B1Cu;
    // 0x4b3b1c: 0x92020019  lbu         $v0, 0x19($s0)
    ctx->pc = 0x4b3b1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x4b3b20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b3b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b3b24: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4B3B24u;
    {
        const bool branch_taken_0x4b3b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3B24u;
        // 0x4b3b28: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3b24) {
            ctx->pc = 0x4B3B90u;
            goto label_4b3b90;
        }
    }
    ctx->pc = 0x4B3B2Cu;
    // 0x4b3b2c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4b3b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4b3b30: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4B3B30u;
    SET_GPR_U32(ctx, 31, 0x4B3B38u);
    ctx->pc = 0x4B3B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3B30u;
    // 0x4b3b34: 0x24a52610  addiu       $a1, $a1, 0x2610 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4B3B30u, 0x4B3B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3B38u;
label_4b3b38:
    // 0x4b3b38: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4B3B38u;
    {
        const bool branch_taken_0x4b3b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3B38u;
        // 0x4b3b3c: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3b38) {
            ctx->pc = 0x4B3B64u;
            goto label_4b3b64;
        }
    }
    ctx->pc = 0x4B3B40u;
    // 0x4b3b40: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4b3b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4b3b44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4b3b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b3b48: 0xc127cc2  jal         func_49F308
    ctx->pc = 0x4B3B48u;
    SET_GPR_U32(ctx, 31, 0x4B3B50u);
    ctx->pc = 0x4B3B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3B48u;
    // 0x4b3b4c: 0x34c60806  ori         $a2, $a2, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F308u, 0x4B3B48u, 0x4B3B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3B50u;
label_4b3b50:
    // 0x4b3b50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b3b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b3b54: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x4b3b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x4b3b58: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x4b3b58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
    // 0x4b3b5c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x4B3B5Cu;
    {
        const bool branch_taken_0x4b3b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3B5Cu;
        // 0x4b3b60: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3b5c) {
            ctx->pc = 0x4B3C04u;
            goto label_4b3c04;
        }
    }
    ctx->pc = 0x4B3B64u;
label_4b3b64:
    // 0x4b3b64: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4b3b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4b3b68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4b3b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b3b6c: 0x34c60806  ori         $a2, $a2, 0x806
    ctx->pc = 0x4b3b6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2054);
    // 0x4b3b70: 0xc127cc2  jal         func_49F308
    ctx->pc = 0x4B3B70u;
    SET_GPR_U32(ctx, 31, 0x4B3B78u);
    ctx->pc = 0x4B3B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3B70u;
    // 0x4b3b74: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F308u, 0x4B3B70u, 0x4B3B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3B78u;
label_4b3b78:
    // 0x4b3b78: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4b3b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b3b7c: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x4b3b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x4b3b80: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x4b3b80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
    // 0x4b3b84: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4b3b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4b3b88: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x4B3B88u;
    {
        const bool branch_taken_0x4b3b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3B88u;
        // 0x4b3b8c: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3b88) {
            ctx->pc = 0x4B3C04u;
            goto label_4b3c04;
        }
    }
    ctx->pc = 0x4B3B90u;
label_4b3b90:
    // 0x4b3b90: 0xc12d062  jal         func_4B4188
    ctx->pc = 0x4B3B90u;
    SET_GPR_U32(ctx, 31, 0x4B3B98u);
    ctx->pc = 0x4B3B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3B90u;
    // 0x4b3b94: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4188u, 0x4B3B90u, 0x4B3B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3B98u;
label_4b3b98:
    // 0x4b3b98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b3b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b3b9c: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x4b3b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x4b3ba0: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x4b3ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
    // 0x4b3ba4: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x4b3ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
    // 0x4b3ba8: 0x6a450007  ldl         $a1, 0x7($s2)
    ctx->pc = 0x4b3ba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4b3bac: 0x6e450000  ldr         $a1, 0x0($s2)
    ctx->pc = 0x4b3bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4b3bb0: 0x6a46000f  ldl         $a2, 0xF($s2)
    ctx->pc = 0x4b3bb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4b3bb4: 0x6e460008  ldr         $a2, 0x8($s2)
    ctx->pc = 0x4b3bb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4b3bb8: 0x6a480017  ldl         $t0, 0x17($s2)
    ctx->pc = 0x4b3bb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x4b3bbc: 0x6e480010  ldr         $t0, 0x10($s2)
    ctx->pc = 0x4b3bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x4b3bc0: 0x8e490018  lw          $t1, 0x18($s2)
    ctx->pc = 0x4b3bc0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x4b3bc4: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x4b3bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b3bc8: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x4b3bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b3bcc: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x4b3bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b3bd0: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x4b3bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b3bd4: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x4b3bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b3bd8: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x4b3bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b3bdc: 0x24e72610  addiu       $a3, $a3, 0x2610
    ctx->pc = 0x4b3bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9744));
    // 0x4b3be0: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x4b3be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
    // 0x4b3be4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x4b3be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4b3be8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b3be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3bec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4b3becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3bf0: 0xa3a3000c  sb          $v1, 0xC($sp)
    ctx->pc = 0x4b3bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x4b3bf4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4b3bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3bf8: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x4b3bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x4b3bfc: 0xc12931a  jal         func_4A4C68
    ctx->pc = 0x4B3BFCu;
    SET_GPR_U32(ctx, 31, 0x4B3C04u);
    ctx->pc = 0x4B3C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3BFCu;
    // 0x4b3c00: 0xa3a00018  sb          $zero, 0x18($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4C68u, 0x4B3BFCu, 0x4B3C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3C04u;
label_4b3c04:
    // 0x4b3c04: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x4b3c04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x4b3c08: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x4b3c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x4b3c0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b3c0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3c10: 0x223100b  movn        $v0, $s1, $v1
    ctx->pc = 0x4b3c10u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
label_4b3c14:
    // 0x4b3c14: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4b3c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b3c18: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4b3c18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b3c1c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4b3c1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b3c20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b3c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b3c24: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3C24u;
        // 0x4b3c28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3C2Cu;
    // 0x4b3c2c: 0x0  nop
    ctx->pc = 0x4b3c2cu;
    // NOP
    ctx->pc = 0x4b3c30u;
}
