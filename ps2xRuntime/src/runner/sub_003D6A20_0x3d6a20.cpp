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

// Function: sub_003D6A20
// Address: 0x3d6a20 - 0x3d6c20
void sub_003D6A20_0x3d6a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6A20_0x3d6a20");
#endif

    switch (ctx->pc) {
        case 0x3d6a44u: goto label_3d6a44;
        case 0x3d6a58u: goto label_3d6a58;
        case 0x3d6a78u: goto label_3d6a78;
        case 0x3d6a80u: goto label_3d6a80;
        case 0x3d6a9cu: goto label_3d6a9c;
        case 0x3d6aa4u: goto label_3d6aa4;
        case 0x3d6ab4u: goto label_3d6ab4;
        case 0x3d6ac0u: goto label_3d6ac0;
        case 0x3d6ad0u: goto label_3d6ad0;
        case 0x3d6ad8u: goto label_3d6ad8;
        case 0x3d6af8u: goto label_3d6af8;
        case 0x3d6b44u: goto label_3d6b44;
        case 0x3d6b70u: goto label_3d6b70;
        case 0x3d6b7cu: goto label_3d6b7c;
        case 0x3d6bb4u: goto label_3d6bb4;
        case 0x3d6bd0u: goto label_3d6bd0;
        case 0x3d6be4u: goto label_3d6be4;
        case 0x3d6bfcu: goto label_3d6bfc;
        default: break;
    }

    ctx->pc = 0x3d6a20u;

    // 0x3d6a20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d6a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3d6a24: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3d6a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3d6a28: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3d6a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3d6a2c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3d6a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6a30: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3d6a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3d6a34: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3d6a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3d6a38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d6a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d6a3c: 0xc10480a  jal         func_412028
    ctx->pc = 0x3D6A3Cu;
    SET_GPR_U32(ctx, 31, 0x3D6A44u);
    ctx->pc = 0x3D6A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6A3Cu;
    // 0x3d6a40: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3D6A3Cu, 0x3D6A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6A44u;
label_3d6a44:
    // 0x3d6a44: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x3d6a44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3d6a48: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3D6A48u;
    {
        const bool branch_taken_0x3d6a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D6A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6A48u;
        // 0x3d6a4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6a48) {
            ctx->pc = 0x3D6AFCu;
            goto label_3d6afc;
        }
    }
    ctx->pc = 0x3D6A50u;
    // 0x3d6a50: 0xc1081b0  jal         func_4206C0
    ctx->pc = 0x3D6A50u;
    SET_GPR_U32(ctx, 31, 0x3D6A58u);
    ctx->pc = 0x4206C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4206C0u, 0x3D6A50u, 0x3D6A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6A58u;
label_3d6a58:
    // 0x3d6a58: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3D6A58u;
    {
        const bool branch_taken_0x3d6a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6A58u;
        // 0x3d6a5c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6a58) {
            ctx->pc = 0x3D6AA4u;
            goto label_3d6aa4;
        }
    }
    ctx->pc = 0x3D6A60u;
    // 0x3d6a60: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x3d6a60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x3d6a64: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D6A64u;
    {
        const bool branch_taken_0x3d6a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D6A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6A64u;
        // 0x3d6a68: 0x97a20000  lhu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6a64) {
            ctx->pc = 0x3D6AACu;
            goto label_3d6aac;
        }
    }
    ctx->pc = 0x3D6A6Cu;
    // 0x3d6a6c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3D6A6Cu;
    {
        const bool branch_taken_0x3d6a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6A6Cu;
        // 0x3d6a70: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6a6c) {
            ctx->pc = 0x3D6AF8u;
            goto label_3d6af8;
        }
    }
    ctx->pc = 0x3D6A74u;
    // 0x3d6a74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d6a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d6a78:
    // 0x3d6a78: 0xc0f55b0  jal         func_3D56C0
    ctx->pc = 0x3D6A78u;
    SET_GPR_U32(ctx, 31, 0x3D6A80u);
    ctx->pc = 0x3D6A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6A78u;
    // 0x3d6a7c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D56C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D56C0u, 0x3D6A78u, 0x3D6A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6A80u;
label_3d6a80:
    // 0x3d6a80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3d6a80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3d6a84: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x3d6a84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d6a88: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x3d6a88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d6a8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3D6A8Cu;
    {
        const bool branch_taken_0x3d6a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D6A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6A8Cu;
        // 0x3d6a90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6a8c) {
            ctx->pc = 0x3D6A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6a78;
        }
    }
    ctx->pc = 0x3D6A94u;
    // 0x3d6a94: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3D6A94u;
    {
        const bool branch_taken_0x3d6a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6A94u;
        // 0x3d6a98: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6a94) {
            ctx->pc = 0x3D6AFCu;
            goto label_3d6afc;
        }
    }
    ctx->pc = 0x3D6A9Cu;
