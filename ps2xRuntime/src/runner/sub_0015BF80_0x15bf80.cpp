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

// Function: sub_0015BF80
// Address: 0x15bf80 - 0x15bfa0
void sub_0015BF80_0x15bf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BF80_0x15bf80");
#endif

    ctx->pc = 0x15bf80u;

    // 0x15bf80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15bf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15bf84: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x15bf84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x15bf88: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bf8c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x15bf8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15bf90: 0x3e00008  jr          $ra
    ctx->pc = 0x15BF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BF98u;
    // 0x15bf98: 0x0  nop
    ctx->pc = 0x15bf98u;
    // NOP
    // 0x15bf9c: 0x0  nop
    ctx->pc = 0x15bf9cu;
    // NOP
    ctx->pc = 0x15bfa0u;
}
