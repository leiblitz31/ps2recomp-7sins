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

// Function: sub_002E7DE0
// Address: 0x2e7de0 - 0x2e7e20
void sub_002E7DE0_0x2e7de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7DE0_0x2e7de0");
#endif

    switch (ctx->pc) {
        case 0x2e7e04u: goto label_2e7e04;
        default: break;
    }

    ctx->pc = 0x2e7de0u;

    // 0x2e7de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e7de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e7de4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e7de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e7de8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e7de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e7dec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e7decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7df0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2e7df0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2e7df4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e7df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7df8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2e7df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e7dfc: 0xc08211c  jal         func_208470
    ctx->pc = 0x2E7DFCu;
    SET_GPR_U32(ctx, 31, 0x2E7E04u);
    ctx->pc = 0x208470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208470u, 0x2E7DFCu, 0x2E7E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7E04u;
label_2e7e04:
    // 0x2e7e04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e7e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7e08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e7e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7e0c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e7e0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e7e10: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7E18u;
    // 0x2e7e18: 0x0  nop
    ctx->pc = 0x2e7e18u;
    // NOP
    // 0x2e7e1c: 0x0  nop
    ctx->pc = 0x2e7e1cu;
    // NOP
    ctx->pc = 0x2e7e20u;
}
