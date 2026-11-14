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

// Function: sub_0013C6D0
// Address: 0x13c6d0 - 0x13c710
void sub_0013C6D0_0x13c6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C6D0_0x13c6d0");
#endif

    switch (ctx->pc) {
        case 0x13c6f8u: goto label_13c6f8;
        default: break;
    }

    ctx->pc = 0x13c6d0u;

    // 0x13c6d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13c6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13c6d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c6d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13c6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13c6dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13c6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x13c6e0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x13c6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x13c6e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13c6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c6e8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x13c6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c6ec: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x13c6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c6f0: 0xc04f188  jal         func_13C620
    ctx->pc = 0x13C6F0u;
    SET_GPR_U32(ctx, 31, 0x13C6F8u);
    ctx->pc = 0x13C620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C620u, 0x13C6F0u, 0x13C6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C6F8u;
label_13c6f8:
    // 0x13c6f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c6fc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x13c6fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13c700: 0x3e00008  jr          $ra
    ctx->pc = 0x13C700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C708u;
    // 0x13c708: 0x0  nop
    ctx->pc = 0x13c708u;
    // NOP
    // 0x13c70c: 0x0  nop
    ctx->pc = 0x13c70cu;
    // NOP
    ctx->pc = 0x13c710u;
}