label_3d6a9c:
    // 0x3d6a9c: 0xc1082d0  jal         func_420B40
    ctx->pc = 0x3D6A9Cu;
    SET_GPR_U32(ctx, 31, 0x3D6AA4u);
    ctx->pc = 0x3D6AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6A9Cu;
    // 0x3d6aa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B40u, 0x3D6A9Cu, 0x3D6AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6AA4u;
label_3d6aa4:
    // 0x3d6aa4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3D6AA4u;
    {
        const bool branch_taken_0x3d6aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6AA4u;
        // 0x3d6aa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6aa4) {
            ctx->pc = 0x3D6AFCu;
            goto label_3d6afc;
        }
    }
    ctx->pc = 0x3D6AACu;
label_3d6aac:
    // 0x3d6aac: 0xc1082ca  jal         func_420B28
    ctx->pc = 0x3D6AACu;
    SET_GPR_U32(ctx, 31, 0x3D6AB4u);
    ctx->pc = 0x3D6AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6AACu;
    // 0x3d6ab0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B28u, 0x3D6AACu, 0x3D6AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6AB4u;
label_3d6ab4:
    // 0x3d6ab4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3d6ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d6ab8: 0xc1082d0  jal         func_420B40
    ctx->pc = 0x3D6AB8u;
    SET_GPR_U32(ctx, 31, 0x3D6AC0u);
    ctx->pc = 0x3D6ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6AB8u;
    // 0x3d6abc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B40u, 0x3D6AB8u, 0x3D6AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6AC0u;
label_3d6ac0:
    // 0x3d6ac0: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x3d6ac0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d6ac4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3D6AC4u;
    {
        const bool branch_taken_0x3d6ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6ac4) {
            ctx->pc = 0x3D6AF0u;
            goto label_3d6af0;
        }
    }
    ctx->pc = 0x3D6ACCu;
    // 0x3d6acc: 0x0  nop
    ctx->pc = 0x3d6accu;
    // NOP
label_3d6ad0:
    // 0x3d6ad0: 0xc0f57e0  jal         func_3D5F80
    ctx->pc = 0x3D6AD0u;
    SET_GPR_U32(ctx, 31, 0x3D6AD8u);
    ctx->pc = 0x3D6AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6AD0u;
    // 0x3d6ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5F80u, 0x3D6AD0u, 0x3D6AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6AD8u;
label_3d6ad8:
    // 0x3d6ad8: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3D6AD8u;
    {
        const bool branch_taken_0x3d6ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6AD8u;
        // 0x3d6adc: 0x97a20000  lhu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6ad8) {
            ctx->pc = 0x3D6A9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6a9c;
        }
    }
    ctx->pc = 0x3D6AE0u;
    // 0x3d6ae0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3d6ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3d6ae4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x3d6ae4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d6ae8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3D6AE8u;
    {
        const bool branch_taken_0x3d6ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d6ae8) {
            ctx->pc = 0x3D6AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6ad0;
        }
    }
    ctx->pc = 0x3D6AF0u;
label_3d6af0:
    // 0x3d6af0: 0xc1082d0  jal         func_420B40
    ctx->pc = 0x3D6AF0u;
    SET_GPR_U32(ctx, 31, 0x3D6AF8u);
    ctx->pc = 0x3D6AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6AF0u;
    // 0x3d6af4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B40u, 0x3D6AF0u, 0x3D6AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6AF8u;
label_3d6af8:
    // 0x3d6af8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3d6af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3d6afc:
    // 0x3d6afc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3d6afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d6b00: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3d6b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d6b04: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3d6b04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d6b08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d6b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d6b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D6B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D6B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6B0Cu;
        // 0x3d6b10: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D6B14u;
    // 0x3d6b14: 0x0  nop
    ctx->pc = 0x3d6b14u;
    // NOP
    // 0x3d6b18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d6b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3d6b1c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3d6b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3d6b20: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3d6b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3d6b24: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3d6b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3d6b28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d6b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6b2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d6b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6b30: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3d6b30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x3d6b34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d6b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3d6b38: 0x24a56c20  addiu       $a1, $a1, 0x6C20
    ctx->pc = 0x3d6b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27680));
    // 0x3d6b3c: 0xc1082d8  jal         func_420B60
    ctx->pc = 0x3D6B3Cu;
    SET_GPR_U32(ctx, 31, 0x3D6B44u);
    ctx->pc = 0x3D6B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6B3Cu;
    // 0x3d6b40: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B60u, 0x3D6B3Cu, 0x3D6B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6B44u;
label_3d6b44:
    // 0x3d6b44: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3d6b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d6b48: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3d6b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3d6b4c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3d6b4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3d6b50: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3D6B50u;
    {
        const bool branch_taken_0x3d6b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6B50u;
        // 0x3d6b54: 0x240201b3  addiu       $v0, $zero, 0x1B3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6b50) {
            ctx->pc = 0x3D6B88u;
            goto label_3d6b88;
        }
    }
    ctx->pc = 0x3D6B58u;
    // 0x3d6b58: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3d6b58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3d6b5c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3d6b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3d6b60: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3d6b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x3d6b64: 0x24a5c768  addiu       $a1, $a1, -0x3898
    ctx->pc = 0x3d6b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952808));
    // 0x3d6b68: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x3D6B68u;
    SET_GPR_U32(ctx, 31, 0x3D6B70u);
    ctx->pc = 0x3D6B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6B68u;
    // 0x3d6b6c: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3D6B68u, 0x3D6B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6B70u;
