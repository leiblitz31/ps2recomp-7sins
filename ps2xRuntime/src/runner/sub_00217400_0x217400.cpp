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

// Function: sub_00217400
// Address: 0x217400 - 0x217440
void sub_00217400_0x217400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217400_0x217400");
#endif

    switch (ctx->pc) {
        case 0x217430u: goto label_217430;
        default: break;
    }

    ctx->pc = 0x217400u;

    // 0x217400: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x217400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x217404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217408: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x217408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x21740c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x21740cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x217410: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x217410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x217414: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x217414u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x217418: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x217418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21741c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x21741cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217420: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x217420u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x217424: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x217424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x217428: 0xc085cc8  jal         func_217320
    ctx->pc = 0x217428u;
    SET_GPR_U32(ctx, 31, 0x217430u);
    ctx->pc = 0x217320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217320u, 0x217428u, 0x217430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217430u;
label_217430:
    // 0x217430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217434: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x217434u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x217438: 0x3e00008  jr          $ra
    ctx->pc = 0x217438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217440u;
}
