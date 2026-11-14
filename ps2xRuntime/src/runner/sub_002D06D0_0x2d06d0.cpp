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

// Function: sub_002D06D0
// Address: 0x2d06d0 - 0x2d0710
void sub_002D06D0_0x2d06d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D06D0_0x2d06d0");
#endif

    switch (ctx->pc) {
        case 0x2d06f0u: goto label_2d06f0;
        default: break;
    }

    ctx->pc = 0x2d06d0u;

    // 0x2d06d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d06d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d06d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d06d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d06d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d06d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d06dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2d06dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2d06e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d06e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d06e4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2d06e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d06e8: 0xc0b41c4  jal         func_2D0710
    ctx->pc = 0x2D06E8u;
    SET_GPR_U32(ctx, 31, 0x2D06F0u);
    ctx->pc = 0x2D0710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0710u, 0x2D06E8u, 0x2D06F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D06F0u;
label_2d06f0:
    // 0x2d06f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d06f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d06f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d06f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d06f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d06f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d06fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D06FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D06FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0704u;
    // 0x2d0704: 0x0  nop
    ctx->pc = 0x2d0704u;
    // NOP
    // 0x2d0708: 0x0  nop
    ctx->pc = 0x2d0708u;
    // NOP
    // 0x2d070c: 0x0  nop
    ctx->pc = 0x2d070cu;
    // NOP
    ctx->pc = 0x2d0710u;
}
