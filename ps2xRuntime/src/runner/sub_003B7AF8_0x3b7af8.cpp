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

// Function: sub_003B7AF8
// Address: 0x3b7af8 - 0x3b7e10
void sub_003B7AF8_0x3b7af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B7AF8_0x3b7af8");
#endif

    switch (ctx->pc) {
        case 0x3b7b2cu: goto label_3b7b2c;
        case 0x3b7b58u: goto label_3b7b58;
        case 0x3b7b6cu: goto label_3b7b6c;
        case 0x3b7b80u: goto label_3b7b80;
        case 0x3b7b9cu: goto label_3b7b9c;
        case 0x3b7bb4u: goto label_3b7bb4;
        case 0x3b7bc0u: goto label_3b7bc0;
        case 0x3b7bd0u: goto label_3b7bd0;
        case 0x3b7c08u: goto label_3b7c08;
        case 0x3b7c18u: goto label_3b7c18;
        case 0x3b7c24u: goto label_3b7c24;
        case 0x3b7c38u: goto label_3b7c38;
        case 0x3b7c48u: goto label_3b7c48;
        case 0x3b7c54u: goto label_3b7c54;
        case 0x3b7c68u: goto label_3b7c68;
        case 0x3b7c78u: goto label_3b7c78;
        case 0x3b7c84u: goto label_3b7c84;
        case 0x3b7ca0u: goto label_3b7ca0;
        case 0x3b7ca8u: goto label_3b7ca8;
        case 0x3b7cb8u: goto label_3b7cb8;
        case 0x3b7cc4u: goto label_3b7cc4;
        case 0x3b7cd8u: goto label_3b7cd8;
        case 0x3b7ce8u: goto label_3b7ce8;
        case 0x3b7cf4u: goto label_3b7cf4;
        case 0x3b7d08u: goto label_3b7d08;
        case 0x3b7d18u: goto label_3b7d18;
        case 0x3b7d24u: goto label_3b7d24;
        case 0x3b7d38u: goto label_3b7d38;
        case 0x3b7d48u: goto label_3b7d48;
        case 0x3b7d54u: goto label_3b7d54;
        case 0x3b7db8u: goto label_3b7db8;
        case 0x3b7dc8u: goto label_3b7dc8;
        case 0x3b7dd8u: goto label_3b7dd8;
        default: break;
    }

    ctx->pc = 0x3b7af8u;

    // 0x3b7af8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3b7af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3b7afc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b7afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3b7b00: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3b7b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3b7b04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3b7b04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7b08: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3b7b08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7b0c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3b7b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3b7b10: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3b7b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3b7b14: 0x26840100  addiu       $a0, $s4, 0x100
    ctx->pc = 0x3b7b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
    // 0x3b7b18: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3b7b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3b7b1c: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x3b7b1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7b20: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3b7b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x3b7b24: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3b7b24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7b28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b7b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b7b2c:
    // 0x3b7b2c: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x3b7b2cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7b30: 0x78460010  lq          $a2, 0x10($v0)
    ctx->pc = 0x3b7b30u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3b7b34: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x3b7b34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x3b7b38: 0x7c660010  sq          $a2, 0x10($v1)
    ctx->pc = 0x3b7b38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 6));
    // 0x3b7b3c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3b7b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3b7b40: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B7B40u;
    {
        const bool branch_taken_0x3b7b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3B7B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7B40u;
        // 0x3b7b44: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7b40) {
            ctx->pc = 0x3B7B2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b7b2c;
        }
    }
    ctx->pc = 0x3B7B48u;
    // 0x3b7b48: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x3b7b48u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7b4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b7b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7b50: 0xc0edd64  jal         func_3B7590
    ctx->pc = 0x3B7B50u;
    SET_GPR_U32(ctx, 31, 0x3B7B58u);
    ctx->pc = 0x3B7B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7B50u;
    // 0x3b7b54: 0x7c650000  sq          $a1, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7590u, 0x3B7B50u, 0x3B7B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7B58u;
