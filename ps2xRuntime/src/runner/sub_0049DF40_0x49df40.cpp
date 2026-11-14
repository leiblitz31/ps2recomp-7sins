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

// Function: sub_0049DF40
// Address: 0x49df40 - 0x49df60
void sub_0049DF40_0x49df40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049DF40_0x49df40");
#endif

    ctx->pc = 0x49df40u;

    // 0x49df40: 0x94830016  lhu         $v1, 0x16($a0)
    ctx->pc = 0x49df40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x49df44: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x49df44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x49df48: 0x94820014  lhu         $v0, 0x14($a0)
    ctx->pc = 0x49df48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x49df4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49df50: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x49df50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49df54: 0x3e00008  jr          $ra
    ctx->pc = 0x49DF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49DF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DF54u;
        // 0x49df58: 0x24420028  addiu       $v0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49DF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49DF5Cu;
    // 0x49df5c: 0x0  nop
    ctx->pc = 0x49df5cu;
    // NOP
    ctx->pc = 0x49df60u;
}
