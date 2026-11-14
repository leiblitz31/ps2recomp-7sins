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

// Function: sub_002CB9F0
// Address: 0x2cb9f0 - 0x2cba30
void sub_002CB9F0_0x2cb9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB9F0_0x2cb9f0");
#endif

    switch (ctx->pc) {
        case 0x2cba18u: goto label_2cba18;
        default: break;
    }

    ctx->pc = 0x2cb9f0u;

    // 0x2cb9f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cb9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cb9f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb9f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cb9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2cb9fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2cb9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2cba00: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2cba00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2cba04: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cba04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cba08: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2cba08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cba0c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2cba0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cba10: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2CBA10u;
    SET_GPR_U32(ctx, 31, 0x2CBA18u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2CBA10u, 0x2CBA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBA18u;
label_2cba18:
    // 0x2cba18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cba18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cba1c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2cba1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2cba20: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBA28u;
    // 0x2cba28: 0x0  nop
    ctx->pc = 0x2cba28u;
    // NOP
    // 0x2cba2c: 0x0  nop
    ctx->pc = 0x2cba2cu;
    // NOP
    ctx->pc = 0x2cba30u;
}
