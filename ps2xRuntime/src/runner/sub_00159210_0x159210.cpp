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

// Function: sub_00159210
// Address: 0x159210 - 0x159240
void sub_00159210_0x159210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159210_0x159210");
#endif

    ctx->pc = 0x159210u;

    // 0x159210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x159210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x159214: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x159214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x159218: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x159218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x15921c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15921cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159220: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x159220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159224: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x159224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159228: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x159228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x15922c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15922cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159230: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x159230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x159234: 0x3e00008  jr          $ra
    ctx->pc = 0x159234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15923Cu;
    // 0x15923c: 0x0  nop
    ctx->pc = 0x15923cu;
    // NOP
    ctx->pc = 0x159240u;
}
