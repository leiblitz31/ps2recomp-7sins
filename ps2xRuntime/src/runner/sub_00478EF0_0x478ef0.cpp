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

// Function: sub_00478EF0
// Address: 0x478ef0 - 0x478f20
void sub_00478EF0_0x478ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00478EF0_0x478ef0");
#endif

    switch (ctx->pc) {
        case 0x478f10u: goto label_478f10;
        default: break;
    }

    ctx->pc = 0x478ef0u;

    // 0x478ef0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x478ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x478ef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x478ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x478ef8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x478ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x478efc: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x478efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x478f00: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x478f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x478f04: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x478f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478f08: 0xc11e3c8  jal         func_478F20
    ctx->pc = 0x478F08u;
    SET_GPR_U32(ctx, 31, 0x478F10u);
    ctx->pc = 0x478F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478F20u, 0x478F08u, 0x478F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478F10u;
label_478f10:
    // 0x478f10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x478f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x478f14: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x478f14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x478f18: 0x3e00008  jr          $ra
    ctx->pc = 0x478F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x478F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x478F20u;
}