label_3b7b58:
    // 0x3b7b58: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b7b58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3b7b5c: 0x24040110  addiu       $a0, $zero, 0x110
    ctx->pc = 0x3b7b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x3b7b60: 0x34a50190  ori         $a1, $a1, 0x190
    ctx->pc = 0x3b7b60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
    // 0x3b7b64: 0xc103642  jal         func_40D908
    ctx->pc = 0x3B7B64u;
    SET_GPR_U32(ctx, 31, 0x3B7B6Cu);
    ctx->pc = 0x3B7B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7B64u;
    // 0x3b7b68: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3B7B64u, 0x3B7B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7B6Cu;
label_3b7b6c:
    // 0x3b7b6c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b7b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3b7b70: 0xae6200b0  sw          $v0, 0xB0($s3)
    ctx->pc = 0x3b7b70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 2));
    // 0x3b7b74: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3b7b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3b7b78: 0xc103642  jal         func_40D908
    ctx->pc = 0x3B7B78u;
    SET_GPR_U32(ctx, 31, 0x3B7B80u);
    ctx->pc = 0x3B7B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7B78u;
    // 0x3b7b7c: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3B7B78u, 0x3B7B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7B80u;
label_3b7b80:
    // 0x3b7b80: 0x12a0007b  beqz        $s5, . + 4 + (0x7B << 2)
    ctx->pc = 0x3B7B80u;
    {
        const bool branch_taken_0x3b7b80 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7B80u;
        // 0x3b7b84: 0xae6200b8  sw          $v0, 0xB8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7b80) {
            ctx->pc = 0x3B7D70u;
            goto label_3b7d70;
        }
    }
    ctx->pc = 0x3B7B88u;
    // 0x3b7b88: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x3b7b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x3b7b8c: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x3b7b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x3b7b90: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3b7b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7b94: 0xc103722  jal         func_40DC88
    ctx->pc = 0x3B7B94u;
    SET_GPR_U32(ctx, 31, 0x3B7B9Cu);
    ctx->pc = 0x3B7B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7B94u;
    // 0x3b7b98: 0x34c60190  ori         $a2, $a2, 0x190 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DC88u, 0x3B7B94u, 0x3B7B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7B9Cu;
label_3b7b9c:
    // 0x3b7b9c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3b7b9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7ba0: 0x8e6400b8  lw          $a0, 0xB8($s3)
    ctx->pc = 0x3b7ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
    // 0x3b7ba4: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x3b7ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x3b7ba8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3b7ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7bac: 0xc103722  jal         func_40DC88
    ctx->pc = 0x3B7BACu;
    SET_GPR_U32(ctx, 31, 0x3B7BB4u);
    ctx->pc = 0x3B7BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7BACu;
    // 0x3b7bb0: 0x34c60190  ori         $a2, $a2, 0x190 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DC88u, 0x3B7BACu, 0x3B7BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7BB4u;
label_3b7bb4:
    // 0x3b7bb4: 0x8e8400b8  lw          $a0, 0xB8($s4)
    ctx->pc = 0x3b7bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
    // 0x3b7bb8: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3B7BB8u;
    SET_GPR_U32(ctx, 31, 0x3B7BC0u);
    ctx->pc = 0x3B7BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7BB8u;
    // 0x3b7bbc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B7BB8u, 0x3B7BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7BC0u;
label_3b7bc0:
    // 0x3b7bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b7bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7bc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b7bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7bc8: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3B7BC8u;
    SET_GPR_U32(ctx, 31, 0x3B7BD0u);
    ctx->pc = 0x3B7BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7BC8u;
    // 0x3b7bcc: 0x1530c0  sll         $a2, $s5, 3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3B7BC8u, 0x3B7BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7BD0u;
