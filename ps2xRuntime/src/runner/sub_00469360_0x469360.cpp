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

// Function: sub_00469360
// Address: 0x469360 - 0x4693a0
void sub_00469360_0x469360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469360_0x469360");
#endif

    switch (ctx->pc) {
        case 0x469380u: goto label_469380;
        default: break;
    }

    ctx->pc = 0x469360u;

    // 0x469360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x469360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x469364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x469364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x469368: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x469368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46936c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46936cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x469370: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x469370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469374: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x469374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469378: 0xc11a4e8  jal         func_4693A0
    ctx->pc = 0x469378u;
    SET_GPR_U32(ctx, 31, 0x469380u);
    ctx->pc = 0x4693A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4693A0u, 0x469378u, 0x469380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469380u;
label_469380:
    // 0x469380: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x469380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469384: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x469384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469388: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x469388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46938c: 0x3e00008  jr          $ra
    ctx->pc = 0x46938Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46938Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469394u;
    // 0x469394: 0x0  nop
    ctx->pc = 0x469394u;
    // NOP
    // 0x469398: 0x0  nop
    ctx->pc = 0x469398u;
    // NOP
    // 0x46939c: 0x0  nop
    ctx->pc = 0x46939cu;
    // NOP
    ctx->pc = 0x4693a0u;
}
