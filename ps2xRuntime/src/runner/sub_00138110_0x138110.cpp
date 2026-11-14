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

// Function: sub_00138110
// Address: 0x138110 - 0x138140
void sub_00138110_0x138110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138110_0x138110");
#endif

    switch (ctx->pc) {
        case 0x138128u: goto label_138128;
        default: break;
    }

    ctx->pc = 0x138110u;

    // 0x138110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x138110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x138114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138118: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x138118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13811c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13811cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138120: 0xc04e050  jal         func_138140
    ctx->pc = 0x138120u;
    SET_GPR_U32(ctx, 31, 0x138128u);
    ctx->pc = 0x138140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138140u, 0x138120u, 0x138128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138128u;
label_138128:
    // 0x138128: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x138128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13812c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13812cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138130: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x138130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x138134: 0x3e00008  jr          $ra
    ctx->pc = 0x138134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13813Cu;
    // 0x13813c: 0x0  nop
    ctx->pc = 0x13813cu;
    // NOP
    ctx->pc = 0x138140u;
}
