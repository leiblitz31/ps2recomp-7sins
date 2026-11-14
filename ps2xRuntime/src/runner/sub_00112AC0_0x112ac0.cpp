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

// Function: sub_00112AC0
// Address: 0x112ac0 - 0x112ae0
void sub_00112AC0_0x112ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112AC0_0x112ac0");
#endif

    ctx->pc = 0x112ac0u;

    // 0x112ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x112ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x112ac4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x112ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x112ac8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x112ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112acc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x112accu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x112ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x112AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112AD8u;
    // 0x112ad8: 0x0  nop
    ctx->pc = 0x112ad8u;
    // NOP
    // 0x112adc: 0x0  nop
    ctx->pc = 0x112adcu;
    // NOP
    ctx->pc = 0x112ae0u;
}
