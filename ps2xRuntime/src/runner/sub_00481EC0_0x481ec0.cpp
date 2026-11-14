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

// Function: sub_00481EC0
// Address: 0x481ec0 - 0x481f00
void sub_00481EC0_0x481ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481EC0_0x481ec0");
#endif

    switch (ctx->pc) {
        case 0x481ee0u: goto label_481ee0;
        default: break;
    }

    ctx->pc = 0x481ec0u;

    // 0x481ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x481ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x481ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x481ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x481ec8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x481ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x481ecc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x481eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x481ed0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x481ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481ed4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x481ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481ed8: 0xc1207c0  jal         func_481F00
    ctx->pc = 0x481ED8u;
    SET_GPR_U32(ctx, 31, 0x481EE0u);
    ctx->pc = 0x481F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481F00u, 0x481ED8u, 0x481EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481EE0u;
label_481ee0:
    // 0x481ee0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x481ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481ee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x481ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x481ee8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x481ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x481eec: 0x3e00008  jr          $ra
    ctx->pc = 0x481EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x481EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x481EF4u;
    // 0x481ef4: 0x0  nop
    ctx->pc = 0x481ef4u;
    // NOP
    // 0x481ef8: 0x0  nop
    ctx->pc = 0x481ef8u;
    // NOP
    // 0x481efc: 0x0  nop
    ctx->pc = 0x481efcu;
    // NOP
    ctx->pc = 0x481f00u;
}
