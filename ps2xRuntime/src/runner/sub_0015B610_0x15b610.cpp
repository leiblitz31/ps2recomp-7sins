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

// Function: sub_0015B610
// Address: 0x15b610 - 0x15b650
void sub_0015B610_0x15b610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B610_0x15b610");
#endif

    switch (ctx->pc) {
        case 0x15b640u: goto label_15b640;
        default: break;
    }

    ctx->pc = 0x15b610u;

    // 0x15b610: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15b610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15b614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15b614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15b618: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x15b618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x15b61c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x15b61cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x15b620: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x15b620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x15b624: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x15b624u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x15b628: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15b628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b62c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x15b62cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15b630: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x15b630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b634: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x15b634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x15b638: 0xc056d94  jal         func_15B650
    ctx->pc = 0x15B638u;
    SET_GPR_U32(ctx, 31, 0x15B640u);
    ctx->pc = 0x15B650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B650u, 0x15B638u, 0x15B640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B640u;
label_15b640:
    // 0x15b640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15b640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b644: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15b644u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15b648: 0x3e00008  jr          $ra
    ctx->pc = 0x15B648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B650u;
}
