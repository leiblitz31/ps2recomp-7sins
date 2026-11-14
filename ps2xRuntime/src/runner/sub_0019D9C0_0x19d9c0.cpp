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

// Function: sub_0019D9C0
// Address: 0x19d9c0 - 0x19da20
void sub_0019D9C0_0x19d9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D9C0_0x19d9c0");
#endif

    switch (ctx->pc) {
        case 0x19d9e4u: goto label_19d9e4;
        case 0x19da00u: goto label_19da00;
        default: break;
    }

    ctx->pc = 0x19d9c0u;

    // 0x19d9c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19d9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19d9c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19d9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19d9c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19d9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19d9cc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x19d9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x19d9d0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x19d9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x19d9d4: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x19d9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x19d9d8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x19d9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d9dc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x19D9DCu;
    SET_GPR_U32(ctx, 31, 0x19D9E4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x19D9DCu, 0x19D9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D9E4u;
label_19d9e4:
    // 0x19d9e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19d9e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d9e8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19D9E8u;
    {
        const bool branch_taken_0x19d9e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d9e8) {
            ctx->pc = 0x19DA04u;
            goto label_19da04;
        }
    }
    ctx->pc = 0x19D9F0u;
    // 0x19d9f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19d9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d9f4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x19d9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d9f8: 0xc067700  jal         func_19DC00
    ctx->pc = 0x19D9F8u;
    SET_GPR_U32(ctx, 31, 0x19DA00u);
    ctx->pc = 0x19DC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DC00u, 0x19D9F8u, 0x19DA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DA00u;
label_19da00:
    // 0x19da00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19da00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19da04:
    // 0x19da04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19da04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19da08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19da08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19da0c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19da0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19da10: 0x3e00008  jr          $ra
    ctx->pc = 0x19DA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DA18u;
    // 0x19da18: 0x0  nop
    ctx->pc = 0x19da18u;
    // NOP
    // 0x19da1c: 0x0  nop
    ctx->pc = 0x19da1cu;
    // NOP
    ctx->pc = 0x19da20u;
}
