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

// Function: sub_002BB820
// Address: 0x2bb820 - 0x2bb870
void sub_002BB820_0x2bb820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB820_0x2bb820");
#endif

    ctx->pc = 0x2bb820u;

    // 0x2bb820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bb820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bb824: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bb824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bb828: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2bb828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2bb82c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bb82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb830: 0x8c4201b0  lw          $v0, 0x1B0($v0)
    ctx->pc = 0x2bb830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x2bb834: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BB834u;
    {
        const bool branch_taken_0x2bb834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb834) {
            ctx->pc = 0x2BB850u;
            goto label_2bb850;
        }
    }
    ctx->pc = 0x2BB83Cu;
    // 0x2bb83c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bb83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb840: 0x8c4201b0  lw          $v0, 0x1B0($v0)
    ctx->pc = 0x2bb840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x2bb844: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x2bb844u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2bb848: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BB848u;
    {
        const bool branch_taken_0x2bb848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb848) {
            ctx->pc = 0x2BB854u;
            goto label_2bb854;
        }
    }
    ctx->pc = 0x2BB850u;
label_2bb850:
    // 0x2bb850: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2bb850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb854:
    // 0x2bb854: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bb854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb858: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bb858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb85c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bb85cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bb860: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB868u;
    // 0x2bb868: 0x0  nop
    ctx->pc = 0x2bb868u;
    // NOP
    // 0x2bb86c: 0x0  nop
    ctx->pc = 0x2bb86cu;
    // NOP
    ctx->pc = 0x2bb870u;
}
