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

// Function: sub_0039FD90
// Address: 0x39fd90 - 0x3a0070
void sub_0039FD90_0x39fd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039FD90_0x39fd90");
#endif

    switch (ctx->pc) {
        case 0x39fe1cu: goto label_39fe1c;
        case 0x39fe2cu: goto label_39fe2c;
        case 0x39fe40u: goto label_39fe40;
        case 0x39fe48u: goto label_39fe48;
        case 0x39fe50u: goto label_39fe50;
        case 0x39fe58u: goto label_39fe58;
        case 0x39fe68u: goto label_39fe68;
        case 0x39fe7cu: goto label_39fe7c;
        case 0x39fe98u: goto label_39fe98;
        case 0x39feacu: goto label_39feac;
        case 0x39feb4u: goto label_39feb4;
        case 0x39fec8u: goto label_39fec8;
        case 0x39fef8u: goto label_39fef8;
        case 0x39ff10u: goto label_39ff10;
        case 0x39ff90u: goto label_39ff90;
        case 0x39ffa4u: goto label_39ffa4;
        case 0x39ffb8u: goto label_39ffb8;
        case 0x3a0038u: goto label_3a0038;
        default: break;
    }

    ctx->pc = 0x39fd90u;

    // 0x39fd90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x39fd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x39fd94: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x39fd94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x39fd98: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x39fd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x39fd9c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x39fd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x39fda0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x39fda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x39fda4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x39fda4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fda8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x39fda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x39fdac: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x39fdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x39fdb0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x39fdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x39fdb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39fdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39fdb8: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x39fdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x39fdbc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x39fdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x39fdc0: 0x104000a1  beqz        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x39FDC0u;
    {
        const bool branch_taken_0x39fdc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FDC0u;
        // 0x39fdc4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fdc0) {
            ctx->pc = 0x3A0048u;
            goto label_3a0048;
        }
    }
    ctx->pc = 0x39FDC8u;
    // 0x39fdc8: 0x8f82bd78  lw          $v0, -0x4288($gp)
    ctx->pc = 0x39fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
    // 0x39fdcc: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x39fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x39fdd0: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x39fdd0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39fdd4: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x39fdd4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x39fdd8: 0x12400026  beqz        $s2, . + 4 + (0x26 << 2)
    ctx->pc = 0x39FDD8u;
    {
        const bool branch_taken_0x39fdd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FDD8u;
        // 0x39fddc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fdd8) {
            ctx->pc = 0x39FE74u;
            goto label_39fe74;
        }
    }
    ctx->pc = 0x39FDE0u;
    // 0x39fde0: 0x26700004  addiu       $s0, $s3, 0x4
    ctx->pc = 0x39fde0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x39fde4: 0x1a400011  blez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x39FDE4u;
    {
        const bool branch_taken_0x39fde4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x39FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FDE4u;
        // 0x39fde8: 0x32430003  andi        $v1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fde4) {
            ctx->pc = 0x39FE2Cu;
            goto label_39fe2c;
        }
    }
    ctx->pc = 0x39FDECu;
    // 0x39fdec: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x39FDECu;
    {
        const bool branch_taken_0x39fdec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39fdec) {
            ctx->pc = 0x39FDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FDECu;
            // 0x39fdf0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FE40u;
            goto label_39fe40;
        }
    }
    ctx->pc = 0x39FDF4u;
    // 0x39fdf4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x39fdf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x39fdf8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x39FDF8u;
    {
        const bool branch_taken_0x39fdf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39fdf8) {
            ctx->pc = 0x39FDFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FDF8u;
            // 0x39fdfc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FE30u;
            goto label_39fe30;
        }
    }
    ctx->pc = 0x39FE00u;
    // 0x39fe00: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x39fe00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x39fe04: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x39FE04u;
    {
        const bool branch_taken_0x39fe04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39fe04) {
            ctx->pc = 0x39FE08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FE04u;
            // 0x39fe08: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FE20u;
            goto label_39fe20;
        }
    }
    ctx->pc = 0x39FE0Cu;
    // 0x39fe0c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x39fe0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x39fe10: 0x26700008  addiu       $s0, $s3, 0x8
    ctx->pc = 0x39fe10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x39fe14: 0xc0e7ee0  jal         func_39FB80
    ctx->pc = 0x39FE14u;
    SET_GPR_U32(ctx, 31, 0x39FE1Cu);
    ctx->pc = 0x39FE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FE14u;
    // 0x39fe18: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FB80u, 0x39FE14u, 0x39FE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FE1Cu;
