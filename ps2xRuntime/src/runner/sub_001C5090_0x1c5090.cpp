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

// Function: sub_001C5090
// Address: 0x1c5090 - 0x1c50c0
void sub_001C5090_0x1c5090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5090_0x1c5090");
#endif

    switch (ctx->pc) {
        case 0x1c50a8u: goto label_1c50a8;
        default: break;
    }

    ctx->pc = 0x1c5090u;

    // 0x1c5090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c5090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c5094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c5094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c5098: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c5098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c509c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c509cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c50a0: 0xc0ba0c8  jal         func_2E8320
    ctx->pc = 0x1C50A0u;
    SET_GPR_U32(ctx, 31, 0x1C50A8u);
    ctx->pc = 0x2E8320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8320u, 0x1C50A0u, 0x1C50A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50A8u;
label_1c50a8:
    // 0x1c50a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c50a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c50ac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1c50acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c50b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C50B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C50B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C50B8u;
    // 0x1c50b8: 0x0  nop
    ctx->pc = 0x1c50b8u;
    // NOP
    // 0x1c50bc: 0x0  nop
    ctx->pc = 0x1c50bcu;
    // NOP
    ctx->pc = 0x1c50c0u;
}