label_3b7bd0:
    // 0x3b7bd0: 0x12a00068  beqz        $s5, . + 4 + (0x68 << 2)
    ctx->pc = 0x3B7BD0u;
    {
        const bool branch_taken_0x3b7bd0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7BD0u;
        // 0x3b7bd4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7bd0) {
            ctx->pc = 0x3B7D74u;
            goto label_3b7d74;
        }
    }
    ctx->pc = 0x3B7BD8u;
    // 0x3b7bd8: 0x1aa00020  blez        $s5, . + 4 + (0x20 << 2)
    ctx->pc = 0x3B7BD8u;
    {
        const bool branch_taken_0x3b7bd8 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x3B7BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7BD8u;
        // 0x3b7bdc: 0x32a30003  andi        $v1, $s5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7bd8) {
            ctx->pc = 0x3B7C5Cu;
            goto label_3b7c5c;
        }
    }
    ctx->pc = 0x3B7BE0u;
    // 0x3b7be0: 0x5060002f  beql        $v1, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x3B7BE0u;
    {
        const bool branch_taken_0x3b7be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7be0) {
            ctx->pc = 0x3B7BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B7BE0u;
            // 0x3b7be4: 0x8e6400b0  lw          $a0, 0xB0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B7CA0u;
            goto label_3b7ca0;
        }
    }
    ctx->pc = 0x3B7BE8u;
    // 0x3b7be8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3b7be8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3b7bec: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3B7BECu;
    {
        const bool branch_taken_0x3b7bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B7BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7BECu;
        // 0x3b7bf0: 0x8e6400b0  lw          $a0, 0xB0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7bec) {
            ctx->pc = 0x3B7C60u;
            goto label_3b7c60;
        }
    }
    ctx->pc = 0x3B7BF4u;
    // 0x3b7bf4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3b7bf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3b7bf8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3B7BF8u;
    {
        const bool branch_taken_0x3b7bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b7bf8) {
            ctx->pc = 0x3B7C30u;
            goto label_3b7c30;
        }
    }
    ctx->pc = 0x3B7C00u;
    // 0x3b7c00: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3B7C00u;
    SET_GPR_U32(ctx, 31, 0x3B7C08u);
    ctx->pc = 0x3B7C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7C00u;
    // 0x3b7c04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3B7C00u, 0x3B7C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7C08u;
label_3b7c08:
    // 0x3b7c08: 0x8e8400b0  lw          $a0, 0xB0($s4)
    ctx->pc = 0x3b7c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x3b7c0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b7c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7c10: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3B7C10u;
    SET_GPR_U32(ctx, 31, 0x3B7C18u);
    ctx->pc = 0x3B7C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7C10u;
    // 0x3b7c14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3B7C10u, 0x3B7C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7C18u;
label_3b7c18:
    // 0x3b7c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b7c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7c1c: 0xc0ed0f4  jal         func_3B43D0
    ctx->pc = 0x3B7C1Cu;
    SET_GPR_U32(ctx, 31, 0x3B7C24u);
    ctx->pc = 0x3B7C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7C1Cu;
    // 0x3b7c20: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B43D0u, 0x3B7C1Cu, 0x3B7C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7C24u;
label_3b7c24:
    // 0x3b7c24: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x3B7C24u;
    {
        const bool branch_taken_0x3b7c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7C24u;
        // 0x3b7c28: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7c24) {
            ctx->pc = 0x3B7D5Cu;
            goto label_3b7d5c;
        }
    }
    ctx->pc = 0x3B7C2Cu;
    // 0x3b7c2c: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x3b7c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_3b7c30:
    // 0x3b7c30: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3B7C30u;
    SET_GPR_U32(ctx, 31, 0x3B7C38u);
    ctx->pc = 0x3B7C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7C30u;
    // 0x3b7c34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3B7C30u, 0x3B7C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7C38u;
label_3b7c38:
    // 0x3b7c38: 0x8e8400b0  lw          $a0, 0xB0($s4)
    ctx->pc = 0x3b7c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x3b7c3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b7c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7c40: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3B7C40u;
    SET_GPR_U32(ctx, 31, 0x3B7C48u);
    ctx->pc = 0x3B7C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7C40u;
    // 0x3b7c44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3B7C40u, 0x3B7C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7C48u;
label_3b7c48:
    // 0x3b7c48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b7c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7c4c: 0xc0ed0f4  jal         func_3B43D0
    ctx->pc = 0x3B7C4Cu;
    SET_GPR_U32(ctx, 31, 0x3B7C54u);
    ctx->pc = 0x3B7C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7C4Cu;
    // 0x3b7c50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B43D0u, 0x3B7C4Cu, 0x3B7C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7C54u;
