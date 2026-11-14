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

// Function: sub_00342A00
// Address: 0x342a00 - 0x342ba0
void sub_00342A00_0x342a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342A00_0x342a00");
#endif

    switch (ctx->pc) {
        case 0x342a00u: goto label_342a00;
        case 0x342a04u: goto label_342a04;
        case 0x342a08u: goto label_342a08;
        case 0x342a0cu: goto label_342a0c;
        case 0x342a10u: goto label_342a10;
        case 0x342a14u: goto label_342a14;
        case 0x342a18u: goto label_342a18;
        case 0x342a1cu: goto label_342a1c;
        case 0x342a20u: goto label_342a20;
        case 0x342a24u: goto label_342a24;
        case 0x342a28u: goto label_342a28;
        case 0x342a2cu: goto label_342a2c;
        case 0x342a30u: goto label_342a30;
        case 0x342a34u: goto label_342a34;
        case 0x342a38u: goto label_342a38;
        case 0x342a3cu: goto label_342a3c;
        case 0x342a40u: goto label_342a40;
        case 0x342a44u: goto label_342a44;
        case 0x342a48u: goto label_342a48;
        case 0x342a4cu: goto label_342a4c;
        case 0x342a50u: goto label_342a50;
        case 0x342a54u: goto label_342a54;
        case 0x342a58u: goto label_342a58;
        case 0x342a5cu: goto label_342a5c;
        case 0x342a60u: goto label_342a60;
        case 0x342a64u: goto label_342a64;
        case 0x342a68u: goto label_342a68;
        case 0x342a6cu: goto label_342a6c;
        case 0x342a70u: goto label_342a70;
        case 0x342a74u: goto label_342a74;
        case 0x342a78u: goto label_342a78;
        case 0x342a7cu: goto label_342a7c;
        case 0x342a80u: goto label_342a80;
        case 0x342a84u: goto label_342a84;
        case 0x342a88u: goto label_342a88;
        case 0x342a8cu: goto label_342a8c;
        case 0x342a90u: goto label_342a90;
        case 0x342a94u: goto label_342a94;
        case 0x342a98u: goto label_342a98;
        case 0x342a9cu: goto label_342a9c;
        case 0x342aa0u: goto label_342aa0;
        case 0x342aa4u: goto label_342aa4;
        case 0x342aa8u: goto label_342aa8;
        case 0x342aacu: goto label_342aac;
        case 0x342ab0u: goto label_342ab0;
        case 0x342ab4u: goto label_342ab4;
        case 0x342ab8u: goto label_342ab8;
        case 0x342abcu: goto label_342abc;
        case 0x342ac0u: goto label_342ac0;
        case 0x342ac4u: goto label_342ac4;
        case 0x342ac8u: goto label_342ac8;
        case 0x342accu: goto label_342acc;
        case 0x342ad0u: goto label_342ad0;
        case 0x342ad4u: goto label_342ad4;
        case 0x342ad8u: goto label_342ad8;
        case 0x342adcu: goto label_342adc;
        case 0x342ae0u: goto label_342ae0;
        case 0x342ae4u: goto label_342ae4;
        case 0x342ae8u: goto label_342ae8;
        case 0x342aecu: goto label_342aec;
        case 0x342af0u: goto label_342af0;
        case 0x342af4u: goto label_342af4;
        case 0x342af8u: goto label_342af8;
        case 0x342afcu: goto label_342afc;
        case 0x342b00u: goto label_342b00;
        case 0x342b04u: goto label_342b04;
        case 0x342b08u: goto label_342b08;
        case 0x342b0cu: goto label_342b0c;
        case 0x342b10u: goto label_342b10;
        case 0x342b14u: goto label_342b14;
        case 0x342b18u: goto label_342b18;
        case 0x342b1cu: goto label_342b1c;
        case 0x342b20u: goto label_342b20;
        case 0x342b24u: goto label_342b24;
        case 0x342b28u: goto label_342b28;
        case 0x342b2cu: goto label_342b2c;
        case 0x342b30u: goto label_342b30;
        case 0x342b34u: goto label_342b34;
        case 0x342b38u: goto label_342b38;
        case 0x342b3cu: goto label_342b3c;
        case 0x342b40u: goto label_342b40;
        case 0x342b44u: goto label_342b44;
        case 0x342b48u: goto label_342b48;
        case 0x342b4cu: goto label_342b4c;
        case 0x342b50u: goto label_342b50;
        case 0x342b54u: goto label_342b54;
        case 0x342b58u: goto label_342b58;
        case 0x342b5cu: goto label_342b5c;
        case 0x342b60u: goto label_342b60;
        case 0x342b64u: goto label_342b64;
        case 0x342b68u: goto label_342b68;
        case 0x342b6cu: goto label_342b6c;
        case 0x342b70u: goto label_342b70;
        case 0x342b74u: goto label_342b74;
        case 0x342b78u: goto label_342b78;
        case 0x342b7cu: goto label_342b7c;
        case 0x342b80u: goto label_342b80;
        case 0x342b84u: goto label_342b84;
        case 0x342b88u: goto label_342b88;
        case 0x342b8cu: goto label_342b8c;
        case 0x342b90u: goto label_342b90;
        case 0x342b94u: goto label_342b94;
        case 0x342b98u: goto label_342b98;
        case 0x342b9cu: goto label_342b9c;
        default: break;
    }

    ctx->pc = 0x342a00u;

