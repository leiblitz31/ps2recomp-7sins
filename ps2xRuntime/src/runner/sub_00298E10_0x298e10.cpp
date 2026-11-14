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

// Function: sub_00298E10
// Address: 0x298e10 - 0x298e60
void sub_00298E10_0x298e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298E10_0x298e10");
#endif

    ctx->pc = 0x298e10u;

    // 0x298e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x298e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x298e14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x298e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x298e18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x298e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x298e1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x298e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298e20: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x298e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x298e24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x298E24u;
    {
        const bool branch_taken_0x298e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298e24) {
            ctx->pc = 0x298E40u;
            goto label_298e40;
        }
    }
    ctx->pc = 0x298E2Cu;
    // 0x298e2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x298e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298e30: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x298e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x298e34: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x298e34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298e38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x298E38u;
    {
        const bool branch_taken_0x298e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298e38) {
            ctx->pc = 0x298E44u;
            goto label_298e44;
        }
    }
    ctx->pc = 0x298E40u;
label_298e40:
    // 0x298e40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x298e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_298e44:
    // 0x298e44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x298e44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298e48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x298e48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298e4c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x298e4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x298e50: 0x3e00008  jr          $ra
    ctx->pc = 0x298E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298E58u;
    // 0x298e58: 0x0  nop
    ctx->pc = 0x298e58u;
    // NOP
    // 0x298e5c: 0x0  nop
    ctx->pc = 0x298e5cu;
    // NOP
    ctx->pc = 0x298e60u;
}
