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

// Function: sub_0011A750
// Address: 0x11a750 - 0x11a790
void sub_0011A750_0x11a750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A750_0x11a750");
#endif

    switch (ctx->pc) {
        case 0x11a770u: goto label_11a770;
        default: break;
    }

    ctx->pc = 0x11a750u;

    // 0x11a750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11a750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11a754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11a754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11a758: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11a758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11a75c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11a75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x11a760: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11a760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a764: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x11a764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a768: 0xc0469e4  jal         func_11A790
    ctx->pc = 0x11A768u;
    SET_GPR_U32(ctx, 31, 0x11A770u);
    ctx->pc = 0x11A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A790u, 0x11A768u, 0x11A770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A770u;
label_11a770:
    // 0x11a770: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11a770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11a774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a778: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11a778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11a77c: 0x3e00008  jr          $ra
    ctx->pc = 0x11A77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A784u;
    // 0x11a784: 0x0  nop
    ctx->pc = 0x11a784u;
    // NOP
    // 0x11a788: 0x0  nop
    ctx->pc = 0x11a788u;
    // NOP
    // 0x11a78c: 0x0  nop
    ctx->pc = 0x11a78cu;
    // NOP
    ctx->pc = 0x11a790u;
}
