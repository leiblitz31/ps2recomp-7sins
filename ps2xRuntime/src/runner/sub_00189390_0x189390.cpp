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

// Function: sub_00189390
// Address: 0x189390 - 0x1893d0
void sub_00189390_0x189390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189390_0x189390");
#endif

    switch (ctx->pc) {
        case 0x1893b0u: goto label_1893b0;
        default: break;
    }

    ctx->pc = 0x189390u;

    // 0x189390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x189390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x189394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189398: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x189398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18939c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18939cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1893a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1893a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1893a4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1893a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1893a8: 0xc0624f4  jal         func_1893D0
    ctx->pc = 0x1893A8u;
    SET_GPR_U32(ctx, 31, 0x1893B0u);
    ctx->pc = 0x1893D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1893D0u, 0x1893A8u, 0x1893B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1893B0u;
label_1893b0:
    // 0x1893b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1893b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1893b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1893b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1893b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1893b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1893bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1893BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1893BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1893C4u;
    // 0x1893c4: 0x0  nop
    ctx->pc = 0x1893c4u;
    // NOP
    // 0x1893c8: 0x0  nop
    ctx->pc = 0x1893c8u;
    // NOP
    // 0x1893cc: 0x0  nop
    ctx->pc = 0x1893ccu;
    // NOP
    ctx->pc = 0x1893d0u;
}
