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

// Function: sub_0024F270
// Address: 0x24f270 - 0x24f2b0
void sub_0024F270_0x24f270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F270_0x24f270");
#endif

    switch (ctx->pc) {
        case 0x24f28cu: goto label_24f28c;
        case 0x24f29cu: goto label_24f29c;
        default: break;
    }

    ctx->pc = 0x24f270u;

    // 0x24f270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24f270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24f274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24f274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24f278: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x24f278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24f27c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x24f27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x24f280: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x24f280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f284: 0xc064084  jal         func_190210
    ctx->pc = 0x24F284u;
    SET_GPR_U32(ctx, 31, 0x24F28Cu);
    ctx->pc = 0x190210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190210u, 0x24F284u, 0x24F28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F28Cu;
label_24f28c:
    // 0x24f28c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24f28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f290: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x24f290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f294: 0xc093cac  jal         func_24F2B0
    ctx->pc = 0x24F294u;
    SET_GPR_U32(ctx, 31, 0x24F29Cu);
    ctx->pc = 0x24F2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F2B0u, 0x24F294u, 0x24F29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F29Cu;
label_24f29c:
    // 0x24f29c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24f29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f2a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x24f2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24f2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x24F2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F2ACu;
    // 0x24f2ac: 0x0  nop
    ctx->pc = 0x24f2acu;
    // NOP
    ctx->pc = 0x24f2b0u;
}
