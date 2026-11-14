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

// Function: sub_0011BF70
// Address: 0x11bf70 - 0x11bfb0
void sub_0011BF70_0x11bf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BF70_0x11bf70");
#endif

    switch (ctx->pc) {
        case 0x11bf94u: goto label_11bf94;
        default: break;
    }

    ctx->pc = 0x11bf70u;

    // 0x11bf70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11bf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11bf74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11bf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11bf78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11bf78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11bf7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11bf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x11bf80: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x11bf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11bf84: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11bf84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bf88: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x11bf88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11bf8c: 0xc046fec  jal         func_11BFB0
    ctx->pc = 0x11BF8Cu;
    SET_GPR_U32(ctx, 31, 0x11BF94u);
    ctx->pc = 0x11BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BFB0u, 0x11BF8Cu, 0x11BF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BF94u;
label_11bf94:
    // 0x11bf94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11bf94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bf98: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11bf98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11bf9c: 0x3e00008  jr          $ra
    ctx->pc = 0x11BF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BFA4u;
    // 0x11bfa4: 0x0  nop
    ctx->pc = 0x11bfa4u;
    // NOP
    // 0x11bfa8: 0x0  nop
    ctx->pc = 0x11bfa8u;
    // NOP
    // 0x11bfac: 0x0  nop
    ctx->pc = 0x11bfacu;
    // NOP
    ctx->pc = 0x11bfb0u;
}
