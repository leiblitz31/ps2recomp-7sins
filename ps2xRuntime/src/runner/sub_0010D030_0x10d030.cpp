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

// Function: sub_0010D030
// Address: 0x10d030 - 0x10d070
void sub_0010D030_0x10d030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D030_0x10d030");
#endif

    switch (ctx->pc) {
        case 0x10d050u: goto label_10d050;
        default: break;
    }

    ctx->pc = 0x10d030u;

    // 0x10d030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10d030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10d034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10d038: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10d038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10d03c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10d03cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10d040: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10d040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d044: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x10d044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d048: 0xc04341c  jal         func_10D070
    ctx->pc = 0x10D048u;
    SET_GPR_U32(ctx, 31, 0x10D050u);
    ctx->pc = 0x10D070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D070u, 0x10D048u, 0x10D050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D050u;
label_10d050:
    // 0x10d050: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10d050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d054: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d058: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10d058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10d05c: 0x3e00008  jr          $ra
    ctx->pc = 0x10D05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D064u;
    // 0x10d064: 0x0  nop
    ctx->pc = 0x10d064u;
    // NOP
    // 0x10d068: 0x0  nop
    ctx->pc = 0x10d068u;
    // NOP
    // 0x10d06c: 0x0  nop
    ctx->pc = 0x10d06cu;
    // NOP
    ctx->pc = 0x10d070u;
}