label_3b7c54:
    // 0x3b7c54: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x3B7C54u;
    {
        const bool branch_taken_0x3b7c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7C54u;
        // 0x3b7c58: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7c54) {
            ctx->pc = 0x3B7D5Cu;
            goto label_3b7d5c;
        }
    }
    ctx->pc = 0x3B7C5Cu;
label_3b7c5c:
    // 0x3b7c5c: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x3b7c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_3b7c60:
    // 0x3b7c60: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3B7C60u;
    SET_GPR_U32(ctx, 31, 0x3B7C68u);
    ctx->pc = 0x3B7C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7C60u;
    // 0x3b7c64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3B7C60u, 0x3B7C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7C68u;
label_3b7c68:
    // 0x3b7c68: 0x8e8400b0  lw          $a0, 0xB0($s4)
    ctx->pc = 0x3b7c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x3b7c6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b7c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7c70: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3B7C70u;
    SET_GPR_U32(ctx, 31, 0x3B7C78u);
    ctx->pc = 0x3B7C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7C70u;
    // 0x3b7c74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3B7C70u, 0x3B7C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7C78u;
label_3b7c78:
    // 0x3b7c78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b7c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7c7c: 0xc0ed0f4  jal         func_3B43D0
    ctx->pc = 0x3B7C7Cu;
    SET_GPR_U32(ctx, 31, 0x3B7C84u);
    ctx->pc = 0x3B7C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7C7Cu;
    // 0x3b7c80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B43D0u, 0x3B7C7Cu, 0x3B7C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7C84u;
label_3b7c84:
    // 0x3b7c84: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3B7C84u;
    {
        const bool branch_taken_0x3b7c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7C84u;
        // 0x3b7c88: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7c84) {
            ctx->pc = 0x3B7D5Cu;
            goto label_3b7d5c;
        }
    }
    ctx->pc = 0x3B7C8Cu;
    // 0x3b7c8c: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x3b7c8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x3b7c90: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x3B7C90u;
    {
        const bool branch_taken_0x3b7c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7C90u;
        // 0x3b7c94: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7c90) {
            ctx->pc = 0x3B7D74u;
            goto label_3b7d74;
        }
    }
    ctx->pc = 0x3B7C98u;
    // 0x3b7c98: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x3b7c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x3b7c9c: 0x0  nop
    ctx->pc = 0x3b7c9cu;
    // NOP
label_3b7ca0:
    // 0x3b7ca0: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3B7CA0u;
    SET_GPR_U32(ctx, 31, 0x3B7CA8u);
    ctx->pc = 0x3B7CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7CA0u;
    // 0x3b7ca4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3B7CA0u, 0x3B7CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7CA8u;
label_3b7ca8:
    // 0x3b7ca8: 0x8e8400b0  lw          $a0, 0xB0($s4)
    ctx->pc = 0x3b7ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x3b7cac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b7cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7cb0: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3B7CB0u;
    SET_GPR_U32(ctx, 31, 0x3B7CB8u);
    ctx->pc = 0x3B7CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7CB0u;
    // 0x3b7cb4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3B7CB0u, 0x3B7CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7CB8u;
label_3b7cb8:
    // 0x3b7cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b7cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7cbc: 0xc0ed0f4  jal         func_3B43D0
    ctx->pc = 0x3B7CBCu;
    SET_GPR_U32(ctx, 31, 0x3B7CC4u);
    ctx->pc = 0x3B7CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7CBCu;
    // 0x3b7cc0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B43D0u, 0x3B7CBCu, 0x3B7CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7CC4u;
label_3b7cc4:
    // 0x3b7cc4: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3B7CC4u;
    {
        const bool branch_taken_0x3b7cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7CC4u;
        // 0x3b7cc8: 0x26510001  addiu       $s1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7cc4) {
            ctx->pc = 0x3B7D5Cu;
            goto label_3b7d5c;
        }
    }
    ctx->pc = 0x3B7CCCu;
    // 0x3b7ccc: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x3b7cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x3b7cd0: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3B7CD0u;
    SET_GPR_U32(ctx, 31, 0x3B7CD8u);
    ctx->pc = 0x3B7CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7CD0u;
    // 0x3b7cd4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3B7CD0u, 0x3B7CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7CD8u;
