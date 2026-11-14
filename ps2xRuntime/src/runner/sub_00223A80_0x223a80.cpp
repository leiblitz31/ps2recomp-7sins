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

// Function: sub_00223A80
// Address: 0x223a80 - 0x223ae0
void sub_00223A80_0x223a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223A80_0x223a80");
#endif

    switch (ctx->pc) {
        case 0x223aa4u: goto label_223aa4;
        case 0x223ac0u: goto label_223ac0;
        default: break;
    }

    ctx->pc = 0x223a80u;

    // 0x223a80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x223a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x223a84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x223a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x223a88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x223a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x223a8c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x223a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x223a90: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x223a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x223a94: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x223a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x223a98: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x223a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223a9c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x223A9Cu;
    SET_GPR_U32(ctx, 31, 0x223AA4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x223A9Cu, 0x223AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223AA4u;
label_223aa4:
    // 0x223aa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x223aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223aa8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x223AA8u;
    {
        const bool branch_taken_0x223aa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x223aa8) {
            ctx->pc = 0x223AC4u;
            goto label_223ac4;
        }
    }
    ctx->pc = 0x223AB0u;
    // 0x223ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x223ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223ab4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x223ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223ab8: 0xc088eb8  jal         func_223AE0
    ctx->pc = 0x223AB8u;
    SET_GPR_U32(ctx, 31, 0x223AC0u);
    ctx->pc = 0x223AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223AE0u, 0x223AB8u, 0x223AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223AC0u;
label_223ac0:
    // 0x223ac0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x223ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_223ac4:
    // 0x223ac4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x223ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223ac8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x223ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223acc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x223accu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x223ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x223AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223AD8u;
    // 0x223ad8: 0x0  nop
    ctx->pc = 0x223ad8u;
    // NOP
    // 0x223adc: 0x0  nop
    ctx->pc = 0x223adcu;
    // NOP
    ctx->pc = 0x223ae0u;
}
