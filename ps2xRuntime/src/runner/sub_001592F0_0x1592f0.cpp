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

// Function: sub_001592F0
// Address: 0x1592f0 - 0x159320
void sub_001592F0_0x1592f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001592F0_0x1592f0");
#endif

    ctx->pc = 0x1592f0u;

    // 0x1592f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1592f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1592f4: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1592f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1592f8: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x1592f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x1592fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1592fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159300: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x159300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159304: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x159304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x159308: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x159308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15930c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x15930cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x159310: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x159310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x159314: 0x3e00008  jr          $ra
    ctx->pc = 0x159314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15931Cu;
    // 0x15931c: 0x0  nop
    ctx->pc = 0x15931cu;
    // NOP
    ctx->pc = 0x159320u;
}
