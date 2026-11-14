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

// Function: sub_00106690
// Address: 0x106690 - 0x1066d0
void sub_00106690_0x106690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106690_0x106690");
#endif

    switch (ctx->pc) {
        case 0x1066b0u: goto label_1066b0;
        default: break;
    }

    ctx->pc = 0x106690u;

    // 0x106690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x106694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106698: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x106698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10669c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10669cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1066a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1066a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1066a4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1066a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1066a8: 0xc0419b4  jal         func_1066D0
    ctx->pc = 0x1066A8u;
    SET_GPR_U32(ctx, 31, 0x1066B0u);
    ctx->pc = 0x1066D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1066D0u, 0x1066A8u, 0x1066B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1066B0u;
label_1066b0:
    // 0x1066b0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1066b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1066b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1066b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1066b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1066b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1066bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1066BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1066BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1066C4u;
    // 0x1066c4: 0x0  nop
    ctx->pc = 0x1066c4u;
    // NOP
    // 0x1066c8: 0x0  nop
    ctx->pc = 0x1066c8u;
    // NOP
    // 0x1066cc: 0x0  nop
    ctx->pc = 0x1066ccu;
    // NOP
    ctx->pc = 0x1066d0u;
}
