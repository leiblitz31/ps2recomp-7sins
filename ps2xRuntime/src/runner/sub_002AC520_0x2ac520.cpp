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

// Function: sub_002AC520
// Address: 0x2ac520 - 0x2ac560
void sub_002AC520_0x2ac520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC520_0x2ac520");
#endif

    switch (ctx->pc) {
        case 0x2ac544u: goto label_2ac544;
        default: break;
    }

    ctx->pc = 0x2ac520u;

    // 0x2ac520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ac520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ac524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac528: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2ac528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2ac52c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2ac52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2ac530: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ac530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac534: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2ac534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac538: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ac538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac53c: 0xc0ab158  jal         func_2AC560
    ctx->pc = 0x2AC53Cu;
    SET_GPR_U32(ctx, 31, 0x2AC544u);
    ctx->pc = 0x2AC560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC560u, 0x2AC53Cu, 0x2AC544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC544u;
label_2ac544:
    // 0x2ac544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac548: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ac548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ac54c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC554u;
    // 0x2ac554: 0x0  nop
    ctx->pc = 0x2ac554u;
    // NOP
    // 0x2ac558: 0x0  nop
    ctx->pc = 0x2ac558u;
    // NOP
    // 0x2ac55c: 0x0  nop
    ctx->pc = 0x2ac55cu;
    // NOP
    ctx->pc = 0x2ac560u;
}
