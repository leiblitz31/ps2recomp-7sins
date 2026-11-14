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

// Function: sub_00442A48
// Address: 0x442a48 - 0x442df8
void sub_00442A48_0x442a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00442A48_0x442a48");
#endif

    switch (ctx->pc) {
        case 0x442a78u: goto label_442a78;
        case 0x442ac4u: goto label_442ac4;
        case 0x442c10u: goto label_442c10;
        case 0x442d60u: goto label_442d60;
        default: break;
    }

    ctx->pc = 0x442a48u;

    // 0x442a48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x442a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x442a4c: 0x8f83beb8  lw          $v1, -0x4148($gp)
    ctx->pc = 0x442a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x442a50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x442a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x442a54: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x442a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x442a58: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x442a58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442a5c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x442a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x442a60: 0x2438821  addu        $s1, $s2, $v1
    ctx->pc = 0x442a60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x442a64: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x442a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x442a68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x442a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x442a6c: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x442a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x442a70: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x442A70u;
    {
        const bool branch_taken_0x442a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x442a70) {
            ctx->pc = 0x442A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x442A70u;
            // 0x442a74: 0x92420021  lbu         $v0, 0x21($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 33)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x442A80u;
            goto label_442a80;
        }
    }
    ctx->pc = 0x442A78u;
label_442a78:
    // 0x442a78: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x442A78u;
    {
        const bool branch_taken_0x442a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x442A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442A78u;
        // 0x442a7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442a78) {
            ctx->pc = 0x442DD8u;
            goto label_442dd8;
        }
    }
    ctx->pc = 0x442A80u;
label_442a80:
    // 0x442a80: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x442a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x442a84: 0x104000d4  beqz        $v0, . + 4 + (0xD4 << 2)
    ctx->pc = 0x442A84u;
    {
        const bool branch_taken_0x442a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x442A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442A84u;
        // 0x442a88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442a84) {
            ctx->pc = 0x442DD8u;
            goto label_442dd8;
        }
    }
    ctx->pc = 0x442A8Cu;
    // 0x442a8c: 0x92220036  lbu         $v0, 0x36($s1)
    ctx->pc = 0x442a8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
    // 0x442a90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x442a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x442a94: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x442A94u;
    {
        const bool branch_taken_0x442a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x442A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442A94u;
        // 0x442a98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442a94) {
            ctx->pc = 0x442A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_442a78;
        }
    }
    ctx->pc = 0x442A9Cu;
    // 0x442a9c: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x442a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x442aa0: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x442aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x442aa4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x442aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x442aa8: 0x24700010  addiu       $s0, $v1, 0x10
    ctx->pc = 0x442aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x442aac: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x442aacu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x442ab0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x442ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x442ab4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x442ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x442ab8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x442ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x442abc: 0xc10a542  jal         func_429508
    ctx->pc = 0x442ABCu;
    SET_GPR_U32(ctx, 31, 0x442AC4u);
    ctx->pc = 0x442AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x442ABCu;
    // 0x442ac0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429508u, 0x442ABCu, 0x442AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x442AC4u;
