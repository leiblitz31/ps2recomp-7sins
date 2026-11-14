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

// Function: sub_002F6A28
// Address: 0x2f6a28 - 0x2f6d48
void sub_002F6A28_0x2f6a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6A28_0x2f6a28");
#endif

    switch (ctx->pc) {
        case 0x2f6a68u: goto label_2f6a68;
        case 0x2f6a74u: goto label_2f6a74;
        case 0x2f6a94u: goto label_2f6a94;
        case 0x2f6aa4u: goto label_2f6aa4;
        case 0x2f6ac0u: goto label_2f6ac0;
        case 0x2f6ac8u: goto label_2f6ac8;
        case 0x2f6ae8u: goto label_2f6ae8;
        case 0x2f6afcu: goto label_2f6afc;
        case 0x2f6b1cu: goto label_2f6b1c;
        case 0x2f6b28u: goto label_2f6b28;
        case 0x2f6b88u: goto label_2f6b88;
        case 0x2f6bdcu: goto label_2f6bdc;
        case 0x2f6bf8u: goto label_2f6bf8;
        case 0x2f6c20u: goto label_2f6c20;
        case 0x2f6c34u: goto label_2f6c34;
        case 0x2f6ca8u: goto label_2f6ca8;
        case 0x2f6cc0u: goto label_2f6cc0;
        case 0x2f6cd8u: goto label_2f6cd8;
        case 0x2f6cf0u: goto label_2f6cf0;
        case 0x2f6d38u: goto label_2f6d38;
        default: break;
    }

    ctx->pc = 0x2f6a28u;

label_2f6a28:
    // 0x2f6a28: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2f6a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2f6a2c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2f6a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2f6a30: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2f6a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2f6a34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f6a34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6a38: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2f6a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2f6a3c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f6a3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6a40: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2f6a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2f6a44: 0x3c16004f  lui         $s6, 0x4F
    ctx->pc = 0x2f6a44u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)79 << 16));
    // 0x2f6a48: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x2f6a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2f6a4c: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x2f6a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x2f6a50: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x2f6a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2f6a54: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2f6a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2f6a58: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2f6a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2f6a5c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2f6a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2f6a60: 0xc0bd9d4  jal         func_2F6750
    ctx->pc = 0x2F6A60u;
    SET_GPR_U32(ctx, 31, 0x2F6A68u);
    ctx->pc = 0x2F6A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6A60u;
    // 0x2f6a64: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6750u, 0x2F6A60u, 0x2F6A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6A68u;
label_2f6a68:
    // 0x2f6a68: 0x8ec4ef28  lw          $a0, -0x10D8($s6)
    ctx->pc = 0x2f6a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962984)));
    // 0x2f6a6c: 0xc0bf6ec  jal         func_2FDBB0
    ctx->pc = 0x2F6A6Cu;
    SET_GPR_U32(ctx, 31, 0x2F6A74u);
    ctx->pc = 0x2FDBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBB0u, 0x2F6A6Cu, 0x2F6A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6A74u;
label_2f6a74:
    // 0x2f6a74: 0x8ec3ef28  lw          $v1, -0x10D8($s6)
    ctx->pc = 0x2f6a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962984)));
    // 0x2f6a78: 0x1462009e  bne         $v1, $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x2F6A78u;
    {
        const bool branch_taken_0x2f6a78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F6A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6A78u;
        // 0x2f6a7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6a78) {
            ctx->pc = 0x2F6CF4u;
            goto label_2f6cf4;
        }
    }
    ctx->pc = 0x2F6A80u;
    // 0x2f6a80: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x2f6a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x2f6a84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f6a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6a88: 0x0  nop
    ctx->pc = 0x2f6a88u;
    // NOP
    // 0x2f6a8c: 0xc0bdbce  jal         func_2F6F38
    ctx->pc = 0x2F6A8Cu;
    SET_GPR_U32(ctx, 31, 0x2F6A94u);
    ctx->pc = 0x2F6A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6A8Cu;
    // 0x2f6a90: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6F38u, 0x2F6A8Cu, 0x2F6A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6A94u;
