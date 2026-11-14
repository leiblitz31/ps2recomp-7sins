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

// Function: sub_004AEB28
// Address: 0x4aeb28 - 0x4aeda8
void sub_004AEB28_0x4aeb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AEB28_0x4aeb28");
#endif

    switch (ctx->pc) {
        case 0x4aeb8cu: goto label_4aeb8c;
        case 0x4aec40u: goto label_4aec40;
        case 0x4aec70u: goto label_4aec70;
        case 0x4aed10u: goto label_4aed10;
        case 0x4aed74u: goto label_4aed74;
        default: break;
    }

    ctx->pc = 0x4aeb28u;

    // 0x4aeb28: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4aeb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x4aeb2c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4aeb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4aeb30: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x4aeb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x4aeb34: 0x8f84c244  lw          $a0, -0x3DBC($gp)
    ctx->pc = 0x4aeb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951492)));
    // 0x4aeb38: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x4aeb38u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aeb3c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x4aeb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x4aeb40: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x4aeb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x4aeb44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4aeb44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aeb48: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x4aeb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x4aeb4c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4aeb4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aeb50: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x4aeb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x4aeb54: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4aeb54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aeb58: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4aeb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x4aeb5c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4aeb5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aeb60: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x4aeb60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x4aeb64: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x4aeb64u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4aeb68: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x4aeb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x4aeb6c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x4aeb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x4aeb70: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x4aeb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x4aeb74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4aeb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4aeb78: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x4aeb78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x4aeb7c: 0xafa9000c  sw          $t1, 0xC($sp)
    ctx->pc = 0x4aeb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 9));
    // 0x4aeb80: 0xafaa0010  sw          $t2, 0x10($sp)
    ctx->pc = 0x4aeb80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 10));
    // 0x4aeb84: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x4AEB84u;
    SET_GPR_U32(ctx, 31, 0x4AEB8Cu);
    ctx->pc = 0x4AEB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AEB84u;
    // 0x4aeb88: 0xafab0014  sw          $t3, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x4AEB84u, 0x4AEB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEB8Cu;
label_4aeb8c:
    // 0x4aeb8c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x4aeb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4aeb90: 0x2443fffd  addiu       $v1, $v0, -0x3
    ctx->pc = 0x4aeb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x4aeb94: 0x2c620017  sltiu       $v0, $v1, 0x17
    ctx->pc = 0x4aeb94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x4aeb98: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4AEB98u;
    {
        const bool branch_taken_0x4aeb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEB98u;
        // 0x4aeb9c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aeb98) {
            ctx->pc = 0x4AEC00u;
            goto label_4aec00;
        }
    }
    ctx->pc = 0x4AEBA0u;
    // 0x4aeba0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4aeba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4aeba4: 0x24422cd0  addiu       $v0, $v0, 0x2CD0
    ctx->pc = 0x4aeba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11472));
    // 0x4aeba8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4aeba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4aebac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4aebacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4aebb0: 0x800008  jr          $a0
    ctx->pc = 0x4AEBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4AEBB8u: goto label_4aebb8;
            case 0x4AEBE0u: goto label_4aebe0;
            case 0x4AEC00u: goto label_4aec00;
            case 0x4AEC14u: goto label_4aec14;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AEBB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4AEBB8u;
label_4aebb8:
    // 0x4aebb8: 0x34118000  ori         $s1, $zero, 0x8000
    ctx->pc = 0x4aebb8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x4aebbc: 0x8f83b8bc  lw          $v1, -0x4744($gp)
    ctx->pc = 0x4aebbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949052)));
    // 0x4aebc0: 0x2f1102b  sltu        $v0, $s7, $s1
    ctx->pc = 0x4aebc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x4aebc4: 0x34158000  ori         $s5, $zero, 0x8000
    ctx->pc = 0x4aebc4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x4aebc8: 0x2e2880b  movn        $s1, $s7, $v0
    ctx->pc = 0x4aebc8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 23));
    // 0x4aebcc: 0x8fb40004  lw          $s4, 0x4($sp)
    ctx->pc = 0x4aebccu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4aebd0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AEBD0u;
    {
        const bool branch_taken_0x4aebd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AEBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEBD0u;
        // 0x4aebd4: 0x8f93b8c4  lw          $s3, -0x473C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949060)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aebd0) {
            ctx->pc = 0x4AEBECu;
            goto label_4aebec;
        }
    }
    ctx->pc = 0x4AEBD8u;
    // 0x4aebd8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4AEBD8u;
    {
        const bool branch_taken_0x4aebd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEBD8u;
        // 0x4aebdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aebd8) {
            ctx->pc = 0x4AEBF4u;
            goto label_4aebf4;
        }
    }
    ctx->pc = 0x4AEBE0u;
