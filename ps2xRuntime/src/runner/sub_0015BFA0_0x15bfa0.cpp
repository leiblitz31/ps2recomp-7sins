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

// Function: sub_0015BFA0
// Address: 0x15bfa0 - 0x15bfe0
void sub_0015BFA0_0x15bfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BFA0_0x15bfa0");
#endif

    switch (ctx->pc) {
        case 0x15bfb8u: goto label_15bfb8;
        case 0x15bfc8u: goto label_15bfc8;
        default: break;
    }

    ctx->pc = 0x15bfa0u;

    // 0x15bfa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15bfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15bfa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15bfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15bfa8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x15bfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x15bfac: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x15bfacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x15bfb0: 0xc057038  jal         func_15C0E0
    ctx->pc = 0x15BFB0u;
    SET_GPR_U32(ctx, 31, 0x15BFB8u);
    ctx->pc = 0x15C0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C0E0u, 0x15BFB0u, 0x15BFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BFB8u;
label_15bfb8:
    // 0x15bfb8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15bfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bfbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15bfbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bfc0: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x15BFC0u;
    SET_GPR_U32(ctx, 31, 0x15BFC8u);
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x15BFC0u, 0x15BFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BFC8u;
label_15bfc8:
    // 0x15bfc8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15bfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bfcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15bfccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bfd0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15bfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15bfd4: 0x3e00008  jr          $ra
    ctx->pc = 0x15BFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BFDCu;
    // 0x15bfdc: 0x0  nop
    ctx->pc = 0x15bfdcu;
    // NOP
    ctx->pc = 0x15bfe0u;
}