label_2f6a94:
    // 0x2f6a94: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2F6A94u;
    {
        const bool branch_taken_0x2f6a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6A94u;
        // 0x2f6a98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6a94) {
            ctx->pc = 0x2F6C28u;
            goto label_2f6c28;
        }
    }
    ctx->pc = 0x2F6A9Cu;
    // 0x2f6a9c: 0xc0c0448  jal         func_301120
    ctx->pc = 0x2F6A9Cu;
    SET_GPR_U32(ctx, 31, 0x2F6AA4u);
    ctx->pc = 0x2F6AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6A9Cu;
    // 0x2f6aa0: 0x3c11004f  lui         $s1, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)79 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301120u, 0x2F6A9Cu, 0x2F6AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6AA4u;
label_2f6aa4:
    // 0x2f6aa4: 0x8e22ef4c  lw          $v0, -0x10B4($s1)
    ctx->pc = 0x2f6aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963020)));
    // 0x2f6aa8: 0x441002c  bgez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2F6AA8u;
    {
        const bool branch_taken_0x2f6aa8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F6AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6AA8u;
        // 0x2f6aac: 0x3c170061  lui         $s7, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6aa8) {
            ctx->pc = 0x2F6B5Cu;
            goto label_2f6b5c;
        }
    }
    ctx->pc = 0x2F6AB0u;
    // 0x2f6ab0: 0x3c14004f  lui         $s4, 0x4F
    ctx->pc = 0x2f6ab0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)79 << 16));
    // 0x2f6ab4: 0x3c150061  lui         $s5, 0x61
    ctx->pc = 0x2f6ab4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)97 << 16));
    // 0x2f6ab8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F6AB8u;
    {
        const bool branch_taken_0x2f6ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6AB8u;
        // 0x2f6abc: 0x3c1e0061  lui         $fp, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ab8) {
            ctx->pc = 0x2F6AE4u;
            goto label_2f6ae4;
        }
    }
    ctx->pc = 0x2F6AC0u;
label_2f6ac0:
    // 0x2f6ac0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f6ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f6ac4: 0x0  nop
    ctx->pc = 0x2f6ac4u;
    // NOP
label_2f6ac8:
    // 0x2f6ac8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f6ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f6acc: 0x0  nop
    ctx->pc = 0x2f6accu;
    // NOP
    // 0x2f6ad0: 0x0  nop
    ctx->pc = 0x2f6ad0u;
    // NOP
    // 0x2f6ad4: 0x0  nop
    ctx->pc = 0x2f6ad4u;
    // NOP
    // 0x2f6ad8: 0x0  nop
    ctx->pc = 0x2f6ad8u;
    // NOP
    // 0x2f6adc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F6ADCu;
    {
        const bool branch_taken_0x2f6adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f6adc) {
            ctx->pc = 0x2F6AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6ac8;
        }
    }
    ctx->pc = 0x2F6AE4u;
label_2f6ae4:
    // 0x2f6ae4: 0x26f0c580  addiu       $s0, $s7, -0x3A80
    ctx->pc = 0x2f6ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952320));
label_2f6ae8:
    // 0x2f6ae8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2f6ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2f6aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6af0: 0x34a50597  ori         $a1, $a1, 0x597
    ctx->pc = 0x2f6af0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1431);
    // 0x2f6af4: 0xc0c0632  jal         func_3018C8
    ctx->pc = 0x2F6AF4u;
    SET_GPR_U32(ctx, 31, 0x2F6AFCu);
    ctx->pc = 0x2F6AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6AF4u;
    // 0x2f6af8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3018C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3018C8u, 0x2F6AF4u, 0x2F6AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6AFCu;
