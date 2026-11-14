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

// Function: sub_0010E5C0
// Address: 0x10e5c0 - 0x10e600
void sub_0010E5C0_0x10e5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E5C0_0x10e5c0");
#endif

    switch (ctx->pc) {
        case 0x10e5e4u: goto label_10e5e4;
        default: break;
    }

    ctx->pc = 0x10e5c0u;

    // 0x10e5c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10e5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10e5c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10e5c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10e5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10e5cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10e5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10e5d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10e5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e5d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10e5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e5d8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x10e5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10e5dc: 0xc043980  jal         func_10E600
    ctx->pc = 0x10E5DCu;
    SET_GPR_U32(ctx, 31, 0x10E5E4u);
    ctx->pc = 0x10E600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E600u, 0x10E5DCu, 0x10E5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E5E4u;
label_10e5e4:
    // 0x10e5e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e5e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10e5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10e5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x10E5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E5F4u;
    // 0x10e5f4: 0x0  nop
    ctx->pc = 0x10e5f4u;
    // NOP
    // 0x10e5f8: 0x0  nop
    ctx->pc = 0x10e5f8u;
    // NOP
    // 0x10e5fc: 0x0  nop
    ctx->pc = 0x10e5fcu;
    // NOP
    ctx->pc = 0x10e600u;
}
