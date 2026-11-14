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

// Function: sub_00191FE0
// Address: 0x191fe0 - 0x192020
void sub_00191FE0_0x191fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191FE0_0x191fe0");
#endif

    switch (ctx->pc) {
        case 0x192010u: goto label_192010;
        default: break;
    }

    ctx->pc = 0x191fe0u;

    // 0x191fe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x191fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x191fe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191fe8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x191fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x191fec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x191fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x191ff0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x191ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x191ff4: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x191ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x191ff8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x191ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191ffc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x191ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192000: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x192000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x192004: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x192004u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x192008: 0xc064814  jal         func_192050
    ctx->pc = 0x192008u;
    SET_GPR_U32(ctx, 31, 0x192010u);
    ctx->pc = 0x192050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192050u, 0x192008u, 0x192010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192010u;
label_192010:
    // 0x192010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192014: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x192014u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x192018: 0x3e00008  jr          $ra
    ctx->pc = 0x192018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192020u;
}
