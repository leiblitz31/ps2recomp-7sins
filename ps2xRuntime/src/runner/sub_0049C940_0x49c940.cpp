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

// Function: sub_0049C940
// Address: 0x49c940 - 0x49c9c8
void sub_0049C940_0x49c940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049C940_0x49c940");
#endif

    switch (ctx->pc) {
        case 0x49c990u: goto label_49c990;
        case 0x49c9a0u: goto label_49c9a0;
        default: break;
    }

    ctx->pc = 0x49c940u;

    // 0x49c940: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x49c940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x49c944: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49c944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49c948: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49c948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x49c94c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x49c94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x49c950: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x49c950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c954: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x49c954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x49c958: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x49c958u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c95c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x49c95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x49c960: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49C960u;
    {
        const bool branch_taken_0x49c960 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x49C964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C960u;
        // 0x49c964: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c960) {
            ctx->pc = 0x49C978u;
            goto label_49c978;
        }
    }
    ctx->pc = 0x49C968u;
    // 0x49c968: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x49c968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49c96c: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x49c96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x49c970: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x49C970u;
    {
        const bool branch_taken_0x49c970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C970u;
        // 0x49c974: 0x9471000c  lhu         $s1, 0xC($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c970) {
            ctx->pc = 0x49C984u;
            goto label_49c984;
        }
    }
    ctx->pc = 0x49C978u;
label_49c978:
    // 0x49c978: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x49c978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49c97c: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x49c97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x49c980: 0x9471000e  lhu         $s1, 0xE($v1)
    ctx->pc = 0x49c980u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_49c984:
    // 0x49c984: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x49C984u;
    {
        const bool branch_taken_0x49c984 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C984u;
        // 0x49c988: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c984) {
            ctx->pc = 0x49C9ACu;
            goto label_49c9ac;
        }
    }
    ctx->pc = 0x49C98Cu;
    // 0x49c98c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x49c98cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49c990:
    // 0x49c990: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x49c990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c994: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x49c994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c998: 0xc126d14  jal         func_49B450
    ctx->pc = 0x49C998u;
    SET_GPR_U32(ctx, 31, 0x49C9A0u);
    ctx->pc = 0x49C99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49C998u;
    // 0x49c99c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B450u, 0x49C998u, 0x49C9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49C9A0u;
label_49c9a0:
    // 0x49c9a0: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x49c9a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x49c9a4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49C9A4u;
    {
        const bool branch_taken_0x49c9a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C9A4u;
        // 0x49c9a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c9a4) {
            ctx->pc = 0x49C990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49c990;
        }
    }
    ctx->pc = 0x49C9ACu;
label_49c9ac:
    // 0x49c9ac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x49c9acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49c9b0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x49c9b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49c9b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49c9b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49c9b8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x49c9b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49c9bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49c9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49c9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x49C9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C9C0u;
        // 0x49c9c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C9C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C9C8u;
}
