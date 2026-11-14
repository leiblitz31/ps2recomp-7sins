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

// Function: sub_0024FBC0
// Address: 0x24fbc0 - 0x24fc20
void sub_0024FBC0_0x24fbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FBC0_0x24fbc0");
#endif

    switch (ctx->pc) {
        case 0x24fbe4u: goto label_24fbe4;
        case 0x24fc00u: goto label_24fc00;
        default: break;
    }

    ctx->pc = 0x24fbc0u;

    // 0x24fbc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24fbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24fbc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24fbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24fbc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24fbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24fbcc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x24fbccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x24fbd0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x24fbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x24fbd4: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x24fbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x24fbd8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x24fbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24fbdc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x24FBDCu;
    SET_GPR_U32(ctx, 31, 0x24FBE4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x24FBDCu, 0x24FBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FBE4u;
label_24fbe4:
    // 0x24fbe4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24fbe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fbe8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24FBE8u;
    {
        const bool branch_taken_0x24fbe8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fbe8) {
            ctx->pc = 0x24FC04u;
            goto label_24fc04;
        }
    }
    ctx->pc = 0x24FBF0u;
    // 0x24fbf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24fbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fbf4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x24fbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24fbf8: 0xc053c7c  jal         func_14F1F0
    ctx->pc = 0x24FBF8u;
    SET_GPR_U32(ctx, 31, 0x24FC00u);
    ctx->pc = 0x14F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1F0u, 0x24FBF8u, 0x24FC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FC00u;
label_24fc00:
    // 0x24fc00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24fc00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24fc04:
    // 0x24fc04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24fc04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24fc08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24fc08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24fc0c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x24fc0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24fc10: 0x3e00008  jr          $ra
    ctx->pc = 0x24FC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FC10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FC18u;
    // 0x24fc18: 0x0  nop
    ctx->pc = 0x24fc18u;
    // NOP
    // 0x24fc1c: 0x0  nop
    ctx->pc = 0x24fc1cu;
    // NOP
    ctx->pc = 0x24fc20u;
}
