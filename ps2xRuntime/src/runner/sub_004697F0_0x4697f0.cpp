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

// Function: sub_004697F0
// Address: 0x4697f0 - 0x469830
void sub_004697F0_0x4697f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004697F0_0x4697f0");
#endif

    switch (ctx->pc) {
        case 0x469814u: goto label_469814;
        default: break;
    }

    ctx->pc = 0x4697f0u;

    // 0x4697f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4697f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4697f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4697f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4697f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4697f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4697fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x4697fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x469800: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x469800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469804: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x469804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x469808: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x469808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46980c: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x46980Cu;
    SET_GPR_U32(ctx, 31, 0x469814u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x46980Cu, 0x469814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469814u;
label_469814:
    // 0x469814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x469814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469818: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x469818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46981c: 0x3e00008  jr          $ra
    ctx->pc = 0x46981Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46981Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469824u;
    // 0x469824: 0x0  nop
    ctx->pc = 0x469824u;
    // NOP
    // 0x469828: 0x0  nop
    ctx->pc = 0x469828u;
    // NOP
    // 0x46982c: 0x0  nop
    ctx->pc = 0x46982cu;
    // NOP
    ctx->pc = 0x469830u;
}
