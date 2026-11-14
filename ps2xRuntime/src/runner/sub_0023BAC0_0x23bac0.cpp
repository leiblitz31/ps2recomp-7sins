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

// Function: sub_0023BAC0
// Address: 0x23bac0 - 0x23bb00
void sub_0023BAC0_0x23bac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BAC0_0x23bac0");
#endif

    switch (ctx->pc) {
        case 0x23bae4u: goto label_23bae4;
        default: break;
    }

    ctx->pc = 0x23bac0u;

    // 0x23bac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23bac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23bac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23bac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23bac8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23bac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23bacc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23baccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x23bad0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23bad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bad4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x23bad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23bad8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23bad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23badc: 0xc08eec0  jal         func_23BB00
    ctx->pc = 0x23BADCu;
    SET_GPR_U32(ctx, 31, 0x23BAE4u);
    ctx->pc = 0x23BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BB00u, 0x23BADCu, 0x23BAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BAE4u;
label_23bae4:
    // 0x23bae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23bae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bae8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23bae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23baec: 0x3e00008  jr          $ra
    ctx->pc = 0x23BAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BAF4u;
    // 0x23baf4: 0x0  nop
    ctx->pc = 0x23baf4u;
    // NOP
    // 0x23baf8: 0x0  nop
    ctx->pc = 0x23baf8u;
    // NOP
    // 0x23bafc: 0x0  nop
    ctx->pc = 0x23bafcu;
    // NOP
    ctx->pc = 0x23bb00u;
}
