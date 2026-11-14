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

// Function: sub_00389CA0
// Address: 0x389ca0 - 0x389d10
void sub_00389CA0_0x389ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389CA0_0x389ca0");
#endif

    ctx->pc = 0x389ca0u;

    // 0x389ca0: 0x8f83a988  lw          $v1, -0x5678($gp)
    ctx->pc = 0x389ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945160)));
    // 0x389ca4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x389ca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389ca8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x389ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x389cac: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x389cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x389cb0: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x389cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x389cb4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x389cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x389cb8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x389cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x389cbc: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x389cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x389cc0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x389cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x389cc4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x389cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x389cc8: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x389cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x389ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x389CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389CCCu;
        // 0x389cd0: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389CD4u;
    // 0x389cd4: 0x0  nop
    ctx->pc = 0x389cd4u;
    // NOP
    // 0x389cd8: 0x8f82a988  lw          $v0, -0x5678($gp)
    ctx->pc = 0x389cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945160)));
    // 0x389cdc: 0x24870018  addiu       $a3, $a0, 0x18
    ctx->pc = 0x389cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x389ce0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x389ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x389ce4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x389ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x389ce8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x389ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x389cec: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x389cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x389cf0: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x389cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
    // 0x389cf4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x389cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389cf8: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x389cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x389cfc: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x389cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x389d00: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x389d00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x389d04: 0x3e00008  jr          $ra
    ctx->pc = 0x389D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D04u;
        // 0x389d08: 0xac860018  sw          $a2, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389D0Cu;
    // 0x389d0c: 0x0  nop
    ctx->pc = 0x389d0cu;
    // NOP
    ctx->pc = 0x389d10u;
}
