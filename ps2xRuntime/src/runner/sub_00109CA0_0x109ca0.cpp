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

// Function: sub_00109CA0
// Address: 0x109ca0 - 0x109cd0
void sub_00109CA0_0x109ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109CA0_0x109ca0");
#endif

    switch (ctx->pc) {
        case 0x109cbcu: goto label_109cbc;
        default: break;
    }

    ctx->pc = 0x109ca0u;

    // 0x109ca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x109ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x109ca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x109ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x109ca8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x109ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x109cac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x109cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109cb0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x109cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x109cb4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x109CB4u;
    SET_GPR_U32(ctx, 31, 0x109CBCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x109CB4u, 0x109CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CBCu;
label_109cbc:
    // 0x109cbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x109cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109cc0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x109cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x109cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x109CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109CCCu;
    // 0x109ccc: 0x0  nop
    ctx->pc = 0x109cccu;
    // NOP
    ctx->pc = 0x109cd0u;
}