label_3b7cd8:
    // 0x3b7cd8: 0x8e8400b0  lw          $a0, 0xB0($s4)
    ctx->pc = 0x3b7cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x3b7cdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b7cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7ce0: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3B7CE0u;
    SET_GPR_U32(ctx, 31, 0x3B7CE8u);
    ctx->pc = 0x3B7CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7CE0u;
    // 0x3b7ce4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3B7CE0u, 0x3B7CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7CE8u;
label_3b7ce8:
    // 0x3b7ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b7ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7cec: 0xc0ed0f4  jal         func_3B43D0
    ctx->pc = 0x3B7CECu;
    SET_GPR_U32(ctx, 31, 0x3B7CF4u);
    ctx->pc = 0x3B7CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7CECu;
    // 0x3b7cf0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B43D0u, 0x3B7CECu, 0x3B7CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7CF4u;
label_3b7cf4:
    // 0x3b7cf4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3B7CF4u;
    {
        const bool branch_taken_0x3b7cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7CF4u;
        // 0x3b7cf8: 0x26510002  addiu       $s1, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7cf4) {
            ctx->pc = 0x3B7D5Cu;
            goto label_3b7d5c;
        }
    }
    ctx->pc = 0x3B7CFCu;
    // 0x3b7cfc: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x3b7cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x3b7d00: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3B7D00u;
    SET_GPR_U32(ctx, 31, 0x3B7D08u);
    ctx->pc = 0x3B7D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7D00u;
    // 0x3b7d04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3B7D00u, 0x3B7D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7D08u;
label_3b7d08:
    // 0x3b7d08: 0x8e8400b0  lw          $a0, 0xB0($s4)
    ctx->pc = 0x3b7d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x3b7d0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b7d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7d10: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3B7D10u;
    SET_GPR_U32(ctx, 31, 0x3B7D18u);
    ctx->pc = 0x3B7D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7D10u;
    // 0x3b7d14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3B7D10u, 0x3B7D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7D18u;
label_3b7d18:
    // 0x3b7d18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b7d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7d1c: 0xc0ed0f4  jal         func_3B43D0
    ctx->pc = 0x3B7D1Cu;
    SET_GPR_U32(ctx, 31, 0x3B7D24u);
    ctx->pc = 0x3B7D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7D1Cu;
    // 0x3b7d20: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B43D0u, 0x3B7D1Cu, 0x3B7D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7D24u;
label_3b7d24:
    // 0x3b7d24: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3B7D24u;
    {
        const bool branch_taken_0x3b7d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7D24u;
        // 0x3b7d28: 0x26510003  addiu       $s1, $s2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7d24) {
            ctx->pc = 0x3B7D5Cu;
            goto label_3b7d5c;
        }
    }
    ctx->pc = 0x3B7D2Cu;
    // 0x3b7d2c: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x3b7d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x3b7d30: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3B7D30u;
    SET_GPR_U32(ctx, 31, 0x3B7D38u);
    ctx->pc = 0x3B7D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7D30u;
    // 0x3b7d34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3B7D30u, 0x3B7D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7D38u;
label_3b7d38:
    // 0x3b7d38: 0x8e8400b0  lw          $a0, 0xB0($s4)
    ctx->pc = 0x3b7d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x3b7d3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b7d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7d40: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3B7D40u;
    SET_GPR_U32(ctx, 31, 0x3B7D48u);
    ctx->pc = 0x3B7D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7D40u;
    // 0x3b7d44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3B7D40u, 0x3B7D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7D48u;
label_3b7d48:
    // 0x3b7d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b7d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7d4c: 0xc0ed0f4  jal         func_3B43D0
    ctx->pc = 0x3B7D4Cu;
    SET_GPR_U32(ctx, 31, 0x3B7D54u);
    ctx->pc = 0x3B7D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7D4Cu;
    // 0x3b7d50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B43D0u, 0x3B7D4Cu, 0x3B7D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7D54u;
