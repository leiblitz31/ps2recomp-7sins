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

// Function: sub_00457B10
// Address: 0x457b10 - 0x457b50
void sub_00457B10_0x457b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00457B10_0x457b10");
#endif

    switch (ctx->pc) {
        case 0x457b30u: goto label_457b30;
        default: break;
    }

    ctx->pc = 0x457b10u;

    // 0x457b10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x457b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x457b14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x457b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x457b18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x457b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x457b1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x457b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x457b20: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x457b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457b24: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x457b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x457b28: 0xc115e24  jal         func_457890
    ctx->pc = 0x457B28u;
    SET_GPR_U32(ctx, 31, 0x457B30u);
    ctx->pc = 0x457890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457890u, 0x457B28u, 0x457B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457B30u;
label_457b30:
    // 0x457b30: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x457b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457b34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x457b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x457b38: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x457b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x457b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x457B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x457B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x457B44u;
    // 0x457b44: 0x0  nop
    ctx->pc = 0x457b44u;
    // NOP
    // 0x457b48: 0x0  nop
    ctx->pc = 0x457b48u;
    // NOP
    // 0x457b4c: 0x0  nop
    ctx->pc = 0x457b4cu;
    // NOP
    ctx->pc = 0x457b50u;
}
