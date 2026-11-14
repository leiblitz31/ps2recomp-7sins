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

// Function: sub_003CD7E8
// Address: 0x3cd7e8 - 0x3cd800
void sub_003CD7E8_0x3cd7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CD7E8_0x3cd7e8");
#endif

    ctx->pc = 0x3cd7e8u;

    // 0x3cd7e8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3cd7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x3cd7ec: 0x2442b298  addiu       $v0, $v0, -0x4D68
    ctx->pc = 0x3cd7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947480));
    // 0x3cd7f0: 0xac4000ec  sw          $zero, 0xEC($v0)
    ctx->pc = 0x3cd7f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5DB384u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DB384u, _value); } while (0);
    // 0x3cd7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3CD7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CD7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD7F4u;
        // 0x3cd7f8: 0xac4000f0  sw          $zero, 0xF0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CD7FCu;
    // 0x3cd7fc: 0x0  nop
    ctx->pc = 0x3cd7fcu;
    // NOP
    ctx->pc = 0x3cd800u;
}
