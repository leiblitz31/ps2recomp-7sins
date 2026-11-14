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

// Function: sub_001BA120
// Address: 0x1ba120 - 0x1ba160
void sub_001BA120_0x1ba120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA120_0x1ba120");
#endif

    switch (ctx->pc) {
        case 0x1ba150u: goto label_1ba150;
        default: break;
    }

    ctx->pc = 0x1ba120u;

    // 0x1ba120: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ba120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ba124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba128: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ba128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1ba12c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1ba12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1ba130: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1ba130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1ba134: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x1ba134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x1ba138: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ba138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba13c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1ba13cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba140: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1ba140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba144: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x1ba144u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ba148: 0xc0710c4  jal         func_1C4310
    ctx->pc = 0x1BA148u;
    SET_GPR_U32(ctx, 31, 0x1BA150u);
    ctx->pc = 0x1C4310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4310u, 0x1BA148u, 0x1BA150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA150u;
label_1ba150:
    // 0x1ba150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba154: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1ba154u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ba158: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA160u;
}
