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

// Function: sub_00195460
// Address: 0x195460 - 0x1954b0
void sub_00195460_0x195460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195460_0x195460");
#endif

    switch (ctx->pc) {
        case 0x195498u: goto label_195498;
        default: break;
    }

    ctx->pc = 0x195460u;

    // 0x195460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x195464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195468: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x195468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19546c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19546cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x195470: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x195470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195474: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x195474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x195478: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x195478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19547c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19547cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x195480: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x195480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195484: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x195484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x195488: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x195488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19548c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19548cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195490: 0xc06552c  jal         func_1954B0
    ctx->pc = 0x195490u;
    SET_GPR_U32(ctx, 31, 0x195498u);
    ctx->pc = 0x1954B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1954B0u, 0x195490u, 0x195498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195498u;
label_195498:
    // 0x195498: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x195498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19549c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19549cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1954a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1954a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1954a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1954A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1954A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1954ACu;
    // 0x1954ac: 0x0  nop
    ctx->pc = 0x1954acu;
    // NOP
    ctx->pc = 0x1954b0u;
}
