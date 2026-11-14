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

// Function: sub_0037EB20
// Address: 0x37eb20 - 0x37ec80
void sub_0037EB20_0x37eb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037EB20_0x37eb20");
#endif

    switch (ctx->pc) {
        case 0x37eba0u: goto label_37eba0;
        case 0x37eba8u: goto label_37eba8;
        case 0x37ebb0u: goto label_37ebb0;
        case 0x37ebccu: goto label_37ebcc;
        case 0x37ec08u: goto label_37ec08;
        case 0x37ec10u: goto label_37ec10;
        case 0x37ec20u: goto label_37ec20;
        case 0x37ec2cu: goto label_37ec2c;
        case 0x37ec34u: goto label_37ec34;
        case 0x37ec44u: goto label_37ec44;
        case 0x37ec54u: goto label_37ec54;
        default: break;
    }

    ctx->pc = 0x37eb20u;

    // 0x37eb20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x37eb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x37eb24: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x37eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x37eb28: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x37eb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x37eb2c: 0x1024018  mult        $t0, $t0, $v0
    ctx->pc = 0x37eb2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x37eb30: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x37eb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x37eb34: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x37eb34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37eb38: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x37eb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x37eb3c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x37eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x37eb40: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x37eb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x37eb44: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x37eb44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37eb48: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x37eb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x37eb4c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x37eb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x37eb50: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x37eb50u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37eb54: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x37eb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x37eb58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37eb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37eb5c: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x37eb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x37eb60: 0x689821  addu        $s3, $v1, $t0
    ctx->pc = 0x37eb60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x37eb64: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x37eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x37eb68: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x37eb68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37eb6c: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x37EB6Cu;
    {
        const bool branch_taken_0x37eb6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EB6Cu;
        // 0x37eb70: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37eb6c) {
            ctx->pc = 0x37EBBCu;
            goto label_37ebbc;
        }
    }
    ctx->pc = 0x37EB74u;
    // 0x37eb74: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x37eb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x37eb78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37eb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37eb7c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x37EB7Cu;
    {
        const bool branch_taken_0x37eb7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EB7Cu;
        // 0x37eb80: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37eb7c) {
            ctx->pc = 0x37EBA8u;
            goto label_37eba8;
        }
    }
    ctx->pc = 0x37EB84u;
    // 0x37eb84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x37EB84u;
    {
        const bool branch_taken_0x37eb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EB84u;
        // 0x37eb88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37eb84) {
            ctx->pc = 0x37EBA8u;
            goto label_37eba8;
        }
    }
    ctx->pc = 0x37EB8Cu;
    // 0x37eb8c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37EB8Cu;
    {
        const bool branch_taken_0x37eb8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x37EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EB8Cu;
        // 0x37eb90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37eb8c) {
            ctx->pc = 0x37EBA8u;
            goto label_37eba8;
        }
    }
    ctx->pc = 0x37EB94u;
    // 0x37eb94: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x37eb94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37eb98: 0xc0e2686  jal         func_389A18
    ctx->pc = 0x37EB98u;
    SET_GPR_U32(ctx, 31, 0x37EBA0u);
    ctx->pc = 0x37EB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EB98u;
    // 0x37eb9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x37EB98u, 0x37EBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EBA0u;
label_37eba0:
    // 0x37eba0: 0xc1067c6  jal         func_419F18
    ctx->pc = 0x37EBA0u;
    SET_GPR_U32(ctx, 31, 0x37EBA8u);
    ctx->pc = 0x37EBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EBA0u;
    // 0x37eba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419F18u, 0x37EBA0u, 0x37EBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EBA8u;
label_37eba8:
    // 0x37eba8: 0xc0e27ae  jal         func_389EB8
    ctx->pc = 0x37EBA8u;
    SET_GPR_U32(ctx, 31, 0x37EBB0u);
    ctx->pc = 0x37EBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EBA8u;
    // 0x37ebac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389EB8u, 0x37EBA8u, 0x37EBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EBB0u;
label_37ebb0:
    // 0x37ebb0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x37ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x37ebb4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x37ebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x37ebb8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x37ebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_37ebbc:
    // 0x37ebbc: 0x12a00026  beqz        $s5, . + 4 + (0x26 << 2)
    ctx->pc = 0x37EBBCu;
    {
        const bool branch_taken_0x37ebbc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EBBCu;
        // 0x37ebc0: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ebbc) {
            ctx->pc = 0x37EC58u;
            goto label_37ec58;
        }
    }
    ctx->pc = 0x37EBC4u;
    // 0x37ebc4: 0xc0e27da  jal         func_389F68
    ctx->pc = 0x37EBC4u;
    SET_GPR_U32(ctx, 31, 0x37EBCCu);
    ctx->pc = 0x37EBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EBC4u;
    // 0x37ebc8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389F68u, 0x37EBC4u, 0x37EBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EBCCu;
