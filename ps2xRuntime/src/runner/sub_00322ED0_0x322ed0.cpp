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

// Function: sub_00322ED0
// Address: 0x322ed0 - 0x322ee8
void sub_00322ED0_0x322ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322ED0_0x322ed0");
#endif

    ctx->pc = 0x322ed0u;

    // 0x322ed0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x322ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x322ed4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x322ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x322ed8: 0x2463b1e0  addiu       $v1, $v1, -0x4E20
    ctx->pc = 0x322ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947296));
    // 0x322edc: 0xac60005c  sw          $zero, 0x5C($v1)
    ctx->pc = 0x322edcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61B23Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61B23Cu, _value); } while (0);
    // 0x322ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x322EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322EE0u;
        // 0x322ee4: 0xac600058  sw          $zero, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322EE8u;
}