label_2f6afc:
    // 0x2f6afc: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F6AFCu;
    {
        const bool branch_taken_0x2f6afc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f6afc) {
            ctx->pc = 0x2F6B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6AFCu;
            // 0x2f6b00: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6B4Cu;
            goto label_2f6b4c;
        }
    }
    ctx->pc = 0x2F6B04u;
    // 0x2f6b04: 0x8e82ef10  lw          $v0, -0x10F0($s4)
    ctx->pc = 0x2f6b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962960)));
    // 0x2f6b08: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6B08u;
    {
        const bool branch_taken_0x2f6b08 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F6B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B08u;
        // 0x2f6b0c: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6b08) {
            ctx->pc = 0x2F6B20u;
            goto label_2f6b20;
        }
    }
    ctx->pc = 0x2F6B10u;
    // 0x2f6b10: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f6b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f6b14: 0xc0c0212  jal         func_300848
    ctx->pc = 0x2F6B14u;
    SET_GPR_U32(ctx, 31, 0x2F6B1Cu);
    ctx->pc = 0x2F6B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6B14u;
    // 0x2f6b18: 0x24849a78  addiu       $a0, $a0, -0x6588 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300848u, 0x2F6B14u, 0x2F6B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B1Cu;
label_2f6b1c:
    // 0x2f6b1c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2f6b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_2f6b20:
    // 0x2f6b20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f6b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f6b24: 0x0  nop
    ctx->pc = 0x2f6b24u;
    // NOP
label_2f6b28:
    // 0x2f6b28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f6b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f6b2c: 0x0  nop
    ctx->pc = 0x2f6b2cu;
    // NOP
    // 0x2f6b30: 0x0  nop
    ctx->pc = 0x2f6b30u;
    // NOP
    // 0x2f6b34: 0x0  nop
    ctx->pc = 0x2f6b34u;
    // NOP
    // 0x2f6b38: 0x0  nop
    ctx->pc = 0x2f6b38u;
    // NOP
    // 0x2f6b3c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F6B3Cu;
    {
        const bool branch_taken_0x2f6b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f6b3c) {
            ctx->pc = 0x2F6B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6b28;
        }
    }
    ctx->pc = 0x2F6B44u;
    // 0x2f6b44: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x2F6B44u;
    {
        const bool branch_taken_0x2f6b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B44u;
        // 0x2f6b48: 0x26f0c580  addiu       $s0, $s7, -0x3A80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6b44) {
            ctx->pc = 0x2F6AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6ae8;
        }
    }
    ctx->pc = 0x2F6B4Cu;
label_2f6b4c:
    // 0x2f6b4c: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2F6B4Cu;
    {
        const bool branch_taken_0x2f6b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B4Cu;
        // 0x2f6b50: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6b4c) {
            ctx->pc = 0x2F6AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6ac0;
        }
    }
    ctx->pc = 0x2F6B54u;
    // 0x2f6b54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6B54u;
    {
        const bool branch_taken_0x2f6b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B54u;
        // 0x2f6b58: 0xae20ef4c  sw          $zero, -0x10B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294963020), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6b54) {
            ctx->pc = 0x2F6B68u;
            goto label_2f6b68;
        }
    }
    ctx->pc = 0x2F6B5Cu;
label_2f6b5c:
    // 0x2f6b5c: 0x3c14004f  lui         $s4, 0x4F
    ctx->pc = 0x2f6b5cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)79 << 16));
    // 0x2f6b60: 0x3c150061  lui         $s5, 0x61
    ctx->pc = 0x2f6b60u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)97 << 16));
    // 0x2f6b64: 0x3c1e0061  lui         $fp, 0x61
    ctx->pc = 0x2f6b64u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)97 << 16));
