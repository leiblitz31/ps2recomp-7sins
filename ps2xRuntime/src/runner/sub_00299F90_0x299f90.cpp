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

// Function: sub_00299F90
// Address: 0x299f90 - 0x299fd0
void sub_00299F90_0x299f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299F90_0x299f90");
#endif

    switch (ctx->pc) {
        case 0x299fb0u: goto label_299fb0;
        default: break;
    }

    ctx->pc = 0x299f90u;

    // 0x299f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x299f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x299f94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x299f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x299f98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x299f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x299f9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x299f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x299fa0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x299fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299fa4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x299fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299fa8: 0xc0a67f4  jal         func_299FD0
    ctx->pc = 0x299FA8u;
    SET_GPR_U32(ctx, 31, 0x299FB0u);
    ctx->pc = 0x299FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299FD0u, 0x299FA8u, 0x299FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299FB0u;
label_299fb0:
    // 0x299fb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x299fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299fb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299fb8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x299fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x299fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x299FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299FC4u;
    // 0x299fc4: 0x0  nop
    ctx->pc = 0x299fc4u;
    // NOP
    // 0x299fc8: 0x0  nop
    ctx->pc = 0x299fc8u;
    // NOP
    // 0x299fcc: 0x0  nop
    ctx->pc = 0x299fccu;
    // NOP
    ctx->pc = 0x299fd0u;
}
