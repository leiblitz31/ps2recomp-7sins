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

// Function: sub_0049F8F8
// Address: 0x49f8f8 - 0x49f920
void sub_0049F8F8_0x49f8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F8F8_0x49f8f8");
#endif

    ctx->pc = 0x49f8f8u;

    // 0x49f8f8: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x49f8f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x49f8fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49F8FCu;
    {
        const bool branch_taken_0x49f8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F8FCu;
        // 0x49f900: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f8fc) {
            ctx->pc = 0x49F910u;
            goto label_49f910;
        }
    }
    ctx->pc = 0x49F904u;
    // 0x49f904: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x49f904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f908: 0x3e00008  jr          $ra
    ctx->pc = 0x49F908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F908u;
        // 0x49f90c: 0xaf84c1e8  sw          $a0, -0x3E18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294951400), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F910u;
label_49f910:
    // 0x49f910: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x49f910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x49f914: 0x3e00008  jr          $ra
    ctx->pc = 0x49F914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F914u;
        // 0x49f918: 0xaf83c1e8  sw          $v1, -0x3E18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294951400), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F91Cu;
    // 0x49f91c: 0x0  nop
    ctx->pc = 0x49f91cu;
    // NOP
    ctx->pc = 0x49f920u;
}