label_39fe1c:
    // 0x39fe1c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x39fe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39fe20:
    // 0x39fe20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x39fe20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x39fe24: 0xc0e7ee0  jal         func_39FB80
    ctx->pc = 0x39FE24u;
    SET_GPR_U32(ctx, 31, 0x39FE2Cu);
    ctx->pc = 0x39FE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FE24u;
    // 0x39fe28: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FB80u, 0x39FE24u, 0x39FE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FE2Cu;
label_39fe2c:
    // 0x39fe2c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x39fe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39fe30:
    // 0x39fe30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x39fe30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x39fe34: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x39FE34u;
    {
        const bool branch_taken_0x39fe34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE34u;
        // 0x39fe38: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fe34) {
            ctx->pc = 0x39FE60u;
            goto label_39fe60;
        }
    }
    ctx->pc = 0x39FE3Cu;
    // 0x39fe3c: 0x0  nop
    ctx->pc = 0x39fe3cu;
    // NOP
label_39fe40:
    // 0x39fe40: 0xc0e7ee0  jal         func_39FB80
    ctx->pc = 0x39FE40u;
    SET_GPR_U32(ctx, 31, 0x39FE48u);
    ctx->pc = 0x39FE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FE40u;
    // 0x39fe44: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FB80u, 0x39FE40u, 0x39FE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FE48u;
label_39fe48:
    // 0x39fe48: 0xc0e7ee0  jal         func_39FB80
    ctx->pc = 0x39FE48u;
    SET_GPR_U32(ctx, 31, 0x39FE50u);
    ctx->pc = 0x39FE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FE48u;
    // 0x39fe4c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FB80u, 0x39FE48u, 0x39FE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FE50u;
label_39fe50:
    // 0x39fe50: 0xc0e7ee0  jal         func_39FB80
    ctx->pc = 0x39FE50u;
    SET_GPR_U32(ctx, 31, 0x39FE58u);
    ctx->pc = 0x39FE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FE50u;
    // 0x39fe54: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FB80u, 0x39FE50u, 0x39FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FE58u;
label_39fe58:
    // 0x39fe58: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x39fe58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x39fe5c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x39fe5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_39fe60:
    // 0x39fe60: 0xc0e7ee0  jal         func_39FB80
    ctx->pc = 0x39FE60u;
    SET_GPR_U32(ctx, 31, 0x39FE68u);
    ctx->pc = 0x39FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FB80u, 0x39FE60u, 0x39FE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FE68u;
label_39fe68:
    // 0x39fe68: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x39fe68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x39fe6c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x39FE6Cu;
    {
        const bool branch_taken_0x39fe6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39fe6c) {
            ctx->pc = 0x39FE70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FE6Cu;
            // 0x39fe70: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FE40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39fe40;
        }
    }
    ctx->pc = 0x39FE74u;
label_39fe74:
    // 0x39fe74: 0xc0e8240  jal         func_3A0900
    ctx->pc = 0x39FE74u;
    SET_GPR_U32(ctx, 31, 0x39FE7Cu);
    ctx->pc = 0x39FE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FE74u;
    // 0x39fe78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0900u, 0x39FE74u, 0x39FE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FE7Cu;
label_39fe7c:
    // 0x39fe7c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x39fe7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x39fe80: 0x2446fff4  addiu       $a2, $v0, -0xC
    ctx->pc = 0x39fe80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x39fe84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x39fe84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fe88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39fe88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39fe8c: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x39fe8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x39fe90: 0xc103404  jal         func_40D010
    ctx->pc = 0x39FE90u;
    SET_GPR_U32(ctx, 31, 0x39FE98u);
    ctx->pc = 0x39FE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FE90u;
    // 0x39fe94: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x39FE90u, 0x39FE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FE98u;
label_39fe98:
    // 0x39fe98: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39FE98u;
    {
        const bool branch_taken_0x39fe98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE98u;
        // 0x39fe9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fe98) {
            ctx->pc = 0x39FEB4u;
            goto label_39feb4;
        }
    }
    ctx->pc = 0x39FEA0u;
    // 0x39fea0: 0x2785aa08  addiu       $a1, $gp, -0x55F8
    ctx->pc = 0x39fea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945288));
    // 0x39fea4: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x39FEA4u;
    SET_GPR_U32(ctx, 31, 0x39FEACu);
    ctx->pc = 0x39FEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FEA4u;
    // 0x39fea8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x39FEA4u, 0x39FEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FEACu;
