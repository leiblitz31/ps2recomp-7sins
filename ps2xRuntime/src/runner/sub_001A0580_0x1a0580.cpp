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

// Function: sub_001A0580
// Address: 0x1a0580 - 0x1a05c0
void sub_001A0580_0x1a0580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0580_0x1a0580");
#endif

    switch (ctx->pc) {
        case 0x1a05a4u: goto label_1a05a4;
        default: break;
    }

    ctx->pc = 0x1a0580u;

    // 0x1a0580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a0580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a0584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0588: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a0588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a058c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1a058cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1a0590: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a0590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0594: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1a0594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0598: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1a0598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1a059c: 0xc123404  jal         func_48D010
    ctx->pc = 0x1A059Cu;
    SET_GPR_U32(ctx, 31, 0x1A05A4u);
    ctx->pc = 0x48D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D010u, 0x1A059Cu, 0x1A05A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A05A4u;
label_1a05a4:
    // 0x1a05a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a05a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a05a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a05a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a05ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1A05ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A05ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A05B4u;
    // 0x1a05b4: 0x0  nop
    ctx->pc = 0x1a05b4u;
    // NOP
    // 0x1a05b8: 0x0  nop
    ctx->pc = 0x1a05b8u;
    // NOP
    // 0x1a05bc: 0x0  nop
    ctx->pc = 0x1a05bcu;
    // NOP
    ctx->pc = 0x1a05c0u;
}
