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

// Function: sub_0044FBE0
// Address: 0x44fbe0 - 0x44fc10
void sub_0044FBE0_0x44fbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044FBE0_0x44fbe0");
#endif

    switch (ctx->pc) {
        case 0x44fbfcu: goto label_44fbfc;
        default: break;
    }

    ctx->pc = 0x44fbe0u;

    // 0x44fbe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44fbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x44fbe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44fbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44fbe8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x44fbec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44fbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44fbf0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x44fbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x44fbf4: 0xc1149bc  jal         func_4526F0
    ctx->pc = 0x44FBF4u;
    SET_GPR_U32(ctx, 31, 0x44FBFCu);
    ctx->pc = 0x4526F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4526F0u, 0x44FBF4u, 0x44FBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FBFCu;
label_44fbfc:
    // 0x44fbfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44fbfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44fc00: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x44fc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x44fc04: 0x3e00008  jr          $ra
    ctx->pc = 0x44FC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44FC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44FC0Cu;
    // 0x44fc0c: 0x0  nop
    ctx->pc = 0x44fc0cu;
    // NOP
    ctx->pc = 0x44fc10u;
}
