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

// Function: sub_00266860
// Address: 0x266860 - 0x2668a0
void sub_00266860_0x266860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266860_0x266860");
#endif

    switch (ctx->pc) {
        case 0x266888u: goto label_266888;
        default: break;
    }

    ctx->pc = 0x266860u;

    // 0x266860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x266860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x266864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x266864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x266868: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x266868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26686c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x26686cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x266870: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x266870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266874: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x266874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x266878: 0x24050476  addiu       $a1, $zero, 0x476
    ctx->pc = 0x266878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1142));
    // 0x26687c: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x26687cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266880: 0xc040924  jal         func_102490
    ctx->pc = 0x266880u;
    SET_GPR_U32(ctx, 31, 0x266888u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x266880u, 0x266888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266888u;
label_266888:
    // 0x266888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x266888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26688c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26688cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x266890: 0x3e00008  jr          $ra
    ctx->pc = 0x266890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266898u;
    // 0x266898: 0x0  nop
    ctx->pc = 0x266898u;
    // NOP
    // 0x26689c: 0x0  nop
    ctx->pc = 0x26689cu;
    // NOP
    ctx->pc = 0x2668a0u;
}
