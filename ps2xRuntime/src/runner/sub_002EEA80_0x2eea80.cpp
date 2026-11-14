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

// Function: sub_002EEA80
// Address: 0x2eea80 - 0x2eec10
void sub_002EEA80_0x2eea80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EEA80_0x2eea80");
#endif

    switch (ctx->pc) {
        case 0x2eeab0u: goto label_2eeab0;
        case 0x2eeac4u: goto label_2eeac4;
        case 0x2eeafcu: goto label_2eeafc;
        case 0x2eeb30u: goto label_2eeb30;
        case 0x2eeb88u: goto label_2eeb88;
        case 0x2eebd0u: goto label_2eebd0;
        default: break;
    }

    ctx->pc = 0x2eea80u;

    // 0x2eea80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2eea80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2eea84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2eea84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2eea88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2eea88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eea8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2eea8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2eea90: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2eea90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eea94: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2eea94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2eea98: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2eea98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eea9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2eea9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeaa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eeaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eeaa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2eeaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2eeaa8: 0xc0bba86  jal         func_2EEA18
    ctx->pc = 0x2EEAA8u;
    SET_GPR_U32(ctx, 31, 0x2EEAB0u);
    ctx->pc = 0x2EEAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEAA8u;
    // 0x2eeaac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEA18u, 0x2EEAA8u, 0x2EEAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEAB0u;
label_2eeab0:
    // 0x2eeab0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eeab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeab4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EEAB4u;
    {
        const bool branch_taken_0x2eeab4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEAB4u;
        // 0x2eeab8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeab4) {
            ctx->pc = 0x2EEAD8u;
            goto label_2eead8;
        }
    }
    ctx->pc = 0x2EEABCu;
    // 0x2eeabc: 0xc0bb84a  jal         func_2EE128
    ctx->pc = 0x2EEABCu;
    SET_GPR_U32(ctx, 31, 0x2EEAC4u);
    ctx->pc = 0x2EEAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEABCu;
    // 0x2eeac0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE128u, 0x2EEABCu, 0x2EEAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEAC4u;
label_2eeac4:
    // 0x2eeac4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eeac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eeac8: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x2eeac8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeacc: 0xad630010  sw          $v1, 0x10($t3)
    ctx->pc = 0x2eeaccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 3));
    // 0x2eead0: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2EEAD0u;
    {
        const bool branch_taken_0x2eead0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEAD0u;
        // 0x2eead4: 0xad600014  sw          $zero, 0x14($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eead0) {
            ctx->pc = 0x2EEBF4u;
            goto label_2eebf4;
        }
    }
    ctx->pc = 0x2EEAD8u;
label_2eead8:
    // 0x2eead8: 0x6030005  bgezl       $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EEAD8u;
    {
        const bool branch_taken_0x2eead8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2eead8) {
            ctx->pc = 0x2EEADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEAD8u;
            // 0x2eeadc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEAF0u;
            goto label_2eeaf0;
        }
    }
    ctx->pc = 0x2EEAE0u;
    // 0x2eeae0: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x2eeae0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeae4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2eeae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeae8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2eeae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eeaec: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x2eeaecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2eeaf0:
    // 0x2eeaf0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2eeaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2eeaf4: 0xc0bb84a  jal         func_2EE128
    ctx->pc = 0x2EEAF4u;
    SET_GPR_U32(ctx, 31, 0x2EEAFCu);
    ctx->pc = 0x2EEAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEAF4u;
    // 0x2eeaf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE128u, 0x2EEAF4u, 0x2EEAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEAFCu;
label_2eeafc:
    // 0x2eeafc: 0x26280014  addiu       $t0, $s1, 0x14
    ctx->pc = 0x2eeafcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x2eeb00: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x2eeb00u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeb04: 0x26490014  addiu       $t1, $s2, 0x14
    ctx->pc = 0x2eeb04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x2eeb08: 0xad70000c  sw          $s0, 0xC($t3)
    ctx->pc = 0x2eeb08u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 16));
    // 0x2eeb0c: 0x25670014  addiu       $a3, $t3, 0x14
    ctx->pc = 0x2eeb0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
    // 0x2eeb10: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2eeb10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeb14: 0x8e2c0010  lw          $t4, 0x10($s1)
    ctx->pc = 0x2eeb14u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2eeb18: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2eeb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2eeb1c: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x2eeb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x2eeb20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2eeb20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2eeb24: 0x1036821  addu        $t5, $t0, $v1
    ctx->pc = 0x2eeb24u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2eeb28: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x2eeb28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2eeb2c: 0x0  nop
    ctx->pc = 0x2eeb2cu;
    // NOP
