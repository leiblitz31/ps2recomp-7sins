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

// Function: sub_00270150
// Address: 0x270150 - 0x270190
void sub_00270150_0x270150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270150_0x270150");
#endif

    switch (ctx->pc) {
        case 0x270178u: goto label_270178;
        default: break;
    }

    ctx->pc = 0x270150u;

    // 0x270150: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x270150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x270154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x270154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x270158: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x270158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27015c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x27015cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x270160: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x270160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x270164: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x270164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270168: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x270168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27016c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x27016cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x270170: 0xc041934  jal         func_1064D0
    ctx->pc = 0x270170u;
    SET_GPR_U32(ctx, 31, 0x270178u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x270170u, 0x270178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270178u;
label_270178:
    // 0x270178: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x270178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27017c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x27017cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x270180: 0x3e00008  jr          $ra
    ctx->pc = 0x270180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270188u;
    // 0x270188: 0x0  nop
    ctx->pc = 0x270188u;
    // NOP
    // 0x27018c: 0x0  nop
    ctx->pc = 0x27018cu;
    // NOP
    ctx->pc = 0x270190u;
}
