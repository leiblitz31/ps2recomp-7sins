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

// Function: sub_00222B90
// Address: 0x222b90 - 0x222bc0
void sub_00222B90_0x222b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222B90_0x222b90");
#endif

    switch (ctx->pc) {
        case 0x222bacu: goto label_222bac;
        default: break;
    }

    ctx->pc = 0x222b90u;

    // 0x222b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x222b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x222b94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222b98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x222b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x222b9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x222b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222ba0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x222ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222ba4: 0xc088af0  jal         func_222BC0
    ctx->pc = 0x222BA4u;
    SET_GPR_U32(ctx, 31, 0x222BACu);
    ctx->pc = 0x222BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222BC0u, 0x222BA4u, 0x222BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222BACu;
label_222bac:
    // 0x222bac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222bb0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x222bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x222bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x222BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222BBCu;
    // 0x222bbc: 0x0  nop
    ctx->pc = 0x222bbcu;
    // NOP
    ctx->pc = 0x222bc0u;
}
