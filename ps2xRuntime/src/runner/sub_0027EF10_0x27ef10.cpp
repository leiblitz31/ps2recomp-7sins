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

// Function: sub_0027EF10
// Address: 0x27ef10 - 0x27ef50
void sub_0027EF10_0x27ef10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027EF10_0x27ef10");
#endif

    switch (ctx->pc) {
        case 0x27ef30u: goto label_27ef30;
        default: break;
    }

    ctx->pc = 0x27ef10u;

    // 0x27ef10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27ef10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27ef14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27ef14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27ef18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x27ef18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27ef1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x27ef1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x27ef20: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27ef20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ef24: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x27ef24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ef28: 0xc09fbd4  jal         func_27EF50
    ctx->pc = 0x27EF28u;
    SET_GPR_U32(ctx, 31, 0x27EF30u);
    ctx->pc = 0x27EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EF50u, 0x27EF28u, 0x27EF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EF30u;
label_27ef30:
    // 0x27ef30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27ef30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ef34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27ef34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ef38: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27ef38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27ef3c: 0x3e00008  jr          $ra
    ctx->pc = 0x27EF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EF44u;
    // 0x27ef44: 0x0  nop
    ctx->pc = 0x27ef44u;
    // NOP
    // 0x27ef48: 0x0  nop
    ctx->pc = 0x27ef48u;
    // NOP
    // 0x27ef4c: 0x0  nop
    ctx->pc = 0x27ef4cu;
    // NOP
    ctx->pc = 0x27ef50u;
}
