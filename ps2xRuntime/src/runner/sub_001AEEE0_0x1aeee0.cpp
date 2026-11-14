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

// Function: sub_001AEEE0
// Address: 0x1aeee0 - 0x1aef20
void sub_001AEEE0_0x1aeee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEEE0_0x1aeee0");
#endif

    switch (ctx->pc) {
        case 0x1aef04u: goto label_1aef04;
        default: break;
    }

    ctx->pc = 0x1aeee0u;

    // 0x1aeee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aeee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aeee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aeee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aeee8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1aeee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1aeeec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1aeeecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1aeef0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1aeef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aeef4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1aeef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aeef8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aeef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeefc: 0xc06bbc8  jal         func_1AEF20
    ctx->pc = 0x1AEEFCu;
    SET_GPR_U32(ctx, 31, 0x1AEF04u);
    ctx->pc = 0x1AEF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF20u, 0x1AEEFCu, 0x1AEF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEF04u;
label_1aef04:
    // 0x1aef04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aef04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aef08: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1aef08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1aef0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEF14u;
    // 0x1aef14: 0x0  nop
    ctx->pc = 0x1aef14u;
    // NOP
    // 0x1aef18: 0x0  nop
    ctx->pc = 0x1aef18u;
    // NOP
    // 0x1aef1c: 0x0  nop
    ctx->pc = 0x1aef1cu;
    // NOP
    ctx->pc = 0x1aef20u;
}
