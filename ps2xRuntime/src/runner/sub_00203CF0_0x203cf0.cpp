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

// Function: sub_00203CF0
// Address: 0x203cf0 - 0x203d40
void sub_00203CF0_0x203cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203CF0_0x203cf0");
#endif

    switch (ctx->pc) {
        case 0x203d20u: goto label_203d20;
        default: break;
    }

    ctx->pc = 0x203cf0u;

    // 0x203cf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x203cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x203cf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x203cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x203cf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x203cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x203cfc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x203cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x203d00: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x203d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x203d04: 0x8f82bad4  lw          $v0, -0x452C($gp)
    ctx->pc = 0x203d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
    // 0x203d08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x203D08u;
    {
        const bool branch_taken_0x203d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203d08) {
            ctx->pc = 0x203D20u;
            goto label_203d20;
        }
    }
    ctx->pc = 0x203D10u;
    // 0x203d10: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x203d10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x203d14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203d18: 0xc081848  jal         func_206120
    ctx->pc = 0x203D18u;
    SET_GPR_U32(ctx, 31, 0x203D20u);
    ctx->pc = 0x206120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206120u, 0x203D18u, 0x203D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203D20u;
label_203d20:
    // 0x203d20: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x203d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203d24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x203d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203d28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x203d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203d2c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x203d2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x203d30: 0x3e00008  jr          $ra
    ctx->pc = 0x203D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203D38u;
    // 0x203d38: 0x0  nop
    ctx->pc = 0x203d38u;
    // NOP
    // 0x203d3c: 0x0  nop
    ctx->pc = 0x203d3cu;
    // NOP
    ctx->pc = 0x203d40u;
}