label_342a00:
    // 0x342a00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x342a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_342a04:
    // 0x342a04: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x342a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_342a08:
    // 0x342a08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x342a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_342a0c:
    // 0x342a0c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x342a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_342a10:
    // 0x342a10: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x342a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_342a14:
    // 0x342a14: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x342a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_342a18:
    // 0x342a18: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x342a18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342a1c:
    // 0x342a1c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x342a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_342a20:
    // 0x342a20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_342a24:
    // 0x342a24: 0xc0d05d0  jal         func_341740
label_342a28:
    if (ctx->pc == 0x342A28u) {
        ctx->pc = 0x342A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342A24u;
        // 0x342a28: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342A2Cu;
        goto label_342a2c;
    }
    ctx->pc = 0x342A24u;
    SET_GPR_U32(ctx, 31, 0x342A2Cu);
    ctx->pc = 0x342A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A24u;
    // 0x342a28: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341740u, 0x342A24u, 0x342A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A2Cu;
label_342a2c:
    // 0x342a2c: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x342a2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_342a30:
    // 0x342a30: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x342a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_342a34:
    // 0x342a34: 0x58400012  blezl       $v0, . + 4 + (0x12 << 2)
label_342a38:
    if (ctx->pc == 0x342A38u) {
        ctx->pc = 0x342A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342A34u;
        // 0x342a38: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342A3Cu;
        goto label_342a3c;
    }
    ctx->pc = 0x342A34u;
    {
        const bool branch_taken_0x342a34 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x342a34) {
            ctx->pc = 0x342A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342A34u;
            // 0x342a38: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342A80u;
            goto label_342a80;
        }
    }
    ctx->pc = 0x342A3Cu;
label_342a3c:
    // 0x342a3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x342a3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342a40:
    // 0x342a40: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x342a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_342a44:
    // 0x342a44: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x342a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_342a48:
    // 0x342a48: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x342a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_342a4c:
    // 0x342a4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_342a50:
    if (ctx->pc == 0x342A50u) {
        ctx->pc = 0x342A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342A4Cu;
        // 0x342a50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342A54u;
        goto label_342a54;
    }
    ctx->pc = 0x342A4Cu;
    {
        const bool branch_taken_0x342a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342A4Cu;
        // 0x342a50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342a4c) {
            ctx->pc = 0x342A68u;
            goto label_342a68;
        }
    }
    ctx->pc = 0x342A54u;
label_342a54:
    // 0x342a54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x342a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_342a58:
    // 0x342a58: 0x40f809  jalr        $v0
label_342a5c:
    if (ctx->pc == 0x342A5Cu) {
        ctx->pc = 0x342A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342A58u;
        // 0x342a5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342A60u;
        goto label_342a60;
    }
    ctx->pc = 0x342A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x342A60u);
        ctx->pc = 0x342A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342A58u;
        // 0x342a5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342A58u, 0x342A60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342A60u;
label_342a60:
    // 0x342a60: 0x1450001a  bne         $v0, $s0, . + 4 + (0x1A << 2)
label_342a64:
    if (ctx->pc == 0x342A64u) {
        ctx->pc = 0x342A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342A60u;
        // 0x342a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342A68u;
        goto label_342a68;
    }
    ctx->pc = 0x342A60u;
    {
        const bool branch_taken_0x342a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x342A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342A60u;
        // 0x342a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342a60) {
            ctx->pc = 0x342ACCu;
            goto label_342acc;
        }
    }
    ctx->pc = 0x342A68u;
label_342a68:
    // 0x342a68: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x342a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_342a6c:
    // 0x342a6c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x342a6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_342a70:
    // 0x342a70: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x342a70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_342a74:
    // 0x342a74: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_342a78:
    if (ctx->pc == 0x342A78u) {
        ctx->pc = 0x342A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342A74u;
        // 0x342a78: 0x2652002c  addiu       $s2, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342A7Cu;
        goto label_342a7c;
    }
    ctx->pc = 0x342A74u;
    {
        const bool branch_taken_0x342a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x342A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342A74u;
        // 0x342a78: 0x2652002c  addiu       $s2, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342a74) {
            ctx->pc = 0x342A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342a40;
        }
    }
    ctx->pc = 0x342A7Cu;
