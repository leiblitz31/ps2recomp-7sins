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

// Function: sub_0010B120
// Address: 0x10b120 - 0x10b160
void sub_0010B120_0x10b120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B120_0x10b120");
#endif

    switch (ctx->pc) {
        case 0x10b140u: goto label_10b140;
        default: break;
    }

    ctx->pc = 0x10b120u;

    // 0x10b120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10b120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10b124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10b128: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10b128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10b12c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10b12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10b130: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10b130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b134: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x10b134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b138: 0xc042b9c  jal         func_10AE70
    ctx->pc = 0x10B138u;
    SET_GPR_U32(ctx, 31, 0x10B140u);
    ctx->pc = 0x10AE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AE70u, 0x10B138u, 0x10B140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B140u;
label_10b140:
    // 0x10b140: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10b140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b148: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10b148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10b14c: 0x3e00008  jr          $ra
    ctx->pc = 0x10B14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B154u;
    // 0x10b154: 0x0  nop
    ctx->pc = 0x10b154u;
    // NOP
    // 0x10b158: 0x0  nop
    ctx->pc = 0x10b158u;
    // NOP
    // 0x10b15c: 0x0  nop
    ctx->pc = 0x10b15cu;
    // NOP
    ctx->pc = 0x10b160u;
}
