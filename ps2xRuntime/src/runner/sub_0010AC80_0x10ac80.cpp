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

// Function: sub_0010AC80
// Address: 0x10ac80 - 0x10acb0
void sub_0010AC80_0x10ac80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AC80_0x10ac80");
#endif

    switch (ctx->pc) {
        case 0x10ac98u: goto label_10ac98;
        default: break;
    }

    ctx->pc = 0x10ac80u;

    // 0x10ac80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ac80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ac84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ac84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ac88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10ac88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10ac8c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10ac8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ac90: 0xc0429d0  jal         func_10A740
    ctx->pc = 0x10AC90u;
    SET_GPR_U32(ctx, 31, 0x10AC98u);
    ctx->pc = 0x10A740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A740u, 0x10AC90u, 0x10AC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AC98u;
label_10ac98:
    // 0x10ac98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ac98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ac9c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10ac9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10aca0: 0x3e00008  jr          $ra
    ctx->pc = 0x10ACA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ACA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10ACA8u;
    // 0x10aca8: 0x0  nop
    ctx->pc = 0x10aca8u;
    // NOP
    // 0x10acac: 0x0  nop
    ctx->pc = 0x10acacu;
    // NOP
    ctx->pc = 0x10acb0u;
}
