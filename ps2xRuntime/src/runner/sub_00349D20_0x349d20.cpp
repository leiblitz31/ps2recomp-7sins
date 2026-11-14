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

// Function: sub_00349D20
// Address: 0x349d20 - 0x349d98
void sub_00349D20_0x349d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349D20_0x349d20");
#endif

    switch (ctx->pc) {
        case 0x349d60u: goto label_349d60;
        case 0x349d68u: goto label_349d68;
        default: break;
    }

    ctx->pc = 0x349d20u;

    // 0x349d20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x349d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x349d24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x349d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x349d28: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x349d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x349d2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x349d2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349d30: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x349d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x349d34: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x349d34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349d38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x349d3c: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x349d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x349d40: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x349d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x349d44: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x349d44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x349d48: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x349D48u;
    {
        const bool branch_taken_0x349d48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x349D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349D48u;
        // 0x349d4c: 0x2531821  addu        $v1, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349d48) {
            ctx->pc = 0x349D74u;
            goto label_349d74;
        }
    }
    ctx->pc = 0x349D50u;
    // 0x349d50: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x349d50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x349d54: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x349d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349d58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x349d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349d5c: 0x0  nop
    ctx->pc = 0x349d5cu;
    // NOP
label_349d60:
    // 0x349d60: 0xc0d0a80  jal         func_342A00
    ctx->pc = 0x349D60u;
    SET_GPR_U32(ctx, 31, 0x349D68u);
    ctx->pc = 0x349D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349D60u;
    // 0x349d64: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342A00u, 0x349D60u, 0x349D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349D68u;
label_349d68:
    // 0x349d68: 0x1611fffd  bne         $s0, $s1, . + 4 + (-0x3 << 2)
    ctx->pc = 0x349D68u;
    {
        const bool branch_taken_0x349d68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x349D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349D68u;
        // 0x349d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349d68) {
            ctx->pc = 0x349D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349d60;
        }
    }
    ctx->pc = 0x349D70u;
    // 0x349d70: 0x2531821  addu        $v1, $s2, $s3
    ctx->pc = 0x349d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_349d74:
    // 0x349d74: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x349d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349d78: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x349d78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x349d7c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x349d7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x349d80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x349d80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x349d84: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x349d84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349d88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349d8c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x349d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x349d90: 0x3e00008  jr          $ra
    ctx->pc = 0x349D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349D90u;
        // 0x349d94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349D98u;
}
