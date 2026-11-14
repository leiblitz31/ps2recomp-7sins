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

// Function: sub_0018E440
// Address: 0x18e440 - 0x18e4a0
void sub_0018E440_0x18e440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E440_0x18e440");
#endif

    switch (ctx->pc) {
        case 0x18e464u: goto label_18e464;
        case 0x18e480u: goto label_18e480;
        default: break;
    }

    ctx->pc = 0x18e440u;

    // 0x18e440: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18e440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18e444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18e444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18e448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18e448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18e44c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x18e44cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x18e450: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x18e450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x18e454: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x18e454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x18e458: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x18e458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e45c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x18E45Cu;
    SET_GPR_U32(ctx, 31, 0x18E464u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x18E45Cu, 0x18E464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E464u;
label_18e464:
    // 0x18e464: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18e464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e468: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E468u;
    {
        const bool branch_taken_0x18e468 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e468) {
            ctx->pc = 0x18E484u;
            goto label_18e484;
        }
    }
    ctx->pc = 0x18E470u;
    // 0x18e470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e474: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x18e474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e478: 0xc063928  jal         func_18E4A0
    ctx->pc = 0x18E478u;
    SET_GPR_U32(ctx, 31, 0x18E480u);
    ctx->pc = 0x18E4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E4A0u, 0x18E478u, 0x18E480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E480u;
label_18e480:
    // 0x18e480: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18e480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e484:
    // 0x18e484: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18e484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e488: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e48c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x18e48cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18e490: 0x3e00008  jr          $ra
    ctx->pc = 0x18E490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E498u;
    // 0x18e498: 0x0  nop
    ctx->pc = 0x18e498u;
    // NOP
    // 0x18e49c: 0x0  nop
    ctx->pc = 0x18e49cu;
    // NOP
    ctx->pc = 0x18e4a0u;
}
