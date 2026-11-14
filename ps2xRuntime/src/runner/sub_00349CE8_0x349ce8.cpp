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

// Function: sub_00349CE8
// Address: 0x349ce8 - 0x349d10
void sub_00349CE8_0x349ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349CE8_0x349ce8");
#endif

    switch (ctx->pc) {
        case 0x349d00u: goto label_349d00;
        default: break;
    }

    ctx->pc = 0x349ce8u;

    // 0x349ce8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x349cec: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x349cecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x349cf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x349cf4: 0x24a52040  addiu       $a1, $a1, 0x2040
    ctx->pc = 0x349cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8256));
    // 0x349cf8: 0xc0d26a8  jal         func_349AA0
    ctx->pc = 0x349CF8u;
    SET_GPR_U32(ctx, 31, 0x349D00u);
    ctx->pc = 0x349CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349CF8u;
    // 0x349cfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349AA0u, 0x349CF8u, 0x349D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349D00u;
label_349d00:
    // 0x349d00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349d04: 0x3e00008  jr          $ra
    ctx->pc = 0x349D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349D04u;
        // 0x349d08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349D0Cu;
    // 0x349d0c: 0x0  nop
    ctx->pc = 0x349d0cu;
    // NOP
    ctx->pc = 0x349d10u;
}
