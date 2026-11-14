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

// Function: sub_00271600
// Address: 0x271600 - 0x271620
void sub_00271600_0x271600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271600_0x271600");
#endif

    ctx->pc = 0x271600u;

    // 0x271600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x271600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x271604: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x271604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x271608: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x271608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27160c: 0x90420042  lbu         $v0, 0x42($v0)
    ctx->pc = 0x27160cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 66)));
    // 0x271610: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x271610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x271614: 0x3e00008  jr          $ra
    ctx->pc = 0x271614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27161Cu;
    // 0x27161c: 0x0  nop
    ctx->pc = 0x27161cu;
    // NOP
    ctx->pc = 0x271620u;
}
