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

// Function: sub_001066D0
// Address: 0x1066d0 - 0x106710
void sub_001066D0_0x1066d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001066D0_0x1066d0");
#endif

    switch (ctx->pc) {
        case 0x1066f4u: goto label_1066f4;
        default: break;
    }

    ctx->pc = 0x1066d0u;

    // 0x1066d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1066d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1066d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1066d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1066d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1066d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1066dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1066dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1066e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1066e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1066e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1066e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1066e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1066e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1066ec: 0xc0419c4  jal         func_106710
    ctx->pc = 0x1066ECu;
    SET_GPR_U32(ctx, 31, 0x1066F4u);
    ctx->pc = 0x106710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106710u, 0x1066ECu, 0x1066F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1066F4u;
label_1066f4:
    // 0x1066f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1066f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1066f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1066f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1066fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1066FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1066FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106704u;
    // 0x106704: 0x0  nop
    ctx->pc = 0x106704u;
    // NOP
    // 0x106708: 0x0  nop
    ctx->pc = 0x106708u;
    // NOP
    // 0x10670c: 0x0  nop
    ctx->pc = 0x10670cu;
    // NOP
    ctx->pc = 0x106710u;
}
