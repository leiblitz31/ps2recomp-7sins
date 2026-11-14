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

// Function: sub_002D0600
// Address: 0x2d0600 - 0x2d0650
void sub_002D0600_0x2d0600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0600_0x2d0600");
#endif

    switch (ctx->pc) {
        case 0x2d0624u: goto label_2d0624;
        default: break;
    }

    ctx->pc = 0x2d0600u;

    // 0x2d0600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d0600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d0604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0608: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d0608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d060c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2d060cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2d0610: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2d0610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2d0614: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d0614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0618: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2d0618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d061c: 0xc0b4194  jal         func_2D0650
    ctx->pc = 0x2D061Cu;
    SET_GPR_U32(ctx, 31, 0x2D0624u);
    ctx->pc = 0x2D0650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0650u, 0x2D061Cu, 0x2D0624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0624u;
label_2d0624:
    // 0x2d0624: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2d0624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0628: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d0628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d062c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d062cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d0630: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d0630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0634: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0638: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d0638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d063c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D063Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D063Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0644u;
    // 0x2d0644: 0x0  nop
    ctx->pc = 0x2d0644u;
    // NOP
    // 0x2d0648: 0x0  nop
    ctx->pc = 0x2d0648u;
    // NOP
    // 0x2d064c: 0x0  nop
    ctx->pc = 0x2d064cu;
    // NOP
    ctx->pc = 0x2d0650u;
}
