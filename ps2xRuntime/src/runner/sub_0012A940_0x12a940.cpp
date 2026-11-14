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

// Function: sub_0012A940
// Address: 0x12a940 - 0x12a960
void sub_0012A940_0x12a940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A940_0x12a940");
#endif

    ctx->pc = 0x12a940u;

    // 0x12a940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12a940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12a944: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x12a944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x12a948: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12a948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a94c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x12a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12a950: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x12a950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12a954: 0x3e00008  jr          $ra
    ctx->pc = 0x12A954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A95Cu;
    // 0x12a95c: 0x0  nop
    ctx->pc = 0x12a95cu;
    // NOP
    ctx->pc = 0x12a960u;
}