label_2f6b68:
    // 0x2f6b68: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x2f6b68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f6b6c: 0x26a4c400  addiu       $a0, $s5, -0x3C00
    ctx->pc = 0x2f6b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951936));
    // 0x2f6b70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f6b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6b74: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2f6b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2f6b78: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F6B78u;
    {
        const bool branch_taken_0x2f6b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B78u;
        // 0x2f6b7c: 0xa0830024  sb          $v1, 0x24($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6b78) {
            ctx->pc = 0x2F6BACu;
            goto label_2f6bac;
        }
    }
    ctx->pc = 0x2F6B80u;
    // 0x2f6b80: 0x24860024  addiu       $a2, $a0, 0x24
    ctx->pc = 0x2f6b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x2f6b84: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f6b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2f6b88:
    // 0x2f6b88: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x2f6b88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2f6b8c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F6B8Cu;
    {
        const bool branch_taken_0x2f6b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B8Cu;
        // 0x2f6b90: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6b8c) {
            ctx->pc = 0x2F6BACu;
            goto label_2f6bac;
        }
    }
    ctx->pc = 0x2F6B94u;
    // 0x2f6b94: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x2f6b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2f6b98: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2f6b98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f6b9c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2f6b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f6ba0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2f6ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2f6ba4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2F6BA4u;
    {
        const bool branch_taken_0x2f6ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6ba4) {
            ctx->pc = 0x2F6BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6BA4u;
            // 0x2f6ba8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6b88;
        }
    }
    ctx->pc = 0x2F6BACu;
label_2f6bac:
    // 0x2f6bac: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2f6bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f6bb0: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6BB0u;
    {
        const bool branch_taken_0x2f6bb0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F6BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6BB0u;
        // 0x2f6bb4: 0x8e82ef10  lw          $v0, -0x10F0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6bb0) {
            ctx->pc = 0x2F6BC4u;
            goto label_2f6bc4;
        }
    }
    ctx->pc = 0x2F6BB8u;
    // 0x2f6bb8: 0x26a2c400  addiu       $v0, $s5, -0x3C00
    ctx->pc = 0x2f6bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951936));
    // 0x2f6bbc: 0xa0400123  sb          $zero, 0x123($v0)
    ctx->pc = 0x2f6bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 291), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f6bc0: 0x8e82ef10  lw          $v0, -0x10F0($s4)
    ctx->pc = 0x2f6bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962960)));
label_2f6bc4:
    // 0x2f6bc4: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6BC4u;
    {
        const bool branch_taken_0x2f6bc4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F6BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6BC4u;
        // 0x2f6bc8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6bc4) {
            ctx->pc = 0x2F6BDCu;
            goto label_2f6bdc;
        }
    }
    ctx->pc = 0x2F6BCCu;
    // 0x2f6bcc: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x2f6bccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x2f6bd0: 0x24849a98  addiu       $a0, $a0, -0x6568
    ctx->pc = 0x2f6bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941336));
    // 0x2f6bd4: 0xc0c0212  jal         func_300848
    ctx->pc = 0x2F6BD4u;
    SET_GPR_U32(ctx, 31, 0x2F6BDCu);
    ctx->pc = 0x2F6BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6BD4u;
    // 0x2f6bd8: 0x24a5c424  addiu       $a1, $a1, -0x3BDC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951972));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300848u, 0x2F6BD4u, 0x2F6BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6BDCu;
label_2f6bdc:
    // 0x2f6bdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2f6bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6be0: 0x26b0c400  addiu       $s0, $s5, -0x3C00
    ctx->pc = 0x2f6be0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951936));
    // 0x2f6be4: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x2f6be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2f6be8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6bec: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x2f6becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
    // 0x2f6bf0: 0xc0c041c  jal         func_301070
    ctx->pc = 0x2F6BF0u;
    SET_GPR_U32(ctx, 31, 0x2F6BF8u);
    ctx->pc = 0x2F6BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6BF0u;
    // 0x2f6bf4: 0xae100124  sw          $s0, 0x124($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301070u, 0x2F6BF0u, 0x2F6BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6BF8u;
label_2f6bf8:
    // 0x2f6bf8: 0x26e4c580  addiu       $a0, $s7, -0x3A80
    ctx->pc = 0x2f6bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952320));
    // 0x2f6bfc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f6bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f6c00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f6c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f6c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c08: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2f6c08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c0c: 0x2408012c  addiu       $t0, $zero, 0x12C
    ctx->pc = 0x2f6c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2f6c10: 0x27c9c540  addiu       $t1, $fp, -0x3AC0
    ctx->pc = 0x2f6c10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952256));
    // 0x2f6c14: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2f6c14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f6c18: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x2F6C18u;
    SET_GPR_U32(ctx, 31, 0x2F6C20u);
    ctx->pc = 0x2F6C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6C18u;
    // 0x2f6c1c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x2F6C18u, 0x2F6C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6C20u;
