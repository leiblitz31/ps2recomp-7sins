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

// Function: sub_004A5FF0
// Address: 0x4a5ff0 - 0x4a6088
void sub_004A5FF0_0x4a5ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5FF0_0x4a5ff0");
#endif

    switch (ctx->pc) {
        case 0x4a604cu: goto label_4a604c;
        default: break;
    }

    ctx->pc = 0x4a5ff0u;

    // 0x4a5ff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a5ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4a5ff4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4a5ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4a5ff8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a5ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4a5ffc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a5ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6000: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4a6000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4a6004: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4a6004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a6008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a600c: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x4a600cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4a6010: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x4a6010u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4a6014: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4A6014u;
    {
        const bool branch_taken_0x4a6014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A6018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6014u;
        // 0x4a6018: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6014) {
            ctx->pc = 0x4A606Cu;
            goto label_4a606c;
        }
    }
    ctx->pc = 0x4A601Cu;
    // 0x4a601c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4a601cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a6020: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4a6020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4a6024: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4a6024u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a6028: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4A6028u;
    {
        const bool branch_taken_0x4a6028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6028u;
        // 0x4a602c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6028) {
            ctx->pc = 0x4A6070u;
            goto label_4a6070;
        }
    }
    ctx->pc = 0x4A6030u;
    // 0x4a6030: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4a6030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4a6034: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4a6034u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4a6038: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4A6038u;
    {
        const bool branch_taken_0x4a6038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6038u;
        // 0x4a603c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6038) {
            ctx->pc = 0x4A6070u;
            goto label_4a6070;
        }
    }
    ctx->pc = 0x4A6040u;
    // 0x4a6040: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x4a6040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4a6044: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A6044u;
    SET_GPR_U32(ctx, 31, 0x4A604Cu);
    ctx->pc = 0x4A6048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6044u;
    // 0x4a6048: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A6044u, 0x4A604Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A604Cu;
label_4a604c:
    // 0x4a604c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A604Cu;
    {
        const bool branch_taken_0x4a604c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A604Cu;
        // 0x4a6050: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a604c) {
            ctx->pc = 0x4A6070u;
            goto label_4a6070;
        }
    }
    ctx->pc = 0x4A6054u;
    // 0x4a6054: 0x92230018  lbu         $v1, 0x18($s1)
    ctx->pc = 0x4a6054u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4a6058: 0x92020010  lbu         $v0, 0x10($s0)
    ctx->pc = 0x4a6058u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4a605c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4a605cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4a6060: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a6060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a6064: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x4a6064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x4a6068: 0x38720001  xori        $s2, $v1, 0x1
    ctx->pc = 0x4a6068u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_4a606c:
    // 0x4a606c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4a606cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a6070:
    // 0x4a6070: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4a6070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a6074: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a6074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a6078: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4a6078u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a607c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a607cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6080: 0x3e00008  jr          $ra
    ctx->pc = 0x4A6080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6080u;
        // 0x4a6084: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A6088u;
}
