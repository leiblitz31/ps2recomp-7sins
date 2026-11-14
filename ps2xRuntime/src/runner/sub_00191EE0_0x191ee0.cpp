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

// Function: sub_00191EE0
// Address: 0x191ee0 - 0x191f20
void sub_00191EE0_0x191ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191EE0_0x191ee0");
#endif

    switch (ctx->pc) {
        case 0x191f04u: goto label_191f04;
        default: break;
    }

    ctx->pc = 0x191ee0u;

    // 0x191ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x191ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x191ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191ee8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x191ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x191eec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x191eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x191ef0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x191ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191ef4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x191ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191ef8: 0x27869210  addiu       $a2, $gp, -0x6DF0
    ctx->pc = 0x191ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939152));
    // 0x191efc: 0xc0647c8  jal         func_191F20
    ctx->pc = 0x191EFCu;
    SET_GPR_U32(ctx, 31, 0x191F04u);
    ctx->pc = 0x191F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191F20u, 0x191EFCu, 0x191F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191F04u;
label_191f04:
    // 0x191f04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191f08: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x191f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x191f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x191F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191F14u;
    // 0x191f14: 0x0  nop
    ctx->pc = 0x191f14u;
    // NOP
    // 0x191f18: 0x0  nop
    ctx->pc = 0x191f18u;
    // NOP
    // 0x191f1c: 0x0  nop
    ctx->pc = 0x191f1cu;
    // NOP
    ctx->pc = 0x191f20u;
}