label_342a7c:
    // 0x342a7c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x342a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_342a80:
    // 0x342a80: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x342a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_342a84:
    // 0x342a84: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x342a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_342a88:
    // 0x342a88: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x342a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_342a8c:
    // 0x342a8c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x342a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_342a90:
    // 0x342a90: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x342a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_342a94:
    // 0x342a94: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x342a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_342a98:
    // 0x342a98: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x342a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_342a9c:
    // 0x342a9c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x342a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_342aa0:
    // 0x342aa0: 0xc0d120c  jal         func_344830
label_342aa4:
    if (ctx->pc == 0x342AA4u) {
        ctx->pc = 0x342AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342AA0u;
        // 0x342aa4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342AA8u;
        goto label_342aa8;
    }
    ctx->pc = 0x342AA0u;
    SET_GPR_U32(ctx, 31, 0x342AA8u);
    ctx->pc = 0x342AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342AA0u;
    // 0x342aa4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x342AA0u, 0x342AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342AA8u;
label_342aa8:
    // 0x342aa8: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
label_342aac:
    if (ctx->pc == 0x342AACu) {
        ctx->pc = 0x342AB0u;
        goto label_342ab0;
    }
    ctx->pc = 0x342AA8u;
    {
        const bool branch_taken_0x342aa8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x342aa8) {
            ctx->pc = 0x342AB8u;
            goto label_342ab8;
        }
    }
    ctx->pc = 0x342AB0u;
label_342ab0:
    // 0x342ab0: 0xc0d1466  jal         func_345198
label_342ab4:
    if (ctx->pc == 0x342AB4u) {
        ctx->pc = 0x342AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342AB0u;
        // 0x342ab4: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342AB8u;
        goto label_342ab8;
    }
    ctx->pc = 0x342AB0u;
    SET_GPR_U32(ctx, 31, 0x342AB8u);
    ctx->pc = 0x342AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342AB0u;
    // 0x342ab4: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345198u, 0x342AB0u, 0x342AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342AB8u;
label_342ab8:
    // 0x342ab8: 0xc0d03c8  jal         func_340F20
label_342abc:
    if (ctx->pc == 0x342ABCu) {
        ctx->pc = 0x342ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342AB8u;
        // 0x342abc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342AC0u;
        goto label_342ac0;
    }
    ctx->pc = 0x342AB8u;
    SET_GPR_U32(ctx, 31, 0x342AC0u);
    ctx->pc = 0x342ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342AB8u;
    // 0x342abc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340F20u, 0x342AB8u, 0x342AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342AC0u;
label_342ac0:
    // 0x342ac0: 0xc0d0ce8  jal         func_3433A0
label_342ac4:
    if (ctx->pc == 0x342AC4u) {
        ctx->pc = 0x342AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342AC0u;
        // 0x342ac4: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342AC8u;
        goto label_342ac8;
    }
    ctx->pc = 0x342AC0u;
    SET_GPR_U32(ctx, 31, 0x342AC8u);
    ctx->pc = 0x342AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342AC0u;
    // 0x342ac4: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3433A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3433A0u, 0x342AC0u, 0x342AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342AC8u;
label_342ac8:
    // 0x342ac8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x342ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_342acc:
    // 0x342acc: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
label_342ad0:
    if (ctx->pc == 0x342AD0u) {
        ctx->pc = 0x342AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342ACCu;
        // 0x342ad0: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342AD4u;
        goto label_342ad4;
    }
    ctx->pc = 0x342ACCu;
    {
        const bool branch_taken_0x342acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x342AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342ACCu;
        // 0x342ad0: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342acc) {
            ctx->pc = 0x342AECu;
            goto label_342aec;
        }
    }
    ctx->pc = 0x342AD4u;
label_342ad4:
    // 0x342ad4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x342ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_342ad8:
    // 0x342ad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x342ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_342adc:
    // 0x342adc: 0x8c43e98c  lw          $v1, -0x1674($v0)
    ctx->pc = 0x342adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961548)));
label_342ae0:
    // 0x342ae0: 0x60f809  jalr        $v1
label_342ae4:
    if (ctx->pc == 0x342AE4u) {
        ctx->pc = 0x342AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342AE0u;
        // 0x342ae4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342AE8u;
        goto label_342ae8;
    }
    ctx->pc = 0x342AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x342AE8u);
        ctx->pc = 0x342AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342AE0u;
        // 0x342ae4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342AE0u, 0x342AE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342AE8u;
