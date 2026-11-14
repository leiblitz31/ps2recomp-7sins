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

// Function: sub_0049C928
// Address: 0x49c928 - 0x49c940
void sub_0049C928_0x49c928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049C928_0x49c928");
#endif

    ctx->pc = 0x49c928u;

    // 0x49c928: 0x8c83fffc  lw          $v1, -0x4($a0)
    ctx->pc = 0x49c928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
    // 0x49c92c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49c92cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c930: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x49c930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x49c934: 0x3e00008  jr          $ra
    ctx->pc = 0x49C934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C934u;
        // 0x49c938: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C93Cu;
    // 0x49c93c: 0x0  nop
    ctx->pc = 0x49c93cu;
    // NOP
    ctx->pc = 0x49c940u;
}
