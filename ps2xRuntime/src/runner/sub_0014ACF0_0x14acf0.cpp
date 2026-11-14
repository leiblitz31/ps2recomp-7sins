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

// Function: sub_0014ACF0
// Address: 0x14acf0 - 0x14ad30
void sub_0014ACF0_0x14acf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014ACF0_0x14acf0");
#endif

    switch (ctx->pc) {
        case 0x14ad10u: goto label_14ad10;
        default: break;
    }

    ctx->pc = 0x14acf0u;

    // 0x14acf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14acf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14acf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14acf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14acf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14acf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14acfc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x14acfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x14ad00: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14ad00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ad04: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x14ad04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ad08: 0xc052b4c  jal         func_14AD30
    ctx->pc = 0x14AD08u;
    SET_GPR_U32(ctx, 31, 0x14AD10u);
    ctx->pc = 0x14AD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AD30u, 0x14AD08u, 0x14AD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD10u;
label_14ad10:
    // 0x14ad10: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14ad10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ad14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ad14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ad18: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14ad18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14ad1c: 0x3e00008  jr          $ra
    ctx->pc = 0x14AD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AD1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AD24u;
    // 0x14ad24: 0x0  nop
    ctx->pc = 0x14ad24u;
    // NOP
    // 0x14ad28: 0x0  nop
    ctx->pc = 0x14ad28u;
    // NOP
    // 0x14ad2c: 0x0  nop
    ctx->pc = 0x14ad2cu;
    // NOP
    ctx->pc = 0x14ad30u;
}
