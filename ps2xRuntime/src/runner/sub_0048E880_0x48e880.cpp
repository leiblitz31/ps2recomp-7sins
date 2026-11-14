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

// Function: sub_0048E880
// Address: 0x48e880 - 0x48e8a0
void sub_0048E880_0x48e880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E880_0x48e880");
#endif

    ctx->pc = 0x48e880u;

    // 0x48e880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48e880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48e884: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x48e884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x48e888: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48e888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48e88c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x48e88cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x48e890: 0x3e00008  jr          $ra
    ctx->pc = 0x48E890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E898u;
    // 0x48e898: 0x0  nop
    ctx->pc = 0x48e898u;
    // NOP
    // 0x48e89c: 0x0  nop
    ctx->pc = 0x48e89cu;
    // NOP
    ctx->pc = 0x48e8a0u;
}
