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

// Function: sub_001906C0
// Address: 0x1906c0 - 0x190700
void sub_001906C0_0x1906c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001906C0_0x1906c0");
#endif

    switch (ctx->pc) {
        case 0x1906e4u: goto label_1906e4;
        default: break;
    }

    ctx->pc = 0x1906c0u;

    // 0x1906c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1906c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1906c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1906c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1906c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1906c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1906cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1906ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1906d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1906d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1906d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1906d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1906d8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1906d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1906dc: 0xc0641c0  jal         func_190700
    ctx->pc = 0x1906DCu;
    SET_GPR_U32(ctx, 31, 0x1906E4u);
    ctx->pc = 0x190700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190700u, 0x1906DCu, 0x1906E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1906E4u;
label_1906e4:
    // 0x1906e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1906e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1906e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1906e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1906ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1906ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1906ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1906F4u;
    // 0x1906f4: 0x0  nop
    ctx->pc = 0x1906f4u;
    // NOP
    // 0x1906f8: 0x0  nop
    ctx->pc = 0x1906f8u;
    // NOP
    // 0x1906fc: 0x0  nop
    ctx->pc = 0x1906fcu;
    // NOP
    ctx->pc = 0x190700u;
}
