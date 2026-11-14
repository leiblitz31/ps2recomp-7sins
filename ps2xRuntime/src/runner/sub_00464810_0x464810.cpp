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

// Function: sub_00464810
// Address: 0x464810 - 0x464840
void sub_00464810_0x464810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00464810_0x464810");
#endif

    switch (ctx->pc) {
        case 0x464830u: goto label_464830;
        default: break;
    }

    ctx->pc = 0x464810u;

    // 0x464810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x464810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x464814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x464814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x464818: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x464818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46481c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46481cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x464820: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x464820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x464824: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x464824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x464828: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x464828u;
    SET_GPR_U32(ctx, 31, 0x464830u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x464828u, 0x464830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464830u;
label_464830:
    // 0x464830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x464830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x464834: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x464834u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x464838: 0x3e00008  jr          $ra
    ctx->pc = 0x464838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x464838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x464840u;
}
