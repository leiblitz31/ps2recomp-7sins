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

// Function: sub_0015B650
// Address: 0x15b650 - 0x15b690
void sub_0015B650_0x15b650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B650_0x15b650");
#endif

    switch (ctx->pc) {
        case 0x15b678u: goto label_15b678;
        default: break;
    }

    ctx->pc = 0x15b650u;

    // 0x15b650: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15b650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15b654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15b654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15b658: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x15b658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15b65c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x15b65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x15b660: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x15b660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x15b664: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15b664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b668: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x15b668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b66c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x15b66cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15b670: 0xc0561e8  jal         func_1587A0
    ctx->pc = 0x15B670u;
    SET_GPR_U32(ctx, 31, 0x15B678u);
    ctx->pc = 0x1587A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1587A0u, 0x15B670u, 0x15B678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B678u;
label_15b678:
    // 0x15b678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15b678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b67c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15b67cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15b680: 0x3e00008  jr          $ra
    ctx->pc = 0x15B680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B688u;
    // 0x15b688: 0x0  nop
    ctx->pc = 0x15b688u;
    // NOP
    // 0x15b68c: 0x0  nop
    ctx->pc = 0x15b68cu;
    // NOP
    ctx->pc = 0x15b690u;
}
