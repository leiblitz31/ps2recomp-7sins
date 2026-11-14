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

// Function: sub_001C47F0
// Address: 0x1c47f0 - 0x1c4850
void sub_001C47F0_0x1c47f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C47F0_0x1c47f0");
#endif

    switch (ctx->pc) {
        case 0x1c4814u: goto label_1c4814;
        case 0x1c4830u: goto label_1c4830;
        default: break;
    }

    ctx->pc = 0x1c47f0u;

    // 0x1c47f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c47f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c47f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c47f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c47f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c47f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c47fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1c47fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1c4800: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1c4800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1c4804: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1c4804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c4808: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1c4808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c480c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x1C480Cu;
    SET_GPR_U32(ctx, 31, 0x1C4814u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1C480Cu, 0x1C4814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4814u;
label_1c4814:
    // 0x1c4814: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c4814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4818: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4818u;
    {
        const bool branch_taken_0x1c4818 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4818) {
            ctx->pc = 0x1C4834u;
            goto label_1c4834;
        }
    }
    ctx->pc = 0x1C4820u;
    // 0x1c4820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4824: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1c4824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4828: 0xc07128c  jal         func_1C4A30
    ctx->pc = 0x1C4828u;
    SET_GPR_U32(ctx, 31, 0x1C4830u);
    ctx->pc = 0x1C4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4A30u, 0x1C4828u, 0x1C4830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4830u;
label_1c4830:
    // 0x1c4830: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c4830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4834:
    // 0x1c4834: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c4834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4838: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c4838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c483c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c483cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c4840: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4848u;
    // 0x1c4848: 0x0  nop
    ctx->pc = 0x1c4848u;
    // NOP
    // 0x1c484c: 0x0  nop
    ctx->pc = 0x1c484cu;
    // NOP
    ctx->pc = 0x1c4850u;
}
