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

// Function: sub_0031E660
// Address: 0x31e660 - 0x31e688
void sub_0031E660_0x31e660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E660_0x31e660");
#endif

    ctx->pc = 0x31e660u;

    // 0x31e660: 0x8f82a5cc  lw          $v0, -0x5A34($gp)
    ctx->pc = 0x31e660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944204)));
    // 0x31e664: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x31e664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x31e668: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x31e668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x31e66c: 0x2463dbc0  addiu       $v1, $v1, -0x2440
    ctx->pc = 0x31e66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x31e670: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x31e670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31e674: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x31e674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x31e678: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x31e678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e67c: 0x3e00008  jr          $ra
    ctx->pc = 0x31E67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E67Cu;
        // 0x31e680: 0xac830048  sw          $v1, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E67Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E684u;
    // 0x31e684: 0x0  nop
    ctx->pc = 0x31e684u;
    // NOP
    ctx->pc = 0x31e688u;
}
