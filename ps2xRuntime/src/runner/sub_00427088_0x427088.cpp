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

// Function: sub_00427088
// Address: 0x427088 - 0x427188
void sub_00427088_0x427088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00427088_0x427088");
#endif

    switch (ctx->pc) {
        case 0x4270c8u: goto label_4270c8;
        case 0x4270d4u: goto label_4270d4;
        case 0x4270e4u: goto label_4270e4;
        case 0x4270f4u: goto label_4270f4;
        case 0x427104u: goto label_427104;
        case 0x427114u: goto label_427114;
        case 0x427124u: goto label_427124;
        case 0x427134u: goto label_427134;
        case 0x427148u: goto label_427148;
        default: break;
    }

    ctx->pc = 0x427088u;

label_427088:
    // 0x427088: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x427088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x42708c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x42708cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x427090: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x427090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x427094: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x427094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427098: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x427098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x42709c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x42709cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4270a0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4270a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x4270a4: 0x1080002f  beqz        $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x4270A4u;
    {
        const bool branch_taken_0x4270a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4270A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4270A4u;
        // 0x4270a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4270a4) {
            ctx->pc = 0x427164u;
            goto label_427164;
        }
    }
    ctx->pc = 0x4270ACu;
    // 0x4270ac: 0x18a0002c  blez        $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x4270ACu;
    {
        const bool branch_taken_0x4270ac = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x4270B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4270ACu;
        // 0x4270b0: 0x2493001c  addiu       $s3, $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4270ac) {
            ctx->pc = 0x427160u;
            goto label_427160;
        }
    }
    ctx->pc = 0x4270B4u;
    // 0x4270b4: 0x24b2ffff  addiu       $s2, $a1, -0x1
    ctx->pc = 0x4270b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4270b8: 0x2494005c  addiu       $s4, $a0, 0x5C
    ctx->pc = 0x4270b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    // 0x4270bc: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x4270bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4270c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4270c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4270c4: 0x0  nop
    ctx->pc = 0x4270c4u;
    // NOP
label_4270c8:
    // 0x4270c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4270c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4270cc: 0xc109c22  jal         func_427088
    ctx->pc = 0x4270CCu;
    SET_GPR_U32(ctx, 31, 0x4270D4u);
    ctx->pc = 0x4270D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4270CCu;
    // 0x4270d0: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427088u;
    goto label_427088;
    ctx->pc = 0x4270D4u;
label_4270d4:
    // 0x4270d4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4270d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4270d8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x4270d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4270dc: 0xc109c22  jal         func_427088
    ctx->pc = 0x4270DCu;
    SET_GPR_U32(ctx, 31, 0x4270E4u);
    ctx->pc = 0x4270E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4270DCu;
    // 0x4270e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427088u;
    goto label_427088;
    ctx->pc = 0x4270E4u;
label_4270e4:
    // 0x4270e4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4270e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4270e8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x4270e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4270ec: 0xc109c22  jal         func_427088
    ctx->pc = 0x4270ECu;
    SET_GPR_U32(ctx, 31, 0x4270F4u);
    ctx->pc = 0x4270F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4270ECu;
    // 0x4270f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427088u;
    goto label_427088;
    ctx->pc = 0x4270F4u;
label_4270f4:
    // 0x4270f4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x4270f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4270f8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x4270f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4270fc: 0xc109c22  jal         func_427088
    ctx->pc = 0x4270FCu;
    SET_GPR_U32(ctx, 31, 0x427104u);
    ctx->pc = 0x427100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4270FCu;
    // 0x427100: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427088u;
    goto label_427088;
    ctx->pc = 0x427104u;
label_427104:
    // 0x427104: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x427104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x427108: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x427108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x42710c: 0xc109c22  jal         func_427088
    ctx->pc = 0x42710Cu;
    SET_GPR_U32(ctx, 31, 0x427114u);
    ctx->pc = 0x427110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42710Cu;
    // 0x427110: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427088u;
    goto label_427088;
    ctx->pc = 0x427114u;
label_427114:
    // 0x427114: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x427114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x427118: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x427118u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x42711c: 0xc109c22  jal         func_427088
    ctx->pc = 0x42711Cu;
    SET_GPR_U32(ctx, 31, 0x427124u);
    ctx->pc = 0x427120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42711Cu;
    // 0x427120: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427088u;
    goto label_427088;
    ctx->pc = 0x427124u;
label_427124:
    // 0x427124: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x427124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x427128: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x427128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x42712c: 0xc109c22  jal         func_427088
    ctx->pc = 0x42712Cu;
    SET_GPR_U32(ctx, 31, 0x427134u);
    ctx->pc = 0x427130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42712Cu;
    // 0x427130: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427088u;
    goto label_427088;
    ctx->pc = 0x427134u;
label_427134:
    // 0x427134: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x427134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x427138: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x427138u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x42713c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x42713cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427140: 0xc109c22  jal         func_427088
    ctx->pc = 0x427140u;
    SET_GPR_U32(ctx, 31, 0x427148u);
    ctx->pc = 0x427144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x427140u;
    // 0x427144: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427088u;
    goto label_427088;
    ctx->pc = 0x427148u;
label_427148:
    // 0x427148: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x427148u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x42714c: 0x274102a  slt         $v0, $s3, $s4
    ctx->pc = 0x42714cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x427150: 0x5440ffdd  bnel        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x427150u;
    {
        const bool branch_taken_0x427150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x427150) {
            ctx->pc = 0x427154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x427150u;
            // 0x427154: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4270C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4270c8;
        }
    }
    ctx->pc = 0x427158u;
    // 0x427158: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x427158u;
    {
        const bool branch_taken_0x427158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427158u;
        // 0x42715c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427158) {
            ctx->pc = 0x427168u;
            goto label_427168;
        }
    }
    ctx->pc = 0x427160u;
label_427160:
    // 0x427160: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x427160u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_427164:
    // 0x427164: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x427164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_427168:
    // 0x427168: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x427168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x42716c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x42716cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x427170: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x427170u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x427174: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x427174u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x427178: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x427178u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42717c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42717cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x427180: 0x3e00008  jr          $ra
    ctx->pc = 0x427180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x427184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427180u;
        // 0x427184: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x427180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x427188u;
}
