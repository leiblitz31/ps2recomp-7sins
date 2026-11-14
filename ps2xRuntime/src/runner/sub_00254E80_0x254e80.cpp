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

// Function: sub_00254E80
// Address: 0x254e80 - 0x254ec0
void sub_00254E80_0x254e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254E80_0x254e80");
#endif

    switch (ctx->pc) {
        case 0x254ea0u: goto label_254ea0;
        default: break;
    }

    ctx->pc = 0x254e80u;

    // 0x254e80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x254e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x254e84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254e88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x254e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x254e8c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x254e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x254e90: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x254e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254e94: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x254e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254e98: 0xc0953b0  jal         func_254EC0
    ctx->pc = 0x254E98u;
    SET_GPR_U32(ctx, 31, 0x254EA0u);
    ctx->pc = 0x254EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254EC0u, 0x254E98u, 0x254EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254EA0u;
label_254ea0:
    // 0x254ea0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x254ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254ea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254ea8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x254ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x254eac: 0x3e00008  jr          $ra
    ctx->pc = 0x254EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254EB4u;
    // 0x254eb4: 0x0  nop
    ctx->pc = 0x254eb4u;
    // NOP
    // 0x254eb8: 0x0  nop
    ctx->pc = 0x254eb8u;
    // NOP
    // 0x254ebc: 0x0  nop
    ctx->pc = 0x254ebcu;
    // NOP
    ctx->pc = 0x254ec0u;
}
