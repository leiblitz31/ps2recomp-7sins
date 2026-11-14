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

// Function: sub_0048E440
// Address: 0x48e440 - 0x48e480
void sub_0048E440_0x48e440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E440_0x48e440");
#endif

    ctx->pc = 0x48e440u;

    // 0x48e440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48e440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48e444: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x48e444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x48e448: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x48e448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x48e44c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x48e44cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x48e450: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x48e450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48e454: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x48e454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e458: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48e458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x48e45c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x48e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48e460: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x48e460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e464: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x48e464u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x48e468: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x48e468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e46c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48e46cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48e470: 0x3e00008  jr          $ra
    ctx->pc = 0x48E470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E478u;
    // 0x48e478: 0x0  nop
    ctx->pc = 0x48e478u;
    // NOP
    // 0x48e47c: 0x0  nop
    ctx->pc = 0x48e47cu;
    // NOP
    ctx->pc = 0x48e480u;
}