label_39feac:
    // 0x39feac: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x39FEACu;
    {
        const bool branch_taken_0x39feac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39feac) {
            ctx->pc = 0x39FEB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FEACu;
            // 0x39feb0: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FEBCu;
            goto label_39febc;
        }
    }
    ctx->pc = 0x39FEB4u;
label_39feb4:
    // 0x39feb4: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x39FEB4u;
    {
        const bool branch_taken_0x39feb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FEB4u;
        // 0x39feb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39feb4) {
            ctx->pc = 0x3A004Cu;
            goto label_3a004c;
        }
    }
    ctx->pc = 0x39FEBCu;
label_39febc:
    // 0x39febc: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x39FEBCu;
    {
        const bool branch_taken_0x39febc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FEBCu;
        // 0x39fec0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39febc) {
            ctx->pc = 0x3A0048u;
            goto label_3a0048;
        }
    }
    ctx->pc = 0x39FEC4u;
    // 0x39fec4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x39fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_39fec8:
    // 0x39fec8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x39fec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fecc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x39feccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x39fed0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x39fed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fed4: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x39fed4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x39fed8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x39fed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39fedc: 0x26500018  addiu       $s0, $s2, 0x18
    ctx->pc = 0x39fedcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x39fee0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x39fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x39fee4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x39fee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39fee8: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x39fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x39feec: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x39feecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39fef0: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x39FEF0u;
    SET_GPR_U32(ctx, 31, 0x39FEF8u);
    ctx->pc = 0x39FEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FEF0u;
    // 0x39fef4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x39FEF0u, 0x39FEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FEF8u;
label_39fef8:
    // 0x39fef8: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x39FEF8u;
    {
        const bool branch_taken_0x39fef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FEF8u;
        // 0x39fefc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fef8) {
            ctx->pc = 0x39FEB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39feb4;
        }
    }
    ctx->pc = 0x39FF00u;
    // 0x39ff00: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x39ff00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39ff04: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x39ff04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39ff08: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x39ff08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x39ff0c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x39ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_39ff10:
    // 0x39ff10: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x39ff10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x39ff14: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x39ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x39ff18: 0x30440007  andi        $a0, $v0, 0x7
    ctx->pc = 0x39ff18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x39ff1c: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x39ff1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x39ff20: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x39FF20u;
    {
        const bool branch_taken_0x39ff20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF20u;
        // 0x39ff24: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ff20) {
            ctx->pc = 0x39FF78u;
            goto label_39ff78;
        }
    }
    ctx->pc = 0x39FF28u;
    // 0x39ff28: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x39ff28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x39ff2c: 0x2442bb60  addiu       $v0, $v0, -0x44A0
    ctx->pc = 0x39ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949728));
    // 0x39ff30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39ff30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39ff34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x39ff34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39ff38: 0x800008  jr          $a0
    ctx->pc = 0x39FF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x39FF40u: goto label_39ff40;
            case 0x39FF50u: goto label_39ff50;
            case 0x39FF74u: goto label_39ff74;
            case 0x39FF78u: goto label_39ff78;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FF38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x39FF40u;
label_39ff40:
    // 0x39ff40: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x39ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x39ff44: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x39ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x39ff48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x39FF48u;
    {
        const bool branch_taken_0x39ff48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF48u;
        // 0x39ff4c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ff48) {
            ctx->pc = 0x39FF78u;
            goto label_39ff78;
        }
    }
    ctx->pc = 0x39FF50u;
label_39ff50:
    // 0x39ff50: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x39ff50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x39ff54: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x39ff54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39ff58: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x39ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39ff5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x39ff5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ff60: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x39ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39ff64: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x39ff64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x39ff68: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x39ff68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x39ff6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39FF6Cu;
    {
        const bool branch_taken_0x39ff6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF6Cu;
        // 0x39ff70: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ff6c) {
            ctx->pc = 0x39FF78u;
            goto label_39ff78;
        }
    }
    ctx->pc = 0x39FF74u;
label_39ff74:
    // 0x39ff74: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x39ff74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39ff78:
    // 0x39ff78: 0x5100ffe5  beql        $t0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x39FF78u;
    {
        const bool branch_taken_0x39ff78 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ff78) {
            ctx->pc = 0x39FF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FF78u;
            // 0x39ff7c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39ff10;
        }
    }
    ctx->pc = 0x39FF80u;
    // 0x39ff80: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x39ff80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x39ff84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x39ff84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ff88: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x39FF88u;
    SET_GPR_U32(ctx, 31, 0x39FF90u);
    ctx->pc = 0x39FF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF88u;
    // 0x39ff8c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x39FF88u, 0x39FF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FF90u;
