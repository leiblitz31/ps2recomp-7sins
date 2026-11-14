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

// Function: sub_0039B900
// Address: 0x39b900 - 0x39b958
void sub_0039B900_0x39b900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B900_0x39b900");
#endif

    switch (ctx->pc) {
        case 0x39b92cu: goto label_39b92c;
        default: break;
    }

    ctx->pc = 0x39b900u;

    // 0x39b900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39b900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39b904: 0x8f82a9e0  lw          $v0, -0x5620($gp)
    ctx->pc = 0x39b904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945248)));
    // 0x39b908: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x39b908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x39b90c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39b90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39b910: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39b910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39b914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39b918: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x39b918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x39b91c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39B91Cu;
    {
        const bool branch_taken_0x39b91c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B91Cu;
        // 0x39b920: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b91c) {
            ctx->pc = 0x39B92Cu;
            goto label_39b92c;
        }
    }
    ctx->pc = 0x39B924u;
    // 0x39b924: 0xc106794  jal         func_419E50
    ctx->pc = 0x39B924u;
    SET_GPR_U32(ctx, 31, 0x39B92Cu);
    ctx->pc = 0x39B928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B924u;
    // 0x39b928: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x39B924u, 0x39B92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B92Cu;
label_39b92c:
    // 0x39b92c: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x39b92cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x39b930: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39b930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b934: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x39b934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39b938: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39b938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39b93c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39b93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39b940: 0x3e00008  jr          $ra
    ctx->pc = 0x39B940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B940u;
        // 0x39b944: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39B948u;
    // 0x39b948: 0x8f82a9e0  lw          $v0, -0x5620($gp)
    ctx->pc = 0x39b948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945248)));
    // 0x39b94c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x39b94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x39b950: 0x3e00008  jr          $ra
    ctx->pc = 0x39B950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B950u;
        // 0x39b954: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39B958u;
}
