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

// Function: sub_0015BFE0
// Address: 0x15bfe0 - 0x15c020
void sub_0015BFE0_0x15bfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BFE0_0x15bfe0");
#endif

    switch (ctx->pc) {
        case 0x15c000u: goto label_15c000;
        default: break;
    }

    ctx->pc = 0x15bfe0u;

    // 0x15bfe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15bfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15bfe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15bfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15bfe8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x15bfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15bfec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x15bfecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x15bff0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15bff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bff4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x15bff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bff8: 0xc057008  jal         func_15C020
    ctx->pc = 0x15BFF8u;
    SET_GPR_U32(ctx, 31, 0x15C000u);
    ctx->pc = 0x15C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C020u, 0x15BFF8u, 0x15C000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C000u;
label_15c000:
    // 0x15c000: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15c000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15c004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c008: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15c008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15c00c: 0x3e00008  jr          $ra
    ctx->pc = 0x15C00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C014u;
    // 0x15c014: 0x0  nop
    ctx->pc = 0x15c014u;
    // NOP
    // 0x15c018: 0x0  nop
    ctx->pc = 0x15c018u;
    // NOP
    // 0x15c01c: 0x0  nop
    ctx->pc = 0x15c01cu;
    // NOP
    ctx->pc = 0x15c020u;
}
