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

// Function: sub_002D0530
// Address: 0x2d0530 - 0x2d0570
void sub_002D0530_0x2d0530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0530_0x2d0530");
#endif

    switch (ctx->pc) {
        case 0x2d0548u: goto label_2d0548;
        case 0x2d0558u: goto label_2d0558;
        default: break;
    }

    ctx->pc = 0x2d0530u;

    // 0x2d0530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d0534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0538: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2d0538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2d053c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2d053cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2d0540: 0xc0b419c  jal         func_2D0670
    ctx->pc = 0x2D0540u;
    SET_GPR_U32(ctx, 31, 0x2D0548u);
    ctx->pc = 0x2D0670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0670u, 0x2D0540u, 0x2D0548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0548u;
label_2d0548:
    // 0x2d0548: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d0548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d054c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d054cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0550: 0xc0b415c  jal         func_2D0570
    ctx->pc = 0x2D0550u;
    SET_GPR_U32(ctx, 31, 0x2D0558u);
    ctx->pc = 0x2D0570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0570u, 0x2D0550u, 0x2D0558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0558u;
label_2d0558:
    // 0x2d0558: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d0558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d055c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d055cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0560: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d0560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d0564: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D056Cu;
    // 0x2d056c: 0x0  nop
    ctx->pc = 0x2d056cu;
    // NOP
    ctx->pc = 0x2d0570u;
}
