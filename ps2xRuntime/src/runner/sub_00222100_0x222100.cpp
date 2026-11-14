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

// Function: sub_00222100
// Address: 0x222100 - 0x222130
void sub_00222100_0x222100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222100_0x222100");
#endif

    switch (ctx->pc) {
        case 0x22211cu: goto label_22211c;
        default: break;
    }

    ctx->pc = 0x222100u;

    // 0x222100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x222100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x222104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222108: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x222108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22210c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22210cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222110: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x222110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222114: 0xc08884c  jal         func_222130
    ctx->pc = 0x222114u;
    SET_GPR_U32(ctx, 31, 0x22211Cu);
    ctx->pc = 0x222130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222130u, 0x222114u, 0x22211Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22211Cu;
label_22211c:
    // 0x22211c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22211cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222120: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x222120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x222124: 0x3e00008  jr          $ra
    ctx->pc = 0x222124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22212Cu;
    // 0x22212c: 0x0  nop
    ctx->pc = 0x22212cu;
    // NOP
    ctx->pc = 0x222130u;
}
