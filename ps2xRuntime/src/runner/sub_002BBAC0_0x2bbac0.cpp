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

// Function: sub_002BBAC0
// Address: 0x2bbac0 - 0x2bbb00
void sub_002BBAC0_0x2bbac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBAC0_0x2bbac0");
#endif

    switch (ctx->pc) {
        case 0x2bbaecu: goto label_2bbaec;
        default: break;
    }

    ctx->pc = 0x2bbac0u;

    // 0x2bbac0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bbac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bbac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bbac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bbac8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2bbac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2bbacc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2bbaccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2bbad0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2bbad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2bbad4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2bbad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bbad8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2bbad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bbadc: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2bbadcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bbae0: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2bbae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2bbae4: 0xc0aeec0  jal         func_2BBB00
    ctx->pc = 0x2BBAE4u;
    SET_GPR_U32(ctx, 31, 0x2BBAECu);
    ctx->pc = 0x2BBB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBB00u, 0x2BBAE4u, 0x2BBAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBAECu;
label_2bbaec:
    // 0x2bbaec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bbaecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbaf0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2bbaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bbaf4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBAFCu;
    // 0x2bbafc: 0x0  nop
    ctx->pc = 0x2bbafcu;
    // NOP
    ctx->pc = 0x2bbb00u;
}