label_4aebe0:
    // 0x4aebe0: 0x8f82b8bc  lw          $v0, -0x4744($gp)
    ctx->pc = 0x4aebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949052)));
    // 0x4aebe4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AEBE4u;
    {
        const bool branch_taken_0x4aebe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEBE4u;
        // 0x4aebe8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aebe4) {
            ctx->pc = 0x4AEBF4u;
            goto label_4aebf4;
        }
    }
    ctx->pc = 0x4AEBECu;
label_4aebec:
    // 0x4aebec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4AEBECu;
    {
        const bool branch_taken_0x4aebec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEBECu;
        // 0x4aebf0: 0x24160002  addiu       $s6, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aebec) {
            ctx->pc = 0x4AEC14u;
            goto label_4aec14;
        }
    }
    ctx->pc = 0x4AEBF4u;
label_4aebf4:
    // 0x4aebf4: 0xaf82b8bc  sw          $v0, -0x4744($gp)
    ctx->pc = 0x4aebf4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949052), GPR_U32(ctx, 2));
    // 0x4aebf8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4AEBF8u;
    {
        const bool branch_taken_0x4aebf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEBF8u;
        // 0x4aebfc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aebf8) {
            ctx->pc = 0x4AEC18u;
            goto label_4aec18;
        }
    }
    ctx->pc = 0x4AEC00u;
label_4aec00:
    // 0x4aec00: 0x3c15000f  lui         $s5, 0xF
    ctx->pc = 0x4aec00u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)15 << 16));
    // 0x4aec04: 0x8fb40004  lw          $s4, 0x4($sp)
    ctx->pc = 0x4aec04u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4aec08: 0x8fb30000  lw          $s3, 0x0($sp)
    ctx->pc = 0x4aec08u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aec0c: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x4aec0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aec10: 0x36b5fc00  ori         $s5, $s5, 0xFC00
    ctx->pc = 0x4aec10u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)64512);
label_4aec14:
    // 0x4aec14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4aec14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4aec18:
    // 0x4aec18: 0x16c2000c  bne         $s6, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4AEC18u;
    {
        const bool branch_taken_0x4aec18 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x4aec18) {
            ctx->pc = 0x4AEC4Cu;
            goto label_4aec4c;
        }
    }
    ctx->pc = 0x4AEC20u;
    // 0x4aec20: 0x8f82b8d8  lw          $v0, -0x4728($gp)
    ctx->pc = 0x4aec20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949080)));
    // 0x4aec24: 0x8f83b8dc  lw          $v1, -0x4724($gp)
    ctx->pc = 0x4aec24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949084)));
    // 0x4aec28: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x4aec28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x4aec2c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x4aec2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4aec30: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AEC30u;
    {
        const bool branch_taken_0x4aec30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AEC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEC30u;
        // 0x4aec34: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aec30) {
            ctx->pc = 0x4AEC4Cu;
            goto label_4aec4c;
        }
    }
    ctx->pc = 0x4AEC38u;
    // 0x4aec38: 0xc0bbc80  jal         func_2EF200
    ctx->pc = 0x4AEC38u;
    SET_GPR_U32(ctx, 31, 0x4AEC40u);
    ctx->pc = 0x4AEC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AEC38u;
    // 0x4aec3c: 0x24842c80  addiu       $a0, $a0, 0x2C80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF200u, 0x4AEC38u, 0x4AEC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEC40u;
