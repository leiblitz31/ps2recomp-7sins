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

// Function: sub_00278FB0
// Address: 0x278fb0 - 0x279000
void sub_00278FB0_0x278fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278FB0_0x278fb0");
#endif

    switch (ctx->pc) {
        case 0x278fe8u: goto label_278fe8;
        default: break;
    }

    ctx->pc = 0x278fb0u;

    // 0x278fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x278fb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x278fb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x278fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x278fbc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x278fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x278fc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278fc4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x278fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x278fc8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278fcc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x278fccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x278fd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278fd4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x278fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x278fd8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x278fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278fdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x278fdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278fe0: 0xc09e400  jal         func_279000
    ctx->pc = 0x278FE0u;
    SET_GPR_U32(ctx, 31, 0x278FE8u);
    ctx->pc = 0x279000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279000u, 0x278FE0u, 0x278FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278FE8u;
label_278fe8:
    // 0x278fe8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278fec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x278fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278ff0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x278ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x278ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x278FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278FFCu;
    // 0x278ffc: 0x0  nop
    ctx->pc = 0x278ffcu;
    // NOP
    ctx->pc = 0x279000u;
}
