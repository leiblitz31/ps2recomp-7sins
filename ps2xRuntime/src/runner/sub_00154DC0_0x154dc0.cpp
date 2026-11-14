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

// Function: sub_00154DC0
// Address: 0x154dc0 - 0x154e00
void sub_00154DC0_0x154dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154DC0_0x154dc0");
#endif

    switch (ctx->pc) {
        case 0x154de0u: goto label_154de0;
        default: break;
    }

    ctx->pc = 0x154dc0u;

    // 0x154dc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x154dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x154dc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x154dc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x154dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x154dcc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x154dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x154dd0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x154dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154dd4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x154dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154dd8: 0xc055380  jal         func_154E00
    ctx->pc = 0x154DD8u;
    SET_GPR_U32(ctx, 31, 0x154DE0u);
    ctx->pc = 0x154E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154E00u, 0x154DD8u, 0x154DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154DE0u;
label_154de0:
    // 0x154de0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x154de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154de4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154de8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x154de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x154dec: 0x3e00008  jr          $ra
    ctx->pc = 0x154DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154DF4u;
    // 0x154df4: 0x0  nop
    ctx->pc = 0x154df4u;
    // NOP
    // 0x154df8: 0x0  nop
    ctx->pc = 0x154df8u;
    // NOP
    // 0x154dfc: 0x0  nop
    ctx->pc = 0x154dfcu;
    // NOP
    ctx->pc = 0x154e00u;
}
