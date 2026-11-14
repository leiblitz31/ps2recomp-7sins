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

// Function: sub_002D6C50
// Address: 0x2d6c50 - 0x2d6c90
void sub_002D6C50_0x2d6c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6C50_0x2d6c50");
#endif

    switch (ctx->pc) {
        case 0x2d6c74u: goto label_2d6c74;
        default: break;
    }

    ctx->pc = 0x2d6c50u;

    // 0x2d6c50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d6c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d6c54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d6c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d6c58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d6c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d6c5c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2d6c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2d6c60: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2d6c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2d6c64: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d6c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6c68: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2d6c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d6c6c: 0xc0b59e4  jal         func_2D6790
    ctx->pc = 0x2D6C6Cu;
    SET_GPR_U32(ctx, 31, 0x2D6C74u);
    ctx->pc = 0x2D6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6790u, 0x2D6C6Cu, 0x2D6C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6C74u;
label_2d6c74:
    // 0x2d6c74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d6c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6c78: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2d6c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2d6c7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d6c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6c80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d6c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6c84: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d6c84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d6c88: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6C90u;
}
