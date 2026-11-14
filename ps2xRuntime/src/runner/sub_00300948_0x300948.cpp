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

// Function: sub_00300948
// Address: 0x300948 - 0x300968
void sub_00300948_0x300948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300948_0x300948");
#endif

    ctx->pc = 0x300948u;

    // 0x300948: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x300948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x30094c: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x30094cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x300950: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x300950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x300954: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x300954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x300958: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x300958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x30095c: 0x3e00008  jr          $ra
    ctx->pc = 0x30095Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30095Cu;
        // 0x300960: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30095Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300964u;
    // 0x300964: 0x0  nop
    ctx->pc = 0x300964u;
    // NOP
    ctx->pc = 0x300968u;
}
