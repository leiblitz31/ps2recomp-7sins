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

// Function: sub_00477FB0
// Address: 0x477fb0 - 0x477fe0
void sub_00477FB0_0x477fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00477FB0_0x477fb0");
#endif

    switch (ctx->pc) {
        case 0x477fc4u: goto label_477fc4;
        default: break;
    }

    ctx->pc = 0x477fb0u;

    // 0x477fb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x477fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x477fb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x477fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x477fb8: 0x8f84c06c  lw          $a0, -0x3F94($gp)
    ctx->pc = 0x477fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951020)));
    // 0x477fbc: 0xc11dcf4  jal         func_4773D0
    ctx->pc = 0x477FBCu;
    SET_GPR_U32(ctx, 31, 0x477FC4u);
    ctx->pc = 0x4773D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4773D0u, 0x477FBCu, 0x477FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477FC4u;
label_477fc4:
    // 0x477fc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x477fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x477fc8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x477fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x477fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x477FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x477FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x477FD4u;
    // 0x477fd4: 0x0  nop
    ctx->pc = 0x477fd4u;
    // NOP
    // 0x477fd8: 0x0  nop
    ctx->pc = 0x477fd8u;
    // NOP
    // 0x477fdc: 0x0  nop
    ctx->pc = 0x477fdcu;
    // NOP
    ctx->pc = 0x477fe0u;
}
