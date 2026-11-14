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

// Function: sub_0022C4E0
// Address: 0x22c4e0 - 0x22c520
void sub_0022C4E0_0x22c4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C4E0_0x22c4e0");
#endif

    switch (ctx->pc) {
        case 0x22c504u: goto label_22c504;
        default: break;
    }

    ctx->pc = 0x22c4e0u;

    // 0x22c4e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22c4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22c4e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c4e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22c4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22c4ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22c4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x22c4f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22c4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c4f4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x22c4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c4f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22c4f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c4fc: 0xc08b148  jal         func_22C520
    ctx->pc = 0x22C4FCu;
    SET_GPR_U32(ctx, 31, 0x22C504u);
    ctx->pc = 0x22C520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C520u, 0x22C4FCu, 0x22C504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C504u;
label_22c504:
    // 0x22c504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c508: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22c508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22c50c: 0x3e00008  jr          $ra
    ctx->pc = 0x22C50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C514u;
    // 0x22c514: 0x0  nop
    ctx->pc = 0x22c514u;
    // NOP
    // 0x22c518: 0x0  nop
    ctx->pc = 0x22c518u;
    // NOP
    // 0x22c51c: 0x0  nop
    ctx->pc = 0x22c51cu;
    // NOP
    ctx->pc = 0x22c520u;
}
