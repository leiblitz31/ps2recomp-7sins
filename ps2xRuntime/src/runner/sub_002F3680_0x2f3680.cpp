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

// Function: sub_002F3680
// Address: 0x2f3680 - 0x2f36a0
void sub_002F3680_0x2f3680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3680_0x2f3680");
#endif

    ctx->pc = 0x2f3680u;

    // 0x2f3680: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f3680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3684: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2f3684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2f3688: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f3688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f368c: 0x90638f81  lbu         $v1, -0x707F($v1)
    ctx->pc = 0x2f368cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294938497)));
    // 0x2f3690: 0x2444ffe0  addiu       $a0, $v0, -0x20
    ctx->pc = 0x2f3690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x2f3694: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2f3694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2f3698: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3698u;
        // 0x2f369c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F36A0u;
}
