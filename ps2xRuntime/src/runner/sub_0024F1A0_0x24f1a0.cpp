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

// Function: sub_0024F1A0
// Address: 0x24f1a0 - 0x24f1e0
void sub_0024F1A0_0x24f1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F1A0_0x24f1a0");
#endif

    switch (ctx->pc) {
        case 0x24f1b8u: goto label_24f1b8;
        case 0x24f1c8u: goto label_24f1c8;
        default: break;
    }

    ctx->pc = 0x24f1a0u;

    // 0x24f1a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24f1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24f1a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24f1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24f1a8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x24f1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x24f1ac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x24f1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f1b0: 0xc053cc4  jal         func_14F310
    ctx->pc = 0x24F1B0u;
    SET_GPR_U32(ctx, 31, 0x24F1B8u);
    ctx->pc = 0x14F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F310u, 0x24F1B0u, 0x24F1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F1B8u;
label_24f1b8:
    // 0x24f1b8: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x24f1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x24f1bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24f1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f1c0: 0xc053cbc  jal         func_14F2F0
    ctx->pc = 0x24F1C0u;
    SET_GPR_U32(ctx, 31, 0x24F1C8u);
    ctx->pc = 0x14F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F2F0u, 0x24F1C0u, 0x24F1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F1C8u;
label_24f1c8:
    // 0x24f1c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24f1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f1cc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x24f1ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24f1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x24F1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F1D8u;
    // 0x24f1d8: 0x0  nop
    ctx->pc = 0x24f1d8u;
    // NOP
    // 0x24f1dc: 0x0  nop
    ctx->pc = 0x24f1dcu;
    // NOP
    ctx->pc = 0x24f1e0u;
}