label_2f6c20:
    // 0x2f6c20: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6C20u;
    {
        const bool branch_taken_0x2f6c20 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F6C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C20u;
        // 0x2f6c24: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c20) {
            ctx->pc = 0x2F6C3Cu;
            goto label_2f6c3c;
        }
    }
    ctx->pc = 0x2F6C28u;
label_2f6c28:
    // 0x2f6c28: 0x8ec4ef28  lw          $a0, -0x10D8($s6)
    ctx->pc = 0x2f6c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962984)));
    // 0x2f6c2c: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x2F6C2Cu;
    SET_GPR_U32(ctx, 31, 0x2F6C34u);
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x2F6C2Cu, 0x2F6C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6C34u;
label_2f6c34:
    // 0x2f6c34: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2F6C34u;
    {
        const bool branch_taken_0x2f6c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C34u;
        // 0x2f6c38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c34) {
            ctx->pc = 0x2F6CF4u;
            goto label_2f6cf4;
        }
    }
    ctx->pc = 0x2F6C3Cu;
label_2f6c3c:
    // 0x2f6c3c: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x2f6c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2f6c40: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x2f6c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2f6c44: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x2f6c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2f6c48: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x2f6c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f6c4c: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x2f6c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f6c50: 0x68450017  ldl         $a1, 0x17($v0)
    ctx->pc = 0x2f6c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2f6c54: 0x6c450010  ldr         $a1, 0x10($v0)
    ctx->pc = 0x2f6c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2f6c58: 0x6846001f  ldl         $a2, 0x1F($v0)
    ctx->pc = 0x2f6c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2f6c5c: 0x6c460018  ldr         $a2, 0x18($v0)
    ctx->pc = 0x2f6c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2f6c60: 0xb2630007  sdl         $v1, 0x7($s3)
    ctx->pc = 0x2f6c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6c64: 0xb6630000  sdr         $v1, 0x0($s3)
    ctx->pc = 0x2f6c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6c68: 0xb264000f  sdl         $a0, 0xF($s3)
    ctx->pc = 0x2f6c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6c6c: 0xb6640008  sdr         $a0, 0x8($s3)
    ctx->pc = 0x2f6c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6c70: 0xb2650017  sdl         $a1, 0x17($s3)
    ctx->pc = 0x2f6c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6c74: 0xb6650010  sdr         $a1, 0x10($s3)
    ctx->pc = 0x2f6c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6c78: 0xb266001f  sdl         $a2, 0x1F($s3)
    ctx->pc = 0x2f6c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6c7c: 0xb6660018  sdr         $a2, 0x18($s3)
    ctx->pc = 0x2f6c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f6c80: 0x88430023  lwl         $v1, 0x23($v0)
    ctx->pc = 0x2f6c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x2f6c84: 0x98430020  lwr         $v1, 0x20($v0)
    ctx->pc = 0x2f6c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x2f6c88: 0xaa630023  swl         $v1, 0x23($s3)
    ctx->pc = 0x2f6c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2f6c8c: 0xba630020  swr         $v1, 0x20($s3)
    ctx->pc = 0x2f6c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2f6c90: 0x8e83ef10  lw          $v1, -0x10F0($s4)
    ctx->pc = 0x2f6c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962960)));
    // 0x2f6c94: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F6C94u;
    {
        const bool branch_taken_0x2f6c94 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2F6C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C94u;
        // 0x2f6c98: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c94) {
            ctx->pc = 0x2F6CD8u;
            goto label_2f6cd8;
        }
    }
    ctx->pc = 0x2F6C9Cu;
    // 0x2f6c9c: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x2f6c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f6ca0: 0xc0c0212  jal         func_300848
    ctx->pc = 0x2F6CA0u;
    SET_GPR_U32(ctx, 31, 0x2F6CA8u);
    ctx->pc = 0x2F6CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6CA0u;
    // 0x2f6ca4: 0x24849ab0  addiu       $a0, $a0, -0x6550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300848u, 0x2F6CA0u, 0x2F6CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6CA8u;
