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

// Function: sub_00415DE0
// Address: 0x415de0 - 0x415f28
void sub_00415DE0_0x415de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415DE0_0x415de0");
#endif

    switch (ctx->pc) {
        case 0x415e18u: goto label_415e18;
        case 0x415e24u: goto label_415e24;
        case 0x415e40u: goto label_415e40;
        case 0x415e60u: goto label_415e60;
        case 0x415e80u: goto label_415e80;
        case 0x415ec0u: goto label_415ec0;
        case 0x415ed0u: goto label_415ed0;
        case 0x415ee0u: goto label_415ee0;
        case 0x415ef4u: goto label_415ef4;
        default: break;
    }

    ctx->pc = 0x415de0u;

    // 0x415de0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x415de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x415de4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x415de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x415de8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x415de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x415dec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x415decu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415df0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x415df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x415df4: 0x26330010  addiu       $s3, $s1, 0x10
    ctx->pc = 0x415df4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x415df8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x415df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x415dfc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x415dfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415e00: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x415e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x415e04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x415e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415e08: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x415e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x415e0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x415e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x415e10: 0xc105328  jal         func_414CA0
    ctx->pc = 0x415E10u;
    SET_GPR_U32(ctx, 31, 0x415E18u);
    ctx->pc = 0x415E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415E10u;
    // 0x415e14: 0x26340030  addiu       $s4, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414CA0u, 0x415E10u, 0x415E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415E18u;
label_415e18:
    // 0x415e18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x415e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415e1c: 0xc105328  jal         func_414CA0
    ctx->pc = 0x415E1Cu;
    SET_GPR_U32(ctx, 31, 0x415E24u);
    ctx->pc = 0x415E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415E1Cu;
    // 0x415e20: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414CA0u, 0x415E1Cu, 0x415E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415E24u;
label_415e24:
    // 0x415e24: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x415e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x415e28: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x415e28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x415e2c: 0x2475ca10  addiu       $s5, $v1, -0x35F0
    ctx->pc = 0x415e2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953488));
    // 0x415e30: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x415e30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x415e34: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x415e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415e38: 0xc104aec  jal         func_412BB0
    ctx->pc = 0x415E38u;
    SET_GPR_U32(ctx, 31, 0x415E40u);
    ctx->pc = 0x415E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415E38u;
    // 0x415e3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412BB0u, 0x415E38u, 0x415E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415E40u;
label_415e40:
    // 0x415e40: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x415e40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x415e44: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x415e44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x415e48: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x415e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x415e4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x415e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415e50: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x415e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x415e54: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x415e54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x415e58: 0xc103404  jal         func_40D010
    ctx->pc = 0x415E58u;
    SET_GPR_U32(ctx, 31, 0x415E60u);
    ctx->pc = 0x415E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415E58u;
    // 0x415e5c: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x415E58u, 0x415E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415E60u;
label_415e60:
    // 0x415e60: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x415E60u;
    {
        const bool branch_taken_0x415e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x415E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415E60u;
        // 0x415e64: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415e60) {
            ctx->pc = 0x415F00u;
            goto label_415f00;
        }
    }
    ctx->pc = 0x415E68u;
    // 0x415e68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x415e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415e6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x415e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x415e70: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x415e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x415e74: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x415e74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x415e78: 0xc103404  jal         func_40D010
    ctx->pc = 0x415E78u;
    SET_GPR_U32(ctx, 31, 0x415E80u);
    ctx->pc = 0x415E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415E78u;
    // 0x415e7c: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x415E78u, 0x415E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415E80u;
label_415e80:
    // 0x415e80: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x415E80u;
    {
        const bool branch_taken_0x415e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x415E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415E80u;
        // 0x415e84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415e80) {
            ctx->pc = 0x415F04u;
            goto label_415f04;
        }
    }
    ctx->pc = 0x415E88u;
    // 0x415e88: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x415e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x415e8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x415E8Cu;
    {
        const bool branch_taken_0x415e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x415E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415E8Cu;
        // 0x415e90: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415e8c) {
            ctx->pc = 0x415EA0u;
            goto label_415ea0;
        }
    }
    ctx->pc = 0x415E94u;
    // 0x415e94: 0x90420023  lbu         $v0, 0x23($v0)
    ctx->pc = 0x415e94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x415e98: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x415e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x415e9c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x415e9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_415ea0:
    // 0x415ea0: 0x96220050  lhu         $v0, 0x50($s1)
    ctx->pc = 0x415ea0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x415ea4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x415ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x415ea8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x415ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415eac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x415eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415eb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x415eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x415eb4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x415eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x415eb8: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x415EB8u;
    SET_GPR_U32(ctx, 31, 0x415EC0u);
    ctx->pc = 0x415EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415EB8u;
    // 0x415ebc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x415EB8u, 0x415EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415EC0u;
label_415ec0:
    // 0x415ec0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x415EC0u;
    {
        const bool branch_taken_0x415ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x415EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415EC0u;
        // 0x415ec4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415ec0) {
            ctx->pc = 0x415F00u;
            goto label_415f00;
        }
    }
    ctx->pc = 0x415EC8u;
    // 0x415ec8: 0xc105336  jal         func_414CD8
    ctx->pc = 0x415EC8u;
    SET_GPR_U32(ctx, 31, 0x415ED0u);
    ctx->pc = 0x415ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415EC8u;
    // 0x415ecc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414CD8u, 0x415EC8u, 0x415ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415ED0u;
label_415ed0:
    // 0x415ed0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x415ED0u;
    {
        const bool branch_taken_0x415ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x415ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415ED0u;
        // 0x415ed4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415ed0) {
            ctx->pc = 0x415F00u;
            goto label_415f00;
        }
    }
    ctx->pc = 0x415ED8u;
    // 0x415ed8: 0xc105336  jal         func_414CD8
    ctx->pc = 0x415ED8u;
    SET_GPR_U32(ctx, 31, 0x415EE0u);
    ctx->pc = 0x415EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415ED8u;
    // 0x415edc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414CD8u, 0x415ED8u, 0x415EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415EE0u;
label_415ee0:
    // 0x415ee0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x415EE0u;
    {
        const bool branch_taken_0x415ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x415EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415EE0u;
        // 0x415ee4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415ee0) {
            ctx->pc = 0x415F00u;
            goto label_415f00;
        }
    }
    ctx->pc = 0x415EE8u;
    // 0x415ee8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x415ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415eec: 0xc104a72  jal         func_4129C8
    ctx->pc = 0x415EECu;
    SET_GPR_U32(ctx, 31, 0x415EF4u);
    ctx->pc = 0x415EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415EECu;
    // 0x415ef0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4129C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4129C8u, 0x415EECu, 0x415EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415EF4u;
label_415ef4:
    // 0x415ef4: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x415ef4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x415ef8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x415EF8u;
    {
        const bool branch_taken_0x415ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x415EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415EF8u;
        // 0x415efc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415ef8) {
            ctx->pc = 0x415F04u;
            goto label_415f04;
        }
    }
    ctx->pc = 0x415F00u;
label_415f00:
    // 0x415f00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x415f00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_415f04:
    // 0x415f04: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x415f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x415f08: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x415f08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x415f0c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x415f0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x415f10: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x415f10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x415f14: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x415f14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x415f18: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x415f18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x415f1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x415f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x415f20: 0x3e00008  jr          $ra
    ctx->pc = 0x415F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415F20u;
        // 0x415f24: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x415F28u;
}
