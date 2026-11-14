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

// Function: sub_002CBAB0
// Address: 0x2cbab0 - 0x2cbae0
void sub_002CBAB0_0x2cbab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CBAB0_0x2cbab0");
#endif

    switch (ctx->pc) {
        case 0x2cbaccu: goto label_2cbacc;
        default: break;
    }

    ctx->pc = 0x2cbab0u;

    // 0x2cbab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cbab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cbab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cbab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cbab8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cbab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2cbabc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cbabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbac0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cbac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cbac4: 0xc0b2eb8  jal         func_2CBAE0
    ctx->pc = 0x2CBAC4u;
    SET_GPR_U32(ctx, 31, 0x2CBACCu);
    ctx->pc = 0x2CBAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBAE0u, 0x2CBAC4u, 0x2CBACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBACCu;
label_2cbacc:
    // 0x2cbacc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cbaccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbad0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2cbad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cbad4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBADCu;
    // 0x2cbadc: 0x0  nop
    ctx->pc = 0x2cbadcu;
    // NOP
    ctx->pc = 0x2cbae0u;
}
