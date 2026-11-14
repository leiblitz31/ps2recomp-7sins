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

// Function: sub_0040D818
// Address: 0x40d818 - 0x40d848
void sub_0040D818_0x40d818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040D818_0x40d818");
#endif

    ctx->pc = 0x40d818u;

    // 0x40d818: 0x8f82bdbc  lw          $v0, -0x4244($gp)
    ctx->pc = 0x40d818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950332)));
    // 0x40d81c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x40d81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x40d820: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x40d820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x40d824: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x40d824u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x40d828: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x40d828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x40d82c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x40d82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x40d830: 0xaf82bdbc  sw          $v0, -0x4244($gp)
    ctx->pc = 0x40d830u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950332), GPR_U32(ctx, 2));
    // 0x40d834: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x40d834u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x40d838: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x40d838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d83c: 0xaf85bdb8  sw          $a1, -0x4248($gp)
    ctx->pc = 0x40d83cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950328), GPR_U32(ctx, 5));
    // 0x40d840: 0x3e00008  jr          $ra
    ctx->pc = 0x40D840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D840u;
        // 0x40d844: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40D848u;
}
