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

// Function: sub_00111DC0
// Address: 0x111dc0 - 0x111e00
void sub_00111DC0_0x111dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111DC0_0x111dc0");
#endif

    switch (ctx->pc) {
        case 0x111de0u: goto label_111de0;
        default: break;
    }

    ctx->pc = 0x111dc0u;

    // 0x111dc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x111dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x111dc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111dc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x111dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x111dcc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x111dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x111dd0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x111dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111dd4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x111dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111dd8: 0xc044780  jal         func_111E00
    ctx->pc = 0x111DD8u;
    SET_GPR_U32(ctx, 31, 0x111DE0u);
    ctx->pc = 0x111E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111E00u, 0x111DD8u, 0x111DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111DE0u;
label_111de0:
    // 0x111de0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x111de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111de4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111de8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x111de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x111dec: 0x3e00008  jr          $ra
    ctx->pc = 0x111DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111DF4u;
    // 0x111df4: 0x0  nop
    ctx->pc = 0x111df4u;
    // NOP
    // 0x111df8: 0x0  nop
    ctx->pc = 0x111df8u;
    // NOP
    // 0x111dfc: 0x0  nop
    ctx->pc = 0x111dfcu;
    // NOP
    ctx->pc = 0x111e00u;
}