label_2f6ca8:
    // 0x2f6ca8: 0x8e82ef10  lw          $v0, -0x10F0($s4)
    ctx->pc = 0x2f6ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962960)));
    // 0x2f6cac: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F6CACu;
    {
        const bool branch_taken_0x2f6cac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F6CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6CACu;
        // 0x2f6cb0: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6cac) {
            ctx->pc = 0x2F6CD8u;
            goto label_2f6cd8;
        }
    }
    ctx->pc = 0x2F6CB4u;
    // 0x2f6cb4: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x2f6cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2f6cb8: 0xc0c0212  jal         func_300848
    ctx->pc = 0x2F6CB8u;
    SET_GPR_U32(ctx, 31, 0x2F6CC0u);
    ctx->pc = 0x2F6CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6CB8u;
    // 0x2f6cbc: 0x24849ac0  addiu       $a0, $a0, -0x6540 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300848u, 0x2F6CB8u, 0x2F6CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6CC0u;
label_2f6cc0:
    // 0x2f6cc0: 0x8e82ef10  lw          $v0, -0x10F0($s4)
    ctx->pc = 0x2f6cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962960)));
    // 0x2f6cc4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6CC4u;
    {
        const bool branch_taken_0x2f6cc4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F6CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6CC4u;
        // 0x2f6cc8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6cc4) {
            ctx->pc = 0x2F6CD8u;
            goto label_2f6cd8;
        }
    }
    ctx->pc = 0x2F6CCCu;
    // 0x2f6ccc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2f6cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f6cd0: 0xc0c0212  jal         func_300848
    ctx->pc = 0x2F6CD0u;
    SET_GPR_U32(ctx, 31, 0x2F6CD8u);
    ctx->pc = 0x2F6CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6CD0u;
    // 0x2f6cd4: 0x24849ad0  addiu       $a0, $a0, -0x6530 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300848u, 0x2F6CD0u, 0x2F6CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6CD8u;
label_2f6cd8:
    // 0x2f6cd8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2f6cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2f6cdc: 0x27c2c540  addiu       $v0, $fp, -0x3AC0
    ctx->pc = 0x2f6cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952256));
    // 0x2f6ce0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f6ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f6ce4: 0x8ec4ef28  lw          $a0, -0x10D8($s6)
    ctx->pc = 0x2f6ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962984)));
    // 0x2f6ce8: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x2F6CE8u;
    SET_GPR_U32(ctx, 31, 0x2F6CF0u);
    ctx->pc = 0x2F6CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6CE8u;
    // 0x2f6cec: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x2F6CE8u, 0x2F6CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6CF0u;
label_2f6cf0:
    // 0x2f6cf0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f6cf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f6cf4:
    // 0x2f6cf4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2f6cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f6cf8: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x2f6cf8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f6cfc: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x2f6cfcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f6d00: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2f6d00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f6d04: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2f6d04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f6d08: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2f6d08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f6d0c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2f6d0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f6d10: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2f6d10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f6d14: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2f6d14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f6d18: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2f6d18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D1Cu;
        // 0x2f6d20: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6D24u;
    // 0x2f6d24: 0x0  nop
    ctx->pc = 0x2f6d24u;
    // NOP
    // 0x2f6d28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f6d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f6d2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f6d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f6d30: 0xc0bda8a  jal         func_2F6A28
    ctx->pc = 0x2F6D30u;
    SET_GPR_U32(ctx, 31, 0x2F6D38u);
    ctx->pc = 0x2F6D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6D30u;
    // 0x2f6d34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6A28u;
    goto label_2f6a28;
    ctx->pc = 0x2F6D38u;
label_2f6d38:
    // 0x2f6d38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f6d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6D3Cu;
        // 0x2f6d40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6D44u;
    // 0x2f6d44: 0x0  nop
    ctx->pc = 0x2f6d44u;
    // NOP
    ctx->pc = 0x2f6d48u;
}
