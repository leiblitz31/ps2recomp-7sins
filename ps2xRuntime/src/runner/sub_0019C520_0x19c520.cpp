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

// Function: sub_0019C520
// Address: 0x19c520 - 0x19c570
void sub_0019C520_0x19c520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C520_0x19c520");
#endif

    ctx->pc = 0x19c520u;

    // 0x19c520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c524: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19c524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19c528: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x19c528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19c52c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19c52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c530: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x19c530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x19c534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c538: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19C538u;
    {
        const bool branch_taken_0x19c538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19c538) {
            ctx->pc = 0x19C550u;
            goto label_19c550;
        }
    }
    ctx->pc = 0x19C540u;
    // 0x19c540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c544: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x19c544u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19c548: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19C548u;
    {
        const bool branch_taken_0x19c548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c548) {
            ctx->pc = 0x19C554u;
            goto label_19c554;
        }
    }
    ctx->pc = 0x19C550u;
label_19c550:
    // 0x19c550: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19c550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c554:
    // 0x19c554: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19c554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c558: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c55c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19c55cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19c560: 0x3e00008  jr          $ra
    ctx->pc = 0x19C560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C568u;
    // 0x19c568: 0x0  nop
    ctx->pc = 0x19c568u;
    // NOP
    // 0x19c56c: 0x0  nop
    ctx->pc = 0x19c56cu;
    // NOP
    ctx->pc = 0x19c570u;
}
