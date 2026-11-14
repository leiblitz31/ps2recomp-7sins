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

// Function: sub_004772D0
// Address: 0x4772d0 - 0x477310
void sub_004772D0_0x4772d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004772D0_0x4772d0");
#endif

    switch (ctx->pc) {
        case 0x4772f8u: goto label_4772f8;
        default: break;
    }

    ctx->pc = 0x4772d0u;

    // 0x4772d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4772d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4772d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4772d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4772d8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x4772d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x4772dc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x4772dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x4772e0: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x4772e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x4772e4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4772e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4772e8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x4772e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4772ec: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x4772ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x4772f0: 0xc11dcc4  jal         func_477310
    ctx->pc = 0x4772F0u;
    SET_GPR_U32(ctx, 31, 0x4772F8u);
    ctx->pc = 0x477310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477310u, 0x4772F0u, 0x4772F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4772F8u;
label_4772f8:
    // 0x4772f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4772f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4772fc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4772fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x477300: 0x3e00008  jr          $ra
    ctx->pc = 0x477300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x477300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x477308u;
    // 0x477308: 0x0  nop
    ctx->pc = 0x477308u;
    // NOP
    // 0x47730c: 0x0  nop
    ctx->pc = 0x47730cu;
    // NOP
    ctx->pc = 0x477310u;
}
