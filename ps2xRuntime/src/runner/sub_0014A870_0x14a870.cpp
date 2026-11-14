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

// Function: sub_0014A870
// Address: 0x14a870 - 0x14a8b0
void sub_0014A870_0x14a870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A870_0x14a870");
#endif

    switch (ctx->pc) {
        case 0x14a890u: goto label_14a890;
        default: break;
    }

    ctx->pc = 0x14a870u;

    // 0x14a870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14a870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14a874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a878: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14a878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14a87c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x14a87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x14a880: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14a880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a884: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x14a884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a888: 0xc052a2c  jal         func_14A8B0
    ctx->pc = 0x14A888u;
    SET_GPR_U32(ctx, 31, 0x14A890u);
    ctx->pc = 0x14A8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A8B0u, 0x14A888u, 0x14A890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A890u;
label_14a890:
    // 0x14a890: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14a890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a898: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14a898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14a89c: 0x3e00008  jr          $ra
    ctx->pc = 0x14A89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A8A4u;
    // 0x14a8a4: 0x0  nop
    ctx->pc = 0x14a8a4u;
    // NOP
    // 0x14a8a8: 0x0  nop
    ctx->pc = 0x14a8a8u;
    // NOP
    // 0x14a8ac: 0x0  nop
    ctx->pc = 0x14a8acu;
    // NOP
    ctx->pc = 0x14a8b0u;
}
