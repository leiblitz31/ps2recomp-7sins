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

// Function: sub_00458960
// Address: 0x458960 - 0x458980
void sub_00458960_0x458960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00458960_0x458960");
#endif

    ctx->pc = 0x458960u;

    // 0x458960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x458960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x458964: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x458964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x458968: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x458968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45896c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x45896cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x458970: 0x3e00008  jr          $ra
    ctx->pc = 0x458970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x458970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x458978u;
    // 0x458978: 0x0  nop
    ctx->pc = 0x458978u;
    // NOP
    // 0x45897c: 0x0  nop
    ctx->pc = 0x45897cu;
    // NOP
    ctx->pc = 0x458980u;
}