label_342ae8:
    // 0x342ae8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x342ae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_342aec:
    // 0x342aec: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x342aecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_342af0:
    // 0x342af0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x342af0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_342af4:
    // 0x342af4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x342af4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_342af8:
    // 0x342af8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x342af8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_342afc:
    // 0x342afc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x342afcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_342b00:
    // 0x342b00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x342b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_342b04:
    // 0x342b04: 0x3e00008  jr          $ra
label_342b08:
    if (ctx->pc == 0x342B08u) {
        ctx->pc = 0x342B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B04u;
        // 0x342b08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342B0Cu;
        goto label_342b0c;
    }
    ctx->pc = 0x342B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B04u;
        // 0x342b08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342B0Cu;
label_342b0c:
    // 0x342b0c: 0x0  nop
    ctx->pc = 0x342b0cu;
    // NOP
label_342b10:
    // 0x342b10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x342b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_342b14:
    // 0x342b14: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x342b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_342b18:
    // 0x342b18: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x342b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_342b1c:
    // 0x342b1c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x342b1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_342b20:
    // 0x342b20: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x342b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_342b24:
    // 0x342b24: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x342b24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_342b28:
    // 0x342b28: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x342b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_342b2c:
    // 0x342b2c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x342b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_342b30:
    // 0x342b30: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x342b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_342b34:
    // 0x342b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_342b38:
    // 0x342b38: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x342b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_342b3c:
    // 0x342b3c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_342b40:
    if (ctx->pc == 0x342B40u) {
        ctx->pc = 0x342B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B3Cu;
        // 0x342b40: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342B44u;
        goto label_342b44;
    }
    ctx->pc = 0x342B3Cu;
    {
        const bool branch_taken_0x342b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B3Cu;
        // 0x342b40: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342b3c) {
            ctx->pc = 0x342B74u;
            goto label_342b74;
        }
    }
    ctx->pc = 0x342B44u;
label_342b44:
    // 0x342b44: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x342b44u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_342b48:
    // 0x342b48: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x342b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_342b4c:
    // 0x342b4c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x342b4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_342b50:
    // 0x342b50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x342b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_342b54:
    // 0x342b54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x342b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_342b58:
    // 0x342b58: 0x2a0f809  jalr        $s5
label_342b5c:
    if (ctx->pc == 0x342B5Cu) {
        ctx->pc = 0x342B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B58u;
        // 0x342b5c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342B60u;
        goto label_342b60;
    }
    ctx->pc = 0x342B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x342B60u);
        ctx->pc = 0x342B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B58u;
        // 0x342b5c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342B58u, 0x342B60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342B60u;
label_342b60:
    // 0x342b60: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
label_342b64:
    if (ctx->pc == 0x342B64u) {
        ctx->pc = 0x342B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B60u;
        // 0x342b64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342B68u;
        goto label_342b68;
    }
    ctx->pc = 0x342B60u;
    {
        const bool branch_taken_0x342b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x342B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B60u;
        // 0x342b64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342b60) {
            ctx->pc = 0x342B78u;
            goto label_342b78;
        }
    }
    ctx->pc = 0x342B68u;
label_342b68:
    // 0x342b68: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x342b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_342b6c:
    // 0x342b6c: 0x5612fff8  bnel        $s0, $s2, . + 4 + (-0x8 << 2)
label_342b70:
    if (ctx->pc == 0x342B70u) {
        ctx->pc = 0x342B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B6Cu;
        // 0x342b70: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342B74u;
        goto label_342b74;
    }
    ctx->pc = 0x342B6Cu;
    {
        const bool branch_taken_0x342b6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x342b6c) {
            ctx->pc = 0x342B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342B6Cu;
            // 0x342b70: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342b50;
        }
    }
    ctx->pc = 0x342B74u;
label_342b74:
    // 0x342b74: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x342b74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_342b78:
    // 0x342b78: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x342b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_342b7c:
    // 0x342b7c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x342b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_342b80:
    // 0x342b80: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x342b80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_342b84:
    // 0x342b84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x342b84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_342b88:
    // 0x342b88: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x342b88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_342b8c:
    // 0x342b8c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x342b8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_342b90:
    // 0x342b90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x342b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_342b94:
    // 0x342b94: 0x3e00008  jr          $ra
label_342b98:
    if (ctx->pc == 0x342B98u) {
        ctx->pc = 0x342B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B94u;
        // 0x342b98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342B9Cu;
        goto label_342b9c;
    }
    ctx->pc = 0x342B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B94u;
        // 0x342b98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342B9Cu;
label_342b9c:
    // 0x342b9c: 0x0  nop
    ctx->pc = 0x342b9cu;
    // NOP
    ctx->pc = 0x342ba0u;
}
