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

// Function: sub_002809E0
// Address: 0x2809e0 - 0x280a10
void sub_002809E0_0x2809e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002809E0_0x2809e0");
#endif

    ctx->pc = 0x2809e0u;

    // 0x2809e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2809e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2809e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2809e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2809e8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2809e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2809ec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2809ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2809f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2809f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2809f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2809f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2809f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2809f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2809fc: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x2809fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x280a00: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x280a00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x280a04: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x280a04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x280a08: 0x3e00008  jr          $ra
    ctx->pc = 0x280A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280A10u;
}
