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

// Function: sub_0013A1C0
// Address: 0x13a1c0 - 0x13a1f0
void sub_0013A1C0_0x13a1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A1C0_0x13a1c0");
#endif

    switch (ctx->pc) {
        case 0x13a1dcu: goto label_13a1dc;
        default: break;
    }

    ctx->pc = 0x13a1c0u;

    // 0x13a1c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13a1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13a1c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13a1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13a1c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13a1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13a1cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13a1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a1d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13a1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13a1d4: 0xc122718  jal         func_489C60
    ctx->pc = 0x13A1D4u;
    SET_GPR_U32(ctx, 31, 0x13A1DCu);
    ctx->pc = 0x489C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489C60u, 0x13A1D4u, 0x13A1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A1DCu;
label_13a1dc:
    // 0x13a1dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13a1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a1e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13a1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13a1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x13A1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A1ECu;
    // 0x13a1ec: 0x0  nop
    ctx->pc = 0x13a1ecu;
    // NOP
    ctx->pc = 0x13a1f0u;
}
