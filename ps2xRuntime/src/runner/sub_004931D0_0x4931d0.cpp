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

// Function: sub_004931D0
// Address: 0x4931d0 - 0x493210
void sub_004931D0_0x4931d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004931D0_0x4931d0");
#endif

    switch (ctx->pc) {
        case 0x4931fcu: goto label_4931fc;
        default: break;
    }

    ctx->pc = 0x4931d0u;

    // 0x4931d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4931d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4931d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4931d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4931d8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x4931d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x4931dc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x4931dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x4931e0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x4931e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x4931e4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4931e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4931e8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x4931e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4931ec: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x4931ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4931f0: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x4931f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x4931f4: 0xc124c84  jal         func_493210
    ctx->pc = 0x4931F4u;
    SET_GPR_U32(ctx, 31, 0x4931FCu);
    ctx->pc = 0x493210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493210u, 0x4931F4u, 0x4931FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4931FCu;
label_4931fc:
    // 0x4931fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4931fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x493200: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x493200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x493204: 0x3e00008  jr          $ra
    ctx->pc = 0x493204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x493204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49320Cu;
    // 0x49320c: 0x0  nop
    ctx->pc = 0x49320cu;
    // NOP
    ctx->pc = 0x493210u;
}
