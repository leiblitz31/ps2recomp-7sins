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

// Function: sub_00251FF0
// Address: 0x251ff0 - 0x252030
void sub_00251FF0_0x251ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251FF0_0x251ff0");
#endif

    switch (ctx->pc) {
        case 0x25200cu: goto label_25200c;
        case 0x252020u: goto label_252020;
        default: break;
    }

    ctx->pc = 0x251ff0u;

    // 0x251ff0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x251ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x251ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x251ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x251ff8: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x251ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x251ffc: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x251ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x252000: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x252000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x252004: 0xc0948d0  jal         func_252340
    ctx->pc = 0x252004u;
    SET_GPR_U32(ctx, 31, 0x25200Cu);
    ctx->pc = 0x252340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252340u, 0x252004u, 0x25200Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25200Cu;
label_25200c:
    // 0x25200c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x25200cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252010: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x252010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252014: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x252014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252018: 0xc09480c  jal         func_252030
    ctx->pc = 0x252018u;
    SET_GPR_U32(ctx, 31, 0x252020u);
    ctx->pc = 0x252030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252030u, 0x252018u, 0x252020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252020u;
label_252020:
    // 0x252020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252024: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x252024u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x252028: 0x3e00008  jr          $ra
    ctx->pc = 0x252028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252030u;
}
