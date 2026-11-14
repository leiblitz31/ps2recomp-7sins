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

// Function: sub_0049F370
// Address: 0x49f370 - 0x49f390
void sub_0049F370_0x49f370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F370_0x49f370");
#endif

    switch (ctx->pc) {
        case 0x49f380u: goto label_49f380;
        default: break;
    }

    ctx->pc = 0x49f370u;

    // 0x49f370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49f370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49f374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49f374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49f378: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x49F378u;
    SET_GPR_U32(ctx, 31, 0x49F380u);
    ctx->pc = 0x49F37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49F378u;
    // 0x49f37c: 0x8c84fffc  lw          $a0, -0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x49F378u, 0x49F380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F380u;
label_49f380:
    // 0x49f380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49f380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49f384: 0x3e00008  jr          $ra
    ctx->pc = 0x49F384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F384u;
        // 0x49f388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F38Cu;
    // 0x49f38c: 0x0  nop
    ctx->pc = 0x49f38cu;
    // NOP
    ctx->pc = 0x49f390u;
}
