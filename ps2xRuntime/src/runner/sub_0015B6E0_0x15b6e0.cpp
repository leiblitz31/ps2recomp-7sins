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

// Function: sub_0015B6E0
// Address: 0x15b6e0 - 0x15b720
void sub_0015B6E0_0x15b6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B6E0_0x15b6e0");
#endif

    switch (ctx->pc) {
        case 0x15b708u: goto label_15b708;
        default: break;
    }

    ctx->pc = 0x15b6e0u;

    // 0x15b6e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15b6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15b6e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15b6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15b6e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x15b6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15b6ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x15b6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x15b6f0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x15b6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x15b6f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15b6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b6f8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x15b6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b6fc: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x15b6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15b700: 0xc04f1e8  jal         func_13C7A0
    ctx->pc = 0x15B700u;
    SET_GPR_U32(ctx, 31, 0x15B708u);
    ctx->pc = 0x13C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C7A0u, 0x15B700u, 0x15B708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B708u;
label_15b708:
    // 0x15b708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15b708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b70c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15b70cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15b710: 0x3e00008  jr          $ra
    ctx->pc = 0x15B710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B718u;
    // 0x15b718: 0x0  nop
    ctx->pc = 0x15b718u;
    // NOP
    // 0x15b71c: 0x0  nop
    ctx->pc = 0x15b71cu;
    // NOP
    ctx->pc = 0x15b720u;
}
