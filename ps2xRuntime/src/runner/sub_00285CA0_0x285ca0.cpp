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

// Function: sub_00285CA0
// Address: 0x285ca0 - 0x285cd0
void sub_00285CA0_0x285ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285CA0_0x285ca0");
#endif

    switch (ctx->pc) {
        case 0x285cb8u: goto label_285cb8;
        default: break;
    }

    ctx->pc = 0x285ca0u;

    // 0x285ca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x285ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x285ca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x285ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x285ca8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x285ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x285cac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x285cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285cb0: 0xc0a139c  jal         func_284E70
    ctx->pc = 0x285CB0u;
    SET_GPR_U32(ctx, 31, 0x285CB8u);
    ctx->pc = 0x284E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E70u, 0x285CB0u, 0x285CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285CB8u;
label_285cb8:
    // 0x285cb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x285cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285cbc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x285cbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x285cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x285CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285CC8u;
    // 0x285cc8: 0x0  nop
    ctx->pc = 0x285cc8u;
    // NOP
    // 0x285ccc: 0x0  nop
    ctx->pc = 0x285cccu;
    // NOP
    ctx->pc = 0x285cd0u;
}
