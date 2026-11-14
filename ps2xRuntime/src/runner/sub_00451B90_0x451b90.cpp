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

// Function: sub_00451B90
// Address: 0x451b90 - 0x451bd0
void sub_00451B90_0x451b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00451B90_0x451b90");
#endif

    switch (ctx->pc) {
        case 0x451bb8u: goto label_451bb8;
        default: break;
    }

    ctx->pc = 0x451b90u;

    // 0x451b90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x451b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x451b94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x451b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x451b98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x451b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x451b9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x451b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x451ba0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x451ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x451ba4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x451ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x451ba8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x451ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x451bac: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x451bacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x451bb0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x451BB0u;
    SET_GPR_U32(ctx, 31, 0x451BB8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x451BB0u, 0x451BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451BB8u;
label_451bb8:
    // 0x451bb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x451bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x451bbc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x451bbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x451bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x451BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x451BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x451BC8u;
    // 0x451bc8: 0x0  nop
    ctx->pc = 0x451bc8u;
    // NOP
    // 0x451bcc: 0x0  nop
    ctx->pc = 0x451bccu;
    // NOP
    ctx->pc = 0x451bd0u;
}
