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

// Function: sub_00298E80
// Address: 0x298e80 - 0x298ec0
void sub_00298E80_0x298e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298E80_0x298e80");
#endif

    switch (ctx->pc) {
        case 0x298eb0u: goto label_298eb0;
        default: break;
    }

    ctx->pc = 0x298e80u;

    // 0x298e80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x298e84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x298e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298e88: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x298e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x298e8c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x298e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x298e90: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x298e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x298e94: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x298e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298e98: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x298e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298e9c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x298e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x298ea0: 0x24a575e0  addiu       $a1, $a1, 0x75E0
    ctx->pc = 0x298ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30176));
    // 0x298ea4: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x298ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x298ea8: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x298EA8u;
    SET_GPR_U32(ctx, 31, 0x298EB0u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x298EA8u, 0x298EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298EB0u;
label_298eb0:
    // 0x298eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298eb4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x298eb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x298eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x298EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298EC0u;
}
