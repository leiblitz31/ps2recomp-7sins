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

// Function: sub_0022C520
// Address: 0x22c520 - 0x22c560
void sub_0022C520_0x22c520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C520_0x22c520");
#endif

    switch (ctx->pc) {
        case 0x22c548u: goto label_22c548;
        default: break;
    }

    ctx->pc = 0x22c520u;

    // 0x22c520: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22c520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22c524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c528: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22c528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x22c52c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x22c52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x22c530: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x22c530u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x22c534: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22c534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c538: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x22c538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c53c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x22c53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x22c540: 0xc08b158  jal         func_22C560
    ctx->pc = 0x22C540u;
    SET_GPR_U32(ctx, 31, 0x22C548u);
    ctx->pc = 0x22C560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C560u, 0x22C540u, 0x22C548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C548u;
label_22c548:
    // 0x22c548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c54c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x22c54cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22c550: 0x3e00008  jr          $ra
    ctx->pc = 0x22C550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C558u;
    // 0x22c558: 0x0  nop
    ctx->pc = 0x22c558u;
    // NOP
    // 0x22c55c: 0x0  nop
    ctx->pc = 0x22c55cu;
    // NOP
    ctx->pc = 0x22c560u;
}
