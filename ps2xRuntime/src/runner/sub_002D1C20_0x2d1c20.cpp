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

// Function: sub_002D1C20
// Address: 0x2d1c20 - 0x2d1c60
void sub_002D1C20_0x2d1c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1C20_0x2d1c20");
#endif

    switch (ctx->pc) {
        case 0x2d1c44u: goto label_2d1c44;
        default: break;
    }

    ctx->pc = 0x2d1c20u;

    // 0x2d1c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d1c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d1c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1c28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d1c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d1c2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2d1c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2d1c30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d1c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1c34: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2d1c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1c38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d1c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1c3c: 0xc0b4718  jal         func_2D1C60
    ctx->pc = 0x2D1C3Cu;
    SET_GPR_U32(ctx, 31, 0x2D1C44u);
    ctx->pc = 0x2D1C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1C60u, 0x2D1C3Cu, 0x2D1C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1C44u;
label_2d1c44:
    // 0x2d1c44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1c48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d1c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d1c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1C54u;
    // 0x2d1c54: 0x0  nop
    ctx->pc = 0x2d1c54u;
    // NOP
    // 0x2d1c58: 0x0  nop
    ctx->pc = 0x2d1c58u;
    // NOP
    // 0x2d1c5c: 0x0  nop
    ctx->pc = 0x2d1c5cu;
    // NOP
    ctx->pc = 0x2d1c60u;
}