label_442ac4:
    // 0x442ac4: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x442ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x442ac8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x442ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x442acc: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x442accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x442ad0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x442ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x442ad4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x442ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x442ad8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x442ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x442adc: 0x319ba  dsrl        $v1, $v1, 6
    ctx->pc = 0x442adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 6);
    // 0x442ae0: 0x8f87be24  lw          $a3, -0x41DC($gp)
    ctx->pc = 0x442ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950436)));
    // 0x442ae4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x442ae4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x442ae8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x442ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x442aec: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x442aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x442af0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x442af0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x442af4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x442af4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x442af8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x442af8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x442afc: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x442afcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x442b00: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x442b00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x442b04: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x442b04u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x442b08: 0xde040008  ld          $a0, 0x8($s0)
    ctx->pc = 0x442b08u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x442b0c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x442b0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x442b10: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x442b10u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x442b14: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x442b14u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x442b18: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x442b18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x442b1c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x442b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x442b20: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x442b20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x442b24: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x442b24u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x442b28: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x442b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x442b2c: 0x8e29002c  lw          $t1, 0x2C($s1)
    ctx->pc = 0x442b2cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x442b30: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x442b30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x442b34: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x442b34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x442b38: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x442b38u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x442b3c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x442b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x442b40: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x442b40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x442b44: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x442b44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x442b48: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x442b48u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x442b4c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x442b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x442b50: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x442b50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x442b54: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x442b54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x442b58: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x442b58u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x442b5c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x442b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x442b60: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x442b60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x442b64: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x442b64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x442b68: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x442b68u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x442b6c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x442b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x442b70: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x442b70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x442b74: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x442b74u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x442b78: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x442b78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x442b7c: 0x2529ffb0  addiu       $t1, $t1, -0x50
    ctx->pc = 0x442b7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967216));
    // 0x442b80: 0x2d220040  sltiu       $v0, $t1, 0x40
    ctx->pc = 0x442b80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x442b84: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x442B84u;
    {
        const bool branch_taken_0x442b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x442B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442B84u;
        // 0x442b88: 0x8e500008  lw          $s0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442b84) {
            ctx->pc = 0x442C88u;
            goto label_442c88;
        }
    }
    ctx->pc = 0x442B8Cu;
    // 0x442b8c: 0x11200046  beqz        $t1, . + 4 + (0x46 << 2)
    ctx->pc = 0x442B8Cu;
    {
        const bool branch_taken_0x442b8c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x442B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442B8Cu;
        // 0x442b90: 0x3c13005e  lui         $s3, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442b8c) {
            ctx->pc = 0x442CA8u;
            goto label_442ca8;
        }
    }
    ctx->pc = 0x442B94u;
    // 0x442b94: 0x91023  negu        $v0, $t1
    ctx->pc = 0x442b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x442b98: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x442b98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442b9c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x442b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x442ba0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x442BA0u;
    {
        const bool branch_taken_0x442ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x442BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442BA0u;
        // 0x442ba4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442ba0) {
            ctx->pc = 0x442C08u;
            goto label_442c08;
        }
    }
    ctx->pc = 0x442BA8u;
    // 0x442ba8: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x442ba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x442bac: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x442BACu;
    {
        const bool branch_taken_0x442bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x442BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442BACu;
        // 0x442bb0: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442bac) {
            ctx->pc = 0x442C10u;
            goto label_442c10;
        }
    }
    ctx->pc = 0x442BB4u;
    // 0x442bb4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x442bb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x442bb8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x442bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x442bbc: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x442bbcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x442bc0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x442bc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x442bc4: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x442bc4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x442bc8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x442bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x442bcc: 0x7a050000  lq          $a1, 0x0($s0)
    ctx->pc = 0x442bccu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x442bd0: 0x26080010  addiu       $t0, $s0, 0x10
    ctx->pc = 0x442bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x442bd4: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x442bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x442bd8: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x442bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x442bdc: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x442bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x442be0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x442be0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x442be4: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x442be4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
    // 0x442be8: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x442be8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x442bec: 0x7ce50000  sq          $a1, 0x0($a3)
    ctx->pc = 0x442becu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 5));
    // 0x442bf0: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x442bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x442bf4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x442bf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442bf8: 0x2529ffc0  addiu       $t1, $t1, -0x40
    ctx->pc = 0x442bf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967232));
    // 0x442bfc: 0x1120002a  beqz        $t1, . + 4 + (0x2A << 2)
    ctx->pc = 0x442BFCu;
    {
        const bool branch_taken_0x442bfc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x442C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442BFCu;
        // 0x442c00: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442bfc) {
            ctx->pc = 0x442CA8u;
            goto label_442ca8;
        }
    }
    ctx->pc = 0x442C04u;
    // 0x442c04: 0x0  nop
    ctx->pc = 0x442c04u;
    // NOP
label_442c08:
    // 0x442c08: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x442c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442c0c: 0x0  nop
    ctx->pc = 0x442c0cu;
    // NOP
