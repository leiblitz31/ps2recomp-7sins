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

// Function: sub_00191030
// Address: 0x191030 - 0x191060
void sub_00191030_0x191030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191030_0x191030");
#endif

    ctx->pc = 0x191030u;

    // 0x191030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x191030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x191034: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x191034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x191038: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x191038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x19103c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19103cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191040: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x191040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191044: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x191044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191048: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x191048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19104c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x19104cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x191050: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x191050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x191054: 0x3e00008  jr          $ra
    ctx->pc = 0x191054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19105Cu;
    // 0x19105c: 0x0  nop
    ctx->pc = 0x19105cu;
    // NOP
    ctx->pc = 0x191060u;
}
