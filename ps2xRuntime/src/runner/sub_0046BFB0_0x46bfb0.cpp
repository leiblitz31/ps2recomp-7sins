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

// Function: sub_0046BFB0
// Address: 0x46bfb0 - 0x46bff0
void sub_0046BFB0_0x46bfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046BFB0_0x46bfb0");
#endif

    switch (ctx->pc) {
        case 0x46bfd0u: goto label_46bfd0;
        default: break;
    }

    ctx->pc = 0x46bfb0u;

    // 0x46bfb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46bfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46bfb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46bfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46bfb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46bfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46bfbc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46bfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46bfc0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46bfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bfc4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46bfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46bfc8: 0xc11affc  jal         func_46BFF0
    ctx->pc = 0x46BFC8u;
    SET_GPR_U32(ctx, 31, 0x46BFD0u);
    ctx->pc = 0x46BFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BFF0u, 0x46BFC8u, 0x46BFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BFD0u;
label_46bfd0:
    // 0x46bfd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46bfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bfd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46bfd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46bfd8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46bfd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46bfdc: 0x3e00008  jr          $ra
    ctx->pc = 0x46BFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46BFE4u;
    // 0x46bfe4: 0x0  nop
    ctx->pc = 0x46bfe4u;
    // NOP
    // 0x46bfe8: 0x0  nop
    ctx->pc = 0x46bfe8u;
    // NOP
    // 0x46bfec: 0x0  nop
    ctx->pc = 0x46bfecu;
    // NOP
    ctx->pc = 0x46bff0u;
}