label_39ff90:
    // 0x39ff90: 0x1040ffc8  beqz        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x39FF90u;
    {
        const bool branch_taken_0x39ff90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF90u;
        // 0x39ff94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ff90) {
            ctx->pc = 0x39FEB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39feb4;
        }
    }
    ctx->pc = 0x39FF98u;
    // 0x39ff98: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x39ff98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39ff9c: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x39FF9Cu;
    SET_GPR_U32(ctx, 31, 0x39FFA4u);
    ctx->pc = 0x39FFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF9Cu;
    // 0x39ffa0: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x39FF9Cu, 0x39FFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FFA4u;
label_39ffa4:
    // 0x39ffa4: 0x1040ffc3  beqz        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x39FFA4u;
    {
        const bool branch_taken_0x39ffa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FFA4u;
        // 0x39ffa8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ffa4) {
            ctx->pc = 0x39FEB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39feb4;
        }
    }
    ctx->pc = 0x39FFACu;
    // 0x39ffac: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x39ffacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39ffb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39ffb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ffb4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x39ffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39ffb8:
    // 0x39ffb8: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x39ffb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x39ffbc: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x39ffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x39ffc0: 0x30440007  andi        $a0, $v0, 0x7
    ctx->pc = 0x39ffc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x39ffc4: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x39ffc4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x39ffc8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x39FFC8u;
    {
        const bool branch_taken_0x39ffc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FFC8u;
        // 0x39ffcc: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ffc8) {
            ctx->pc = 0x3A001Cu;
            goto label_3a001c;
        }
    }
    ctx->pc = 0x39FFD0u;
    // 0x39ffd0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x39ffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x39ffd4: 0x2442bb80  addiu       $v0, $v0, -0x4480
    ctx->pc = 0x39ffd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949760));
    // 0x39ffd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39ffd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39ffdc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x39ffdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39ffe0: 0x800008  jr          $a0
    ctx->pc = 0x39FFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x39FFE8u: goto label_39ffe8;
            case 0x39FFF8u: goto label_39fff8;
            case 0x3A0018u: goto label_3a0018;
            case 0x3A001Cu: goto label_3a001c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FFE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x39FFE8u;
label_39ffe8:
    // 0x39ffe8: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x39ffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x39ffec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x39ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x39fff0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x39FFF0u;
    {
        const bool branch_taken_0x39fff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FFF0u;
        // 0x39fff4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fff0) {
            ctx->pc = 0x3A001Cu;
            goto label_3a001c;
        }
    }
    ctx->pc = 0x39FFF8u;
label_39fff8:
    // 0x39fff8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x39fff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x39fffc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x39fffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3a0000: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3a0000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a0004: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a0004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a0008: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a0008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a000c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3a000cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3a0010: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A0010u;
    {
        const bool branch_taken_0x3a0010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0010u;
        // 0x3a0014: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0010) {
            ctx->pc = 0x3A001Cu;
            goto label_3a001c;
        }
    }
    ctx->pc = 0x3A0018u;
label_3a0018:
    // 0x3a0018: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a0018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a001c:
    // 0x3a001c: 0x50e0ffe6  beql        $a3, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3A001Cu;
    {
        const bool branch_taken_0x3a001c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a001c) {
            ctx->pc = 0x3A0020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A001Cu;
            // 0x3a0020: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39ffb8;
        }
    }
    ctx->pc = 0x3A0024u;
    // 0x3a0024: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x3a0024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3a0028: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a0028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a002c: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x3a002cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x3a0030: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x3A0030u;
    SET_GPR_U32(ctx, 31, 0x3A0038u);
    ctx->pc = 0x3A0034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0030u;
    // 0x3a0034: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x3A0030u, 0x3A0038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0038u;
label_3a0038:
    // 0x3a0038: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3a0038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3a003c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3a003cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3a0040: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x3A0040u;
    {
        const bool branch_taken_0x3a0040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0040u;
        // 0x3a0044: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0040) {
            ctx->pc = 0x39FEC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39fec8;
        }
    }
    ctx->pc = 0x3A0048u;
label_3a0048:
    // 0x3a0048: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3a0048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a004c:
    // 0x3a004c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3a004cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a0050: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3a0050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a0054: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3a0054u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a0058: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3a0058u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a005c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3a005cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a0060: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3a0060u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a0064: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a0064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0068: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0068u;
        // 0x3a006c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0070u;
}