label_37ebcc:
    // 0x37ebcc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x37ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x37ebd0: 0xae74001c  sw          $s4, 0x1C($s3)
    ctx->pc = 0x37ebd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 20));
    // 0x37ebd4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37ebd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ebd8: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x37ebd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x37ebdc: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x37ebdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x37ebe0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37ebe4: 0x12820015  beq         $s4, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x37EBE4u;
    {
        const bool branch_taken_0x37ebe4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x37EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EBE4u;
        // 0x37ebe8: 0xae400048  sw          $zero, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ebe4) {
            ctx->pc = 0x37EC3Cu;
            goto label_37ec3c;
        }
    }
    ctx->pc = 0x37EBECu;
    // 0x37ebec: 0x2e820003  sltiu       $v0, $s4, 0x3
    ctx->pc = 0x37ebecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x37ebf0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x37EBF0u;
    {
        const bool branch_taken_0x37ebf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EBF0u;
        // 0x37ebf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ebf0) {
            ctx->pc = 0x37EC48u;
            goto label_37ec48;
        }
    }
    ctx->pc = 0x37EBF8u;
    // 0x37ebf8: 0x16820014  bne         $s4, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x37EBF8u;
    {
        const bool branch_taken_0x37ebf8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x37EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EBF8u;
        // 0x37ebfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ebf8) {
            ctx->pc = 0x37EC4Cu;
            goto label_37ec4c;
        }
    }
    ctx->pc = 0x37EC00u;
    // 0x37ec00: 0xc0c85a4  jal         func_321690
    ctx->pc = 0x37EC00u;
    SET_GPR_U32(ctx, 31, 0x37EC08u);
    ctx->pc = 0x37EC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EC00u;
    // 0x37ec04: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321690u, 0x37EC00u, 0x37EC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EC08u;
label_37ec08:
    // 0x37ec08: 0xc1067b0  jal         func_419EC0
    ctx->pc = 0x37EC08u;
    SET_GPR_U32(ctx, 31, 0x37EC10u);
    ctx->pc = 0x37EC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EC08u;
    // 0x37ec0c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EC0u, 0x37EC08u, 0x37EC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EC10u;
label_37ec10:
    // 0x37ec10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37ec10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ec14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x37ec14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ec18: 0xc0c859e  jal         func_321678
    ctx->pc = 0x37EC18u;
    SET_GPR_U32(ctx, 31, 0x37EC20u);
    ctx->pc = 0x37EC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EC18u;
    // 0x37ec1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321678u, 0x37EC18u, 0x37EC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EC20u;
label_37ec20:
    // 0x37ec20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37ec20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ec24: 0xc0e2686  jal         func_389A18
    ctx->pc = 0x37EC24u;
    SET_GPR_U32(ctx, 31, 0x37EC2Cu);
    ctx->pc = 0x37EC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EC24u;
    // 0x37ec28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x37EC24u, 0x37EC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EC2Cu;
label_37ec2c:
    // 0x37ec2c: 0xc0e0558  jal         func_381560
    ctx->pc = 0x37EC2Cu;
    SET_GPR_U32(ctx, 31, 0x37EC34u);
    ctx->pc = 0x37EC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EC2Cu;
    // 0x37ec30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381560u, 0x37EC2Cu, 0x37EC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EC34u;
label_37ec34:
    // 0x37ec34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37EC34u;
    {
        const bool branch_taken_0x37ec34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EC34u;
        // 0x37ec38: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ec34) {
            ctx->pc = 0x37EC48u;
            goto label_37ec48;
        }
    }
    ctx->pc = 0x37EC3Cu;
label_37ec3c:
    // 0x37ec3c: 0xc0e054c  jal         func_381530
    ctx->pc = 0x37EC3Cu;
    SET_GPR_U32(ctx, 31, 0x37EC44u);
    ctx->pc = 0x37EC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EC3Cu;
    // 0x37ec40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381530u, 0x37EC3Cu, 0x37EC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EC44u;
label_37ec44:
    // 0x37ec44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37ec44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37ec48:
    // 0x37ec48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37ec48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37ec4c:
    // 0x37ec4c: 0xc0e06c6  jal         func_381B18
    ctx->pc = 0x37EC4Cu;
    SET_GPR_U32(ctx, 31, 0x37EC54u);
    ctx->pc = 0x37EC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EC4Cu;
    // 0x37ec50: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381B18u, 0x37EC4Cu, 0x37EC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EC54u;
label_37ec54:
    // 0x37ec54: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x37ec54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_37ec58:
    // 0x37ec58: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x37ec58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37ec5c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x37ec5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37ec60: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x37ec60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37ec64: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x37ec64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37ec68: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x37ec68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37ec6c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x37ec6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37ec70: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x37ec70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37ec74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37ec74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37ec78: 0x3e00008  jr          $ra
    ctx->pc = 0x37EC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EC78u;
        // 0x37ec7c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37EC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37EC80u;
}
