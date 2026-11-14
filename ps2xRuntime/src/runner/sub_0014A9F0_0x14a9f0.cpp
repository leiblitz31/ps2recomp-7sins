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

// Function: sub_0014A9F0
// Address: 0x14a9f0 - 0x14aa30
void sub_0014A9F0_0x14a9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A9F0_0x14a9f0");
#endif

    switch (ctx->pc) {
        case 0x14aa10u: goto label_14aa10;
        default: break;
    }

    ctx->pc = 0x14a9f0u;

    // 0x14a9f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14a9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14a9f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a9f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14a9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14a9fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x14a9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x14aa00: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14aa00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14aa04: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x14aa04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14aa08: 0xc052a8c  jal         func_14AA30
    ctx->pc = 0x14AA08u;
    SET_GPR_U32(ctx, 31, 0x14AA10u);
    ctx->pc = 0x14AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AA30u, 0x14AA08u, 0x14AA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA10u;
label_14aa10:
    // 0x14aa10: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14aa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14aa14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14aa14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14aa18: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14aa18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14aa1c: 0x3e00008  jr          $ra
    ctx->pc = 0x14AA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AA24u;
    // 0x14aa24: 0x0  nop
    ctx->pc = 0x14aa24u;
    // NOP
    // 0x14aa28: 0x0  nop
    ctx->pc = 0x14aa28u;
    // NOP
    // 0x14aa2c: 0x0  nop
    ctx->pc = 0x14aa2cu;
    // NOP
    ctx->pc = 0x14aa30u;
}
