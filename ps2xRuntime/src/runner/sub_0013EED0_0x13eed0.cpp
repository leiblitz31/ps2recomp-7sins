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

// Function: sub_0013EED0
// Address: 0x13eed0 - 0x13ef10
void sub_0013EED0_0x13eed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EED0_0x13eed0");
#endif

    switch (ctx->pc) {
        case 0x13eef0u: goto label_13eef0;
        default: break;
    }

    ctx->pc = 0x13eed0u;

    // 0x13eed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13eed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13eed4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13eed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13eed8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13eed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13eedc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13eedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x13eee0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13eee4: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x13eee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x13eee8: 0xc04738c  jal         func_11CE30
    ctx->pc = 0x13EEE8u;
    SET_GPR_U32(ctx, 31, 0x13EEF0u);
    ctx->pc = 0x11CE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CE30u, 0x13EEE8u, 0x13EEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EEF0u;
label_13eef0:
    // 0x13eef0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13eef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eef4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13eef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13eef8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13eef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13eefc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13eefcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13ef00: 0x3e00008  jr          $ra
    ctx->pc = 0x13EF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EF08u;
    // 0x13ef08: 0x0  nop
    ctx->pc = 0x13ef08u;
    // NOP
    // 0x13ef0c: 0x0  nop
    ctx->pc = 0x13ef0cu;
    // NOP
    ctx->pc = 0x13ef10u;
}
