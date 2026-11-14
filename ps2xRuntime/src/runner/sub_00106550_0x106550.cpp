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

// Function: sub_00106550
// Address: 0x106550 - 0x1065a0
void sub_00106550_0x106550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106550_0x106550");
#endif

    ctx->pc = 0x106550u;

    // 0x106550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x106554: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x106554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x106558: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x106558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10655c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10655cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x106560: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x106560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106564: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x106564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106568: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x106568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10656c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10656cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106570: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x106570u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x106574: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x106574u;
    {
        const bool branch_taken_0x106574 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x106574) {
            ctx->pc = 0x106588u;
            goto label_106588;
        }
    }
    ctx->pc = 0x10657Cu;
    // 0x10657c: 0x8fb00020  lw          $s0, 0x20($sp)
    ctx->pc = 0x10657cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106580: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106580u;
    {
        const bool branch_taken_0x106580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x106580) {
            ctx->pc = 0x10658Cu;
            goto label_10658c;
        }
    }
    ctx->pc = 0x106588u;
label_106588:
    // 0x106588: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x106588u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_10658c:
    // 0x10658c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10658cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106590: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x106590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106594: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x106594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x106598: 0x3e00008  jr          $ra
    ctx->pc = 0x106598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1065A0u;
}
