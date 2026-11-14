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

// Function: sub_0018CFE0
// Address: 0x18cfe0 - 0x18d020
void sub_0018CFE0_0x18cfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018CFE0_0x18cfe0");
#endif

    switch (ctx->pc) {
        case 0x18d000u: goto label_18d000;
        default: break;
    }

    ctx->pc = 0x18cfe0u;

    // 0x18cfe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18cfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18cfe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18cfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18cfe8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18cfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18cfec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18cfecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x18cff0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18cff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18cff4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x18cff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18cff8: 0xc063408  jal         func_18D020
    ctx->pc = 0x18CFF8u;
    SET_GPR_U32(ctx, 31, 0x18D000u);
    ctx->pc = 0x18D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D020u, 0x18CFF8u, 0x18D000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D000u;
label_18d000:
    // 0x18d000: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18d000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18d004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d008: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18d008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18d00c: 0x3e00008  jr          $ra
    ctx->pc = 0x18D00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D014u;
    // 0x18d014: 0x0  nop
    ctx->pc = 0x18d014u;
    // NOP
    // 0x18d018: 0x0  nop
    ctx->pc = 0x18d018u;
    // NOP
    // 0x18d01c: 0x0  nop
    ctx->pc = 0x18d01cu;
    // NOP
    ctx->pc = 0x18d020u;
}
