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

// Function: sub_00476FA0
// Address: 0x476fa0 - 0x476fe0
void sub_00476FA0_0x476fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00476FA0_0x476fa0");
#endif

    switch (ctx->pc) {
        case 0x476fc0u: goto label_476fc0;
        default: break;
    }

    ctx->pc = 0x476fa0u;

    // 0x476fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x476fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x476fa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x476fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x476fa8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x476fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x476fac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x476facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x476fb0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x476fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x476fb4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x476fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x476fb8: 0xc11dc24  jal         func_477090
    ctx->pc = 0x476FB8u;
    SET_GPR_U32(ctx, 31, 0x476FC0u);
    ctx->pc = 0x477090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477090u, 0x476FB8u, 0x476FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476FC0u;
label_476fc0:
    // 0x476fc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x476fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x476fc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x476fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x476fc8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x476fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x476fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x476FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x476FD4u;
    // 0x476fd4: 0x0  nop
    ctx->pc = 0x476fd4u;
    // NOP
    // 0x476fd8: 0x0  nop
    ctx->pc = 0x476fd8u;
    // NOP
    // 0x476fdc: 0x0  nop
    ctx->pc = 0x476fdcu;
    // NOP
    ctx->pc = 0x476fe0u;
}
