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

// Function: sub_00112030
// Address: 0x112030 - 0x112080
void sub_00112030_0x112030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112030_0x112030");
#endif

    switch (ctx->pc) {
        case 0x112068u: goto label_112068;
        default: break;
    }

    ctx->pc = 0x112030u;

    // 0x112030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x112030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x112034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x112038: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x112038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11203c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11203cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x112040: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x112040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112044: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x112044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x112048: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x112048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11204c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x11204cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x112050: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x112050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112054: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x112054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x112058: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x112058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11205c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11205cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112060: 0xc044820  jal         func_112080
    ctx->pc = 0x112060u;
    SET_GPR_U32(ctx, 31, 0x112068u);
    ctx->pc = 0x112080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112080u, 0x112060u, 0x112068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112068u;
label_112068:
    // 0x112068: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x112068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11206c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11206cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112070: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x112070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x112074: 0x3e00008  jr          $ra
    ctx->pc = 0x112074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11207Cu;
    // 0x11207c: 0x0  nop
    ctx->pc = 0x11207cu;
    // NOP
    ctx->pc = 0x112080u;
}
