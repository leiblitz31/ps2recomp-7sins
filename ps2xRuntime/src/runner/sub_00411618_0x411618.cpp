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

// Function: sub_00411618
// Address: 0x411618 - 0x411638
void sub_00411618_0x411618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00411618_0x411618");
#endif

    switch (ctx->pc) {
        case 0x411628u: goto label_411628;
        default: break;
    }

    ctx->pc = 0x411618u;

    // 0x411618: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x411618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41161c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41161cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x411620: 0xc0bbf50  jal         func_2EFD40
    ctx->pc = 0x411620u;
    SET_GPR_U32(ctx, 31, 0x411628u);
    ctx->pc = 0x2EFD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFD40u, 0x411620u, 0x411628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411628u;
label_411628:
    // 0x411628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x411628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41162c: 0x3e00008  jr          $ra
    ctx->pc = 0x41162Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x411630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41162Cu;
        // 0x411630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41162Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x411634u;
    // 0x411634: 0x0  nop
    ctx->pc = 0x411634u;
    // NOP
    ctx->pc = 0x411638u;
}
