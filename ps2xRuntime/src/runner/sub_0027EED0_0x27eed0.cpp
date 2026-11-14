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

// Function: sub_0027EED0
// Address: 0x27eed0 - 0x27ef10
void sub_0027EED0_0x27eed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027EED0_0x27eed0");
#endif

    switch (ctx->pc) {
        case 0x27eee8u: goto label_27eee8;
        case 0x27eef8u: goto label_27eef8;
        default: break;
    }

    ctx->pc = 0x27eed0u;

    // 0x27eed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27eed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27eed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27eed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27eed8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x27eed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x27eedc: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x27eedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x27eee0: 0xc09fc04  jal         func_27F010
    ctx->pc = 0x27EEE0u;
    SET_GPR_U32(ctx, 31, 0x27EEE8u);
    ctx->pc = 0x27F010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F010u, 0x27EEE0u, 0x27EEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EEE8u;
label_27eee8:
    // 0x27eee8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x27eee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27eeec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27eeecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eef0: 0xc09fbc4  jal         func_27EF10
    ctx->pc = 0x27EEF0u;
    SET_GPR_U32(ctx, 31, 0x27EEF8u);
    ctx->pc = 0x27EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EF10u, 0x27EEF0u, 0x27EEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EEF8u;
label_27eef8:
    // 0x27eef8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x27eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27eefc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27eefcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ef00: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27ef00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27ef04: 0x3e00008  jr          $ra
    ctx->pc = 0x27EF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EF04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EF0Cu;
    // 0x27ef0c: 0x0  nop
    ctx->pc = 0x27ef0cu;
    // NOP
    ctx->pc = 0x27ef10u;
}
