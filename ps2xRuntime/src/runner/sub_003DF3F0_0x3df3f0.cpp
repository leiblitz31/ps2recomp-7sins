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

// Function: sub_003DF3F0
// Address: 0x3df3f0 - 0x3df420
void sub_003DF3F0_0x3df3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF3F0_0x3df3f0");
#endif

    ctx->pc = 0x3df3f0u;

    // 0x3df3f0: 0x8f88ac24  lw          $t0, -0x53DC($gp)
    ctx->pc = 0x3df3f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945828)));
    // 0x3df3f4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3df3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x3df3f8: 0x2442b400  addiu       $v0, $v0, -0x4C00
    ctx->pc = 0x3df3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947840));
    // 0x3df3fc: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x3df3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x3df400: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x3df400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x3df404: 0x2463c400  addiu       $v1, $v1, -0x3C00
    ctx->pc = 0x3df404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951936));
    // 0x3df408: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3df408u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x3df40c: 0x8f84ac28  lw          $a0, -0x53D8($gp)
    ctx->pc = 0x3df40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945832)));
    // 0x3df410: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3df410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df414: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x3df414u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x3df418: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF418u;
        // 0x3df41c: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF420u;
}
