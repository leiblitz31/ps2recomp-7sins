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

// Function: sub_00207C90
// Address: 0x207c90 - 0x207cd0
void sub_00207C90_0x207c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207C90_0x207c90");
#endif

    switch (ctx->pc) {
        case 0x207cb4u: goto label_207cb4;
        default: break;
    }

    ctx->pc = 0x207c90u;

    // 0x207c90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x207c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x207c94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207c98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x207c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x207c9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x207c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x207ca0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x207ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207ca4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x207ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x207ca8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x207ca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207cac: 0xc081f34  jal         func_207CD0
    ctx->pc = 0x207CACu;
    SET_GPR_U32(ctx, 31, 0x207CB4u);
    ctx->pc = 0x207CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207CD0u, 0x207CACu, 0x207CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207CB4u;
label_207cb4:
    // 0x207cb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207cb8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x207cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x207cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x207CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207CC4u;
    // 0x207cc4: 0x0  nop
    ctx->pc = 0x207cc4u;
    // NOP
    // 0x207cc8: 0x0  nop
    ctx->pc = 0x207cc8u;
    // NOP
    // 0x207ccc: 0x0  nop
    ctx->pc = 0x207cccu;
    // NOP
    ctx->pc = 0x207cd0u;
}