label_4aec40:
    // 0x4aec40: 0x8f83b8d8  lw          $v1, -0x4728($gp)
    ctx->pc = 0x4aec40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949080)));
    // 0x4aec44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4aec44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4aec48: 0xaf83b8d8  sw          $v1, -0x4728($gp)
    ctx->pc = 0x4aec48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949080), GPR_U32(ctx, 3));
label_4aec4c:
    // 0x4aec4c: 0x12c00047  beqz        $s6, . + 4 + (0x47 << 2)
    ctx->pc = 0x4AEC4Cu;
    {
        const bool branch_taken_0x4aec4c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEC4Cu;
        // 0x4aec50: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aec4c) {
            ctx->pc = 0x4AED6Cu;
            goto label_4aed6c;
        }
    }
    ctx->pc = 0x4AEC54u;
    // 0x4aec54: 0x2792b8d4  addiu       $s2, $gp, -0x472C
    ctx->pc = 0x4aec54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949076));
    // 0x4aec58: 0x245ec9c0  addiu       $fp, $v0, -0x3640
    ctx->pc = 0x4aec58u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953408));
    // 0x4aec5c: 0x2784b8dc  addiu       $a0, $gp, -0x4724
    ctx->pc = 0x4aec5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949084));
    // 0x4aec60: 0x3ac20002  xori        $v0, $s6, 0x2
    ctx->pc = 0x4aec60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)2);
    // 0x4aec64: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x4aec64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4aec68: 0x82900a  movz        $s2, $a0, $v0
    ctx->pc = 0x4aec68u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
    // 0x4aec6c: 0x0  nop
    ctx->pc = 0x4aec6cu;
    // NOP
label_4aec70:
    // 0x4aec70: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4aec70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4aec74: 0x16ca0004  bne         $s6, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AEC74u;
    {
        const bool branch_taken_0x4aec74 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 10));
        ctx->pc = 0x4AEC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEC74u;
        // 0x4aec78: 0x3043007f  andi        $v1, $v0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aec74) {
            ctx->pc = 0x4AEC88u;
            goto label_4aec88;
        }
    }
    ctx->pc = 0x4AEC7Cu;
    // 0x4aec7c: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x4aec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x4aec80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4AEC80u;
    {
        const bool branch_taken_0x4aec80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEC80u;
        // 0x4aec84: 0x5e2821  addu        $a1, $v0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aec80) {
            ctx->pc = 0x4AEC9Cu;
            goto label_4aec9c;
        }
    }
    ctx->pc = 0x4AEC88u;
label_4aec88:
    // 0x4aec88: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4aec88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4aec8c: 0x2442b1c0  addiu       $v0, $v0, -0x4E40
    ctx->pc = 0x4aec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
    // 0x4aec90: 0x400013  mtlo        $v0
    ctx->pc = 0x4aec90u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x4aec94: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x4aec94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4aec98: 0x70622800  madd        $a1, $v1, $v0
    ctx->pc = 0x4aec98u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_4aec9c:
    // 0x4aec9c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4aec9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4aeca0: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x4aeca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aeca4: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4aeca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4aeca8: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x4aeca8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
    // 0x4aecac: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x4aecacu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    // 0x4aecb0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x4aecb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4aecb4: 0xaca40018  sw          $a0, 0x18($a1)
    ctx->pc = 0x4aecb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
    // 0x4aecb8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4aecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aecbc: 0xacb70020  sw          $s7, 0x20($a1)
    ctx->pc = 0x4aecbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 23));
    // 0x4aecc0: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x4aecc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x4aecc4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4aecc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aecc8: 0xaca40024  sw          $a0, 0x24($a1)
    ctx->pc = 0x4aecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 4));
    // 0x4aeccc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x4aecccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4aecd0: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x4aecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x4aecd4: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x4aecd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4aecd8: 0x16110004  bne         $s0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AECD8u;
    {
        const bool branch_taken_0x4aecd8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x4AECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AECD8u;
        // 0x4aecdc: 0xaca40014  sw          $a0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aecd8) {
            ctx->pc = 0x4AECECu;
            goto label_4aecec;
        }
    }
    ctx->pc = 0x4AECE0u;
    // 0x4aece0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4aece0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4aece4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4AECE4u;
    {
        const bool branch_taken_0x4aece4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AECE4u;
        // 0x4aece8: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aece4) {
            ctx->pc = 0x4AECF0u;
            goto label_4aecf0;
        }
    }
    ctx->pc = 0x4AECECu;
