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

// Function: sub_002445D0
// Address: 0x2445d0 - 0x244620
void sub_002445D0_0x2445d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002445D0_0x2445d0");
#endif

    switch (ctx->pc) {
        case 0x2445f0u: goto label_2445f0;
        default: break;
    }

    ctx->pc = 0x2445d0u;

    // 0x2445d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2445d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2445d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2445d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2445d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2445d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2445dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2445dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2445e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2445e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2445e4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2445e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2445e8: 0xc084e8c  jal         func_213A30
    ctx->pc = 0x2445E8u;
    SET_GPR_U32(ctx, 31, 0x2445F0u);
    ctx->pc = 0x213A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213A30u, 0x2445E8u, 0x2445F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2445F0u;
label_2445f0:
    // 0x2445f0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2445f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2445f4: 0x24635740  addiu       $v1, $v1, 0x5740
    ctx->pc = 0x2445f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22336));
    // 0x2445f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2445f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2445fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2445fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x244600: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x244600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244608: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x244608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24460c: 0x3e00008  jr          $ra
    ctx->pc = 0x24460Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24460Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244614u;
    // 0x244614: 0x0  nop
    ctx->pc = 0x244614u;
    // NOP
    // 0x244618: 0x0  nop
    ctx->pc = 0x244618u;
    // NOP
    // 0x24461c: 0x0  nop
    ctx->pc = 0x24461cu;
    // NOP
    ctx->pc = 0x244620u;
}
