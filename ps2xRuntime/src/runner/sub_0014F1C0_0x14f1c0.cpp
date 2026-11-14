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

// Function: sub_0014F1C0
// Address: 0x14f1c0 - 0x14f1f0
void sub_0014F1C0_0x14f1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F1C0_0x14f1c0");
#endif

    ctx->pc = 0x14f1c0u;

    // 0x14f1c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14f1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14f1c4: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x14f1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x14f1c8: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x14f1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x14f1cc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14f1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f1d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f1d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14f1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f1d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f1dc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x14f1dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14f1e0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14f1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14f1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x14F1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F1ECu;
    // 0x14f1ec: 0x0  nop
    ctx->pc = 0x14f1ecu;
    // NOP
    ctx->pc = 0x14f1f0u;
}
