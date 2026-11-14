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

// Function: sub_00214A70
// Address: 0x214a70 - 0x214ab0
void sub_00214A70_0x214a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214A70_0x214a70");
#endif

    switch (ctx->pc) {
        case 0x214a98u: goto label_214a98;
        default: break;
    }

    ctx->pc = 0x214a70u;

    // 0x214a70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x214a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x214a74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214a78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x214a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x214a7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x214a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x214a80: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x214a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x214a84: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x214a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214a88: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x214a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214a8c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x214a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214a90: 0xc041934  jal         func_1064D0
    ctx->pc = 0x214A90u;
    SET_GPR_U32(ctx, 31, 0x214A98u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x214A90u, 0x214A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214A98u;
label_214a98:
    // 0x214a98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214a9c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x214a9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x214aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x214AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214AA8u;
    // 0x214aa8: 0x0  nop
    ctx->pc = 0x214aa8u;
    // NOP
    // 0x214aac: 0x0  nop
    ctx->pc = 0x214aacu;
    // NOP
    ctx->pc = 0x214ab0u;
}
