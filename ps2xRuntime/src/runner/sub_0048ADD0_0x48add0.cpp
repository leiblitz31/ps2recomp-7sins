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

// Function: sub_0048ADD0
// Address: 0x48add0 - 0x48ae10
void sub_0048ADD0_0x48add0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048ADD0_0x48add0");
#endif

    switch (ctx->pc) {
        case 0x48adf4u: goto label_48adf4;
        default: break;
    }

    ctx->pc = 0x48add0u;

    // 0x48add0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48add0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48add4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48add4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48add8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48add8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48addc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x48addcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x48ade0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48ade4: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x48ade4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x48ade8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x48ade8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48adec: 0xc041d58  jal         func_107560
    ctx->pc = 0x48ADECu;
    SET_GPR_U32(ctx, 31, 0x48ADF4u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x48ADECu, 0x48ADF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48ADF4u;
label_48adf4:
    // 0x48adf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x48adf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48adf8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x48adf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48adfc: 0xac64008c  sw          $a0, 0x8C($v1)
    ctx->pc = 0x48adfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 4));
    // 0x48ae00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48ae00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ae04: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48ae04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48ae08: 0x3e00008  jr          $ra
    ctx->pc = 0x48AE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48AE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48AE10u;
}
