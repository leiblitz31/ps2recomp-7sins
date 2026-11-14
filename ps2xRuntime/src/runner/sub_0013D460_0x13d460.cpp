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

// Function: sub_0013D460
// Address: 0x13d460 - 0x13d4b0
void sub_0013D460_0x13d460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D460_0x13d460");
#endif

    switch (ctx->pc) {
        case 0x13d480u: goto label_13d480;
        default: break;
    }

    ctx->pc = 0x13d460u;

    // 0x13d460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13d464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d468: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13d468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13d46c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13d46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x13d470: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13d470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d474: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x13d474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d478: 0xc04e134  jal         func_1384D0
    ctx->pc = 0x13D478u;
    SET_GPR_U32(ctx, 31, 0x13D480u);
    ctx->pc = 0x1384D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1384D0u, 0x13D478u, 0x13D480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D480u;
label_13d480:
    // 0x13d480: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13d480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d484: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13d484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d488: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d48c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13d48cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13d490: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d494: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d498: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13d498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13d49c: 0x3e00008  jr          $ra
    ctx->pc = 0x13D49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D4A4u;
    // 0x13d4a4: 0x0  nop
    ctx->pc = 0x13d4a4u;
    // NOP
    // 0x13d4a8: 0x0  nop
    ctx->pc = 0x13d4a8u;
    // NOP
    // 0x13d4ac: 0x0  nop
    ctx->pc = 0x13d4acu;
    // NOP
    ctx->pc = 0x13d4b0u;
}
