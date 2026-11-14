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

// Function: sub_00262970
// Address: 0x262970 - 0x2629b0
void sub_00262970_0x262970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262970_0x262970");
#endif

    switch (ctx->pc) {
        case 0x262998u: goto label_262998;
        default: break;
    }

    ctx->pc = 0x262970u;

    // 0x262970: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x262970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x262974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x262974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x262978: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x262978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x26297c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x26297cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x262980: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x262980u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x262984: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x262984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262988: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x262988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26298c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x26298cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x262990: 0xc098a6c  jal         func_2629B0
    ctx->pc = 0x262990u;
    SET_GPR_U32(ctx, 31, 0x262998u);
    ctx->pc = 0x2629B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2629B0u, 0x262990u, 0x262998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262998u;
label_262998:
    // 0x262998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x262998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26299c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x26299cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2629a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2629A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2629A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2629A8u;
    // 0x2629a8: 0x0  nop
    ctx->pc = 0x2629a8u;
    // NOP
    // 0x2629ac: 0x0  nop
    ctx->pc = 0x2629acu;
    // NOP
    ctx->pc = 0x2629b0u;
}