label_3d6b70:
    // 0x3d6b70: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3d6b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3d6b74: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x3D6B74u;
    SET_GPR_U32(ctx, 31, 0x3D6B7Cu);
    ctx->pc = 0x3D6B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6B74u;
    // 0x3d6b78: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3D6B74u, 0x3D6B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6B7Cu;
label_3d6b7c:
    // 0x3d6b7c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3D6B7Cu;
    {
        const bool branch_taken_0x3d6b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6B7Cu;
        // 0x3d6b80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6b7c) {
            ctx->pc = 0x3D6C08u;
            goto label_3d6c08;
        }
    }
    ctx->pc = 0x3D6B84u;
    // 0x3d6b84: 0x0  nop
    ctx->pc = 0x3d6b84u;
    // NOP
label_3d6b88:
    // 0x3d6b88: 0x97a20020  lhu         $v0, 0x20($sp)
    ctx->pc = 0x3d6b88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d6b8c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3d6b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3d6b90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d6b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d6b94: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x3d6b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x3d6b98: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3d6b98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x3d6b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d6b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6ba0: 0x24a56c38  addiu       $a1, $a1, 0x6C38
    ctx->pc = 0x3d6ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27704));
    // 0x3d6ba4: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x3d6ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x3d6ba8: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x3d6ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d6bac: 0xc1082d8  jal         func_420B60
    ctx->pc = 0x3D6BACu;
    SET_GPR_U32(ctx, 31, 0x3D6BB4u);
    ctx->pc = 0x3D6BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6BACu;
    // 0x3d6bb0: 0xa7a30002  sh          $v1, 0x2($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B60u, 0x3D6BACu, 0x3D6BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6BB4u;
label_3d6bb4:
    // 0x3d6bb4: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x3d6bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x3d6bb8: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x3d6bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x3d6bbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d6bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6bc0: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x3d6bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x3d6bc4: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x3d6bc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x3d6bc8: 0xc103404  jal         func_40D010
    ctx->pc = 0x3D6BC8u;
    SET_GPR_U32(ctx, 31, 0x3D6BD0u);
    ctx->pc = 0x3D6BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6BC8u;
    // 0x3d6bcc: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x3D6BC8u, 0x3D6BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6BD0u;
label_3d6bd0:
    // 0x3d6bd0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3D6BD0u;
    {
        const bool branch_taken_0x3d6bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6BD0u;
        // 0x3d6bd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6bd0) {
            ctx->pc = 0x3D6C04u;
            goto label_3d6c04;
        }
    }
    ctx->pc = 0x3D6BD8u;
    // 0x3d6bd8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3d6bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6bdc: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3D6BDCu;
    SET_GPR_U32(ctx, 31, 0x3D6BE4u);
    ctx->pc = 0x3D6BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6BDCu;
    // 0x3d6be0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3D6BDCu, 0x3D6BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6BE4u;
label_3d6be4:
    // 0x3d6be4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D6BE4u;
    {
        const bool branch_taken_0x3d6be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6BE4u;
        // 0x3d6be8: 0x3c05003d  lui         $a1, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6be4) {
            ctx->pc = 0x3D6C04u;
            goto label_3d6c04;
        }
    }
    ctx->pc = 0x3D6BECu;
    // 0x3d6bec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d6becu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6bf0: 0x24a553f8  addiu       $a1, $a1, 0x53F8
    ctx->pc = 0x3d6bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21496));
    // 0x3d6bf4: 0xc1082d8  jal         func_420B60
    ctx->pc = 0x3D6BF4u;
    SET_GPR_U32(ctx, 31, 0x3D6BFCu);
    ctx->pc = 0x3D6BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6BF4u;
    // 0x3d6bf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B60u, 0x3D6BF4u, 0x3D6BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6BFCu;
label_3d6bfc:
    // 0x3d6bfc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D6BFCu;
    {
        const bool branch_taken_0x3d6bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6BFCu;
        // 0x3d6c00: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6bfc) {
            ctx->pc = 0x3D6C08u;
            goto label_3d6c08;
        }
    }
    ctx->pc = 0x3D6C04u;
label_3d6c04:
    // 0x3d6c04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d6c04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d6c08:
    // 0x3d6c08: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3d6c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d6c0c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3d6c0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d6c10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d6c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d6c14: 0x3e00008  jr          $ra
    ctx->pc = 0x3D6C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D6C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6C14u;
        // 0x3d6c18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D6C1Cu;
    // 0x3d6c1c: 0x0  nop
    ctx->pc = 0x3d6c1cu;
    // NOP
    ctx->pc = 0x3d6c20u;
}
