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

// Function: sub_00477360
// Address: 0x477360 - 0x477380
void sub_00477360_0x477360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00477360_0x477360");
#endif

    ctx->pc = 0x477360u;

    // 0x477360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x477360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x477364: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x477364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x477368: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x477368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47736c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x47736cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x477370: 0x3e00008  jr          $ra
    ctx->pc = 0x477370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x477370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x477378u;
    // 0x477378: 0x0  nop
    ctx->pc = 0x477378u;
    // NOP
    // 0x47737c: 0x0  nop
    ctx->pc = 0x47737cu;
    // NOP
    ctx->pc = 0x477380u;
}
