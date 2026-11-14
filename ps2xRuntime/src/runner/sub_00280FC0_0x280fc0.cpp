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

// Function: sub_00280FC0
// Address: 0x280fc0 - 0x280ff0
void sub_00280FC0_0x280fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280FC0_0x280fc0");
#endif

    ctx->pc = 0x280fc0u;

    // 0x280fc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x280fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x280fc4: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x280fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x280fc8: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x280fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x280fcc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x280fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280fd0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x280fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280fd4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x280fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x280fd8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x280fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280fdc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x280fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x280fe0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x280fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x280fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x280FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280FECu;
    // 0x280fec: 0x0  nop
    ctx->pc = 0x280fecu;
    // NOP
    ctx->pc = 0x280ff0u;
}