label_442c10:
    // 0x442c10: 0x79030010  lq          $v1, 0x10($t0)
    ctx->pc = 0x442c10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x442c14: 0x79040020  lq          $a0, 0x20($t0)
    ctx->pc = 0x442c14u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x442c18: 0x79050030  lq          $a1, 0x30($t0)
    ctx->pc = 0x442c18u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x442c1c: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x442c1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x442c20: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x442c20u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x442c24: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x442c24u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x442c28: 0x7cc40020  sq          $a0, 0x20($a2)
    ctx->pc = 0x442c28u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 4));
    // 0x442c2c: 0x7cc50030  sq          $a1, 0x30($a2)
    ctx->pc = 0x442c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 5));
    // 0x442c30: 0x79020040  lq          $v0, 0x40($t0)
    ctx->pc = 0x442c30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 64)));
    // 0x442c34: 0x25080050  addiu       $t0, $t0, 0x50
    ctx->pc = 0x442c34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
    // 0x442c38: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x442c38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x442c3c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x442c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x442c40: 0x79040000  lq          $a0, 0x0($t0)
    ctx->pc = 0x442c40u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x442c44: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x442c44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x442c48: 0x79050000  lq          $a1, 0x0($t0)
    ctx->pc = 0x442c48u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x442c4c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x442c4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x442c50: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x442c50u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x442c54: 0x24c60050  addiu       $a2, $a2, 0x50
    ctx->pc = 0x442c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x442c58: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x442c58u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x442c5c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x442c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x442c60: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x442c60u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x442c64: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x442c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x442c68: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x442c68u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x442c6c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x442c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x442c70: 0x2529ff80  addiu       $t1, $t1, -0x80
    ctx->pc = 0x442c70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967168));
    // 0x442c74: 0x1520ffe6  bnez        $t1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x442C74u;
    {
        const bool branch_taken_0x442c74 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x442C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442C74u;
        // 0x442c78: 0x24e70080  addiu       $a3, $a3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442c74) {
            ctx->pc = 0x442C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_442c10;
        }
    }
    ctx->pc = 0x442C7Cu;
    // 0x442c7c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x442C7Cu;
    {
        const bool branch_taken_0x442c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x442c7c) {
            ctx->pc = 0x442CA8u;
            goto label_442ca8;
        }
    }
    ctx->pc = 0x442C84u;
    // 0x442c84: 0x0  nop
    ctx->pc = 0x442c84u;
    // NOP
label_442c88:
    // 0x442c88: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x442c88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x442c8c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x442c8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x442c90: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x442c90u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x442c94: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x442c94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x442c98: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x442c98u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x442c9c: 0x3c13005e  lui         $s3, 0x5E
    ctx->pc = 0x442c9cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
    // 0x442ca0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x442ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x442ca4: 0x0  nop
    ctx->pc = 0x442ca4u;
    // NOP
label_442ca8:
    // 0x442ca8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x442ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x442cac: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x442cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x442cb0: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x442cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x442cb4: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x442cb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x442cb8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x442cb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x442cbc: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x442cbcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x442cc0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x442cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x442cc4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x442cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x442cc8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x442cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x442ccc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x442cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x442cd0: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x442cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x442cd4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x442cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x442cd8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x442cd8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x442cdc: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x442cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x442ce0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x442ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x442ce4: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x442ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x442ce8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x442ce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442cec: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x442cecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x442cf0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x442cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x442cf4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x442cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x442cf8: 0xaf87be24  sw          $a3, -0x41DC($gp)
    ctx->pc = 0x442cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950436), GPR_U32(ctx, 7));
    // 0x442cfc: 0x2663d7c0  addiu       $v1, $s3, -0x2840
    ctx->pc = 0x442cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956992));
    // 0x442d00: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x442d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x442d04: 0x14520034  bne         $v0, $s2, . + 4 + (0x34 << 2)
    ctx->pc = 0x442D04u;
    {
        const bool branch_taken_0x442d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x442D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442D04u;
        // 0x442d08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442d04) {
            ctx->pc = 0x442DD8u;
            goto label_442dd8;
        }
    }
    ctx->pc = 0x442D0Cu;
    // 0x442d0c: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x442d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x442d10: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x442d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x442d14: 0x800013  mtlo        $a0
    ctx->pc = 0x442d14u;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x442d18: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x442D18u;
    {
        const bool branch_taken_0x442d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x442D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442D18u;
        // 0x442d1c: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442d18) {
            ctx->pc = 0x442D40u;
            goto label_442d40;
        }
    }
    ctx->pc = 0x442D20u;
    // 0x442d20: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x442d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x442d24: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x442d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x442d28: 0x70431000  madd        $v0, $v0, $v1
    ctx->pc = 0x442d28u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x442d2c: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x442D2Cu;
    {
        const bool branch_taken_0x442d2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x442D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442D2Cu;
        // 0x442d30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442d2c) {
            ctx->pc = 0x442D54u;
            goto label_442d54;
        }
    }
    ctx->pc = 0x442D34u;
    // 0x442d34: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x442D34u;
    {
        const bool branch_taken_0x442d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x442D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442D34u;
        // 0x442d38: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442d34) {
            ctx->pc = 0x442DDCu;
            goto label_442ddc;
        }
    }
    ctx->pc = 0x442D3Cu;
    // 0x442d3c: 0x0  nop
    ctx->pc = 0x442d3cu;
    // NOP
