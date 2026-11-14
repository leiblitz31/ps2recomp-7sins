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

// Function: sub_002DE910
// Address: 0x2de910 - 0x2de950
void sub_002DE910_0x2de910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE910_0x2de910");
#endif

    switch (ctx->pc) {
        case 0x2de938u: goto label_2de938;
        default: break;
    }

    ctx->pc = 0x2de910u;

    // 0x2de910: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2de910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2de914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2de914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de918: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2de918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2de91c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2de91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2de920: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2de920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2de924: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2de924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de928: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2de928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de92c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2de92cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de930: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2DE930u;
    SET_GPR_U32(ctx, 31, 0x2DE938u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2DE930u, 0x2DE938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE938u;
label_2de938:
    // 0x2de938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de93c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2de93cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2de940: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE948u;
    // 0x2de948: 0x0  nop
    ctx->pc = 0x2de948u;
    // NOP
    // 0x2de94c: 0x0  nop
    ctx->pc = 0x2de94cu;
    // NOP
    ctx->pc = 0x2de950u;
}