label_2eeb30:
    // 0x2eeb30: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x2eeb30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2eeb34: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2eeb34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2eeb38: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2eeb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2eeb3c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2eeb3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2eeb40: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x2eeb40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2eeb44: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x2eeb44u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x2eeb48: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2eeb48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2eeb4c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2eeb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2eeb50: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2eeb50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2eeb54: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x2eeb54u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2eeb58: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2eeb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2eeb5c: 0x126102b  sltu        $v0, $t1, $a2
    ctx->pc = 0x2eeb5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2eeb60: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x2eeb60u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2eeb64: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x2eeb64u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2eeb68: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x2eeb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x2eeb6c: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x2eeb6cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x2eeb70: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2eeb70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2eeb74: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2EEB74u;
    {
        const bool branch_taken_0x2eeb74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB74u;
        // 0x2eeb78: 0x55403  sra         $t2, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb74) {
            ctx->pc = 0x2EEB30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eeb30;
        }
    }
    ctx->pc = 0x2EEB7Cu;
    // 0x2eeb7c: 0x10d102b  sltu        $v0, $t0, $t5
    ctx->pc = 0x2eeb7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x2eeb80: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2EEB80u;
    {
        const bool branch_taken_0x2eeb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eeb80) {
            ctx->pc = 0x2EEB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEB80u;
            // 0x2eeb84: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEBC0u;
            goto label_2eebc0;
        }
    }
    ctx->pc = 0x2EEB88u;
label_2eeb88:
    // 0x2eeb88: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2eeb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2eeb8c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2eeb8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2eeb90: 0x10d202b  sltu        $a0, $t0, $t5
    ctx->pc = 0x2eeb90u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x2eeb94: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2eeb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2eeb98: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2eeb98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2eeb9c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2eeb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2eeba0: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x2eeba0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2eeba4: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x2eeba4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2eeba8: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x2eeba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2eebac: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x2eebacu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x2eebb0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2eebb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2eebb4: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2EEBB4u;
    {
        const bool branch_taken_0x2eebb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEBB4u;
        // 0x2eebb8: 0x55403  sra         $t2, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eebb4) {
            ctx->pc = 0x2EEB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eeb88;
        }
    }
    ctx->pc = 0x2EEBBCu;
    // 0x2eebbc: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x2eebbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_2eebc0:
    // 0x2eebc0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2eebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2eebc4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2EEBC4u;
    {
        const bool branch_taken_0x2eebc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eebc4) {
            ctx->pc = 0x2EEBC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEBC4u;
            // 0x2eebc8: 0xad6c0010  sw          $t4, 0x10($t3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEBF0u;
            goto label_2eebf0;
        }
    }
    ctx->pc = 0x2EEBCCu;
    // 0x2eebcc: 0x0  nop
    ctx->pc = 0x2eebccu;
    // NOP
label_2eebd0:
    // 0x2eebd0: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x2eebd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x2eebd4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2eebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2eebd8: 0x0  nop
    ctx->pc = 0x2eebd8u;
    // NOP
    // 0x2eebdc: 0x0  nop
    ctx->pc = 0x2eebdcu;
    // NOP
    // 0x2eebe0: 0x0  nop
    ctx->pc = 0x2eebe0u;
    // NOP
    // 0x2eebe4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EEBE4u;
    {
        const bool branch_taken_0x2eebe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEBE4u;
        // 0x2eebe8: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eebe4) {
            ctx->pc = 0x2EEBD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eebd0;
        }
    }
    ctx->pc = 0x2EEBECu;
    // 0x2eebec: 0xad6c0010  sw          $t4, 0x10($t3)
    ctx->pc = 0x2eebecu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
label_2eebf0:
    // 0x2eebf0: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x2eebf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2eebf4:
    // 0x2eebf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eebf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eebf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2eebf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eebfc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2eebfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eec00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2eec00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2eec04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2eec04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eec08: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC08u;
        // 0x2eec0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEC10u;
}