label_4aecec:
    // 0x4aecec: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x4aececu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_4aecf0:
    // 0x4aecf0: 0x12ca0009  beq         $s6, $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AECF0u;
    {
        const bool branch_taken_0x4aecf0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 10));
        ctx->pc = 0x4AECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AECF0u;
        // 0x4aecf4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aecf0) {
            ctx->pc = 0x4AED18u;
            goto label_4aed18;
        }
    }
    ctx->pc = 0x4AECF8u;
    // 0x4aecf8: 0x7faa0020  sq          $t2, 0x20($sp)
    ctx->pc = 0x4aecf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 10));
    // 0x4aecfc: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x4aecfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4aed00: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4aed00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aed04: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x4aed04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aed08: 0xc0c03aa  jal         func_300EA8
    ctx->pc = 0x4AED08u;
    SET_GPR_U32(ctx, 31, 0x4AED10u);
    ctx->pc = 0x4AED0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AED08u;
    // 0x4aed0c: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300EA8u, 0x4AED08u, 0x4AED10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AED10u;
label_4aed10:
    // 0x4aed10: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4AED10u;
    {
        const bool branch_taken_0x4aed10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AED10u;
        // 0x4aed14: 0x7baa0020  lq          $t2, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aed10) {
            ctx->pc = 0x4AED4Cu;
            goto label_4aed4c;
        }
    }
    ctx->pc = 0x4AED18u;
label_4aed18:
    // 0x4aed18: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4aed18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4aed1c: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x4aed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x4aed20: 0x2484c9f0  addiu       $a0, $a0, -0x3610
    ctx->pc = 0x4aed20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953456));
    // 0x4aed24: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4aed24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x4aed28: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x4aed28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4aed2c: 0x24a5c9f4  addiu       $a1, $a1, -0x360C
    ctx->pc = 0x4aed2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953460));
    // 0x4aed30: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x4aed30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
    // 0x4aed34: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x4aed34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4aed38: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4aed38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4aed3c: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x4aed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
    // 0x4aed40: 0x2463c9f8  addiu       $v1, $v1, -0x3608
    ctx->pc = 0x4aed40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953464));
    // 0x4aed44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4aed44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4aed48: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x4aed48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_4aed4c:
    // 0x4aed4c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4aed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4aed50: 0x2308823  subu        $s1, $s1, $s0
    ctx->pc = 0x4aed50u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x4aed54: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x4aed54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x4aed58: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x4aed58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x4aed5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4aed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4aed60: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4aed60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4aed64: 0x1620ffc2  bnez        $s1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x4AED64u;
    {
        const bool branch_taken_0x4aed64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aed64) {
            ctx->pc = 0x4AEC70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aec70;
        }
    }
    ctx->pc = 0x4AED6Cu;
label_4aed6c:
    // 0x4aed6c: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x4AED6Cu;
    SET_GPR_U32(ctx, 31, 0x4AED74u);
    ctx->pc = 0x4AED70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AED6Cu;
    // 0x4aed70: 0x8f84c244  lw          $a0, -0x3DBC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951492)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x4AED6Cu, 0x4AED74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AED74u;
label_4aed74:
    // 0x4aed74: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x4aed74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x4aed78: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x4aed78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4aed7c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x4aed7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4aed80: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x4aed80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4aed84: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x4aed84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4aed88: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x4aed88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4aed8c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4aed8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4aed90: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x4aed90u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4aed94: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x4aed94u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4aed98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4aed98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4aed9c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AED9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AEDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AED9Cu;
        // 0x4aeda0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AED9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AEDA4u;
    // 0x4aeda4: 0x0  nop
    ctx->pc = 0x4aeda4u;
    // NOP
    ctx->pc = 0x4aeda8u;
}
