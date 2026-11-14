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

// Function: sub_0013CCA0
// Address: 0x13cca0 - 0x13ccf0
void sub_0013CCA0_0x13cca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CCA0_0x13cca0");
#endif

    switch (ctx->pc) {
        case 0x13ccc0u: goto label_13ccc0;
        default: break;
    }

    ctx->pc = 0x13cca0u;

    // 0x13cca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13cca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13cca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13cca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13cca8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13cca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13ccac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13ccacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x13ccb0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13ccb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ccb4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x13ccb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ccb8: 0xc042844  jal         func_10A110
    ctx->pc = 0x13CCB8u;
    SET_GPR_U32(ctx, 31, 0x13CCC0u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x13CCB8u, 0x13CCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CCC0u;
label_13ccc0:
    // 0x13ccc0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ccc4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x13ccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13ccc8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13ccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13cccc: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x13ccccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x13ccd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ccd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13ccd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ccd8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13ccd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13ccdc: 0x3e00008  jr          $ra
    ctx->pc = 0x13CCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CCE4u;
    // 0x13cce4: 0x0  nop
    ctx->pc = 0x13cce4u;
    // NOP
    // 0x13cce8: 0x0  nop
    ctx->pc = 0x13cce8u;
    // NOP
    // 0x13ccec: 0x0  nop
    ctx->pc = 0x13ccecu;
    // NOP
    ctx->pc = 0x13ccf0u;
}
