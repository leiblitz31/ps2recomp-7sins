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

// Function: sub_00129060
// Address: 0x129060 - 0x129090
void sub_00129060_0x129060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129060_0x129060");
#endif

    switch (ctx->pc) {
        case 0x129078u: goto label_129078;
        default: break;
    }

    ctx->pc = 0x129060u;

    // 0x129060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x129060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x129064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x129064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x129068: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x129068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12906c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12906cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129070: 0xc04a018  jal         func_128060
    ctx->pc = 0x129070u;
    SET_GPR_U32(ctx, 31, 0x129078u);
    ctx->pc = 0x128060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128060u, 0x129070u, 0x129078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129078u;
label_129078:
    // 0x129078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x129078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12907c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x12907cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x129080: 0x3e00008  jr          $ra
    ctx->pc = 0x129080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129088u;
    // 0x129088: 0x0  nop
    ctx->pc = 0x129088u;
    // NOP
    // 0x12908c: 0x0  nop
    ctx->pc = 0x12908cu;
    // NOP
    ctx->pc = 0x129090u;
}
