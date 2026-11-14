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

// Function: sub_00464670
// Address: 0x464670 - 0x4646a0
void sub_00464670_0x464670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00464670_0x464670");
#endif

    switch (ctx->pc) {
        case 0x464688u: goto label_464688;
        default: break;
    }

    ctx->pc = 0x464670u;

    // 0x464670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x464670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x464674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x464674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x464678: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x464678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46467c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46467cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x464680: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x464680u;
    SET_GPR_U32(ctx, 31, 0x464688u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x464680u, 0x464688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464688u;
label_464688:
    // 0x464688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x464688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46468c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x46468cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x464690: 0x3e00008  jr          $ra
    ctx->pc = 0x464690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x464690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x464698u;
    // 0x464698: 0x0  nop
    ctx->pc = 0x464698u;
    // NOP
    // 0x46469c: 0x0  nop
    ctx->pc = 0x46469cu;
    // NOP
    ctx->pc = 0x4646a0u;
}