label_3b7d54:
    // 0x3b7d54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B7D54u;
    {
        const bool branch_taken_0x3b7d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B7D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7D54u;
        // 0x3b7d58: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7d54) {
            ctx->pc = 0x3B7D64u;
            goto label_3b7d64;
        }
    }
    ctx->pc = 0x3B7D5Cu;
label_3b7d5c:
    // 0x3b7d5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B7D5Cu;
    {
        const bool branch_taken_0x3b7d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7D5Cu;
        // 0x3b7d60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7d5c) {
            ctx->pc = 0x3B7D74u;
            goto label_3b7d74;
        }
    }
    ctx->pc = 0x3B7D64u;
label_3b7d64:
    // 0x3b7d64: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x3b7d64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x3b7d68: 0x5440ffcd  bnel        $v0, $zero, . + 4 + (-0x33 << 2)
    ctx->pc = 0x3B7D68u;
    {
        const bool branch_taken_0x3b7d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b7d68) {
            ctx->pc = 0x3B7D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B7D68u;
            // 0x3b7d6c: 0x8e6400b0  lw          $a0, 0xB0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B7CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b7ca0;
        }
    }
    ctx->pc = 0x3B7D70u;
label_3b7d70:
    // 0x3b7d70: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3b7d70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b7d74:
    // 0x3b7d74: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3b7d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b7d78: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3b7d78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b7d7c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3b7d7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b7d80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b7d80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b7d84: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3b7d84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b7d88: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3b7d88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b7d8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b7d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b7d90: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7D90u;
        // 0x3b7d94: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7D98u;
    // 0x3b7d98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b7d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b7d9c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3b7d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3b7da0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3b7da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3b7da4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3b7da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7da8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b7da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3b7dac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b7dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b7db0: 0xc0ed294  jal         func_3B4A50
    ctx->pc = 0x3B7DB0u;
    SET_GPR_U32(ctx, 31, 0x3B7DB8u);
    ctx->pc = 0x3B7DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7DB0u;
    // 0x3b7db4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4A50u, 0x3B7DB0u, 0x3B7DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7DB8u;
label_3b7db8:
    // 0x3b7db8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b7db8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7dbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b7dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7dc0: 0xc0ed13c  jal         func_3B44F0
    ctx->pc = 0x3B7DC0u;
    SET_GPR_U32(ctx, 31, 0x3B7DC8u);
    ctx->pc = 0x3B7DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7DC0u;
    // 0x3b7dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B44F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B44F0u, 0x3B7DC0u, 0x3B7DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7DC8u;
label_3b7dc8:
    // 0x3b7dc8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b7dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3b7dcc: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x3b7dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x3b7dd0: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3B7DD0u;
    SET_GPR_U32(ctx, 31, 0x3B7DD8u);
    ctx->pc = 0x3B7DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7DD0u;
    // 0x3b7dd4: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3B7DD0u, 0x3B7DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7DD8u;
label_3b7dd8:
    // 0x3b7dd8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B7DD8u;
    {
        const bool branch_taken_0x3b7dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7dd8) {
            ctx->pc = 0x3B7DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B7DD8u;
            // 0x3b7ddc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B7DF4u;
            goto label_3b7df4;
        }
    }
    ctx->pc = 0x3B7DE0u;
    // 0x3b7de0: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3b7de0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x3b7de4: 0x8e4200b4  lw          $v0, 0xB4($s2)
    ctx->pc = 0x3b7de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x3b7de8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b7de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b7dec: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x3b7decu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
    // 0x3b7df0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b7df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b7df4:
    // 0x3b7df4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3b7df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b7df8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b7df8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b7dfc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3b7dfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b7e00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b7e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b7e04: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7E04u;
        // 0x3b7e08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7E0Cu;
    // 0x3b7e0c: 0x0  nop
    ctx->pc = 0x3b7e0cu;
    // NOP
    ctx->pc = 0x3b7e10u;
}