label_442d40:
    // 0x442d40: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x442d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x442d44: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x442d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x442d48: 0x70431000  madd        $v0, $v0, $v1
    ctx->pc = 0x442d48u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x442d4c: 0x14820022  bne         $a0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x442D4Cu;
    {
        const bool branch_taken_0x442d4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x442D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442D4Cu;
        // 0x442d50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442d4c) {
            ctx->pc = 0x442DD8u;
            goto label_442dd8;
        }
    }
    ctx->pc = 0x442D54u;
label_442d54:
    // 0x442d54: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x442d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x442d58: 0xc10a322  jal         func_428C88
    ctx->pc = 0x442D58u;
    SET_GPR_U32(ctx, 31, 0x442D60u);
    ctx->pc = 0x442D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x442D58u;
    // 0x442d5c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x442D58u, 0x442D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x442D60u;
label_442d60:
    // 0x442d60: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x442d60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x442d64: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x442d64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x442d68: 0x34c68002  ori         $a2, $a2, 0x8002
    ctx->pc = 0x442d68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32770);
    // 0x442d6c: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x442d6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x442d70: 0x71063389  pcpyld      $a2, $t0, $a2
    ctx->pc = 0x442d70u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 6)));
    // 0x442d74: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x442d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x442d78: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x442d78u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x442d7c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x442d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x442d80: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x442d80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x442d84: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x442d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x442d88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x442d88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442d8c: 0x70823389  pcpyld      $a2, $a0, $v0
    ctx->pc = 0x442d8cu;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x442d90: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x442d90u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x442d94: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x442d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x442d98: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x442d98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x442d9c: 0x9e260008  lwu         $a2, 0x8($s1)
    ctx->pc = 0x442d9cu;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x442da0: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x442da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x442da4: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x442da4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x442da8: 0x9e22000c  lwu         $v0, 0xC($s1)
    ctx->pc = 0x442da8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x442dac: 0x2664d7c0  addiu       $a0, $s3, -0x2840
    ctx->pc = 0x442dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956992));
    // 0x442db0: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x442db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x442db4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x442db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x442db8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x442db8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x442dbc: 0xe5400b  movn        $t0, $a3, $a1
    ctx->pc = 0x442dbcu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 7));
    // 0x442dc0: 0x71063389  pcpyld      $a2, $t0, $a2
    ctx->pc = 0x442dc0u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 6)));
    // 0x442dc4: 0x7c660010  sq          $a2, 0x10($v1)
    ctx->pc = 0x442dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 6));
    // 0x442dc8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x442dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x442dcc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x442dccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x442dd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x442dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x442dd4: 0x0  nop
    ctx->pc = 0x442dd4u;
    // NOP
label_442dd8:
    // 0x442dd8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x442dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_442ddc:
    // 0x442ddc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x442ddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x442de0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x442de0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x442de4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x442de4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x442de8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x442de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x442dec: 0x3e00008  jr          $ra
    ctx->pc = 0x442DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x442DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442DECu;
        // 0x442df0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x442DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x442DF4u;
    // 0x442df4: 0x0  nop
    ctx->pc = 0x442df4u;
    // NOP
    ctx->pc = 0x442df8u;
}
