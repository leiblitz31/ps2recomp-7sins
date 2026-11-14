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

// Function: sub_00254AF0
// Address: 0x254af0 - 0x254b10
void sub_00254AF0_0x254af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254AF0_0x254af0");
#endif

    ctx->pc = 0x254af0u;

    // 0x254af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x254af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x254af4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x254af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x254af8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x254af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254afc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x254afcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x254b00: 0x3e00008  jr          $ra
    ctx->pc = 0x254B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254B08u;
    // 0x254b08: 0x0  nop
    ctx->pc = 0x254b08u;
    // NOP
    // 0x254b0c: 0x0  nop
    ctx->pc = 0x254b0cu;
    // NOP
    ctx->pc = 0x254b10u;
}
